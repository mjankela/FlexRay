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

/*! \file main.c 
 *	\brief Main application. *	Contains the startup and execution of the main program.
 *  A FlexRay example communication is initialized and frames are sent and tansfered.
 *  If you enable the UART debuging mode on the serial interface with 9600 baud rate
 *  you can receive the dump of each individual node. */
 
/*! \mainpage DUXSolutions FlexRay Driver    \section intro_sec Introduction    Thank you for chosing the DUXSolutions KK FlexRay driver. We strive to provide
    the "best" and "most easy to use and understand" software for a magnificant value proposal.
    We hope to give you a taste for this wonderful network protocol FlexRay and an very easy entry.
    This basic driver is kept simple by intention to make you help to understand FlexRay.
    It is encapsulated in individual unites and released as open source under the DUXPL license. 
    Feel free to spread and improve it. 
    The driver is best consumed with the DUXSolutions::Network Designer tool chain,
    providing you the fastest entry into automotive networking on the market. 
    Lets start and enjoy!
    
    \image html demo_running.jpg
        \section prerequ_sec Prerequisistes
    We recommend following setup:
    
    - 1 personal pc or laptop with a Windows operating system (XP, Vista or 7)
    - a minimum of 2GByte of RAM and enough hard disk space (200 MB) to enjoy development and compilation with the IDE
    - 1 FlexRay Starter Kit from DUXSolutions KK or any authorized distributor
    - 1 FlexRay Network Designer from DUXSolutions KK or any authorized distributor
    - for optional debugging features a terminal application like "putty"
    - optional active HUB for complex cluster setups 
    - personal package of interest and patience to learn, hack and code
    
    \section usage_sec Usage    
    Following an example setup of the driver on our current test hardware environment, which can be ordered
    over DUXSolutions is described here. Similar adjusted steps can be done for any compatible hardware.
        \subsection step1 Step 1: Installation
    -# install the IDE and compiler
    -# copy the whole project on your harddisk
    -# open it with your IDE 
    
    \subsection step2 Step 2: Compile and build
    -# check the correct compiler environment settings 
    (for example assure for the Fujitsu starter board 20bit 
    compile address space -> IDE C Compiler optimization-> Code Area of External 
    Symbol Size and Data Area of External Symbol Size must be set to 20 bit)    
    -# compile the driver with any wished optimization level
    
    \subsection step3 Step 3: Run
    -# Connect your target hardware.
    -# Download the compiled application to the target.
    -# Recommended is to step out of the monitor debugger and open putty and connect to the wished COM port with 9600 baud.
    -# switch the board to autonomouse mode (jumper 4 on the Fujitsu board) and reset the node
    -# enjoy your application running and watch it on the console
    	- alternatively deactivate the UART print out which will enable you to debug the software over the monitor debugger
   
    \section note_sec Note    	
    For perfect configuration of FlexRay environment parameters try our dedicated tool chain.
    For any more details contact http://www.duxsolutions.com .
    
    By using this software you assure to comply to the given license terms (DUXPL or commercial).
*/

/*! \page duxpl DUXPL License Agreement
  \htmlinclude DUXPL_1_0.html
*/

#include "..\IO_MB91465X_V01L03\_fr.h"
#include "..\interrupt\dux_interrupts.h"
#include "..\h_file\dux_platform_types.h"
#include "..\h_file\dux_flexray.h"
#include "..\h_file\dux_uart.h"
#include "..\h_file\dux_ports.h"
#include "..\h_file\dux_adc.h"
#include "..\h_file\dux_watchdog.h"
#include "..\h_file\dux_version.h"

/*!************************************************************************/
/*   Main function routine, called by the micro                          */
/*************************************************************************/
void main(){	
	uint32 i =0;  
			
	/* Initialize ports of the microcontroller */
	DUXPortsInit();	

	/* Interrupt setting, enable also interrupts to allow break command from the micro */
	__set_il(0x1F);		/* ILM = 31; Interrupt Level Mask register, enable all */	
	__EI();	/* enable interrupts, do not forget to enable because for debugging you need to catch the break button interrupt */		

#ifdef DUX_USE_UART
	DUXWatchDogReset;
	/* Initialize UART */		
	DUXUartInit(); /* if UART is enabled the break of the monitor debugger does not work because it also uses the uart serial ! */
	
	/* Terminal header print out */	
	DUXClearTerminal();	
	DUXPrintTerminal("--------------------------------------------------------\n",0,1,1);
	DUXPrintTerminal("  ___                   ___ _          ___\n",0,2,1);
	DUXPrintTerminal(" |   \\ _  ___ __  ___  | __| |_____ __| _ \\__ _ _  _\n",0,3,1);
	DUXPrintTerminal(" | |) |  ||\\ \\ / |___| | _|| / -_) \\ /|   / _` | || |\n",0,4,1);
	DUXPrintTerminal(" |___/ \\___/_\\_\\       |_| |_\\___/_\\_\\|_|_\\__,_|\\_, |\n",0,5,1);
	DUXPrintTerminal(" (c) DUXSolutions KK; use at own risk           |__/\n",0,6,1);
	DUXPrintTerminal("--------------------------------------------------------\n",0,7,1);
	DUXPrintTerminal("Node name:                             Driver: V%d.%d\n",0,8,1,SW_MAJOR_VERSION,SW_MINOR_VERSION);
	DUXPrintTerminal("Controller:                            License: "VENDOR_LICENSE_STR"\n",0,9,1);
	DUXPrintTerminal("Global Time:                           Cycle:           \n",0,10,1);
	DUXPrintTerminal("--------------------------------------------------------\n",0,11,1);
	DUXPrintTerminal("FrameID received:                     for Channel:      \n",0,12,1);
	DUXPrintTerminal("Data:\n",0,13,1);			
	DUXPrintTerminal("--------------------------------------------------------\n",0,14,1);
	DUXPrintTerminal(DUXFXControllerName(),1,8,13);	
	DUXPrintTerminal("DEFAULT CONFIG ",1,9,13);
#endif /* DUX_USE_UART */	

	DUXWatchDogReset;	
	
	/* Display Node number displayed on micro board */
	#ifdef NODE_1
		SEG7_R_1; /* display number 1 on the right segment LCD display */
		DUXAdcInit();
		DUXWatchDogReset;			
	#else
	#ifdef NODE_2
		SEG7_R_2; /* display number 2 on the right segment LCD display */
	#else
		Cannot compile,please define one node for compilation only.
	#endif			/* NODE_2 */
	#endif			/* NODE_1 */

	/**********************/
	/*Initial FlexRay controller and load cluster definitions, prepare for it  */
	
	//DUXWatchDogReset();		/* Watchdog (WDT) clear */
	// State display: Config 
	DUXWatchDogReset;		
	SEG7_L_1; 	
	DUXFXInit();
	// State display: READY
	DUXWatchDogReset;		 
	SEG7_L_2; 
	// State display: STARTUP
	DUXWatchDogReset;		 
	SEG7_L_3; 	
	/* FlexRay startup process and make CC state transit to Normal active */
	DUXFXStartup();   
	DUXWatchDogReset;		

	DUXCPUWaitOneNop;
	
	/***************************/
	
	while(1){		
		DUXCPUWaitOneNop;
		DUXCPUWaitOneNop;
		DUXCPUWaitOneNop;	
		DUXWatchDogReset;			/* Watchdog (WDT) clear  */

		if (i==0) {
			uint8 cc_state = 0;
			cc_state = DUXFXCCStatusCheck();
			
			DUXWatchDogReset;		
			switch(cc_state){
			case 0:		/* DEFAULT CONFIG */
				SEG7_L_0;
#ifdef DUX_USE_UART
				DUXPrintTerminal("DEFAULT CONFIG ",1,9,13);
#endif
				break;
			case 1:		/* READY */
				SEG7_L_2;
#ifdef DUX_USE_UART
				DUXPrintTerminal("READY          ",1,9,13);
#endif				
				break;
			case 2:		/* NORMAL ACTIVE */
				SEG7_L_4;
#ifdef DUX_USE_UART
				DUXPrintTerminal("NORMAL ACTIVE  ",1,9,13);
#endif				
				break;
			case 3:		/* NORMAL PASSIVE */
				SEG7_L_5;
#ifdef DUX_USE_UART
				DUXPrintTerminal("NORMAL PASSIVE ",1,9,13);
#endif				
				break;
			case 4:		/* HALT */
				SEG7_L_6;
#ifdef DUX_USE_UART
				DUXPrintTerminal("HALT           ",1,9,13);
#endif				
				break;
			case 5:		/* MONITOR MODE */
				SEG7_L_7;
#ifdef DUX_USE_UART
				DUXPrintTerminal("MONITOR MODE   ",1,9,13);
#endif				
				break;
			case 15:	/* CONFIG State */
				SEG7_L_1;
#ifdef DUX_USE_UART
				DUXPrintTerminal("CONFIG State   ",1,9,13);
#endif				
				break;
			default:
				SEG7_L_9;
#ifdef DUX_USE_UART
				DUXPrintTerminal("UNKNOWN        ",1,9,13);
#endif				
				break;
			} /* switch*/
		}
		
#ifdef DUX_USE_UART			
		if (i==10000) { 
			uint16 globalTimeMacroTick = 0;
			uint8 cycleCounter = 0;		
			
			DUXWatchDogReset;					
			DUXFXGetGlobalTime(&globalTimeMacroTick,&cycleCounter);					
			DUXWatchDogReset;				
			DUXPrintTerminal("%d    ",1,10,14,globalTimeMacroTick);					
			DUXPrintTerminal("%d    ",1,10,52,cycleCounter);		
		}
#endif	/* DUX_USE_UART */							

#ifdef DUX_USE_UART						
#ifdef NODE_2		
		if (i==20000) { // Do not put this too tight !!
			DUXWatchDogReset;			
		 	printReceivedFXBuffer();	
		}	
#endif			/* NODE_2 */			
#endif	/* DUX_USE_UART */			 		
		++i; /* increment reaction schedule timer */
		if (i>40000) i=0;
		
	} /* while */
}
