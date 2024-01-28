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

/*! \file dux_watchdog.h 
 *	\brief Watchdog component routines. *	Currently no routines provided. Instead contains a set of defines
 *  which can be executed timely without a function call. Watchdog must be
 *  reset quickly and it should not happen that the watchdog suddenly activates
 *  during a function jump. */

#ifndef __DUX_WATCHDOG_H__
#define __DUX_WATCHDOG_H__

#include "..\IO_MB91465X_V01L03\_fr.h"
#include "..\h_file\dux_platform_types.h"

/*! \def DUXWatchDogReset  
 * A macro looking by intention like a function that will integrate
 * the watchdog reset. Is required to be just one atomic comand to not
 * let the watchdog suddenly get active during a function call and to avoid
 * "complex" function entry and exit. */
#define DUXWatchDogReset		(IO_LVD.IO_HWWD.bit.CL = 0)

/*! \def DUXCPUWaitOneNop  
 * A macro looking by intention like a function that will integrate
 * one single hardware specific nop operation. Can be used to flush the pipeline or to wait.
 */
#define DUXCPUWaitOneNop		(__wait_nop())
		
#endif /*__DUX_WATCHDOG_H__*/
