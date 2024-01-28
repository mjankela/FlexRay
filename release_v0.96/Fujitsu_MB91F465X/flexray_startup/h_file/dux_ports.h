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

/*! \file dux_ports.h 
 *	\brief Ports component routines for LED, 7SEG, pins etc. *	Public interface functions exposed to handle the access
 *  to the microcontroller ports including controller specific features
 *  like in 7Seg access, access of LEDs, output pins etc. */

#ifndef __DUX_PORTS_H__
#define __DUX_PORTS_H__

#include "..\h_file\dux_platform_types.h"

/***********************************/
/*           LED-define            */
/***********************************/
#define	LED0_ON		PDR14_P14_0=0
#define	LED0_OFF	PDR14_P14_0=1
#define	LED1_ON		PDR14_P14_1=0
#define	LED1_OFF	PDR14_P14_1=1
#define	LED2_ON		PDR14_P14_2=0
#define	LED2_OFF	PDR14_P14_2=1
#define	LED3_ON		PDR14_P14_3=0
#define	LED3_OFF	PDR14_P14_3=1
#define	LED4_ON		PDR14_P14_4=0
#define	LED4_OFF	PDR14_P14_4=1
#define	LED5_ON		PDR14_P14_5=0
#define	LED5_OFF	PDR14_P14_5=1
#define	LED6_ON		PDR14_P14_6=0
#define	LED6_OFF	PDR14_P14_6=1
#define	LED7_ON		PDR14_P14_7=0
#define	LED7_OFF	PDR14_P14_7=1

/***********************************/
/*         7SEG-LED DEFINE         */
/***********************************/
#define	SEG7_Ra_ON	PDR17_P17_0=0	/*	seg15	1	*/
#define	SEG7_Ra_OFF	PDR17_P17_0=1
#define	SEG7_Rb_ON	PDR17_P17_1=0	/*	seg14	10	*/
#define	SEG7_Rb_OFF	PDR17_P17_1=1
#define	SEG7_Rc_ON	PDR17_P17_2=0	/*	seg13	8	*/
#define	SEG7_Rc_OFF	PDR17_P17_2=1
#define	SEG7_Rd_ON	PDR17_P17_3=0	/*	seg12	5	*/
#define	SEG7_Rd_OFF	PDR17_P17_3=1
#define	SEG7_Re_ON	PDR17_P17_4=0	/*	seg11	4	*/
#define	SEG7_Re_OFF	PDR17_P17_4=1
#define	SEG7_Rf_ON	PDR17_P17_5=0	/*	seg10	2	*/
#define	SEG7_Rf_OFF	PDR17_P17_5=1
#define	SEG7_Rg_ON	PDR17_P17_6=0	/*	seg9	3	*/
#define	SEG7_Rg_OFF	PDR17_P17_6=1
#define	SEG7_Rdp_ON	PDR17_P17_7=1	/*	seg8	7	*/
#define	SEG7_Rdp_OFF	PDR17_P17_7=0

#define SEG7_La_ON	PDR29_P29_0=0	/*	seg7	1	*/
#define SEG7_La_OFF	PDR29_P29_0=1
#define SEG7_Lb_ON	PDR29_P29_1=0	/*	seg6	10	*/
#define SEG7_Lb_OFF	PDR29_P29_1=1
#define SEG7_Lc_ON	PDR29_P29_2=0	/*	seg5	8	*/
#define SEG7_Lc_OFF	PDR29_P29_2=1
#define SEG7_Ld_ON	PDR29_P29_3=0	/*	seg4	5	*/
#define SEG7_Ld_OFF	PDR29_P29_3=1
#define SEG7_Le_ON	PDR29_P29_4=0	/*	seg3	4	*/
#define SEG7_Le_OFF	PDR29_P29_4=1
#define SEG7_Lf_ON	PDR29_P29_5=0	/*	seg2	2	*/
#define SEG7_Lf_OFF	PDR29_P29_5=1
#define SEG7_Lg_ON	PDR29_P29_6=0	/*	seg1	3	*/
#define SEG7_Lg_OFF	PDR29_P29_6=1
#define SEG7_Ldp_ON	PDR29_P29_7=1	/*	seg0	7	*/
#define SEG7_Ldp_OFF	PDR29_P29_7=0

#define SEG7_R_ALL_ON	SEG7_Ra_ON;SEG7_Rb_ON;SEG7_Rc_ON;SEG7_Rd_ON;SEG7_Re_ON;SEG7_Rf_ON;SEG7_Rg_ON;SEG7_Rdp_ON;
#define SEG7_R_ALL_OFF	SEG7_Ra_OFF;SEG7_Rb_OFF;SEG7_Rc_OFF;SEG7_Rd_OFF;SEG7_Re_OFF;SEG7_Rf_OFF;SEG7_Rg_OFF;SEG7_Rdp_OFF;
#define SEG7_L_ALL_ON	SEG7_La_ON;SEG7_Lb_ON;SEG7_Lc_ON;SEG7_Ld_ON;SEG7_Le_ON;SEG7_Lf_ON;SEG7_Lg_ON;SEG7_Ldp_ON;
#define SEG7_L_ALL_OFF	SEG7_La_OFF;SEG7_Lb_OFF;SEG7_Lc_OFF;SEG7_Ld_OFF;SEG7_Le_OFF;SEG7_Lf_OFF;SEG7_Lg_OFF;SEG7_Ldp_OFF;

/* hex number definitions for segment display */
#define SEG7_L_0	SEG7_La_ON; SEG7_Lb_ON; SEG7_Lc_ON; SEG7_Ld_ON; SEG7_Le_ON; SEG7_Lf_ON; SEG7_Lg_OFF;SEG7_Ldp_OFF;
#define SEG7_L_1	SEG7_La_OFF;SEG7_Lb_ON; SEG7_Lc_ON; SEG7_Ld_OFF;SEG7_Le_OFF;SEG7_Lf_OFF;SEG7_Lg_OFF;SEG7_Ldp_OFF;
#define SEG7_L_2	SEG7_La_ON; SEG7_Lb_ON; SEG7_Lc_OFF;SEG7_Ld_ON; SEG7_Le_ON; SEG7_Lf_OFF;SEG7_Lg_ON; SEG7_Ldp_OFF;
#define SEG7_L_3	SEG7_La_ON; SEG7_Lb_ON; SEG7_Lc_ON; SEG7_Ld_ON; SEG7_Le_OFF;SEG7_Lf_OFF;SEG7_Lg_ON; SEG7_Ldp_OFF;
#define SEG7_L_4	SEG7_La_OFF;SEG7_Lb_ON; SEG7_Lc_ON; SEG7_Ld_OFF;SEG7_Le_OFF;SEG7_Lf_ON; SEG7_Lg_ON; SEG7_Ldp_OFF;
#define SEG7_L_5	SEG7_La_ON; SEG7_Lb_OFF;SEG7_Lc_ON; SEG7_Ld_ON; SEG7_Le_OFF;SEG7_Lf_ON; SEG7_Lg_ON; SEG7_Ldp_OFF;
#define SEG7_L_6	SEG7_La_ON; SEG7_Lb_OFF;SEG7_Lc_ON; SEG7_Ld_ON; SEG7_Le_ON; SEG7_Lf_ON; SEG7_Lg_ON; SEG7_Ldp_OFF;
#define SEG7_L_7	SEG7_La_ON; SEG7_Lb_ON; SEG7_Lc_ON; SEG7_Ld_OFF;SEG7_Le_OFF;SEG7_Lf_ON; SEG7_Lg_OFF;SEG7_Ldp_OFF;
#define SEG7_L_8	SEG7_La_ON; SEG7_Lb_ON; SEG7_Lc_ON; SEG7_Ld_ON; SEG7_Le_ON; SEG7_Lf_ON; SEG7_Lg_ON; SEG7_Ldp_OFF;
#define SEG7_L_9	SEG7_La_ON; SEG7_Lb_ON; SEG7_Lc_ON; SEG7_Ld_OFF;SEG7_Le_OFF;SEG7_Lf_ON; SEG7_Lg_ON; SEG7_Ldp_OFF;

#define SEG7_L_a	SEG7_La_ON; SEG7_Lb_ON; SEG7_Lc_ON; SEG7_Ld_ON; SEG7_Le_ON; SEG7_Lf_OFF;SEG7_Lg_ON; SEG7_Ldp_OFF;
#define SEG7_L_b	SEG7_La_OFF;SEG7_Lb_OFF;SEG7_Lc_ON; SEG7_Ld_ON; SEG7_Le_ON; SEG7_Lf_ON; SEG7_Lg_ON; SEG7_Ldp_OFF;
#define SEG7_L_e	SEG7_La_ON; SEG7_Lb_OFF;SEG7_Lc_OFF;SEG7_Ld_ON; SEG7_Le_ON ;SEG7_Lf_ON; SEG7_Lg_ON; SEG7_Ldp_OFF;
#define SEG7_L_f	SEG7_La_ON; SEG7_Lb_OFF;SEG7_Lc_OFF;SEG7_Ld_OFF;SEG7_Le_ON ;SEG7_Lf_ON; SEG7_Lg_ON; SEG7_Ldp_OFF;
#define SEG7_L_r	SEG7_La_ON; SEG7_Lb_ON; SEG7_Lc_ON; SEG7_Ld_OFF;SEG7_Le_ON; SEG7_Lf_ON; SEG7_Lg_ON; SEG7_Ldp_OFF;


#define SEG7_R_0	SEG7_Ra_ON; SEG7_Rb_ON; SEG7_Rc_ON; SEG7_Rd_ON; SEG7_Re_ON; SEG7_Rf_ON; SEG7_Rg_OFF;SEG7_Rdp_OFF;
#define SEG7_R_1	SEG7_Ra_OFF;SEG7_Rb_ON; SEG7_Rc_ON; SEG7_Rd_OFF;SEG7_Re_OFF;SEG7_Rf_OFF;SEG7_Rg_OFF;SEG7_Rdp_OFF;
#define SEG7_R_2	SEG7_Ra_ON; SEG7_Rb_ON; SEG7_Rc_OFF;SEG7_Rd_ON; SEG7_Re_ON; SEG7_Rf_OFF;SEG7_Rg_ON; SEG7_Rdp_OFF;
#define SEG7_R_3	SEG7_Ra_ON; SEG7_Rb_ON; SEG7_Rc_ON; SEG7_Rd_ON; SEG7_Re_OFF;SEG7_Rf_OFF;SEG7_Rg_ON; SEG7_Rdp_OFF;
#define SEG7_R_4	SEG7_Ra_OFF;SEG7_Rb_ON; SEG7_Rc_ON; SEG7_Rd_OFF;SEG7_Re_OFF;SEG7_Rf_ON; SEG7_Rg_ON; SEG7_Rdp_OFF;
#define SEG7_R_5	SEG7_Ra_ON; SEG7_Rb_OFF;SEG7_Rc_ON; SEG7_Rd_ON; SEG7_Re_OFF;SEG7_Rf_ON; SEG7_Rg_ON; SEG7_Rdp_OFF;
#define SEG7_R_6	SEG7_Ra_ON; SEG7_Rb_OFF;SEG7_Rc_ON; SEG7_Rd_ON; SEG7_Re_ON; SEG7_Rf_ON; SEG7_Rg_ON; SEG7_Rdp_OFF;
#define SEG7_R_7	SEG7_Ra_ON; SEG7_Rb_ON; SEG7_Rc_ON; SEG7_Rd_OFF;SEG7_Re_OFF;SEG7_Rf_ON; SEG7_Rg_OFF;SEG7_Rdp_OFF;
#define SEG7_R_8	SEG7_Ra_ON; SEG7_Rb_ON; SEG7_Rc_ON; SEG7_Rd_ON; SEG7_Re_ON; SEG7_Rf_ON; SEG7_Rg_ON; SEG7_Rdp_OFF;
#define SEG7_R_9	SEG7_Ra_ON; SEG7_Rb_ON; SEG7_Rc_ON; SEG7_Rd_OFF;SEG7_Re_OFF;SEG7_Rf_ON; SEG7_Rg_ON; SEG7_Rdp_OFF;

#define SEG7_R_a	SEG7_Ra_ON; SEG7_Rb_ON; SEG7_Rc_ON; SEG7_Rd_ON; SEG7_Re_ON; SEG7_Rf_OFF;SEG7_Rg_ON; SEG7_Rdp_OFF;
#define SEG7_R_b	SEG7_Ra_OFF;SEG7_Rb_OFF;SEG7_Rc_ON; SEG7_Rd_ON; SEG7_Re_ON; SEG7_Rf_ON; SEG7_Rg_ON; SEG7_Rdp_OFF;
#define SEG7_R_e	SEG7_Ra_ON; SEG7_Rb_OFF;SEG7_Rc_OFF;SEG7_Rd_ON; SEG7_Re_ON ;SEG7_Rf_ON; SEG7_Rg_ON; SEG7_Rdp_OFF;
#define SEG7_R_f	SEG7_Ra_ON; SEG7_Rb_OFF;SEG7_Rc_OFF;SEG7_Rd_OFF;SEG7_Re_ON ;SEG7_Rf_ON; SEG7_Rg_ON; SEG7_Rdp_OFF;
#define SEG7_R_r	SEG7_Ra_ON; SEG7_Rb_ON; SEG7_Rc_ON; SEG7_Rd_OFF;SEG7_Re_ON; SEG7_Rf_ON; SEG7_Rg_ON; SEG7_Rdp_OFF;

/* for HEADER PIN*/
#define TEST_PIN57_ON	PDR18_P18_0=1
#define TEST_PIN57_OFF	PDR18_P18_0=0
#define TEST_PIN58_ON	PDR18_P18_1=1
#define TEST_PIN58_OFF	PDR18_P18_1=0
#define TEST_PIN59_ON	PDR18_P18_2=1
#define TEST_PIN59_OFF	PDR18_P18_2=0
#define TEST_PIN60_ON	PDR18_P18_4=1
#define TEST_PIN60_OFF	PDR18_P18_4=0
#define TEST_PIN61_ON	PDR18_P18_5=1
#define TEST_PIN61_OFF	PDR18_P18_5=0

/*! \fn DUXPortsInit()
 * \brief Initializes the the microcontroller ports.s * Output ports for handling the LEDS or 7SEG display are enabled. 
 * This is very micro controller specific, depending on the board setup
 * certain components like 7SEG might not be available.
 */
extern void DUXPortsInit();

#endif /*__DUX_PORTS_H__*/
