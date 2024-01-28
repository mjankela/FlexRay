/**     THIS SAMPLE CODE IS PROVIDED AS IS. FUJITSU MICROELECTRONICS       **/
/**  ACCEPTS NO RESPONSIBILITY OR LIABILITY FOR ANY ERRORS OR OMMISSIONS   **/
/*****************************************************************************
 *  Date   :  2009/04/20
 *  PROJECT:  FlexRay_Board
 *  CPU    :  MB91F465X
 *  Discpt :  Utility Definitions for FlexRay Demo program 
 *
 *  COPYRIGHT(c) 2009 Fujitsu Microelectronics Limited
 ****************************************************************************/
#ifndef _FLX_REGIST_DEFINES_H
#define _FLX_REGIST_DEFINES_H 

#include "..\h_file\dux_platform_types.h"

/* uint32 Structure for 32bit/16bit/8bit/1bit access */
typedef union
{  
    uint32 _word32;

    struct
    {   
        uint32 		_bit31 :1;
        uint32 		_bit30 :1;
        uint32 		_bit29 :1;
        uint32 		_bit28 :1;
        uint32 		_bit27 :1;
        uint32 		_bit26 :1;
        uint32 		_bit25 :1;
        uint32 		_bit24 :1;
        uint32 		_bit23 :1;
        uint32 		_bit22 :1;
        uint32 		_bit21 :1;
        uint32 		_bit20 :1;
        uint32 		_bit19 :1;
        uint32 		_bit18 :1;
        uint32 		_bit17 :1;
        uint32 		_bit16 :1;
        uint32 		_bit15 :1;
        uint32 		_bit14 :1;
        uint32 		_bit13 :1;
        uint32 		_bit12 :1;
        uint32 		_bit11 :1;
        uint32 		_bit10 :1;
        uint32 		_bit09 :1;
        uint32 		_bit08 :1;
        uint32 		_bit07 :1;
        uint32 		_bit06 :1;
        uint32 		_bit05 :1;
        uint32 		_bit04 :1;
        uint32 		_bit03 :1;
        uint32 		_bit02 :1;
        uint32 		_bit01 :1;
        uint32 		_bit00 :1;
    }bit_t;

    struct
    {   
        uint32 		_byte03 :8;
        uint32 		_byte02 :8;
        uint32 		_byte01 :8;
        uint32 		_byte00 :8;
    }byte_t;

    struct
    {   
        uint32 		_short01 :16;
        uint32 		_short00 :16;
    }short_t;

 }uint32REG;

/* POCS constants (CCSV) */
#define POCS_CONFIG                          0x00
#define POCS_READY                           0x01
#define POCS_NORMAL_ACTIVE                   0x02
#define POCS_NORMAL_PASSIVE                  0x03
#define POCS_HALT                            0x04
#define POCS_MONITOR_MODE                    0x05

/* Bit Mask */
#define MASK_BIT0   0x00000001  /* bit0  Mask */
#define MASK_BIT1   0x00000002  /* bit1  Mask */
#define MASK_BIT2   0x00000004  /* bit2  Mask */
#define MASK_BIT3   0x00000008  /* bit3  Mask */
#define MASK_BIT4   0x00000010  /* bit4  Mask */
#define MASK_BIT5   0x00000020  /* bit5  Mask */
#define MASK_BIT6   0x00000040  /* bit6  Mask */
#define MASK_BIT7   0x00000080  /* bit7  Mask */
#define MASK_BIT8   0x00000100  /* bit8  Mask */
#define MASK_BIT9   0x00000200  /* bit9  Mask */
#define MASK_BIT10  0x00000400  /* bit10 Mask */
#define MASK_BIT11  0x00000800  /* bit11 Mask */
#define MASK_BIT12  0x00001000  /* bit12 Mask */
#define MASK_BIT13  0x00002000  /* bit13 Mask */
#define MASK_BIT14  0x00004000  /* bit14 Mask */
#define MASK_BIT15  0x00008000  /* bit15 Mask */
#define MASK_BIT16  0x00010000  /* bit16 Mask */
#define MASK_BIT17  0x00020000  /* bit17 Mask */
#define MASK_BIT18  0x00040000  /* bit18 Mask */
#define MASK_BIT19  0x00080000  /* bit19 Mask */
#define MASK_BIT20  0x00100000  /* bit20 Mask */
#define MASK_BIT21  0x00200000  /* bit21 Mask */
#define MASK_BIT22  0x00400000  /* bit22 Mask */
#define MASK_BIT23  0x00800000  /* bit23 Mask */
#define MASK_BIT24  0x01000000  /* bit24 Mask */
#define MASK_BIT25  0x02000000  /* bit25 Mask */
#define MASK_BIT26  0x04000000  /* bit26 Mask */
#define MASK_BIT27  0x08000000  /* bit27 Mask */
#define MASK_BIT28  0x10000000  /* bit28 Mask */
#define MASK_BIT29  0x20000000  /* bit29 Mask */
#define MASK_BIT30  0x40000000  /* bit30 Mask */
#define MASK_BIT31  0x80000000  /* bit31 Mask */

/* Word Number  */
#define WORD_NUM00      0 /* Word 00 (LSB)  */
#define WORD_NUM01      1 /* Word 01        */
#define WORD_NUM02      2 /* Word 02        */
#define WORD_NUM03      3 /* Word03 (MSB)   */

/* NDAT register Number  */
#define NDAT_REG_NUM 4    /* NDAT1-NDAT4  */

/* Bit Number  */
#define BIT_NUM_1       1   /*  1 Bit */
#define BIT_NUM_8       8   /*  8 Bit */
#define BIT_NUM_16      16  /* 16 Bit */
#define BIT_NUM_32      32  /* 32 Bit */

#endif  /*_FLX_REGIST_DEFINES_H*/ 
