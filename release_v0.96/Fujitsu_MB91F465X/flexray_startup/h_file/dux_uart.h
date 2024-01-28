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

/*! \file dux_uart.h 
 *	\brief UART component interfacer routines. *	Public interface for handling text printout on the UART.
 *  To use these functions with a nice visual presence you need a terminal application
 *  which can read the extended terminal codes for color and position. For example
 *  "putty" can do so. */

#ifndef __DUX_UART_H__
#define __DUX_UART_H__

#include "..\h_file\dux_platform_types.h"

/*! \fn DUXUartInit(void)
 * \brief Initializes the UART for text output. * On the FUJITSU board the UART is  * shared between the debugger and the serial port terminal. So please assure
 * that only one method is running. Please use the macro DUX_USE_UART to choose
 * if printout on the serial should happen or if the monitor debugger has dominance.
 * The serial port is configured for defensive 9600 baud, 8bit, no synchronisation.
 * Please use a terminal emulation that can handle special character codes for color
 * and positioning of the cursor. We recommend putty. */
extern void DUXUartInit(void);

/*! \fn DUXClearTerminal()
 * \brief clears the terminal window * A terminal that can understand
 * this special character codes is required. We recommend putty as example. */
extern void DUXClearTerminal(void);

/*! \fn DUXPrintTerminal(const char *text, uint8 color, uint8 row, uint8 col, ...) 
 * \brief High level formated print function with color and position support. * Prints out a text on the serial port. You can specify a color and a cursor 
 * position. Regular string extraction comands like %s %d %c etc. are supported.
 * Use the optional parameters to pass in variables which will be replaced in the 
 * provided string.
 * Following colors are supported:
 * - [1] red
 * - [2] green
 * - [3] yellow
 * - [4] blue
 * - [5] magenta
 * - [6] cyan 
 * - [7] black 
 * - [8] white    */
extern void DUXPrintTerminal(const char *text, uint8 color, uint8 row, uint8 col, ...);  /* Puts a String to UART */

#endif /*__DUX_UART_H__*/
