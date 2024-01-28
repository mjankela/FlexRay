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

/*! \file dux_flexray.h 
 *	\brief FlexRay module routines. *	This public interface routines for FlexRay should keep FlexRay simple and efficient.
 *  Besides of initialization routines, it contains routines for checking the controller
 *  status as simple frame transfer. */

#ifndef __DUX_FLEXRAY_H__
#define __DUX_FLEXRAY_H__

/*! \fn DUXFXControllerName(void)
 * \brief Returns the controller name from the design.
 * Returns the name of the controller based on your design file.
 * For example: Left Front Node, Bracking node etc. */
extern char *DUXFXControllerName();

/* FlexRay initialization and startup */
/*! \fn DUXFXInit(void)
 * \brief FlexRay controller initialization.
 * Prepares the FlexRay controller. Reads and configures
 * the data from the design file. Brings the controller 
 * from state "Config" to "Ready for startup". */
extern void  DUXFXInit(); 

/*! \fn DUXFXStartup(void)
 * \brief FlexRay controller startup.
 * Performs and tries a startup. Depending of the controller
 * settings will handle also multiple startups. Goal 
 * is to bring the controllers among each other into synchronization. */
extern void  DUXFXStartup(void); 

/*! \fn DUXFXSendData(uint16 slotID, uint8 channel, const uint8* data, uint8 payload)
 * \brief FlexRay frame transfer.
 * After controller startup and synchronisation this routine
 * prepares a FlexRay frame transfer. Input parameters
 * are the wished slot identifier, the wished transfer channel (will match against the design
 * if equivalent buffers are available), the data to transmit and the payload to transmit.
 * Please take care that the controller payload configuration matches so that no buffer overflows
 * or data mismatch can occure. */
extern boolean DUXFXSendData(uint16 slotID, uint8 channel, const uint8* data, uint8 payload); 

/*! \fn DUXFXReceiveData(uint8 *data, uint8 payload, uint16 *frameid, uint8 *channel)
 * \brief FlexRay frame reception.
 * Informs you about any received frames.
 * As output parameters the provided data array will be filled with the wished data.
 * Only amonth of data up to payload is filled. Please assure that you do not overestimate
 * the buffer size and that your design can handle the amonth of wished data.
 * Further the frameid will be filled with the received frame identifier number and
 * information about on which channel it was received will be also delivered. */
extern boolean DUXFXReceiveData(uint8 *data, uint8 payload, uint16 *frameid, uint8 *channel); 

/*! \fn DUXFXCCStatusCheck(void)
 * \brief FlexRay controller status.
 * Returns the current status of the controller.
 * Following values are available:
 * - DEFAULT_CONFIG	0x0 
 * - READY			0x1 
 * - NORMAL_ACTIVE	0x2 
 * - NORMAL_PASSIVE	0x3 
 * - HALT			0x4 
 * - MONITOR_MODE	0x5 
 * - CONFIG			0x7  */
extern uint8 DUXFXCCStatusCheck(void); 

/*! \fn DUXFXGetGlobalTime(uint16 *macroTick, uint8 *cycle)
 * \brief FlexRay controller global time and cycle.
 * Returns the current global time (in macroticks) and cycle count of the controller. */
extern void  DUXFXGetGlobalTime(uint16 *macroTick, uint8 *cycle); /* public */

#endif /*__DUX_FLEXRAY_H__*/
