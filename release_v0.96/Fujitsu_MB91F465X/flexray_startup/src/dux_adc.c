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
 * Implementation of the ADC object. */

/* include declaration */
#include "..\h_file\dux_adc.h"
#include "..\h_file\FLX_regist_defines.h"
#include "..\IO_MB91465X_V01L03\_fr.h"
#include "..\h_file\dux_platform_types.h"


/*************************************************************************/
/* private prototype declarations                                        */
/*************************************************************************/
/* none */

/*************************************************************************/
/* public object functional implementation                               */
/*************************************************************************/

/* DUXAdcInit
 * Implements the initialization of the ADC. */
void DUXAdcInit(void){
	IO_ICR[59].byte = 0x1a;		/* A/D interrupt level set */
	
	IO_PORTEN.bit.GPORTEN = 1;
	IO_AD.IO_ADER.bit.ADE9 = 0x01;	/* AN9 */
	IO_AD.IO_ADER.bit.ADE10 = 0x01;	/* AN10 */

	IO_AD.IO_ADSCH.byte = 0x09;		/* AD start Channel select */
	IO_AD.IO_ADECH.byte = 0x0a;		/* AD end Channel select */

	/* comparison time 2.2us */
	IO_AD.IO_ADCT01.bit.CT = 0x04;	/* comparison time 2.2us */
	
	/* sampling time 2.0us */
	IO_AD.IO_ADCT01.bit.ST = 0x28;	/* sampling time 2.0us */

	IO_AD.IO_ADCS1.byte = 0x20;		/* Interrupt enable */
	/* +----+----+----+----+----+----+-----+----+ */
	/* |BUSY| INT|INTE|PAUS|STS1|STS0|START|  - | */
	/* +----+----+----+----+----+----+-----+----+ */
	/*  ADCS1.BUSY = 0		busy flag */
	/*  ADCS1.INT  = 0		interrupt request flag clear */
	/*  ADCS1.INTE = 1		interrupt enable */
	/*  ADCS1.PAUS = 0		A/D converter pause flag clear */
	/*  ADCS1.STS1 = 0		A/D Start Cause Select Bits */
	/*  ADCS1.STS0 = 0		A/D Start Cause Select Bits */
	/*  ADCS1.START= 0		starts A/D control flag disable */

	IO_AD.IO_ADCS0.byte = 0xe0;		/*  8bit A/D, Stop mode*/
	/* +----+----+----+----+----+----+----+----+ */
	/* | MD1| MD0| S10|ACH4|ACH3|ACH2|ACH1|ACH0| */
	/* +----+----+----+----+----+----+----+----+ */
	/*  AD_ADCS0_MD1  = 0	A/D conversion mode select */
	/*  AD_ADCS0_MD0  = 0	A/D conversion mode select */
	/*  AD_ADCS0_S10  = 0	10bit A/D */
	/*  AD_ADCS0_ACH4 = 0	A/D convert select channel */
	/*  AD_ADCS0_ACH3 = 0	A/D convert select channel */
	/*  AD_ADCS0_ACH2 = 0	A/D convert select channel */
	/*  AD_ADCS0_ACH1 = 0	A/D convert select channel */
	/*  AD_ADCS0_ACH0 = 0	A/D convert select channel */

	IO_AD.IO_ADCS1.bit.STRT = 0x1;	/* AN1 set A/D control start */
}
