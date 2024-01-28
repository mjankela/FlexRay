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

/************************************************************/
/*  DuxSolutions Network Designer::FlexRay Baby Edition 	*/
/*  File created Sun Aug 14 16:24:58 2011					*/
/*  Product version 0.9996									*/
/************************************************************/

#ifndef __DUX_FLEXRAYCLUSTERCONFIG_H__
#define __DUX_FLEXRAYCLUSTERCONFIG_H__

/* Cluster specific checks */

/* SUC Register Setting value */
/* relevant CMD values */
#define DUX_SUC_CMD_WAKEUP				(0x3) /* WAKEUP State request */
#define DUX_SUC_CMD_RUN					(0x4) /* STARTUP State request*/
#define DUX_SUC_CMD_ALLOW_COLDSTART		(0x9) /* Accept COLDSTART inhibit */

/* CC Status Vector*/
/* relevant POCSÅFPOC states */
#define DUX_CCSV_POCS_READY				(0x1) /* READY */
#define DUX_CCSV_POCS_NML_ACT			(0x2) /* NORMAL_ACTIVE */

/* Cluster specific register settings */
#define DUX_FLX_INIT_SUCC3		(0x000000fe) 
#define DUX_FLX_INIT_NEMC		(0x00000000)
#define DUX_FLX_INIT_PRTC2		(0x3cb4373b) 
#define DUX_FLX_INIT_GTUC2		(0x000f03e8) 
#define DUX_FLX_INIT_GTUC4		(0x03e003dd) 
#define DUX_FLX_INIT_GTUC7		(0x00020022) 
#define DUX_FLX_INIT_GTUC8		(0x007c0007)
#define DUX_FLX_INIT_GTUC9		(0x00010303) 

/* Cluster specific FlexRay Message RAM Setting for schedule configuration*/
#define	DUX_FLX_MSGOBJ_NOUSE	(0)
#define	DUX_FLX_MSGOBJ_USE		(1)

#define DUX_CHANNEL_A			(0)
#define DUX_CHANNEL_B			(1)
#define DUX_CHANNEL_AB			(2)

#define DUX_STATIC_PAYLOAD_MAX		(8) /* in word (16 bit or 2 byte) */
#define DUX_DYNAMIC_PAYLOAD_MAX		(2) /* in word (16 bit or 2 byte) */

typedef struct {
	uint8	msgval; 	/* buffer in use */
	uint8	channel; 	/* channel 0=A, 1=B, 2=AB*/
	uint16	slotID;		/* slot number */		
	uint32	WRHS1;  
	uint32	WRHS2;
	uint32	WRHS3;
} DUX_TYP_FLX_MSGOBJ;			/* buffer register definition saved in an array */		

/********************************/
/* Node Name: New Node 1   	*/
/* Identifier: 1 	*/
/********************************/
#ifdef NODE_1

#define DUX_NODE_NAME "New Node 1"

/* Node specific register settings */
#define DUX_FLX_INIT_MHDC		(0x00790008)
#define DUX_FLX_INIT_GTUC1		(0x00009c40)
#define DUX_FLX_INIT_GTUC3		(0x03031616)
#define DUX_FLX_INIT_GTUC5		(0x10010202)
#define DUX_FLX_INIT_GTUC6		(0x0079008d)
#define DUX_FLX_INIT_GTUC10		(0x0079008b)
#define DUX_FLX_INIT_SUCC1		(0x0c81fb01)
#define DUX_FLX_READY_SUCC1		(0x0c81fb02)
#define DUX_FLX_INIT_SUCC2		(0x0f013972)
#define DUX_FLX_INIT_PRTC1		(0xfd2d063f)
#define DUX_FLX_INIT_GTUC11		(0x00000000)
#define DUX_FLX_INIT_MRC		(0x00058004) 
#define DUX_FLX_INIT_FRF		(0x00000003)
#define DUX_FLX_INIT_FRFM		(0x00000000)

#define DUX_MSG_BUFF_NUM 			(6) /* amount of message buffers */
#define DUX_MSG_BUFF_DYN_START  	(1) /* start of dynamic buffers */
#define DUX_MSG_BUFF_REC_START  	(3) /* start of reception buffers */
#define DUX_MSG_BUFF_REC_DYN_START 	(4) /* start of dynamic reception buffers */
#define DUX_MSG_MAX_NUM 			(6) /* the number of the last message buffer (OBSOLETE) */

/*****************************************************************/
/* Message buffer configuration                                  */
/* Note: Eray addresses can be only addressed within             */
/*       32 bit boundaries while payload is given in 16bit       */
/*****************************************************************/
const DUX_TYP_FLX_MSGOBJ typ_FLX_msgobj[DUX_MSG_MAX_NUM] = 
{
	/* Static Sending buffers */
	/*----USE/NO USE----,-Channel-,-SlotID-,-----WRHS1----,-----WRHS2----, -----WRHS3---- */
    { DUX_FLX_MSGOBJ_USE,    2,    0001,    0x17000001,    0x0008011b,    0x00000030 }, /* Sending in buffer number 0*/
    /* Dynamic Sender buffer setup */
    { DUX_FLX_MSGOBJ_USE,    0,    0003,    0x15000003,    0x0002027f,    0x00000034 }, /* Sending in buffer number 1*/
    { DUX_FLX_MSGOBJ_USE,    1,    0003,    0x16000003,    0x0002027f,    0x00000035 }, /* Sending in buffer number 2 [channel B] */

	/* Static Receiving buffers */
	/*----USE/NO USE----,-Channel-,-SlotID-,-----WRHS1----,-----WRHS2----, -----WRHS3---- */
    { DUX_FLX_MSGOBJ_USE,    2,    0002,    0x23000002,    0x00080000,    0x00000036 }, /* Reception in buffer number 3*/
    /* Dynamic Reception buffer setup */
    { DUX_FLX_MSGOBJ_USE,    0,    0004,    0x21000004,    0x00020000,    0x0000003a }, /* Reception in buffer number 4*/
    { DUX_FLX_MSGOBJ_USE,    1,    0004,    0x22000004,    0x00020000,    0x0000003b }, /* Reception in buffer number 5 [channel B] */

};	

#endif  /* NODE_1 */


/********************************/
/* Node Name: New Node 2   	*/
/* Identifier: 2 	*/
/********************************/
#ifdef NODE_2

#define DUX_NODE_NAME "New Node 2"

/* Node specific register settings */
#define DUX_FLX_INIT_MHDC		(0x00790008)
#define DUX_FLX_INIT_GTUC1		(0x00009c40)
#define DUX_FLX_INIT_GTUC3		(0x03031616)
#define DUX_FLX_INIT_GTUC5		(0x10010202)
#define DUX_FLX_INIT_GTUC6		(0x0079008d)
#define DUX_FLX_INIT_GTUC10		(0x0079008b)
#define DUX_FLX_INIT_SUCC1		(0x0c81fb01)
#define DUX_FLX_READY_SUCC1		(0x0c81fb02)
#define DUX_FLX_INIT_SUCC2		(0x0f013972)
#define DUX_FLX_INIT_PRTC1		(0xfd2d063f)
#define DUX_FLX_INIT_GTUC11		(0x00000000)
#define DUX_FLX_INIT_MRC		(0x00058004) 
#define DUX_FLX_INIT_FRF		(0x00000003)
#define DUX_FLX_INIT_FRFM		(0x00000000)

#define DUX_MSG_BUFF_NUM 			(6) /* amount of message buffers */
#define DUX_MSG_BUFF_DYN_START  	(1) /* start of dynamic buffers */
#define DUX_MSG_BUFF_REC_START  	(3) /* start of reception buffers */
#define DUX_MSG_BUFF_REC_DYN_START 	(4) /* start of dynamic reception buffers */
#define DUX_MSG_MAX_NUM 			(6) /* the number of the last message buffer (OBSOLETE) */

/*****************************************************************/
/* Message buffer configuration                                  */
/* Note: Eray addresses can be only addressed within             */
/*       32 bit boundaries while payload is given in 16bit       */
/*****************************************************************/
const DUX_TYP_FLX_MSGOBJ typ_FLX_msgobj[DUX_MSG_MAX_NUM] = 
{
	/* Static Sending buffers */
	/*----USE/NO USE----,-Channel-,-SlotID-,-----WRHS1----,-----WRHS2----, -----WRHS3---- */
    { DUX_FLX_MSGOBJ_USE,    2,    0002,    0x17000002,    0x00080304,    0x00000030 }, /* Sending in buffer number 0*/
    /* Dynamic Sender buffer setup */
    { DUX_FLX_MSGOBJ_USE,    0,    0004,    0x15000004,    0x000207b4,    0x00000034 }, /* Sending in buffer number 1*/
    { DUX_FLX_MSGOBJ_USE,    1,    0004,    0x16000004,    0x000207b4,    0x00000035 }, /* Sending in buffer number 2 [channel B] */

	/* Static Receiving buffers */
	/*----USE/NO USE----,-Channel-,-SlotID-,-----WRHS1----,-----WRHS2----, -----WRHS3---- */
    { DUX_FLX_MSGOBJ_USE,    2,    0001,    0x23000001,    0x00080000,    0x00000036 }, /* Reception in buffer number 3*/
    /* Dynamic Reception buffer setup */
    { DUX_FLX_MSGOBJ_USE,    0,    0003,    0x21000003,    0x00020000,    0x0000003a }, /* Reception in buffer number 4*/
    { DUX_FLX_MSGOBJ_USE,    1,    0003,    0x22000003,    0x00020000,    0x0000003b }, /* Reception in buffer number 5 [channel B] */

};	

#endif  /* NODE_2 */



#endif
