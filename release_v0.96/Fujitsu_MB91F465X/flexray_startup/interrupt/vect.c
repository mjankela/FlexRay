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

/*! \file vect.c 
 *	\brief Interrupt vector setup. *	Platform specific files to register the interrupt service routines to an address. */

/* include declaration */
#include "..\IO_MB91465X_V01L03\_fr.h"
#include "..\interrupt\dux_interrupts.h"
#include "..\h_file\system.h"


/************************************************/
/*   microcontroller address registration       */
/************************************************/
#pragma intvect		ADC_int					0x86		/* ADC int */
#pragma intvect		iFlxStatusInterrupt		0x54		/* FlexRay Interrupt for reception */
