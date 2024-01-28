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
 * Implementation of the UART object. */

/* include declaration */
#include "..\h_file\dux_uart.h"
#include "..\h_file\FLX_regist_defines.h"
#include "..\IO_MB91465X_V01L03\_fr.h"
#include "..\h_file\dux_platform_types.h"
#include "..\h_file\dux_watchdog.h"
#include <stdio.h>
#include <string.h>

/*************************************************************************/
/* private prototype declarations                                        */
/*************************************************************************/
static void _DUXPutCharacter(char ch); 		  /* sends a char */
static void _DUXPutString(const char *text);  /* puts a String to UART */

/*************************************************************************/
/* public object functional implementation                               */
/*************************************************************************/

/* DUXUartInit(void)
 * Implements the initialization of the UART. */
void DUXUartInit(void)
{
	DUXWatchDogReset;	
	BGR04 = 2499;   	 /*  9600 Baud @ 24MHz */
    /* BGR04 = 1249; */  /* 19200 Baud @ 24MHz */
    /* BGR04 = 624;  */  /* 38400 Baud @ 24MHz */ 	
	SCR04 = 0x17; /* 8 bit, clear reception errors, Tx & Rx enabled */
    SMR04 = 0x0D; /* Mode 0, Reset Counter, Reset UART, SOT0 enabled */
    SSR04 = 0x00; /* LSB first, TDRE bit read only default 1 and written 0	*/
    
	PORT2_PFR19 = (PORT2_PFR19 & 0xFC) | 0x03; /* enable UART: SIN,SOT for async. transfer */
	PORT2_EPFR19 = 0x00; /* enable UART	*/
	
	DUXWatchDogReset;	
}

/* DUXClearTerminal()
 * Implements the clearance of the terminal window. */
void DUXClearTerminal(void){
	DUXWatchDogReset;	
	_DUXPutString("\033[2J");	
}

/* DUXPrintTerminal(const char *text, uint8 color, uint8 row, uint8 col, ...) 
 * Implements the Terminal window print out. */
void DUXPrintTerminal(const char *text, uint8 color, uint8 row, uint8 col, ...)  
{
  va_list args;
  static char buffer[300];
  static char posBuffer[14];

  DUXWatchDogReset;
  if ((row>0)&&(col>0)){
	sprintf(posBuffer, "\033[%d;%df", row,col);
	_DUXPutString(posBuffer);
  }
  if (color == 1){
  	_DUXPutString("\033[0;31m"); /* red text string */
  }else if(color == 2){	
  	_DUXPutString("\033[0;32m"); /* green text string */  	
  }else if(color == 3){	
  	_DUXPutString("\033[0;33m"); /* yellow text string */ 
  }else if(color == 4){	
  	_DUXPutString("\033[0;34m"); /* blue text string */ 
  }else if(color == 5){	
  	_DUXPutString("\033[0;35m"); /* magenta text string */   
  }else if(color == 6){	
  	_DUXPutString("\033[0;36m"); /* cyan text string */  
  }else if(color == 7){	
  	_DUXPutString("\033[0;30m"); /* black text string */   	  		  	  	
  }else{
  	_DUXPutString("\033[0;37m"); /* white text string */    		
  } 
  DUXWatchDogReset;  
  va_start(args, col);
  (void) vsprintf(buffer, text, args);
  va_end(args);
  DUXWatchDogReset; 
  _DUXPutString(buffer); 	
  _DUXPutString("\033[0m");  
}

/*************************************************************************/
/* private object functional implementation                              */
/*************************************************************************/

/* _DUXPutCharacter(char ch)
 * Local method. Puts one single character on the UART.  */
void _DUXPutCharacter(char ch) /* sends a char */
{
  while (SSR04_TDRE == 0) DUXWatchDogReset; /* wait for transmit buffer empty 	*/
  TDR04 = ch; /* put ch into buffer	*/
}

/* _DUXPutString(const char *text)
 * Local method. Puts one string on the UART for transfer to a terminal. */
void _DUXPutString(const char *text)  /* Puts a String to UART */
{
  volatile int i,len;
  len = strlen(text);
  for (i=0; i<strlen(text); i++)   		/* go through string */
  {
    DUXWatchDogReset; /* reset watchdog in any case */
    if (text[i] == 10) _DUXPutCharacter(13);
    _DUXPutCharacter(text[i]);              /* send it out */
  }
}


