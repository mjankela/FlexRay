/*! @cond LIC */
/*******************************************************************************/
/**  THIS CODE IS PROVIDED AS IS. DUXSOLUTIONS KK OR ANY OF ITS DISTRIBUTORS  **/
/**  ACCEPTS NO RESPONSIBILITY OR LIABILITY FOR ANY ERRORS OR OMMISSIONS.     **/
/**  BY USING THIS SOURCE CODE YOU COMMIT TO CARRY ALL RESPONSIBILITIES AND   **/
/**  WARRANTIES UNDER OWN RISK. YOU COMMIT THAT NO CLAIMS TO DUXSOLUTIONS OR  **/ 
/**  ITS DISTRIBUTORS WILL BE DONE.   	                                      **/
/**  YOU ARE ONLY ALLOWED TO USE THIS CODE WITH A VALID TOOL LICENSE AND      **/
/**  SOURCE CODE LICENSE. PLEASE CONTACT DUXSOLUTIONS KK OR ONE OF ITS        **/
/**  DISTRIBUTORS FOR DETAILS AND PERMISSIONS.                                **/
/*******************************************************************************/

/*******************************************************************************/
/**  LICENSE: FOR THIS PROJECT THE DUXPL WITH THE CURRENT VERSION APPLIES.    **/
/*******************************************************************************/
/*! @endcond */

/* 
 * Implementation of the FlexRay object. */

/* include declaration */
#include "..\IO_MB91465X_V01L03\_fr.h"
#include "..\interrupt\dux_interrupts.h"
#include "..\h_file\FLX_regist_defines.h"
#include "..\h_file\dux_flexray.h"
#include "..\h_file\dux_watchdog.h"
#include "..\clusterconfig\DUXFlexRayClusterConfig.h"

/*************************************************************************/
/* private prototype declarations                                        */
/*************************************************************************/

/* private prototypes for FlexRay controller configuration and initialisation */
static void   _DUXFXConfigInit(void); 
static void   _DUXFXCreateMessageRam(void);  
static void   _DUXFXConfigFix(void); 

/* private prototypes for FlexRay controller interrupt handling */
static void   _DUXFXInterruptInit(void); 
static void   _DUXFXInterruptConfig(uint32 sir_reg, uint32 eir_reg); 
static void   _DUXFXInterruptLineConfig(sint16 ln_a, sint16 ln_b, uint32 s_line, uint32 e_line); 

/* private prototypes for FlexRay frame transfer */
static void   _DUXFXTransmitData(uint16 word, uint32 tran_Data ); /* fills the sending register group  */
static void   _DUXFXTransmitControl( uint32 MsgbuffNo); /* shoots out the buffer */

/* private prototypes for FlexRay frame reception */
static uint32 _DUXFXAccessReceivedData(uint16 word);   /* reads out the reception register group */
static uint16 _DUXFXGetReceivedBufferNumber(void); /*Transfer data from updated message buffer to OBF, currently public, check if it can be hidden*/
static void   _DUXFXTransferReceivedBufferToRam(uint16);
static uint8  _DUXFXReceptionStatus(uint32 *mbs_dat);

/* private prototypes for frame transfer*/
static sint16 _DUXFXfindBufferForStaticSenderSlot(uint16 slotID,uint8 channel);
static sint16 _DUXFXfindBufferForDynamicSenderSlot(uint16 slotID,uint8 channel);

/* private prototypes for register bit extraction */
static uint32 _DUXFXGetWordNo(uint32 word_data);
static uint32 _DUXFXGetBitNo(uint8 byte_data);

/*************************************************************************/
/* public object functional implementation                               */
/*************************************************************************/

static char *_controllerName = DUX_NODE_NAME; /* node name*/
/* DUXFXControllerName()
 * Returns the current controllers node name out of the design file. */
char *DUXFXControllerName(){
	return 	_controllerName;
} 

/* DUXFXInit()
 * Implements the FlexRay controller initialization.  */
void DUXFXInit(){	
	/* CC Configration */
	DUXWatchDogReset;		
	_DUXFXConfigInit();
	DUXWatchDogReset;		
	
	/* Create message buffer */
	_DUXFXCreateMessageRam();
	DUXWatchDogReset;	

	/* Initialize and register FlexRay interrupt */
	_DUXFXInterruptInit();
	DUXWatchDogReset;	
	/* Set Interrupt SIES:RXIE[4] */
	_DUXFXInterruptConfig( 0x00000010, 0);
	DUXWatchDogReset;		
	/* Set Interrupt Line ENable Int_0 Line */
	_DUXFXInterruptLineConfig(1, 0, 0x0, 0x0);	
	DUXWatchDogReset;	
	
	/* Previous Start up process ( Config Lock and Wake Up) */
	_DUXFXConfigFix();
	DUXWatchDogReset;		
}

/* DUXFXStartup()
 * This function executes FlexRay synchronization process. 
 * Startup process and transition to Normal Active state.
 * Node performs as Startup node. */
void DUXFXStartup(void)
{
	DUXWatchDogReset;	

	/*** For Start Up Node only ***/

	/* WAKEUP command */
	 FxR_SUC1_SUCC1 = DUX_SUC_CMD_WAKEUP;
	/* Switch into config state !*/		
		
	/* Check the POC busy state with SUCC1:PBSY[7] */
	while((FxR_SUC1_SUCC1 & 0x00000080) == 0x00000080) 	DUXWatchDogReset;

	/* Wait for READY state, after WAKEUP completion */
	while( (FxR_SUC2_CCSV&0x0000003F) != DUX_CCSV_POCS_READY /*0x01*/ ) DUXWatchDogReset; 

	/* COLDSTART command */
	 FxR_SUC1_SUCC1 = DUX_SUC_CMD_ALLOW_COLDSTART;

	/* Check the POC busy state with SUCC1:PBSY[7] */
	while((FxR_SUC1_SUCC1 & 0x00000080) == 0x00000080) 	DUXWatchDogReset;

	/* RUN command (start up processing) */
	FxR_SUC1_SUCC1 = DUX_SUC_CMD_RUN;

	/* Wait for NORMALACTIVE state, after RUN command execution  */
	while( (FxR_SUC2_CCSV&0x0000003F) != DUX_CCSV_POCS_NML_ACT /*0x02*/ )
	{
		DUXCPUWaitOneNop;
		/* Reset the watchdog timer */
		DUXWatchDogReset;	
	}

	/* Finish the Startup */
	return;
}

/* DUXFXSendData(uint16 slotID, uint8 channel, const uint8* data, uint8 payload)
 * Given a slot number, the channel, the data and the payload 
 * in byte (!) the frame is transmitted on the bus. If no 
 * buffer can be found for sending the routine returns FALSE. */
boolean DUXFXSendData(uint16 slotID, uint8 channel, const uint8* data, uint8 payload){	
	sint16 myBufferIndex;
	uint8 len, i;	
	uint32 marshallData = 0;

	DUXWatchDogReset;	
	
	myBufferIndex = -1;
	/* look if slot ID matches to a static buffer */	
	myBufferIndex = _DUXFXfindBufferForStaticSenderSlot(slotID,channel);
	if ((myBufferIndex<0)&&(channel == DUX_CHANNEL_AB)) return FALSE; /* there is no buffer reserved for this slot !*/

	DUXWatchDogReset;	
	
	/* Now look up the dynamic segment */	
	if (myBufferIndex<0){
		myBufferIndex = _DUXFXfindBufferForDynamicSenderSlot(slotID,channel);		
	}
	
	DUXWatchDogReset;	
	
	if (myBufferIndex<0) return FALSE; /* there is no buffer reserved for this slot !*/
	
	/* marshall data */
	len = payload/4;
	for(i=0; i < len; i++) { 
		DUXWatchDogReset;			
		marshallData = 0;
		marshallData = data[(i*4)+3] << 24 | data[(i*4)+2] << 16 | data[(i*4)+1] << 8 | data[(i*4)+0];
		_DUXFXTransmitData(i, marshallData);		
	} 	 
	/* stuff in the rest */
	if (payload %4 != 0){
		for(i=0; i < payload%4; i++) {
			DUXWatchDogReset;				
			marshallData = 0;			
			marshallData |= data[(len*4) + i] << (8*i);
			DUXWatchDogReset;
		}
		_DUXFXTransmitData((len*4), marshallData);
	}

	DUXWatchDogReset;		
	_DUXFXTransmitControl(myBufferIndex);	/* activate sending of buffer */
	
	return TRUE;
}

/* DUXFXReceiveData(uint8* data, uint8 payload, uint16 *frameid, uint8 *channel)
 * Implements the FlexRay frame reception. Returns filled data buffer up to 
 * given payload (must be max cluster design), frame identifier and channel. */
boolean DUXFXReceiveData(uint8* data, uint8 payload, uint16 *frameid, uint8 *channel){
	uint8 i = 0;
	uint32 regContent = 0;
    uint32 rcv_err = 0;	

	DUXWatchDogReset;	
	_DUXFXTransferReceivedBufferToRam(_DUXFXGetReceivedBufferNumber());	/*Transfer data from updated message buffer to OBF*/
	_DUXFXReceptionStatus(&rcv_err);	
	DUXWatchDogReset;	
				
	for(i = 0; i < payload; i++) {
		DUXWatchDogReset;	
		regContent = 0;		
		regContent =  _DUXFXAccessReceivedData(i/4);		
		data[i] = (regContent >> ((i%4) *8) ) & 0xff;
	}
	// IO_FxR_RDDS

	*frameid = FxR_OBF_RDHS1_FID;
	if (FxR_OBF_RDHS1_CHA&&FxR_OBF_RDHS1_CHB) *channel = 2;
	else if (FxR_OBF_RDHS1_CHA) *channel = 0;
	else if (FxR_OBF_RDHS1_CHB) *channel = 1;

	DUXWatchDogReset;	
			
	return TRUE;

}

/* DUXFXCCStatusCheck
 * Implents the return the CC status.
 *		 Example
 *			DEFAULT_CONFIG	0x0 
 *			REDY			0x1 
 *			NORMAL_ACTIVE	0x2 
 *			NORMAL_PASSIVE	0x3 
 *			HALT			0x4 
 *			MONITOR_MODE	0x5 
 *			CONFIG			0x7 
 *			(Refer the description of CCSV register in  MB91F465XA Manual) */
uint8  DUXFXCCStatusCheck(void){

	uint8 cc_state	= 0; 	/* CC status Check */
	
	DUXWatchDogReset;	
	/* Set register definition to get CC Status */
	cc_state = FxR_SUC2_CCSV & 0x0000003F ;
	
	DUXWatchDogReset;	
	return cc_state;
}

/* DUXFXGetGlobalTime(uint16 *macroTick, uint8 *cycle)
 * Implements the FlexRay controller read out of the current global time in 
 * macroticks and the current cycle. */
void DUXFXGetGlobalTime(uint16 *macroTick, uint8 *cycle){
	DUXWatchDogReset;		
	*macroTick = 0;
	*cycle = 0;
	*macroTick = FxR_GTU2_MTCCV_MTV&0x1fff; 
	*cycle = FxR_GTU2_MTCCV_CCV&0x1f; 
	DUXWatchDogReset;		
}

/*************************************************************************/
/* private object functional implementation                              */
/*************************************************************************/


/* _DUXFXConfigInit()
 * Private method implementation for cc initialization of FlexRay controller registers.
 * Initialization must be executed in CC State "CONFIG" or "DEFALUT CONFIG" */
void _DUXFXConfigInit(void)
{
	uint32 i = 0; /* Loop Counter "i" */

	/* FlexRay PLL  : FlexRay system Clock 80MHz */	 
	PLL2_DIVM = 0x01;
	PLL2_DIVN = 0x13;
	PLL2_DIVG = 0x00;
	PLL2_MULG = 0x00;

	PLL2_CLKR2 |= 0x04;
	PLL2_CLKR2 |= 0x02;

	while(1)
	{
		/*  Wait for Ocsillation stability (wait more than 600us) */
		/* 19200 is for the 10MHz Oscillator */
		if(i > 19200)
		{
			break;
		}
		i++;
		DUXWatchDogReset;			
	} 

	FxR_PRT_PRTC1 	= DUX_FLX_INIT_PRTC1;	/* PRT1 register */
	FxR_PRT_PRTC2  	= DUX_FLX_INIT_PRTC2;	/* PRT2 register*/
	FxR_MHDC	   	= DUX_FLX_INIT_MHDC;	/* MHD  register*/
	FxR_GTU1_GTUC1  = DUX_FLX_INIT_GTUC1;	/* GTU1 register*/
	FxR_GTU1_GTUC2  = DUX_FLX_INIT_GTUC2;	/* GTU2 register*/
	FxR_GTU1_GTUC3  = DUX_FLX_INIT_GTUC3;	/* GTU3 register*/
	FxR_GTU1_GTUC4  = DUX_FLX_INIT_GTUC4;	/* GTU4 register*/
	FxR_GTU1_GTUC5  = DUX_FLX_INIT_GTUC5;	/* GTU5 register*/
	FxR_GTU1_GTUC6  = DUX_FLX_INIT_GTUC6;	/* GTU6 register*/
	FxR_GTU1_GTUC7  = DUX_FLX_INIT_GTUC7;	/* GTU7 register*/
	FxR_GTU1_GTUC8  = DUX_FLX_INIT_GTUC8;	/* GTU8 register*/
	FxR_GTU1_GTUC9  = DUX_FLX_INIT_GTUC9;	/* GTU9 register*/
	FxR_GTU1_GTUC10 = DUX_FLX_INIT_GTUC10;  /* GTU10 register*/
	FxR_GTU1_GTUC11 = DUX_FLX_INIT_GTUC11;  /* GTU11 register*/
	FxR_SUC1_SUCC1  = DUX_FLX_INIT_SUCC1;	/* SUC1 register*/
	FxR_SUC1_SUCC2  = DUX_FLX_INIT_SUCC2;	/* SUC2 register*/
	FxR_SUC1_SUCC3  = DUX_FLX_INIT_SUCC3;	/* SUC3 register*/	
	
	/* After the hardware Reset, 
	   CPU stays in the wait situation until the release of PBSY[7] 
	   because the state is in POC Busy (command isn't accepted)
	   during initialization of Internal RAM,  */
	   
	while((FxR_SUC1_SUCC1 & 0x00000080) == 0x00000080) 	DUXWatchDogReset;
}


/* _DUXFXCreateMessageRam()
 * Private method implementation for the setup
 * of message buffers for transmit and receive. */
void _DUXFXCreateMessageRam(void)
{   
	uint32 index;
	
	/* Configurate Message RAM partation: MRC */
	/* Security								  MRC:SEC[25:24]
	   Last Message Buffer					  MRC:LCB[23:16]
	   The first Buffer Number of FIFO		  MRC:FFB[15:8]
	   The first Buffer Number for Dynamic Slot MRC:FDB[0:7]
	*/
	FxR_MHD_MRC = DUX_FLX_INIT_MRC; 

	/**** Set Message RAM Header ***/
	DUXWatchDogReset;		
	for( index=0; index<DUX_MSG_BUFF_NUM; index++)
	{
		DUXWatchDogReset;			
		/* Write Header Section Register 1-3: WRHS1-3 setting */
		if(typ_FLX_msgobj[index].msgval == DUX_FLX_MSGOBJ_USE){
			FxR_IBF_WRHS1 = typ_FLX_msgobj[index].WRHS1;
			FxR_IBF_WRHS2 = typ_FLX_msgobj[index].WRHS2;
			FxR_IBF_WRHS3 = typ_FLX_msgobj[index].WRHS3;

			/* Header Section Load */
			/* Wait for the release of Input Host Buffer */
			while ((FxR_IBF_IBCR & 0x00008000) != 0) DUXWatchDogReset;
		
			/* Header Section Load request LHSH[0] */
			FxR_IBF_IBCM = 0x00000001;

			/* Request for the transmission to MB IBRH[6:0] */
			FxR_IBF_IBCR = ( index & 0x7F );
		}
	}
		
	return;
}

/* _DUXFXInterruptInit()
 * Private method implementation for the setup
 * of Flexray Interrupts and ISR routines. */
void _DUXFXInterruptInit(void)
{
	DUXWatchDogReset;	
	/*** CC Interrupt setting ***/

	/* Interrupt Line (INT0/INT1) disable */
	FxR_INT_ILE = 0x00000000;
	
	/* Initialization Status / Error Interrupt */
	FxR_INT_SIR = 0xFFFFFFFF;
	FxR_INT_EIR = 0xFFFFFFFF;

	/* Initialization of all SIR/EIR Flag with SIER/EIER */
	FxR_INT_SIER = 0xFFFFFFFF;
	FxR_INT_EIER = 0xFFFFFFFF;
	
	/* Assign the Status / Error Interrupt to INIT0 */
	FxR_INT_SILS = 0x00000000;
	FxR_INT_EILS = 0x00000000;
	
	DUXWatchDogReset;	
}

/* _DUXFXInterruptConfig()
 * Configure interrupts factor and ISR for FlexRay.
 * FlexRay Timer Interrupt Line is not supported. */
void _DUXFXInterruptConfig(uint32 sir_reg, uint32 eir_reg)
{
	DUXWatchDogReset;	

	/* Set the Status Interrupt */
	FxR_INT_SIES = sir_reg;

	/* Set the Error Interrupt */
	FxR_INT_EIES = eir_reg;
	
	DUXWatchDogReset;		
}

/* _DUXFXInterruptLineConfig()
 * Select Interrput Line and Line Enable.
 * FlexRay Timer Interrupt Line is not supported.MCU Interrupt Vector isn't supported. */
void _DUXFXInterruptLineConfig(sint16 ln_0, sint16 ln_1, uint32 s_line, uint32 e_line)
{
	DUXWatchDogReset;	
	
	/* Set the Status Interrupt */
	FxR_INT_SILS = s_line;

	/* Set the Error Interrupt */
	FxR_INT_EILS = e_line;

	if(ln_0)
	{
		/* Enable Interrupt Line 0 (INT0) */
		/* INT0 enable Flag ILE:EINT0[0] */
		FxR_INT_ILE = (0x00000001);
	}

	if(ln_1)
	{
		/* Enable Interrupt Line 1 (INT1) */
		/* INT1 enable Flag ILE:EINT0[1] */
		FxR_INT_ILE = (0x00000010);
	}

	/* FlexRay0 Priority */
	/* FlexRay Interrupt Level 24 */
	ICR34 = 0x18/*0x18*/;
	
	DUXWatchDogReset;		

	return;
}

/* _DUXFXConfigFix()
 * Next process of FlexRay CC & Message buffer.
 * State transition to READY and Configuration Lock.
 * This function must be executed after configuration. */
void _DUXFXConfigFix(void)
{
	DUXWatchDogReset;	
	
	/* The oder is Commnad request is CONFIG->READY->WAKEUP->COLDSTART
	   To Transit POC state to NORMAL_ACTIVEm, then Communication is established */
	
	/* wait for READY state */
	while( (FxR_SUC2_CCSV&0x0000003F) != DUX_CCSV_POCS_READY /*0x01*/ ) 
	{
		DUXWatchDogReset;			
		
		/* Check the POC busy state with SUCC1:PBSY[7] */
		while((FxR_SUC1_SUCC1 & 0x00000080) == 0x00000080) 	DUXWatchDogReset;

		/* Set the Configuration Lock register 
		   Lock Key LCK:CLK[7:0] */
		FxR_GIF1_LCK = 0x000000CE; /* 1st code */
		FxR_GIF1_LCK = 0x00000031; /* 2nd code */
		
		/* Transit POC state to READY (from CONFIG) */
		FxR_SUC1_SUCC1 = DUX_FLX_READY_SUCC1;

		DUXWatchDogReset;		
		/* Check the POC busy state with SUCC1:PBSY[7] */
		while((FxR_SUC1_SUCC1 & 0x00000080) == 0x00000080) 	DUXWatchDogReset;
	}
}


/* _DUXFXTransferReceivedBufferToRam()
 * Implements the transfer of the shadow buffers to the memory. */
void _DUXFXTransferReceivedBufferToRam(uint16 buf_no)
{
	DUXWatchDogReset;		
	
	/* 1 Request header and data transmitting  Message RAM -> Shadow Buffer 
		 (REQ Command) */	
	/* Set transmitting Mask */
	/* Request Shadow Data RDSS[1]、 Request Shadow Header RHSS[0] */
	FxR_OBF_OBCM |= (0x00000002|0x00000001);

	/* Transmitting to Shadow Buffer */
	/* The number of Message buffer as source OBRS[6:0] */
	FxR_OBF_OBCR = (buf_no & 0x007F);
	/* Request for messgae transmitting REQ[9] */
	FxR_OBF_OBCR |= (0x00000200);

	DUXWatchDogReset;	
	/* check the OBF (Shadow) busy */
	/* Busy state  OBSYS[15] */
	while( (FxR_OBF_OBCR & 0x00008000) != 0 ) 	DUXWatchDogReset;

	/* 2 exchange shadow buffer and host buffer to access receive data from CPU 
		 (VIEW command) */

	/* Request for message view [8] */
	FxR_OBF_OBCR |= (0x00000100);

	DUXWatchDogReset;	
}

/* _DUXFXReceptionStatus()
 * Check the Message buffer status after frame reception.
 * This function should be executed after _DUXFXTransferReceivedBufferToRam
 * Result : 0 : No Error
 *        : 1 : Detect Error */
uint8 _DUXFXReceptionStatus(uint32 *mbs_dat)
{
	uint8 err_st = 0;
	
	DUXWatchDogReset;		

	/* Get Receiving Status */
	*mbs_dat = FxR_OBF_MBS;

	/*  Syntax Error Ach */
	/* Content Error Ach */
	/* Slot Boundary Error Ach */
	/*  Empty Slot Ach */
	if(*mbs_dat & 0x00000454){
		err_st = 1;
	}

	/* Syntax Error Bch */
	/*  Content Error Bch */
	/* Slot Boundary Error Bch */
	/* Empty Slot Bch */
	if(*mbs_dat & 0x000008A8){
		err_st = 1;
	}

	DUXWatchDogReset;	
	
	return err_st;
}

/* _DUXFXAccessReceivedData()
 * Read Reception data from output buffer (get only 1 word: 4 byte)
 * This function should be executed after "_DUXFXTransferReceivedBufferToRam"
 * Gets the 4 Byte data of payload payload by one operation.
 * (Specify the data position of 4 byte data in Payload with the argument "word") 
 * word :0-63 */
uint32 _DUXFXAccessReceivedData(uint16 word)
{
	uint32 recv_Data;
	
	DUXWatchDogReset;		
	
	recv_Data = IO_FxR_RDDS[word];

	return recv_Data; 
}

/* _DUXFXTransmitData(uint16 word, uint32 tran_Data )
 * Write the payload data to Input Buffer (1 word by 1 operation) 
 * Specify the data posotion of 4 byte data to transmit in Payload with the argument "word" 
 * word :0-63 */
void _DUXFXTransmitData(uint16 word, uint32 tran_Data )
{
	DUXWatchDogReset;		
	
	IO_FxR_WRDS[word] = tran_Data;
	return;
}

/* _DUXFXTransmitControl( uint32 MsgbuffNo )
 * FlexRay transmission process.
 * This function should be executed after "_DUXFXTransmitData", which 
 * transfered the data to Input Buffer.
 * The data stored in Input Buffer is transmitted to Message Buffer and 
 * the transmitting request is set. */
void _DUXFXTransmitControl( uint32 MsgbuffNo )
{
	DUXWatchDogReset;	
	/* Check and wait IBF busy (Process make wait in case of IBF busy)*/
	/* Busy state of Input Buffer IBCR：IBSYH[15] */
	while( (FxR_IBF_IBCR & 0x00008000) != 0 ) 	DUXWatchDogReset;

	/* Input Buffer Command Mask Register IBCM：STXRH[2]/LDSH[1]/LHSH[0]
	   STXRH[2]：Transmitting request Flag, LDSH[1]：Data transmitting, LHSH[0]：Header transmitting
	   In the usual case of transmitting, data transmitting only */
	FxR_IBF_IBCM = (0x00000004|0x00000002);
	
	/* set the number of message buffer as the destination */
	/*  IBCR：IBRH[6:0]  :Request Buffer No. */
	FxR_IBF_IBCR = (MsgbuffNo & 0x7F);
	
	DUXWatchDogReset;	
	return;
}

/* _DUXFXGetReceivedBufferNumber
 * Check the message buffer number which has new reception data.
 * This function shall return the message buffer number with sub-function 
 * "_DUXFXGetWordNo", and "_DUXFXGetBitNo". */
uint16 _DUXFXGetReceivedBufferNumber(void)
{
	int i = 0;
	uint32 buffno = 0;	  	/* Buffer No. */
	uint32 ndat_data = 0;

	DUXWatchDogReset;	

	/* NDAT */
	for( i=0; i<NDAT_REG_NUM; i++ )
	{
		DUXWatchDogReset;	
			
		switch( i ){
		case 0:
			ndat_data = FxR_MHD_NDAT1;
			break;
		case 1:
			ndat_data = FxR_MHD_NDAT2;
			break;
		case 2:
			ndat_data = FxR_MHD_NDAT3;
			break;
		case 3:
			ndat_data = FxR_MHD_NDAT4;
			break;
		default:
			break;
		}
		/* Search for NDATx register which has enable bit */
		if( ndat_data != 0 )
		{
			buffno *= BIT_NUM_32*i;
			buffno = _DUXFXGetWordNo( ndat_data );
			DUXWatchDogReset;	
			return buffno;
		}
	}

	return 0;
}

/* _DUXFXGetWordNo
 * Extract of Enable bit from Word Data */
uint32 _DUXFXGetWordNo( uint32 word_data )
{
	uint32 word_bitnum = 0; /* Enable Bit Number */
	
	DUXWatchDogReset;	
	/* Search for Enable Bit of byte_00 area (first 8bit) */
	if( ((uint32REG*)&word_data)->byte_t._byte00 != 0 )
	{
		word_bitnum += _DUXFXGetBitNo(((uint32REG*)&word_data)->byte_t._byte00);
	}	
	/* Search for Enable Bit of byte_01 area (Second 8bit) */
	else if( ((uint32REG*)&word_data)->byte_t._byte01 != 0 )
	{
		word_bitnum = BIT_NUM_8;
		word_bitnum += _DUXFXGetBitNo(((uint32REG*)&word_data)->byte_t._byte01);
	}
	/* Search for Enable Bit of byte_02 area (Third 8bit) */
	else if( ((uint32REG*)&word_data)->byte_t._byte02 != 0 )
	{
		word_bitnum = BIT_NUM_8*WORD_NUM02;
		word_bitnum += _DUXFXGetBitNo(((uint32REG*)&word_data)->byte_t._byte02);
	}
	/* Search for Enable Bit of byte_03 area (Last 8bit) */
	else if( ((uint32REG*)&word_data)->byte_t._byte03 != 0 )
	{
		word_bitnum = BIT_NUM_8*WORD_NUM03;
		word_bitnum += _DUXFXGetBitNo(((uint32REG*)&word_data)->byte_t._byte03);
	}
	else
	{
		DUXWatchDogReset;			
		/*  Return 0 : All bit is Disabale  */
		return 0;

	}
	DUXWatchDogReset;	
	return word_bitnum;
}

/* _DUXFXGetBitNo( uint8 byte_data )
 * Extract of bit from a byte  */
uint32 _DUXFXGetBitNo( uint8 byte_data )
{
	uint8 mask = 0x01; 	/* Bit Mask */
	uint32 i = 0;	  	/* Index */
	
	DUXWatchDogReset;	
	/* Get Enable bit Number from Input 8bit Data */
	for( i=0; i<BIT_NUM_8; i++ )
	{
		DUXWatchDogReset;	
		/* If Bit Mask is enable bit, index value is Enable bit Number */
		if( (byte_data&mask) == mask )
		{
			/* Enable bit Number */
			return i;
		}

		/* If Bit Mask is not enable bit, shift bit mask to left side (1bit) */
		mask <<= BIT_NUM_1;
	}

	/* All bit is disable => retrurn 0 */
	return 0;
}

/* _DUXFXfindBufferForStaticSenderSlot(uint16 slotID,uint8 channel)
 * Given a slot number the corresponding static sender
 * buffer is looked for, returns -1 if nothing found */        
sint16 _DUXFXfindBufferForStaticSenderSlot(uint16 slotID,uint8 channel){
	sint16 foundIndex = -1;
	sint16 i;
	
	DUXWatchDogReset;		
	for (i=0; i<DUX_MSG_BUFF_DYN_START; i++)
	{
		DUXWatchDogReset;	
		
		if (i>=DUX_MSG_BUFF_NUM) break; 
		if ((typ_FLX_msgobj[i].slotID == slotID)&&(typ_FLX_msgobj[i].channel == channel)) 
		{
			foundIndex = i;
			break;
		}
	}	
	
	DUXWatchDogReset;		
	return foundIndex;
}
 
/* _DUXFXfindBufferForDynamicSenderSlot(uint16 slotID,uint8 channel)
 * Given a slot number the corresponding dynamic sender
 * buffer is looked for, returns -1 if nothing found */    
sint16 _DUXFXfindBufferForDynamicSenderSlot(uint16 slotID,uint8 channel){
	sint16 foundIndex = -1;
	sint16 i;
	
	DUXWatchDogReset;		
	for (i=DUX_MSG_BUFF_DYN_START; i<DUX_MSG_BUFF_REC_START; i++)
	{
		DUXWatchDogReset;	
		
		if (i>=DUX_MSG_BUFF_NUM) break; 
		if ((typ_FLX_msgobj[i].slotID == slotID)&&(typ_FLX_msgobj[i].channel == channel)) 
		{
			foundIndex = i;
			break;
		}
	}	
	
	DUXWatchDogReset;		
	return foundIndex;
}

