/*! \file system.h 
 *	\brief monitor debugger settings for the FUJITSU micro controller.
 *   Instruction settings to activate the break functionality on the microcontroller
 *   board when pressing SW2. Please be aware that when using the print functionality 
 *   over the UART the UART will be blocked for the serial terminal output. Therefore
 *   you must choose to debug in the IDE or to use the print out functionality. */

 
#ifndef __SYSTEM_H__
#define __SYSTEM_H__

/*! \def tbrval  
 * TBR definition */
#define tbrval 0x000080000 

/*! Indispensable setting for monitor debugger, you need to set this values so
that the monitor debugger can react to it */
#pragma section INTVECT, locate=tbrval
#pragma intvect _start      0  /*! RESET */
#pragma defvect _default_vect
#pragma intvect 0x05000000  1  /*! Mode */
#pragma intvect 0x000F2b18  9  /*! monitor inte_h INTE instruction*/
#pragma intvect 0x000F2b28  10 /*! monitor dbg_h instruction break trap*/
#pragma intvect 0x000F2b5e  12 /*! monitor str_h step trace trap*/
#pragma intvect 0x000F2b20  20 /*! monitor abt_h int4 break interrupt*/

#endif /*__SYSTEM_H__*/
