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
 * Implementation of the interrupt routines. */
 
/* include declaration */ 
#include "..\IO_MB91465X_V01L03\_fr.h"
#include "..\interrupt\dux_interrupts.h"
#include "..\h_file\flx_regist_defines.h"
#include "..\h_file\dux_flexray.h"
#include "..\h_file\dux_uart.h"
#include "..\h_file\dux_watchdog.h"
#include <string.h>

/*************************************************************************/
/* private buffer allocation.                                            */
/* Adjust depending on your transfered byte size!                        */
/*************************************************************************/
#ifdef NODE_1	
 static uint8 _sendFrameBuffer[] = "  ABCDEF"; /* 8 byte, first byte will be used to transfer the ADC value */
#endif

#ifdef NODE_2
 static  uint8  _receivedFrameBuffer[8]; /* Reception buffer */
 static  uint8  _receivedChannel = 0;
 static  uint16 _receivedFrameID = 0;
#endif 

/*************************************************************************/
/* public object functional implementation                               */
/*************************************************************************/

/* printReceivedFXBuffer(void)
 * Routine to dump out the current frame buffer on the UART. */
void printReceivedFXBuffer(){
#ifdef NODE_2	
	DUXWatchDogReset;

	DUXPrintTerminal(" %d       ", 2,12,18,_receivedFrameID);	

	DUXWatchDogReset;
	
	if (_receivedChannel == 0) 
		DUXPrintTerminal("A  ", 2,12,52);
	else if (_receivedChannel == 1)	
		DUXPrintTerminal("B  ", 2,12,52);
	else if (_receivedChannel == 2) 
		DUXPrintTerminal("A&B", 2,12,52);
	else 
		DUXPrintTerminal("   ", 2,12,52);

	DUXWatchDogReset;	
	DUXPrintTerminal("                              ",2,13,7); /* clean terminal line */	
	DUXPrintTerminal("%d",2,13,7,  _receivedFrameBuffer[0]);				
	DUXPrintTerminal("%c%c%c%c%c%c",2,13,12,  _receivedFrameBuffer[2],
											  _receivedFrameBuffer[3],
											  _receivedFrameBuffer[4],
											  _receivedFrameBuffer[5],
											  _receivedFrameBuffer[6],
											  _receivedFrameBuffer[7]);	
	DUXWatchDogReset;										  
#endif
}

/* ADC_int(void)
 * Interrupt routine to read out the current ADC values from the micro controller slider on the 
 * Fujitsu board. Sends over FlexRay the value to the other node. Hardware dependant code! */
__interrupt void ADC_int(void){	
	uint16 ad_data9;
	uint8 led;
	uint8 ad_ch;

	DUXCPUWaitOneNop;
	DUXCPUWaitOneNop;
	DUXCPUWaitOneNop;
	DUXCPUWaitOneNop;
	DUXCPUWaitOneNop;

	DUXWatchDogReset;	
	ad_ch = IO_AD.IO_ADCS0.byte & 0x1f;
	
	if(ad_ch==0x9){ /* the left one increases the local leds*/ 
		DUXCPUWaitOneNop;
		DUXCPUWaitOneNop;
		ad_data9 = 0x0000;
		ad_data9 = IO_AD.IO_ADCR01.hword;
		led = (uint8) ad_data9;
		IO_PDR14.byte = led;
		DUXWatchDogReset;		
	}
	else if(ad_ch==0xa){ /* increase the other leds over flexray*/
		DUXCPUWaitOneNop;
		DUXCPUWaitOneNop;
#ifdef NODE_1		
		DUXWatchDogReset;
		_sendFrameBuffer[0] = IO_AD.IO_ADCR01.hword;	/* transfer a mix of adjustable byte and a string set for endianess check */		 
		
		DUXWatchDogReset;		
		DUXFXSendData(1, 2, _sendFrameBuffer, sizeof(_sendFrameBuffer));	/* take care not to send more than is allowed in size */
#endif		
	}
	else{
		DUXWatchDogReset;
	}
	
	IO_AD.IO_ADCS1.bit.INT = 0;		/* Int frag clear */
	DUXWatchDogReset;
	DUXCPUWaitOneNop;
	IO_AD.IO_ADCS1.bit.STRT = 0x1;	/* set A/D control start */

}

/* iFlxStatusInterrupt(void)
 * Interrupt routine to read out received FlexRay frames.  
 * Hardware dependant code! */
__interrupt void iFlxStatusInterrupt(void){
	DUXCPUWaitOneNop;
	DUXCPUWaitOneNop;

	DUXWatchDogReset;
	DUXCPUWaitOneNop;
	if( (FxR_INT_SIR& 0x00000010)==0x00000010 )
	{
		/* Clear FlexRay Interrupt flag by means of rewriting 1*/
		FxR_INT_SIR = 0x00000010;
#ifdef NODE_1
	DUXCPUWaitOneNop;
#else
#ifdef NODE_2
	DUXWatchDogReset;
	DUXFXReceiveData(_receivedFrameBuffer,sizeof(_receivedFrameBuffer),&_receivedFrameID,&_receivedChannel);
	DUXWatchDogReset;	
	IO_PDR14.byte = _receivedFrameBuffer[0]&0xff;
#else
	compile trap!!!
#endif	/* NODE_2 */
#endif	/* NODE_1 */
	}
	return;
}
