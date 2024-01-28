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

/*! \file dux_interrupts.h 
 *	\brief Contains all interrupt declarations.
 *   This is the interface file for interrupt routine declaration. Is platform specific! */

#ifndef __DUX_INTERRUPTS_H__
#define __DUX_INTERRUPTS_H__

/*! \fn _start 
 *	\brief interrupt routine for startup. */
extern	__interrupt void _start(void);

/*! \fn _default_vect 
 *	\brief interrupt routine for a default vector dummy call. */
extern	__interrupt void _default_vect(void);

/*! \fn ADC_int 
 *	\brief interrupt routine for commands from the analog digital converter and FlexRay frame transmission. */
extern	__interrupt void ADC_int(void);

/*! \fn iFlxStatusInterrupt 
 *	\brief interrupt routine for FlexRay frame reception. */
extern	__interrupt void iFlxStatusInterrupt(void);

/*! \fn printReceivedFXBuffer 
 *	\brief Dumps the received FlexRay buffer on the UART terminal. */
extern void printReceivedFXBuffer(); 

#endif /*__DUX_EXTERN_H__*/
