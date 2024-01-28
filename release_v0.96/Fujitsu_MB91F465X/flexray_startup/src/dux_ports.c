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
 * Implementation of the ports object. */

/* include declaration */
#include "..\h_file\dux_ports.h"
#include "..\h_file\FLX_regist_defines.h"
#include "..\IO_MB91465X_V01L03\_fr.h"
#include "..\h_file\dux_platform_types.h"

/*************************************************************************/
/* private prototype declarations                                        */
/*************************************************************************/

/* currently none */

/*************************************************************************/
/* public object functional implementation                               */
/*************************************************************************/

/* DUXPortsInit
 * Implementation of the port initialization. This is very micro controller specific. */
void DUXPortsInit(void){
	/* LED0-7 */
	IO_PDR14.byte = 0xff;
	IO_PORT2.IO_PFR14.byte =0x00;
	IO_PORT2.IO_DDR14.byte = 0xFF;

	/* FlexRay Tr ERRN/Enable/STBN control*/
	IO_PDR15.byte = 0x3F;
	IO_PORT2.IO_PFR15.byte = 0x00;
	IO_PORT2.IO_DDR15.byte = 0x3F;
	
	/* HeaderPIN open port */
	IO_PDR16.byte = 0x00;
	IO_PORT2.IO_PFR16.byte = 0x00;
	IO_PORT2.IO_DDR16.byte = 0x8F;
	
	/* 7SEG right */
	IO_PDR17.byte = 0xFF;
	IO_PORT2.IO_PFR17.byte = 0x00;
	IO_PORT2.IO_DDR17.byte = 0xFF;

	/* HeaderPIN */
	IO_PDR18.byte = 0x00;
	IO_PORT2.IO_PFR18.byte = 0x00;
	IO_PORT2.IO_DDR18.byte = 0x77;

	/* CAN4 */
	IO_PORT2.IO_PFR22.byte = 0x03;			/*port functon registor for Tx0 & Rx0*/
	
	/* CAN0 */
	IO_PORT2.IO_PFR23.byte = 0x03;			/*port functon registor for Tx0 & Rx0*/

	/* SW1 */
	IO_PORT2.IO_PFR24.bit.P24_5 = 0;		/* SW1 GPIO set enable */
	IO_PORT2.IO_DDR24.bit.P24_5 = 0;

	/* HeaderPIN */
	IO_PDR27.byte = 0x00;
	IO_PORT2.IO_PFR27.byte = 0x00;
	IO_PORT2.IO_DDR27.byte = 0x0F;
	
	/* 7SEG left */
	IO_PDR29.byte = 0xFF;
	IO_PORT2.IO_PFR29.byte = 0x00;
	IO_PORT2.IO_DDR29.byte = 0xFF;
	
	/* Port31 */
	/* bit0: TXDA:FlexRay Receive input                */
	/* bit1: TXENA:FlexRay Transmit Enable Output      */
	/* bit2: RXDA:FlexRay Receive input                */
	/* bit4: TXDB:FlexRay Transmit output              */
	/* bit5: TXENB:FlexRay Transmit Enable Output      */
	/* bit6: RXDB:FlexRay Receive input                */
	IO_PORT2.IO_PFR31.byte  = 0x77;
	IO_PORT2.IO_EPFR31.byte = 0x77;
	IO_PDR31.byte  = 0x00;
	IO_PORT2.IO_DDR31.byte  = 0x33;

	/* Volume SW */
	IO_PORT2.IO_PFR28.bit.P28_1 = 1;		/* AN09 enable */
	IO_PORT2.IO_PFR28.bit.P28_2 = 1;		/* AN10 enable */

	/*Input set port activation*/
	IO_PORTEN.bit.GPORTEN = 1;
}
