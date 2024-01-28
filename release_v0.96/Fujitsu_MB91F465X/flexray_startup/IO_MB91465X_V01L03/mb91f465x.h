/*
 MB91F465X Series I/O register declaration file V01L03
 ALL RIGHTS RESERVED, COPYRIGHT (C) FUJITSU MICROELECTRONICS LIMITED 2008
 LICENSED MATERIAL - PROGRAM PROPERTY OF FUJITSU MICROELECTRONICS LIMITED
*/


#ifndef __MB91F465X_H__
#define __MB91F465X_H__

#ifdef  __IO_NEAR
#ifdef  __IO_FAR
#error "__IO_NEAR and __IO_FAR must not be defined at the same time"
#else
#define ___IOWIDTH __near
#endif
#else
#ifdef __IO_FAR
#define ___IOWIDTH __far
#else                               /* specified by memory model */
#define ___IOWIDTH
#endif
#endif

#ifdef  __IO_DEFINE
#define __IO_EXTERN __io
#define __IO_EXTENDED volatile ___IOWIDTH
#else
#define __IO_EXTERN   extern __io      /* for data, which can have __io */
#define __IO_EXTENDED extern volatile ___IOWIDTH
#endif

typedef unsigned char        __BYTE;
typedef unsigned short       __HWORD;
typedef unsigned long        __WORD;
typedef const unsigned short __HWORD_READ;

#define	CONSTANT_0	(0)
#define	CONSTANT_1	(1)
#define	CONSTANT_2	(2)
#define	CONSTANT_3	(3)
#define	CONSTANT_4	(4)
#define	CONSTANT_5	(5)
#define	CONSTANT_6	(6)
#define	CONSTANT_7	(7)
#define	CONSTANT_8	(8)
#define	CONSTANT_9	(9)
#define	CONSTANT_10	(10)
#define	CONSTANT_11	(11)
#define	CONSTANT_12	(12)
#define	CONSTANT_13	(13)
#define	CONSTANT_14	(14)
#define	CONSTANT_15	(15)
#define	CONSTANT_16	(16)
#define	CONSTANT_17	(17)
#define	CONSTANT_18	(18)
#define	CONSTANT_19	(19)
#define	CONSTANT_20	(20)
#define	CONSTANT_21	(21)
#define	CONSTANT_22	(22)
#define	CONSTANT_23	(23)
#define	CONSTANT_24	(24)
#define	CONSTANT_25	(25)
#define	CONSTANT_26	(26)
#define	CONSTANT_27	(27)
#define	CONSTANT_28	(28)
#define	CONSTANT_29	(29)
#define	CONSTANT_30	(30)
#define	CONSTANT_31	(31)
#define	CONSTANT_32	(32)
#define	CONSTANT_33	(33)
#define	CONSTANT_34	(34)
#define	CONSTANT_35	(35)
#define	CONSTANT_36	(36)
#define	CONSTANT_37	(37)
#define	CONSTANT_38	(38)
#define	CONSTANT_39	(39)
#define	CONSTANT_40	(40)
#define	CONSTANT_41	(41)
#define	CONSTANT_42	(42)
#define	CONSTANT_43	(43)
#define	CONSTANT_44	(44)
#define	CONSTANT_45	(45)
#define	CONSTANT_46	(46)
#define	CONSTANT_47	(47)
#define	CONSTANT_48	(48)
#define	CONSTANT_49	(49)
#define	CONSTANT_50	(50)
#define	CONSTANT_51	(51)
#define	CONSTANT_52	(52)
#define	CONSTANT_53	(53)
#define	CONSTANT_54	(54)
#define	CONSTANT_55	(55)
#define	CONSTANT_56	(56)
#define	CONSTANT_57	(57)
#define	CONSTANT_58	(58)
#define	CONSTANT_59	(59)
#define	CONSTANT_60	(60)
#define	CONSTANT_61	(61)
#define	CONSTANT_62	(62)
#define	CONSTANT_63	(63)
#define	CONSTANT_64	(64)


#ifdef __IO_DEFINE
#pragma segment IO=IO_PDR14, locate=0xE
#endif

typedef union {
	__BYTE	byte;
	struct {
			__BYTE	P14_7:1;
			__BYTE	P14_6:1;
			__BYTE	P14_5:1;
			__BYTE	P14_4:1;
			__BYTE	P14_3:1;
			__BYTE	P14_2:1;
			__BYTE	P14_1:1;
			__BYTE	P14_0:1;
	} bit;
	struct {
			__BYTE	P14_7:1;
			__BYTE	P14_6:1;
			__BYTE	P14_5:1;
			__BYTE	P14_4:1;
			__BYTE	P14_3:1;
			__BYTE	P14_2:1;
			__BYTE	P14_1:1;
			__BYTE	P14_0:1;
	} bitc;
} PDR14STR;

__IO_EXTERN	  PDR14STR	IO_PDR14;
#define	_pdr14		(IO_PDR14)
#define	PDR14		(IO_PDR14.byte)
#define	PDR14_P14_7  	(IO_PDR14.bit.P14_7)
#define	PDR14_P14_6  	(IO_PDR14.bit.P14_6)
#define	PDR14_P14_5  	(IO_PDR14.bit.P14_5)
#define	PDR14_P14_4  	(IO_PDR14.bit.P14_4)
#define	PDR14_P14_3  	(IO_PDR14.bit.P14_3)
#define	PDR14_P14_2  	(IO_PDR14.bit.P14_2)
#define	PDR14_P14_1  	(IO_PDR14.bit.P14_1)
#define	PDR14_P14_0  	(IO_PDR14.bit.P14_0)

#ifdef __IO_DEFINE
#pragma segment IO=IO_PDR15, locate=0xF
#endif

typedef union {
	__BYTE	byte;
	struct {
			__BYTE	RESV0:1;
			__BYTE	RESV1:1;
			__BYTE	P15_5:1;
			__BYTE	P15_4:1;
			__BYTE	P15_3:1;
			__BYTE	P15_2:1;
			__BYTE	P15_1:1;
			__BYTE	P15_0:1;
	} bit;
	struct {
			__BYTE	RESV0:1;
			__BYTE	RESV1:1;
			__BYTE	P15_5:1;
			__BYTE	P15_4:1;
			__BYTE	P15_3:1;
			__BYTE	P15_2:1;
			__BYTE	P15_1:1;
			__BYTE	P15_0:1;
	} bitc;
} PDR15STR;

__IO_EXTERN	  PDR15STR	IO_PDR15;
#define	_pdr15		(IO_PDR15)
#define	PDR15		(IO_PDR15.byte)
#define	PDR15_P15_5  	(IO_PDR15.bit.P15_5)
#define	PDR15_P15_4  	(IO_PDR15.bit.P15_4)
#define	PDR15_P15_3  	(IO_PDR15.bit.P15_3)
#define	PDR15_P15_2  	(IO_PDR15.bit.P15_2)
#define	PDR15_P15_1  	(IO_PDR15.bit.P15_1)
#define	PDR15_P15_0  	(IO_PDR15.bit.P15_0)

#ifdef __IO_DEFINE
#pragma segment IO=IO_PDR16, locate=0x10
#endif

typedef union {
	__BYTE	byte;
	struct {
			__BYTE	P16_7:1;
			__BYTE	RESV1:1;
			__BYTE	RESV2:1;
			__BYTE	RESV3:1;
			__BYTE	P16_3:1;
			__BYTE	P16_2:1;
			__BYTE	P16_1:1;
			__BYTE	P16_0:1;
	} bit;
	struct {
			__BYTE	P16_7:1;
			__BYTE	RESV1:1;
			__BYTE	RESV2:1;
			__BYTE	RESV3:1;
			__BYTE	P16_3:1;
			__BYTE	P16_2:1;
			__BYTE	P16_1:1;
			__BYTE	P16_0:1;
	} bitc;
} PDR16STR;

__IO_EXTERN	  PDR16STR	IO_PDR16;
#define	_pdr16		(IO_PDR16)
#define	PDR16		(IO_PDR16.byte)
#define	PDR16_P16_7  	(IO_PDR16.bit.P16_7)
#define	PDR16_P16_3  	(IO_PDR16.bit.P16_3)
#define	PDR16_P16_2  	(IO_PDR16.bit.P16_2)
#define	PDR16_P16_1  	(IO_PDR16.bit.P16_1)
#define	PDR16_P16_0  	(IO_PDR16.bit.P16_0)

#ifdef __IO_DEFINE
#pragma segment IO=IO_PDR17, locate=0x11
#endif

typedef union {
	__BYTE	byte;
	struct {
			__BYTE	P17_7:1;
			__BYTE	P17_6:1;
			__BYTE	P17_5:1;
			__BYTE	P17_4:1;
			__BYTE	P17_3:1;
			__BYTE	P17_2:1;
			__BYTE	P17_1:1;
			__BYTE	P17_0:1;
	} bit;
	struct {
			__BYTE	P17_7:1;
			__BYTE	P17_6:1;
			__BYTE	P17_5:1;
			__BYTE	P17_4:1;
			__BYTE	P17_3:1;
			__BYTE	P17_2:1;
			__BYTE	P17_1:1;
			__BYTE	P17_0:1;
	} bitc;
} PDR17STR;

__IO_EXTERN	  PDR17STR	IO_PDR17;
#define	_pdr17		(IO_PDR17)
#define	PDR17		(IO_PDR17.byte)
#define	PDR17_P17_7  	(IO_PDR17.bit.P17_7)
#define	PDR17_P17_6  	(IO_PDR17.bit.P17_6)
#define	PDR17_P17_5  	(IO_PDR17.bit.P17_5)
#define	PDR17_P17_4  	(IO_PDR17.bit.P17_4)
#define	PDR17_P17_3  	(IO_PDR17.bit.P17_3)
#define	PDR17_P17_2  	(IO_PDR17.bit.P17_2)
#define	PDR17_P17_1  	(IO_PDR17.bit.P17_1)
#define	PDR17_P17_0  	(IO_PDR17.bit.P17_0)

#ifdef __IO_DEFINE
#pragma segment IO=IO_PDR18, locate=0x12
#endif

typedef union {
	__BYTE	byte;
	struct {
			__BYTE	RESV0:1;
			__BYTE	P18_6:1;
			__BYTE	P18_5:1;
			__BYTE	P18_4:1;
			__BYTE	RESV4:1;
			__BYTE	P18_2:1;
			__BYTE	P18_1:1;
			__BYTE	P18_0:1;
	} bit;
	struct {
			__BYTE	RESV0:1;
			__BYTE	P18_6:1;
			__BYTE	P18_5:1;
			__BYTE	P18_4:1;
			__BYTE	RESV4:1;
			__BYTE	P18_2:1;
			__BYTE	P18_1:1;
			__BYTE	P18_0:1;
	} bitc;
} PDR18STR;

__IO_EXTERN	  PDR18STR	IO_PDR18;
#define	_pdr18		(IO_PDR18)
#define	PDR18		(IO_PDR18.byte)
#define	PDR18_P18_6  	(IO_PDR18.bit.P18_6)
#define	PDR18_P18_5  	(IO_PDR18.bit.P18_5)
#define	PDR18_P18_4  	(IO_PDR18.bit.P18_4)
#define	PDR18_P18_2  	(IO_PDR18.bit.P18_2)
#define	PDR18_P18_1  	(IO_PDR18.bit.P18_1)
#define	PDR18_P18_0  	(IO_PDR18.bit.P18_0)

#ifdef __IO_DEFINE
#pragma segment IO=IO_PDR19, locate=0x13
#endif

typedef union {
	__BYTE	byte;
	struct {
			__BYTE	RESV0:1;
			__BYTE	RESV1:1;
			__BYTE	RESV2:1;
			__BYTE	RESV3:1;
			__BYTE	RESV4:1;
			__BYTE	P19_2:1;
			__BYTE	P19_1:1;
			__BYTE	P19_0:1;
	} bit;
	struct {
			__BYTE	RESV0:1;
			__BYTE	RESV1:1;
			__BYTE	RESV2:1;
			__BYTE	RESV3:1;
			__BYTE	RESV4:1;
			__BYTE	P19_2:1;
			__BYTE	P19_1:1;
			__BYTE	P19_0:1;
	} bitc;
} PDR19STR;

__IO_EXTERN	  PDR19STR	IO_PDR19;
#define	_pdr19		(IO_PDR19)
#define	PDR19		(IO_PDR19.byte)
#define	PDR19_P19_2  	(IO_PDR19.bit.P19_2)
#define	PDR19_P19_1  	(IO_PDR19.bit.P19_1)
#define	PDR19_P19_0  	(IO_PDR19.bit.P19_0)

#ifdef __IO_DEFINE
#pragma segment IO=IO_PDR22, locate=0x16
#endif

typedef union {
	__BYTE	byte;
	struct {
			__BYTE	RESV0:1;
			__BYTE	RESV1:1;
			__BYTE	P22_5:1;
			__BYTE	P22_4:1;
			__BYTE	RESV4:1;
			__BYTE	RESV5:1;
			__BYTE	P22_1:1;
			__BYTE	P22_0:1;
	} bit;
	struct {
			__BYTE	RESV0:1;
			__BYTE	RESV1:1;
			__BYTE	P22_5:1;
			__BYTE	P22_4:1;
			__BYTE	RESV4:1;
			__BYTE	RESV5:1;
			__BYTE	P22_1:1;
			__BYTE	P22_0:1;
	} bitc;
} PDR22STR;

__IO_EXTERN	  PDR22STR	IO_PDR22;
#define	_pdr22		(IO_PDR22)
#define	PDR22		(IO_PDR22.byte)
#define	PDR22_P22_5  	(IO_PDR22.bit.P22_5)
#define	PDR22_P22_4  	(IO_PDR22.bit.P22_4)
#define	PDR22_P22_1  	(IO_PDR22.bit.P22_1)
#define	PDR22_P22_0  	(IO_PDR22.bit.P22_0)

#ifdef __IO_DEFINE
#pragma segment IO=IO_PDR23, locate=0x17
#endif

typedef union {
	__BYTE	byte;
	struct {
			__BYTE	RESV0:1;
			__BYTE	RESV1:1;
			__BYTE	RESV2:1;
			__BYTE	RESV3:1;
			__BYTE	RESV4:1;
			__BYTE	RESV5:1;
			__BYTE	P23_1:1;
			__BYTE	P23_0:1;
	} bit;
	struct {
			__BYTE	RESV0:1;
			__BYTE	RESV1:1;
			__BYTE	RESV2:1;
			__BYTE	RESV3:1;
			__BYTE	RESV4:1;
			__BYTE	RESV5:1;
			__BYTE	P23_1:1;
			__BYTE	P23_0:1;
	} bitc;
} PDR23STR;

__IO_EXTERN	  PDR23STR	IO_PDR23;
#define	_pdr23		(IO_PDR23)
#define	PDR23		(IO_PDR23.byte)
#define	PDR23_P23_1  	(IO_PDR23.bit.P23_1)
#define	PDR23_P23_0  	(IO_PDR23.bit.P23_0)

#ifdef __IO_DEFINE
#pragma segment IO=IO_PDR24, locate=0x18
#endif

typedef union {
	__BYTE	byte;
	struct {
			__BYTE	P24_7:1;
			__BYTE	P24_6:1;
			__BYTE	P24_5:1;
			__BYTE	P24_4:1;
			__BYTE	P24_3:1;
			__BYTE	P24_2:1;
			__BYTE	P24_1:1;
			__BYTE	P24_0:1;
	} bit;
	struct {
			__BYTE	P24_7:1;
			__BYTE	P24_6:1;
			__BYTE	P24_5:1;
			__BYTE	P24_4:1;
			__BYTE	P24_3:1;
			__BYTE	P24_2:1;
			__BYTE	P24_1:1;
			__BYTE	P24_0:1;
	} bitc;
} PDR24STR;

__IO_EXTERN	  PDR24STR	IO_PDR24;
#define	_pdr24		(IO_PDR24)
#define	PDR24		(IO_PDR24.byte)
#define	PDR24_P24_7  	(IO_PDR24.bit.P24_7)
#define	PDR24_P24_6  	(IO_PDR24.bit.P24_6)
#define	PDR24_P24_5  	(IO_PDR24.bit.P24_5)
#define	PDR24_P24_4  	(IO_PDR24.bit.P24_4)
#define	PDR24_P24_3  	(IO_PDR24.bit.P24_3)
#define	PDR24_P24_2  	(IO_PDR24.bit.P24_2)
#define	PDR24_P24_1  	(IO_PDR24.bit.P24_1)
#define	PDR24_P24_0  	(IO_PDR24.bit.P24_0)

#ifdef __IO_DEFINE
#pragma segment IO=IO_PDR27, locate=0x1B
#endif

typedef union {
	__BYTE	byte;
	struct {
			__BYTE	RESV0:1;
			__BYTE	RESV1:1;
			__BYTE	RESV2:1;
			__BYTE	RESV3:1;
			__BYTE	P27_3:1;
			__BYTE	P27_2:1;
			__BYTE	P27_1:1;
			__BYTE	P27_0:1;
	} bit;
	struct {
			__BYTE	RESV0:1;
			__BYTE	RESV1:1;
			__BYTE	RESV2:1;
			__BYTE	RESV3:1;
			__BYTE	P27_3:1;
			__BYTE	P27_2:1;
			__BYTE	P27_1:1;
			__BYTE	P27_0:1;
	} bitc;
} PDR27STR;

__IO_EXTERN	  PDR27STR	IO_PDR27;
#define	_pdr27		(IO_PDR27)
#define	PDR27		(IO_PDR27.byte)
#define	PDR27_P27_3  	(IO_PDR27.bit.P27_3)
#define	PDR27_P27_2  	(IO_PDR27.bit.P27_2)
#define	PDR27_P27_1  	(IO_PDR27.bit.P27_1)
#define	PDR27_P27_0  	(IO_PDR27.bit.P27_0)

#ifdef __IO_DEFINE
#pragma segment IO=IO_PDR28, locate=0x1C
#endif

typedef union {
	__BYTE	byte;
	struct {
			__BYTE	RESV0:1;
			__BYTE	RESV1:1;
			__BYTE	RESV2:1;
			__BYTE	P28_4:1;
			__BYTE	P28_3:1;
			__BYTE	P28_2:1;
			__BYTE	P28_1:1;
			__BYTE	P28_0:1;
	} bit;
	struct {
			__BYTE	RESV0:1;
			__BYTE	RESV1:1;
			__BYTE	RESV2:1;
			__BYTE	P28_4:1;
			__BYTE	P28_3:1;
			__BYTE	P28_2:1;
			__BYTE	P28_1:1;
			__BYTE	P28_0:1;
	} bitc;
} PDR28STR;

__IO_EXTERN	  PDR28STR	IO_PDR28;
#define	_pdr28		(IO_PDR28)
#define	PDR28		(IO_PDR28.byte)
#define	PDR28_P28_4  	(IO_PDR28.bit.P28_4)
#define	PDR28_P28_3  	(IO_PDR28.bit.P28_3)
#define	PDR28_P28_2  	(IO_PDR28.bit.P28_2)
#define	PDR28_P28_1  	(IO_PDR28.bit.P28_1)
#define	PDR28_P28_0  	(IO_PDR28.bit.P28_0)

#ifdef __IO_DEFINE
#pragma segment IO=IO_PDR29, locate=0x1D
#endif

typedef union {
	__BYTE	byte;
	struct {
			__BYTE	P29_7:1;
			__BYTE	P29_6:1;
			__BYTE	P29_5:1;
			__BYTE	P29_4:1;
			__BYTE	P29_3:1;
			__BYTE	P29_2:1;
			__BYTE	P29_1:1;
			__BYTE	P29_0:1;
	} bit;
	struct {
			__BYTE	P29_7:1;
			__BYTE	P29_6:1;
			__BYTE	P29_5:1;
			__BYTE	P29_4:1;
			__BYTE	P29_3:1;
			__BYTE	P29_2:1;
			__BYTE	P29_1:1;
			__BYTE	P29_0:1;
	} bitc;
} PDR29STR;

__IO_EXTERN	  PDR29STR	IO_PDR29;
#define	_pdr29		(IO_PDR29)
#define	PDR29		(IO_PDR29.byte)
#define	PDR29_P29_7  	(IO_PDR29.bit.P29_7)
#define	PDR29_P29_6  	(IO_PDR29.bit.P29_6)
#define	PDR29_P29_5  	(IO_PDR29.bit.P29_5)
#define	PDR29_P29_4  	(IO_PDR29.bit.P29_4)
#define	PDR29_P29_3  	(IO_PDR29.bit.P29_3)
#define	PDR29_P29_2  	(IO_PDR29.bit.P29_2)
#define	PDR29_P29_1  	(IO_PDR29.bit.P29_1)
#define	PDR29_P29_0  	(IO_PDR29.bit.P29_0)

#ifdef __IO_DEFINE
#pragma segment IO=IO_PDR31, locate=0x1F
#endif

typedef union {
	__BYTE	byte;
	struct {
			__BYTE	RESV0:1;
			__BYTE	P31_6:1;
			__BYTE	P31_5:1;
			__BYTE	P31_4:1;
			__BYTE	RESV4:1;
			__BYTE	P31_2:1;
			__BYTE	P31_1:1;
			__BYTE	P31_0:1;
	} bit;
	struct {
			__BYTE	RESV0:1;
			__BYTE	P31_6:1;
			__BYTE	P31_5:1;
			__BYTE	P31_4:1;
			__BYTE	RESV4:1;
			__BYTE	P31_2:1;
			__BYTE	P31_1:1;
			__BYTE	P31_0:1;
	} bitc;
} PDR31STR;

__IO_EXTERN	  PDR31STR	IO_PDR31;
#define	_pdr31		(IO_PDR31)
#define	PDR31		(IO_PDR31.byte)
#define	PDR31_P31_6  	(IO_PDR31.bit.P31_6)
#define	PDR31_P31_5  	(IO_PDR31.bit.P31_5)
#define	PDR31_P31_4  	(IO_PDR31.bit.P31_4)
#define	PDR31_P31_2  	(IO_PDR31.bit.P31_2)
#define	PDR31_P31_1  	(IO_PDR31.bit.P31_1)
#define	PDR31_P31_0  	(IO_PDR31.bit.P31_0)

#ifdef __IO_DEFINE
#pragma segment IO=IO_EIRR0, locate=0x30
#endif

typedef union {
	__BYTE	byte;
	struct {
			__BYTE	ER7:1;
			__BYTE	ER6:1;
			__BYTE	ER5:1;
			__BYTE	ER4:1;
			__BYTE	ER3:1;
			__BYTE	ER2:1;
			__BYTE	ER1:1;
			__BYTE	ER0:1;
	} bit;
	struct {
			__BYTE	ER7:1;
			__BYTE	ER6:1;
			__BYTE	ER5:1;
			__BYTE	ER4:1;
			__BYTE	ER3:1;
			__BYTE	ER2:1;
			__BYTE	ER1:1;
			__BYTE	ER0:1;
	} bitc;
} EIRR0STR;

__IO_EXTERN	  EIRR0STR	IO_EIRR0;
#define	_eirr0		(IO_EIRR0)
#define	EIRR0		(IO_EIRR0.byte)
#define	EIRR0_ER7  	(IO_EIRR0.bit.ER7)
#define	EIRR0_ER6  	(IO_EIRR0.bit.ER6)
#define	EIRR0_ER5  	(IO_EIRR0.bit.ER5)
#define	EIRR0_ER4  	(IO_EIRR0.bit.ER4)
#define	EIRR0_ER3  	(IO_EIRR0.bit.ER3)
#define	EIRR0_ER2  	(IO_EIRR0.bit.ER2)
#define	EIRR0_ER1  	(IO_EIRR0.bit.ER1)
#define	EIRR0_ER0  	(IO_EIRR0.bit.ER0)

#ifdef __IO_DEFINE
#pragma segment IO=IO_ENIR0, locate=0x31
#endif

typedef union {
	__BYTE	byte;
	struct {
			__BYTE	EN7:1;
			__BYTE	EN6:1;
			__BYTE	EN5:1;
			__BYTE	EN4:1;
			__BYTE	EN3:1;
			__BYTE	EN2:1;
			__BYTE	EN1:1;
			__BYTE	EN0:1;
	} bit;
	struct {
			__BYTE	EN7:1;
			__BYTE	EN6:1;
			__BYTE	EN5:1;
			__BYTE	EN4:1;
			__BYTE	EN3:1;
			__BYTE	EN2:1;
			__BYTE	EN1:1;
			__BYTE	EN0:1;
	} bitc;
} ENIR0STR;

__IO_EXTERN	  ENIR0STR	IO_ENIR0;
#define	_enir0		(IO_ENIR0)
#define	ENIR0		(IO_ENIR0.byte)
#define	ENIR0_EN7  	(IO_ENIR0.bit.EN7)
#define	ENIR0_EN6  	(IO_ENIR0.bit.EN6)
#define	ENIR0_EN5  	(IO_ENIR0.bit.EN5)
#define	ENIR0_EN4  	(IO_ENIR0.bit.EN4)
#define	ENIR0_EN3  	(IO_ENIR0.bit.EN3)
#define	ENIR0_EN2  	(IO_ENIR0.bit.EN2)
#define	ENIR0_EN1  	(IO_ENIR0.bit.EN1)
#define	ENIR0_EN0  	(IO_ENIR0.bit.EN0)

#ifdef __IO_DEFINE
#pragma segment IO=IO_ELVR0, locate=0x32
#endif

typedef union {
	__HWORD	hword;
	struct {
			__BYTE	LBLA7:2;
			__BYTE	LBLA6:2;
			__BYTE	LBLA5:2;
			__BYTE	LBLA4:2;
			__BYTE	LBLA3:2;
			__BYTE	LBLA2:2;
			__BYTE	LBLA1:2;
			__BYTE	LBLA0:2;
	} bit;
	struct {
			__BYTE	LBLA71:1;
			__BYTE	LBLA70:1;
			__BYTE	LBLA61:1;
			__BYTE	LBLA60:1;
			__BYTE	LBLA51:1;
			__BYTE	LBLA50:1;
			__BYTE	LBLA41:1;
			__BYTE	LBLA40:1;
			__BYTE	LBLA31:1;
			__BYTE	LBLA30:1;
			__BYTE	LBLA21:1;
			__BYTE	LBLA20:1;
			__BYTE	LBLA11:1;
			__BYTE	LBLA10:1;
			__BYTE	LBLA01:1;
			__BYTE	LBLA00:1;
	} bitc;
} ELVR0STR;

__IO_EXTERN	  ELVR0STR	IO_ELVR0;
#define	_elvr0		(IO_ELVR0)
#define	ELVR0		(IO_ELVR0.hword)
#define	ELVR0_LBLA7  	(IO_ELVR0.bit.LBLA7)
#define	ELVR0_LBLA70  	(IO_ELVR0.bitc.LBLA70)
#define	ELVR0_LBLA71  	(IO_ELVR0.bitc.LBLA71)
#define	ELVR0_LBLA6  	(IO_ELVR0.bit.LBLA6)
#define	ELVR0_LBLA60  	(IO_ELVR0.bitc.LBLA60)
#define	ELVR0_LBLA61  	(IO_ELVR0.bitc.LBLA61)
#define	ELVR0_LBLA5  	(IO_ELVR0.bit.LBLA5)
#define	ELVR0_LBLA50  	(IO_ELVR0.bitc.LBLA50)
#define	ELVR0_LBLA51  	(IO_ELVR0.bitc.LBLA51)
#define	ELVR0_LBLA4  	(IO_ELVR0.bit.LBLA4)
#define	ELVR0_LBLA40  	(IO_ELVR0.bitc.LBLA40)
#define	ELVR0_LBLA41  	(IO_ELVR0.bitc.LBLA41)
#define	ELVR0_LBLA3  	(IO_ELVR0.bit.LBLA3)
#define	ELVR0_LBLA30  	(IO_ELVR0.bitc.LBLA30)
#define	ELVR0_LBLA31  	(IO_ELVR0.bitc.LBLA31)
#define	ELVR0_LBLA2  	(IO_ELVR0.bit.LBLA2)
#define	ELVR0_LBLA20  	(IO_ELVR0.bitc.LBLA20)
#define	ELVR0_LBLA21  	(IO_ELVR0.bitc.LBLA21)
#define	ELVR0_LBLA1  	(IO_ELVR0.bit.LBLA1)
#define	ELVR0_LBLA10  	(IO_ELVR0.bitc.LBLA10)
#define	ELVR0_LBLA11  	(IO_ELVR0.bitc.LBLA11)
#define	ELVR0_LBLA0  	(IO_ELVR0.bit.LBLA0)
#define	ELVR0_LBLA00  	(IO_ELVR0.bitc.LBLA00)
#define	ELVR0_LBLA01  	(IO_ELVR0.bitc.LBLA01)

#ifdef __IO_DEFINE
#pragma segment IO=IO_EIRR1, locate=0x34
#endif

typedef union {
	__BYTE	byte;
	struct {
			__BYTE	ER15:1;
			__BYTE	ER14:1;
			__BYTE	ER13:1;
			__BYTE	ER12:1;
			__BYTE	ER11:1;
			__BYTE	ER10:1;
			__BYTE	ER9:1;
			__BYTE	ER8:1;
	} bit;
	struct {
			__BYTE	ER15:1;
			__BYTE	ER14:1;
			__BYTE	ER13:1;
			__BYTE	ER12:1;
			__BYTE	ER11:1;
			__BYTE	ER10:1;
			__BYTE	ER9:1;
			__BYTE	ER8:1;
	} bitc;
} EIRR1STR;

__IO_EXTERN	  EIRR1STR	IO_EIRR1;
#define	_eirr1		(IO_EIRR1)
#define	EIRR1		(IO_EIRR1.byte)
#define	EIRR1_ER15  	(IO_EIRR1.bit.ER15)
#define	EIRR1_ER14  	(IO_EIRR1.bit.ER14)
#define	EIRR1_ER13  	(IO_EIRR1.bit.ER13)
#define	EIRR1_ER12  	(IO_EIRR1.bit.ER12)
#define	EIRR1_ER11  	(IO_EIRR1.bit.ER11)
#define	EIRR1_ER10  	(IO_EIRR1.bit.ER10)
#define	EIRR1_ER9  	(IO_EIRR1.bit.ER9)
#define	EIRR1_ER8  	(IO_EIRR1.bit.ER8)

#ifdef __IO_DEFINE
#pragma segment IO=IO_ENIR1, locate=0x35
#endif

typedef union {
	__BYTE	byte;
	struct {
			__BYTE	EN15:1;
			__BYTE	EN14:1;
			__BYTE	EN13:1;
			__BYTE	EN12:1;
			__BYTE	EN11:1;
			__BYTE	EN10:1;
			__BYTE	EN9:1;
			__BYTE	EN8:1;
	} bit;
	struct {
			__BYTE	EN15:1;
			__BYTE	EN14:1;
			__BYTE	EN13:1;
			__BYTE	EN12:1;
			__BYTE	EN11:1;
			__BYTE	EN10:1;
			__BYTE	EN9:1;
			__BYTE	EN8:1;
	} bitc;
} ENIR1STR;

__IO_EXTERN	  ENIR1STR	IO_ENIR1;
#define	_enir1		(IO_ENIR1)
#define	ENIR1		(IO_ENIR1.byte)
#define	ENIR1_EN15  	(IO_ENIR1.bit.EN15)
#define	ENIR1_EN14  	(IO_ENIR1.bit.EN14)
#define	ENIR1_EN13  	(IO_ENIR1.bit.EN13)
#define	ENIR1_EN12  	(IO_ENIR1.bit.EN12)
#define	ENIR1_EN11  	(IO_ENIR1.bit.EN11)
#define	ENIR1_EN10  	(IO_ENIR1.bit.EN10)
#define	ENIR1_EN9  	(IO_ENIR1.bit.EN9)
#define	ENIR1_EN8  	(IO_ENIR1.bit.EN8)

#ifdef __IO_DEFINE
#pragma segment IO=IO_ELVR1, locate=0x36
#endif

typedef union {
	__HWORD	hword;
	struct {
			__BYTE	LBLA15:2;
			__BYTE	LBLA14:2;
			__BYTE	LBLA13:2;
			__BYTE	LBLA12:2;
			__BYTE	LBLA11:2;
			__BYTE	LBLA10:2;
			__BYTE	LBLA9:2;
			__BYTE	LBLA8:2;
	} bit;
	struct {
			__BYTE	LBLA151:1;
			__BYTE	LBLA150:1;
			__BYTE	LBLA141:1;
			__BYTE	LBLA140:1;
			__BYTE	LBLA131:1;
			__BYTE	LBLA130:1;
			__BYTE	LBLA121:1;
			__BYTE	LBLA120:1;
			__BYTE	LBLA111:1;
			__BYTE	LBLA110:1;
			__BYTE	LBLA101:1;
			__BYTE	LBLA100:1;
			__BYTE	LBLA91:1;
			__BYTE	LBLA90:1;
			__BYTE	LBLA81:1;
			__BYTE	LBLA80:1;
	} bitc;
} ELVR1STR;

__IO_EXTERN	  ELVR1STR	IO_ELVR1;
#define	_elvr1		(IO_ELVR1)
#define	ELVR1		(IO_ELVR1.hword)
#define	ELVR1_LBLA15  	(IO_ELVR1.bit.LBLA15)
#define	ELVR1_LBLA150  	(IO_ELVR1.bitc.LBLA150)
#define	ELVR1_LBLA151  	(IO_ELVR1.bitc.LBLA151)
#define	ELVR1_LBLA14  	(IO_ELVR1.bit.LBLA14)
#define	ELVR1_LBLA140  	(IO_ELVR1.bitc.LBLA140)
#define	ELVR1_LBLA141  	(IO_ELVR1.bitc.LBLA141)
#define	ELVR1_LBLA13  	(IO_ELVR1.bit.LBLA13)
#define	ELVR1_LBLA130  	(IO_ELVR1.bitc.LBLA130)
#define	ELVR1_LBLA131  	(IO_ELVR1.bitc.LBLA131)
#define	ELVR1_LBLA12  	(IO_ELVR1.bit.LBLA12)
#define	ELVR1_LBLA120  	(IO_ELVR1.bitc.LBLA120)
#define	ELVR1_LBLA121  	(IO_ELVR1.bitc.LBLA121)
#define	ELVR1_LBLA11  	(IO_ELVR1.bit.LBLA11)
#define	ELVR1_LBLA110  	(IO_ELVR1.bitc.LBLA110)
#define	ELVR1_LBLA111  	(IO_ELVR1.bitc.LBLA111)
#define	ELVR1_LBLA10  	(IO_ELVR1.bit.LBLA10)
#define	ELVR1_LBLA100  	(IO_ELVR1.bitc.LBLA100)
#define	ELVR1_LBLA101  	(IO_ELVR1.bitc.LBLA101)
#define	ELVR1_LBLA9  	(IO_ELVR1.bit.LBLA9)
#define	ELVR1_LBLA90  	(IO_ELVR1.bitc.LBLA90)
#define	ELVR1_LBLA91  	(IO_ELVR1.bitc.LBLA91)
#define	ELVR1_LBLA8  	(IO_ELVR1.bit.LBLA8)
#define	ELVR1_LBLA80  	(IO_ELVR1.bitc.LBLA80)
#define	ELVR1_LBLA81  	(IO_ELVR1.bitc.LBLA81)

#ifdef __IO_DEFINE
#pragma segment IO=IO_DICR, locate=0x38
#endif

typedef union {
	__BYTE	byte;
	struct {
			__BYTE	RESV0:1;
			__BYTE	RESV1:1;
			__BYTE	RESV2:1;
			__BYTE	RESV3:1;
			__BYTE	RESV4:1;
			__BYTE	RESV5:1;
			__BYTE	RESV6:1;
			__BYTE	DLYI:1;
	} bit;
	struct {
			__BYTE	RESV0:1;
			__BYTE	RESV1:1;
			__BYTE	RESV2:1;
			__BYTE	RESV3:1;
			__BYTE	RESV4:1;
			__BYTE	RESV5:1;
			__BYTE	RESV6:1;
			__BYTE	DLYI:1;
	} bitc;
} DICRSTR;

__IO_EXTERN	  DICRSTR	IO_DICR;
#define	_dicr		(IO_DICR)
#define	DICR		(IO_DICR.byte)
#define	DICR_DLYI  	(IO_DICR.bit.DLYI)

#ifdef __IO_DEFINE
#pragma segment IO=IO_HRCL, locate=0x39
#endif

typedef union {
	__BYTE	byte;
	struct {
			__BYTE	MHALTI:1;
			__BYTE	RESV1:1;
			__BYTE	RESV2:1;
			__BYTE	LVL:5;
	} bit;
	struct {
			__BYTE	MHALTI:1;
			__BYTE	RESV1:1;
			__BYTE	RESV2:1;
			__BYTE	LVL4:1;
			__BYTE	LVL3:1;
			__BYTE	LVL2:1;
			__BYTE	LVL1:1;
			__BYTE	LVL0:1;
	} bitc;
} HRCLSTR;

__IO_EXTERN	  HRCLSTR	IO_HRCL;
#define	_hrcl		(IO_HRCL)
#define	HRCL		(IO_HRCL.byte)
#define	HRCL_MHALTI  	(IO_HRCL.bit.MHALTI)
#define	HRCL_LVL  	(IO_HRCL.bit.LVL)
#define	HRCL_LVL0  	(IO_HRCL.bitc.LVL0)
#define	HRCL_LVL1  	(IO_HRCL.bitc.LVL1)
#define	HRCL_LVL2  	(IO_HRCL.bitc.LVL2)
#define	HRCL_LVL3  	(IO_HRCL.bitc.LVL3)
#define	HRCL_LVL4  	(IO_HRCL.bitc.LVL4)

#ifdef __IO_DEFINE
#pragma segment IO=IO_RBSYNC, locate=0x40
#endif

__IO_EXTERN	__HWORD	IO_RBSYNC;
#define	_rbsync		(IO_RBSYNC)
#define	RBSYNC	(_rbsync)

#ifdef __IO_DEFINE
#pragma segment IO=IO_SCR04, locate=0x60
#endif

typedef union {
	__BYTE	byte;
	struct {
			__BYTE	PEN:1;
			__BYTE	P:1;
			__BYTE	SBL:1;
			__BYTE	CL:1;
			__BYTE	AD:1;
			__BYTE	CRE:1;
			__BYTE	RXE:1;
			__BYTE	TXE:1;
	} bit;
	struct {
			__BYTE	PEN:1;
			__BYTE	P:1;
			__BYTE	SBL:1;
			__BYTE	CL:1;
			__BYTE	AD:1;
			__BYTE	CRE:1;
			__BYTE	RXE:1;
			__BYTE	TXE:1;
	} bitc;
} SCR04STR;

__IO_EXTERN	  SCR04STR	IO_SCR04;
#define	_scr04		(IO_SCR04)
#define	SCR04		(IO_SCR04.byte)
#define	SCR04_PEN  	(IO_SCR04.bit.PEN)
#define	SCR04_P  	(IO_SCR04.bit.P)
#define	SCR04_SBL  	(IO_SCR04.bit.SBL)
#define	SCR04_CL  	(IO_SCR04.bit.CL)
#define	SCR04_AD  	(IO_SCR04.bit.AD)
#define	SCR04_CRE  	(IO_SCR04.bit.CRE)
#define	SCR04_RXE  	(IO_SCR04.bit.RXE)
#define	SCR04_TXE  	(IO_SCR04.bit.TXE)

#ifdef __IO_DEFINE
#pragma segment IO=IO_SMR04, locate=0x61
#endif

typedef union {
	__BYTE	byte;
	struct {
			__BYTE	MD:2;
			__BYTE	OTO:1;
			__BYTE	EXT:1;
			__BYTE	REST:1;
			__BYTE	UPCL:1;
			__BYTE	SCKE:1;
			__BYTE	SOE:1;
	} bit;
	struct {
			__BYTE	MD1:1;
			__BYTE	MD0:1;
			__BYTE	OTO:1;
			__BYTE	EXT:1;
			__BYTE	REST:1;
			__BYTE	UPCL:1;
			__BYTE	SCKE:1;
			__BYTE	SOE:1;
	} bitc;
} SMR04STR;

__IO_EXTERN	  SMR04STR	IO_SMR04;
#define	_smr04		(IO_SMR04)
#define	SMR04		(IO_SMR04.byte)
#define	SMR04_MD  	(IO_SMR04.bit.MD)
#define	SMR04_MD0  	(IO_SMR04.bitc.MD0)
#define	SMR04_MD1  	(IO_SMR04.bitc.MD1)
#define	SMR04_OTO  	(IO_SMR04.bit.OTO)
#define	SMR04_EXT  	(IO_SMR04.bit.EXT)
#define	SMR04_REST  	(IO_SMR04.bit.REST)
#define	SMR04_UPCL  	(IO_SMR04.bit.UPCL)
#define	SMR04_SCKE  	(IO_SMR04.bit.SCKE)
#define	SMR04_SOE  	(IO_SMR04.bit.SOE)

#ifdef __IO_DEFINE
#pragma segment IO=IO_SSR04, locate=0x62
#endif

typedef union {
	__BYTE	byte;
	struct {
			__BYTE	PE:1;
			__BYTE	ORE:1;
			__BYTE	FRE:1;
			__BYTE	RDRF:1;
			__BYTE	TDRE:1;
			__BYTE	BDS:1;
			__BYTE	RIE:1;
			__BYTE	TIE:1;
	} bit;
	struct {
			__BYTE	PE:1;
			__BYTE	ORE:1;
			__BYTE	FRE:1;
			__BYTE	RDRF:1;
			__BYTE	TDRE:1;
			__BYTE	BDS:1;
			__BYTE	RIE:1;
			__BYTE	TIE:1;
	} bitc;
} SSR04STR;

__IO_EXTERN	  SSR04STR	IO_SSR04;
#define	_ssr04		(IO_SSR04)
#define	SSR04		(IO_SSR04.byte)
#define	SSR04_PE  	(IO_SSR04.bit.PE)
#define	SSR04_ORE  	(IO_SSR04.bit.ORE)
#define	SSR04_FRE  	(IO_SSR04.bit.FRE)
#define	SSR04_RDRF  	(IO_SSR04.bit.RDRF)
#define	SSR04_TDRE  	(IO_SSR04.bit.TDRE)
#define	SSR04_BDS  	(IO_SSR04.bit.BDS)
#define	SSR04_RIE  	(IO_SSR04.bit.RIE)
#define	SSR04_TIE  	(IO_SSR04.bit.TIE)

#ifdef __IO_DEFINE
#pragma segment IO=IO_RDR04, locate=0x63
#endif

__IO_EXTERN	__BYTE	IO_RDR04;
#define	_rdr04		(IO_RDR04)
#define	RDR04	(_rdr04)
#define	TDR04	(IO_RDR04)
#define	_tdr04	(TDR04)
#define	IO_TDR04	(IO_RDR04)

#ifdef __IO_DEFINE
#pragma segment IO=IO_ESCR04, locate=0x64
#endif

typedef union {
	__BYTE	byte;
	struct {
			__BYTE	LBIE:1;
			__BYTE	LBD:1;
			__BYTE	LBL:2;
			__BYTE	SOPE:1;
			__BYTE	SIOP:1;
			__BYTE	CCO:1;
			__BYTE	SCES:1;
	} bit;
	struct {
			__BYTE	LBIE:1;
			__BYTE	LBD:1;
			__BYTE	LBL1:1;
			__BYTE	LBL0:1;
			__BYTE	SOPE:1;
			__BYTE	SIOP:1;
			__BYTE	CCO:1;
			__BYTE	SCES:1;
	} bitc;
} ESCR04STR;

__IO_EXTERN	  ESCR04STR	IO_ESCR04;
#define	_escr04		(IO_ESCR04)
#define	ESCR04		(IO_ESCR04.byte)
#define	ESCR04_LBIE  	(IO_ESCR04.bit.LBIE)
#define	ESCR04_LBD  	(IO_ESCR04.bit.LBD)
#define	ESCR04_LBL  	(IO_ESCR04.bit.LBL)
#define	ESCR04_LBL0  	(IO_ESCR04.bitc.LBL0)
#define	ESCR04_LBL1  	(IO_ESCR04.bitc.LBL1)
#define	ESCR04_SOPE  	(IO_ESCR04.bit.SOPE)
#define	ESCR04_SIOP  	(IO_ESCR04.bit.SIOP)
#define	ESCR04_CCO  	(IO_ESCR04.bit.CCO)
#define	ESCR04_SCES  	(IO_ESCR04.bit.SCES)

#ifdef __IO_DEFINE
#pragma segment IO=IO_ECCR04, locate=0x65
#endif

typedef union {
	__BYTE	byte;
	struct {
			__BYTE	RESV0:1;
			__BYTE	LBR:1;
			__BYTE	MS:1;
			__BYTE	SCDE:1;
			__BYTE	SSM:1;
			__BYTE	BIE:1;
			__BYTE	RBI:1;
			__BYTE	TBI:1;
	} bit;
	struct {
			__BYTE	RESV0:1;
			__BYTE	LBR:1;
			__BYTE	MS:1;
			__BYTE	SCDE:1;
			__BYTE	SSM:1;
			__BYTE	BIE:1;
			__BYTE	RBI:1;
			__BYTE	TBI:1;
	} bitc;
} ECCR04STR;

__IO_EXTERN	  ECCR04STR	IO_ECCR04;
#define	_eccr04		(IO_ECCR04)
#define	ECCR04		(IO_ECCR04.byte)
#define	ECCR04_LBR  	(IO_ECCR04.bit.LBR)
#define	ECCR04_MS  	(IO_ECCR04.bit.MS)
#define	ECCR04_SCDE  	(IO_ECCR04.bit.SCDE)
#define	ECCR04_SSM  	(IO_ECCR04.bit.SSM)
#define	ECCR04_BIE  	(IO_ECCR04.bit.BIE)
#define	ECCR04_RBI  	(IO_ECCR04.bit.RBI)
#define	ECCR04_TBI  	(IO_ECCR04.bit.TBI)

#ifdef __IO_DEFINE
#pragma segment IO=IO_FSR04, locate=0x66
#endif

__IO_EXTERN	const __BYTE	IO_FSR04;
#define	_fsr04		(IO_FSR04)
#define	FSR04	(_fsr04)

#ifdef __IO_DEFINE
#pragma segment IO=IO_FCR04, locate=0x67
#endif

typedef union {
	__BYTE	byte;
	struct {
			__BYTE	RXL3:1;
			__BYTE	RXL2:1;
			__BYTE	RXL1:1;
			__BYTE	RXL0:1;
			__BYTE	RESV4:1;
			__BYTE	ERX:1;
			__BYTE	ETX:1;
			__BYTE	SVD:1;
	} bit;
	struct {
			__BYTE	RXL3:1;
			__BYTE	RXL2:1;
			__BYTE	RXL1:1;
			__BYTE	RXL0:1;
			__BYTE	RESV4:1;
			__BYTE	ERX:1;
			__BYTE	ETX:1;
			__BYTE	SVD:1;
	} bitc;
} FCR04STR;

__IO_EXTERN	  FCR04STR	IO_FCR04;
#define	_fcr04		(IO_FCR04)
#define	FCR04		(IO_FCR04.byte)
#define	FCR04_RXL3  	(IO_FCR04.bit.RXL3)
#define	FCR04_RXL2  	(IO_FCR04.bit.RXL2)
#define	FCR04_RXL1  	(IO_FCR04.bit.RXL1)
#define	FCR04_RXL0  	(IO_FCR04.bit.RXL0)
#define	FCR04_ERX  	(IO_FCR04.bit.ERX)
#define	FCR04_ETX  	(IO_FCR04.bit.ETX)
#define	FCR04_SVD  	(IO_FCR04.bit.SVD)

#ifdef __IO_DEFINE
#pragma segment IO=IO_SCR06, locate=0x70
#endif

typedef union {
	__BYTE	byte;
	struct {
			__BYTE	PEN:1;
			__BYTE	P:1;
			__BYTE	SBL:1;
			__BYTE	CL:1;
			__BYTE	AD:1;
			__BYTE	CRE:1;
			__BYTE	RXE:1;
			__BYTE	TXE:1;
	} bit;
	struct {
			__BYTE	PEN:1;
			__BYTE	P:1;
			__BYTE	SBL:1;
			__BYTE	CL:1;
			__BYTE	AD:1;
			__BYTE	CRE:1;
			__BYTE	RXE:1;
			__BYTE	TXE:1;
	} bitc;
} SCR06STR;

__IO_EXTERN	  SCR06STR	IO_SCR06;
#define	_scr06		(IO_SCR06)
#define	SCR06		(IO_SCR06.byte)
#define	SCR06_PEN  	(IO_SCR06.bit.PEN)
#define	SCR06_P  	(IO_SCR06.bit.P)
#define	SCR06_SBL  	(IO_SCR06.bit.SBL)
#define	SCR06_CL  	(IO_SCR06.bit.CL)
#define	SCR06_AD  	(IO_SCR06.bit.AD)
#define	SCR06_CRE  	(IO_SCR06.bit.CRE)
#define	SCR06_RXE  	(IO_SCR06.bit.RXE)
#define	SCR06_TXE  	(IO_SCR06.bit.TXE)

#ifdef __IO_DEFINE
#pragma segment IO=IO_SMR06, locate=0x71
#endif

typedef union {
	__BYTE	byte;
	struct {
			__BYTE	MD:2;
			__BYTE	OTO:1;
			__BYTE	EXT:1;
			__BYTE	REST:1;
			__BYTE	UPCL:1;
			__BYTE	SCKE:1;
			__BYTE	SOE:1;
	} bit;
	struct {
			__BYTE	MD1:1;
			__BYTE	MD0:1;
			__BYTE	OTO:1;
			__BYTE	EXT:1;
			__BYTE	REST:1;
			__BYTE	UPCL:1;
			__BYTE	SCKE:1;
			__BYTE	SOE:1;
	} bitc;
} SMR06STR;

__IO_EXTERN	  SMR06STR	IO_SMR06;
#define	_smr06		(IO_SMR06)
#define	SMR06		(IO_SMR06.byte)
#define	SMR06_MD  	(IO_SMR06.bit.MD)
#define	SMR06_MD0  	(IO_SMR06.bitc.MD0)
#define	SMR06_MD1  	(IO_SMR06.bitc.MD1)
#define	SMR06_OTO  	(IO_SMR06.bit.OTO)
#define	SMR06_EXT  	(IO_SMR06.bit.EXT)
#define	SMR06_REST  	(IO_SMR06.bit.REST)
#define	SMR06_UPCL  	(IO_SMR06.bit.UPCL)
#define	SMR06_SCKE  	(IO_SMR06.bit.SCKE)
#define	SMR06_SOE  	(IO_SMR06.bit.SOE)

#ifdef __IO_DEFINE
#pragma segment IO=IO_SSR06, locate=0x72
#endif

typedef union {
	__BYTE	byte;
	struct {
			__BYTE	PE:1;
			__BYTE	ORE:1;
			__BYTE	FRE:1;
			__BYTE	RDRF:1;
			__BYTE	TDRE:1;
			__BYTE	BDS:1;
			__BYTE	RIE:1;
			__BYTE	TIE:1;
	} bit;
	struct {
			__BYTE	PE:1;
			__BYTE	ORE:1;
			__BYTE	FRE:1;
			__BYTE	RDRF:1;
			__BYTE	TDRE:1;
			__BYTE	BDS:1;
			__BYTE	RIE:1;
			__BYTE	TIE:1;
	} bitc;
} SSR06STR;

__IO_EXTERN	  SSR06STR	IO_SSR06;
#define	_ssr06		(IO_SSR06)
#define	SSR06		(IO_SSR06.byte)
#define	SSR06_PE  	(IO_SSR06.bit.PE)
#define	SSR06_ORE  	(IO_SSR06.bit.ORE)
#define	SSR06_FRE  	(IO_SSR06.bit.FRE)
#define	SSR06_RDRF  	(IO_SSR06.bit.RDRF)
#define	SSR06_TDRE  	(IO_SSR06.bit.TDRE)
#define	SSR06_BDS  	(IO_SSR06.bit.BDS)
#define	SSR06_RIE  	(IO_SSR06.bit.RIE)
#define	SSR06_TIE  	(IO_SSR06.bit.TIE)

#ifdef __IO_DEFINE
#pragma segment IO=IO_RDR06, locate=0x73
#endif

__IO_EXTERN	__BYTE	IO_RDR06;
#define	_rdr06		(IO_RDR06)
#define	RDR06	(_rdr06)
#define	TDR06	(IO_RDR06)
#define	_tdr06	(TDR06)
#define	IO_TDR06	(IO_RDR06)

#ifdef __IO_DEFINE
#pragma segment IO=IO_ESCR06, locate=0x74
#endif

typedef union {
	__BYTE	byte;
	struct {
			__BYTE	LBIE:1;
			__BYTE	LBD:1;
			__BYTE	LBL:2;
			__BYTE	SOPE:1;
			__BYTE	SIOP:1;
			__BYTE	CCO:1;
			__BYTE	SCES:1;
	} bit;
	struct {
			__BYTE	LBIE:1;
			__BYTE	LBD:1;
			__BYTE	LBL1:1;
			__BYTE	LBL0:1;
			__BYTE	SOPE:1;
			__BYTE	SIOP:1;
			__BYTE	CCO:1;
			__BYTE	SCES:1;
	} bitc;
} ESCR06STR;

__IO_EXTERN	  ESCR06STR	IO_ESCR06;
#define	_escr06		(IO_ESCR06)
#define	ESCR06		(IO_ESCR06.byte)
#define	ESCR06_LBIE  	(IO_ESCR06.bit.LBIE)
#define	ESCR06_LBD  	(IO_ESCR06.bit.LBD)
#define	ESCR06_LBL  	(IO_ESCR06.bit.LBL)
#define	ESCR06_LBL0  	(IO_ESCR06.bitc.LBL0)
#define	ESCR06_LBL1  	(IO_ESCR06.bitc.LBL1)
#define	ESCR06_SOPE  	(IO_ESCR06.bit.SOPE)
#define	ESCR06_SIOP  	(IO_ESCR06.bit.SIOP)
#define	ESCR06_CCO  	(IO_ESCR06.bit.CCO)
#define	ESCR06_SCES  	(IO_ESCR06.bit.SCES)

#ifdef __IO_DEFINE
#pragma segment IO=IO_ECCR06, locate=0x75
#endif

typedef union {
	__BYTE	byte;
	struct {
			__BYTE	RESV0:1;
			__BYTE	LBR:1;
			__BYTE	MS:1;
			__BYTE	SCDE:1;
			__BYTE	SSM:1;
			__BYTE	BIE:1;
			__BYTE	RBI:1;
			__BYTE	TBI:1;
	} bit;
	struct {
			__BYTE	RESV0:1;
			__BYTE	LBR:1;
			__BYTE	MS:1;
			__BYTE	SCDE:1;
			__BYTE	SSM:1;
			__BYTE	BIE:1;
			__BYTE	RBI:1;
			__BYTE	TBI:1;
	} bitc;
} ECCR06STR;

__IO_EXTERN	  ECCR06STR	IO_ECCR06;
#define	_eccr06		(IO_ECCR06)
#define	ECCR06		(IO_ECCR06.byte)
#define	ECCR06_LBR  	(IO_ECCR06.bit.LBR)
#define	ECCR06_MS  	(IO_ECCR06.bit.MS)
#define	ECCR06_SCDE  	(IO_ECCR06.bit.SCDE)
#define	ECCR06_SSM  	(IO_ECCR06.bit.SSM)
#define	ECCR06_BIE  	(IO_ECCR06.bit.BIE)
#define	ECCR06_RBI  	(IO_ECCR06.bit.RBI)
#define	ECCR06_TBI  	(IO_ECCR06.bit.TBI)

#ifdef __IO_DEFINE
#pragma segment IO=IO_FSR06, locate=0x76
#endif

__IO_EXTERN	const __BYTE	IO_FSR06;
#define	_fsr06		(IO_FSR06)
#define	FSR06	(_fsr06)

#ifdef __IO_DEFINE
#pragma segment IO=IO_FCR06, locate=0x77
#endif

typedef union {
	__BYTE	byte;
	struct {
			__BYTE	RXL3:1;
			__BYTE	RXL2:1;
			__BYTE	RXL1:1;
			__BYTE	RXL0:1;
			__BYTE	RESV4:1;
			__BYTE	ERX:1;
			__BYTE	ETX:1;
			__BYTE	SVD:1;
	} bit;
	struct {
			__BYTE	RXL3:1;
			__BYTE	RXL2:1;
			__BYTE	RXL1:1;
			__BYTE	RXL0:1;
			__BYTE	RESV4:1;
			__BYTE	ERX:1;
			__BYTE	ETX:1;
			__BYTE	SVD:1;
	} bitc;
} FCR06STR;

__IO_EXTERN	  FCR06STR	IO_FCR06;
#define	_fcr06		(IO_FCR06)
#define	FCR06		(IO_FCR06.byte)
#define	FCR06_RXL3  	(IO_FCR06.bit.RXL3)
#define	FCR06_RXL2  	(IO_FCR06.bit.RXL2)
#define	FCR06_RXL1  	(IO_FCR06.bit.RXL1)
#define	FCR06_RXL0  	(IO_FCR06.bit.RXL0)
#define	FCR06_ERX  	(IO_FCR06.bit.ERX)
#define	FCR06_ETX  	(IO_FCR06.bit.ETX)
#define	FCR06_SVD  	(IO_FCR06.bit.SVD)

#ifdef __IO_DEFINE
#pragma segment IO=IO_SCR07, locate=0x78
#endif

typedef union {
	__BYTE	byte;
	struct {
			__BYTE	PEN:1;
			__BYTE	P:1;
			__BYTE	SBL:1;
			__BYTE	CL:1;
			__BYTE	AD:1;
			__BYTE	CRE:1;
			__BYTE	RXE:1;
			__BYTE	TXE:1;
	} bit;
	struct {
			__BYTE	PEN:1;
			__BYTE	P:1;
			__BYTE	SBL:1;
			__BYTE	CL:1;
			__BYTE	AD:1;
			__BYTE	CRE:1;
			__BYTE	RXE:1;
			__BYTE	TXE:1;
	} bitc;
} SCR07STR;

__IO_EXTERN	  SCR07STR	IO_SCR07;
#define	_scr07		(IO_SCR07)
#define	SCR07		(IO_SCR07.byte)
#define	SCR07_PEN  	(IO_SCR07.bit.PEN)
#define	SCR07_P  	(IO_SCR07.bit.P)
#define	SCR07_SBL  	(IO_SCR07.bit.SBL)
#define	SCR07_CL  	(IO_SCR07.bit.CL)
#define	SCR07_AD  	(IO_SCR07.bit.AD)
#define	SCR07_CRE  	(IO_SCR07.bit.CRE)
#define	SCR07_RXE  	(IO_SCR07.bit.RXE)
#define	SCR07_TXE  	(IO_SCR07.bit.TXE)

#ifdef __IO_DEFINE
#pragma segment IO=IO_SMR07, locate=0x79
#endif

typedef union {
	__BYTE	byte;
	struct {
			__BYTE	MD:2;
			__BYTE	OTO:1;
			__BYTE	EXT:1;
			__BYTE	REST:1;
			__BYTE	UPCL:1;
			__BYTE	SCKE:1;
			__BYTE	SOE:1;
	} bit;
	struct {
			__BYTE	MD1:1;
			__BYTE	MD0:1;
			__BYTE	OTO:1;
			__BYTE	EXT:1;
			__BYTE	REST:1;
			__BYTE	UPCL:1;
			__BYTE	SCKE:1;
			__BYTE	SOE:1;
	} bitc;
} SMR07STR;

__IO_EXTERN	  SMR07STR	IO_SMR07;
#define	_smr07		(IO_SMR07)
#define	SMR07		(IO_SMR07.byte)
#define	SMR07_MD  	(IO_SMR07.bit.MD)
#define	SMR07_MD0  	(IO_SMR07.bitc.MD0)
#define	SMR07_MD1  	(IO_SMR07.bitc.MD1)
#define	SMR07_OTO  	(IO_SMR07.bit.OTO)
#define	SMR07_EXT  	(IO_SMR07.bit.EXT)
#define	SMR07_REST  	(IO_SMR07.bit.REST)
#define	SMR07_UPCL  	(IO_SMR07.bit.UPCL)
#define	SMR07_SCKE  	(IO_SMR07.bit.SCKE)
#define	SMR07_SOE  	(IO_SMR07.bit.SOE)

#ifdef __IO_DEFINE
#pragma segment IO=IO_SSR07, locate=0x7A
#endif

typedef union {
	__BYTE	byte;
	struct {
			__BYTE	PE:1;
			__BYTE	ORE:1;
			__BYTE	FRE:1;
			__BYTE	RDRF:1;
			__BYTE	TDRE:1;
			__BYTE	BDS:1;
			__BYTE	RIE:1;
			__BYTE	TIE:1;
	} bit;
	struct {
			__BYTE	PE:1;
			__BYTE	ORE:1;
			__BYTE	FRE:1;
			__BYTE	RDRF:1;
			__BYTE	TDRE:1;
			__BYTE	BDS:1;
			__BYTE	RIE:1;
			__BYTE	TIE:1;
	} bitc;
} SSR07STR;

__IO_EXTERN	  SSR07STR	IO_SSR07;
#define	_ssr07		(IO_SSR07)
#define	SSR07		(IO_SSR07.byte)
#define	SSR07_PE  	(IO_SSR07.bit.PE)
#define	SSR07_ORE  	(IO_SSR07.bit.ORE)
#define	SSR07_FRE  	(IO_SSR07.bit.FRE)
#define	SSR07_RDRF  	(IO_SSR07.bit.RDRF)
#define	SSR07_TDRE  	(IO_SSR07.bit.TDRE)
#define	SSR07_BDS  	(IO_SSR07.bit.BDS)
#define	SSR07_RIE  	(IO_SSR07.bit.RIE)
#define	SSR07_TIE  	(IO_SSR07.bit.TIE)

#ifdef __IO_DEFINE
#pragma segment IO=IO_RDR07, locate=0x7B
#endif

__IO_EXTERN	__BYTE	IO_RDR07;
#define	_rdr07		(IO_RDR07)
#define	RDR07	(_rdr07)
#define	TDR07	(IO_RDR07)
#define	_tdr07	(TDR07)
#define	IO_TDR07	(IO_RDR07)

#ifdef __IO_DEFINE
#pragma segment IO=IO_ESCR07, locate=0x7C
#endif

typedef union {
	__BYTE	byte;
	struct {
			__BYTE	LBIE:1;
			__BYTE	LBD:1;
			__BYTE	LBL:2;
			__BYTE	SOPE:1;
			__BYTE	SIOP:1;
			__BYTE	CCO:1;
			__BYTE	SCES:1;
	} bit;
	struct {
			__BYTE	LBIE:1;
			__BYTE	LBD:1;
			__BYTE	LBL1:1;
			__BYTE	LBL0:1;
			__BYTE	SOPE:1;
			__BYTE	SIOP:1;
			__BYTE	CCO:1;
			__BYTE	SCES:1;
	} bitc;
} ESCR07STR;

__IO_EXTERN	  ESCR07STR	IO_ESCR07;
#define	_escr07		(IO_ESCR07)
#define	ESCR07		(IO_ESCR07.byte)
#define	ESCR07_LBIE  	(IO_ESCR07.bit.LBIE)
#define	ESCR07_LBD  	(IO_ESCR07.bit.LBD)
#define	ESCR07_LBL  	(IO_ESCR07.bit.LBL)
#define	ESCR07_LBL0  	(IO_ESCR07.bitc.LBL0)
#define	ESCR07_LBL1  	(IO_ESCR07.bitc.LBL1)
#define	ESCR07_SOPE  	(IO_ESCR07.bit.SOPE)
#define	ESCR07_SIOP  	(IO_ESCR07.bit.SIOP)
#define	ESCR07_CCO  	(IO_ESCR07.bit.CCO)
#define	ESCR07_SCES  	(IO_ESCR07.bit.SCES)

#ifdef __IO_DEFINE
#pragma segment IO=IO_ECCR07, locate=0x7D
#endif

typedef union {
	__BYTE	byte;
	struct {
			__BYTE	RESV0:1;
			__BYTE	LBR:1;
			__BYTE	MS:1;
			__BYTE	SCDE:1;
			__BYTE	SSM:1;
			__BYTE	BIE:1;
			__BYTE	RBI:1;
			__BYTE	TBI:1;
	} bit;
	struct {
			__BYTE	RESV0:1;
			__BYTE	LBR:1;
			__BYTE	MS:1;
			__BYTE	SCDE:1;
			__BYTE	SSM:1;
			__BYTE	BIE:1;
			__BYTE	RBI:1;
			__BYTE	TBI:1;
	} bitc;
} ECCR07STR;

__IO_EXTERN	  ECCR07STR	IO_ECCR07;
#define	_eccr07		(IO_ECCR07)
#define	ECCR07		(IO_ECCR07.byte)
#define	ECCR07_LBR  	(IO_ECCR07.bit.LBR)
#define	ECCR07_MS  	(IO_ECCR07.bit.MS)
#define	ECCR07_SCDE  	(IO_ECCR07.bit.SCDE)
#define	ECCR07_SSM  	(IO_ECCR07.bit.SSM)
#define	ECCR07_BIE  	(IO_ECCR07.bit.BIE)
#define	ECCR07_RBI  	(IO_ECCR07.bit.RBI)
#define	ECCR07_TBI  	(IO_ECCR07.bit.TBI)

#ifdef __IO_DEFINE
#pragma segment IO=IO_FSR07, locate=0x7E
#endif

__IO_EXTERN	const __BYTE	IO_FSR07;
#define	_fsr07		(IO_FSR07)
#define	FSR07	(_fsr07)

#ifdef __IO_DEFINE
#pragma segment IO=IO_FCR07, locate=0x7F
#endif

typedef union {
	__BYTE	byte;
	struct {
			__BYTE	RXL3:1;
			__BYTE	RXL2:1;
			__BYTE	RXL1:1;
			__BYTE	RXL0:1;
			__BYTE	RESV4:1;
			__BYTE	ERX:1;
			__BYTE	ETX:1;
			__BYTE	SVD:1;
	} bit;
	struct {
			__BYTE	RXL3:1;
			__BYTE	RXL2:1;
			__BYTE	RXL1:1;
			__BYTE	RXL0:1;
			__BYTE	RESV4:1;
			__BYTE	ERX:1;
			__BYTE	ETX:1;
			__BYTE	SVD:1;
	} bitc;
} FCR07STR;

__IO_EXTERN	  FCR07STR	IO_FCR07;
#define	_fcr07		(IO_FCR07)
#define	FCR07		(IO_FCR07.byte)
#define	FCR07_RXL3  	(IO_FCR07.bit.RXL3)
#define	FCR07_RXL2  	(IO_FCR07.bit.RXL2)
#define	FCR07_RXL1  	(IO_FCR07.bit.RXL1)
#define	FCR07_RXL0  	(IO_FCR07.bit.RXL0)
#define	FCR07_ERX  	(IO_FCR07.bit.ERX)
#define	FCR07_ETX  	(IO_FCR07.bit.ETX)
#define	FCR07_SVD  	(IO_FCR07.bit.SVD)

#ifdef __IO_DEFINE
#pragma segment IO=IO_BGR04, locate=0x88
#endif

__IO_EXTERN	union {
	__HWORD	hword;
	struct {
		__BYTE	BGR104B;
		__BYTE	BGR004B;
	} byte;
} IO_BGR04;

#define	BGR04		(IO_BGR04.hword)
#define	IO_BGR104	(IO_BGR04.byte.BGR104B)
#define	IO_BGR004	(IO_BGR04.byte.BGR004B)
#define	BGR104		(IO_BGR04.byte.BGR104B)
#define	BGR004		(IO_BGR04.byte.BGR004B)

#ifdef __IO_DEFINE
#pragma segment IO=IO_BGR06, locate=0x8C
#endif

__IO_EXTERN	union {
	__HWORD	hword;
	struct {
		__BYTE	BGR106B;
		__BYTE	BGR006B;
	} byte;
} IO_BGR06;

#define	BGR06		(IO_BGR06.hword)
#define	IO_BGR106	(IO_BGR06.byte.BGR106B)
#define	IO_BGR006	(IO_BGR06.byte.BGR006B)
#define	BGR106		(IO_BGR06.byte.BGR106B)
#define	BGR006		(IO_BGR06.byte.BGR006B)

#ifdef __IO_DEFINE
#pragma segment IO=IO_BGR07, locate=0x8E
#endif

__IO_EXTERN	union {
	__HWORD	hword;
	struct {
		__BYTE	BGR107B;
		__BYTE	BGR007B;
	} byte;
} IO_BGR07;

#define	BGR07		(IO_BGR07.hword)
#define	IO_BGR107	(IO_BGR07.byte.BGR107B)
#define	IO_BGR007	(IO_BGR07.byte.BGR007B)
#define	BGR107		(IO_BGR07.byte.BGR107B)
#define	BGR007		(IO_BGR07.byte.BGR007B)

#ifdef __IO_DEFINE
#pragma segment IO=IO_IIC0, locate=0xD0
#endif

__IO_EXTERN	struct {
	union {
		__BYTE	byte;
		struct {
			__BYTE	BER:1;
			__BYTE	BEIE:1;
			__BYTE	SCC:1;
			__BYTE	MSS:1;
			__BYTE	ACK:1;
			__BYTE	GCAA:1;
			__BYTE	INTE:1;
			__BYTE	INT:1;
		} bit;
		struct {
			__BYTE	BER:1;
			__BYTE	BEIE:1;
			__BYTE	SCC:1;
			__BYTE	MSS:1;
			__BYTE	ACK:1;
			__BYTE	GCAA:1;
			__BYTE	INTE:1;
			__BYTE	INT:1;
		} bitc;
	} IO_IBCR0;
	const union {
		__BYTE	byte;
		struct {
			__BYTE	BB:1;
			__BYTE	RSC:1;
			__BYTE	AL:1;
			__BYTE	LRB:1;
			__BYTE	TRX:1;
			__BYTE	AAS:1;
			__BYTE	GCA:1;
			__BYTE	ADT:1;
		} bit;
		struct {
			__BYTE	BB:1;
			__BYTE	RSC:1;
			__BYTE	AL:1;
			__BYTE	LRB:1;
			__BYTE	TRX:1;
			__BYTE	AAS:1;
			__BYTE	GCA:1;
			__BYTE	ADT:1;
		} bitc;
	} IO_IBSR0;
	union {
		__HWORD	hword;
		struct {
			__BYTE	RESV20:1;
			__BYTE	RESV21:1;
			__BYTE	RESV22:1;
			__BYTE	RESV23:1;
			__BYTE	RESV24:1;
			__BYTE	RESV25:1;
			__HWORD	TA:10;
		} bit;
		struct {
			__BYTE	RESV20:1;
			__BYTE	RESV21:1;
			__BYTE	RESV22:1;
			__BYTE	RESV23:1;
			__BYTE	RESV24:1;
			__BYTE	RESV25:1;
			__BYTE	TA9:1;
			__BYTE	TA8:1;
			__BYTE	TA7:1;
			__BYTE	TA6:1;
			__BYTE	TA5:1;
			__BYTE	TA4:1;
			__BYTE	TA3:1;
			__BYTE	TA2:1;
			__BYTE	TA1:1;
			__BYTE	TA0:1;
		} bitc;
	} IO_ITBA0;
	union {
		__HWORD	hword;
		struct {
			__BYTE	ENTB:1;
			__BYTE	RAL:1;
			__BYTE	RESV42:1;
			__BYTE	RESV43:1;
			__BYTE	RESV44:1;
			__BYTE	RESV45:1;
			__HWORD	TM:10;
		} bit;
		struct {
			__BYTE	ENTB:1;
			__BYTE	RAL:1;
			__BYTE	RESV42:1;
			__BYTE	RESV43:1;
			__BYTE	RESV44:1;
			__BYTE	RESV45:1;
			__BYTE	TM9:1;
			__BYTE	TM8:1;
			__BYTE	TM7:1;
			__BYTE	TM6:1;
			__BYTE	TM5:1;
			__BYTE	TM4:1;
			__BYTE	TM3:1;
			__BYTE	TM2:1;
			__BYTE	TM1:1;
			__BYTE	TM0:1;
		} bitc;
	} IO_ITMK0;
	union {
		__BYTE	byte;
		struct {
			__BYTE	ENSB:1;
			__BYTE	SM:7;
		} bit;
		struct {
			__BYTE	ENSB:1;
			__BYTE	SM6:1;
			__BYTE	SM5:1;
			__BYTE	SM4:1;
			__BYTE	SM3:1;
			__BYTE	SM2:1;
			__BYTE	SM1:1;
			__BYTE	SM0:1;
		} bitc;
	} IO_ISMK0;
	union {
		__BYTE	byte;
		struct {
			__BYTE	RESV70:1;
			__BYTE	SA:7;
		} bit;
		struct {
			__BYTE	RESV70:1;
			__BYTE	SA6:1;
			__BYTE	SA5:1;
			__BYTE	SA4:1;
			__BYTE	SA3:1;
			__BYTE	SA2:1;
			__BYTE	SA1:1;
			__BYTE	SA0:1;
		} bitc;
	} IO_ISBA0;
	__BYTE	IO_RESV1;
	__BYTE	IO_IDAR0;
	union {
		__BYTE	byte;
		struct {
			__BYTE	RESV100:1;
			__BYTE	NSF:1;
			__BYTE	EN:1;
			__BYTE	CS:5;
		} bit;
		struct {
			__BYTE	RESV100:1;
			__BYTE	NSF:1;
			__BYTE	EN:1;
			__BYTE	CS4:1;
			__BYTE	CS3:1;
			__BYTE	CS2:1;
			__BYTE	CS1:1;
			__BYTE	CS0:1;
		} bitc;
	} IO_ICCR0;
	__BYTE	IO_RESV2;
} IO_IIC0;

#define	IIC0_IBCR0			(IO_IIC0.IO_IBCR0.byte)
#define	IIC0_IBCR0_BER    	(IO_IIC0.IO_IBCR0.bit.BER)
#define	IIC0_IBCR0_BEIE    	(IO_IIC0.IO_IBCR0.bit.BEIE)
#define	IIC0_IBCR0_SCC    	(IO_IIC0.IO_IBCR0.bit.SCC)
#define	IIC0_IBCR0_MSS    	(IO_IIC0.IO_IBCR0.bit.MSS)
#define	IIC0_IBCR0_ACK    	(IO_IIC0.IO_IBCR0.bit.ACK)
#define	IIC0_IBCR0_GCAA    	(IO_IIC0.IO_IBCR0.bit.GCAA)
#define	IIC0_IBCR0_INTE    	(IO_IIC0.IO_IBCR0.bit.INTE)
#define	IIC0_IBCR0_INT    	(IO_IIC0.IO_IBCR0.bit.INT)
#define	IIC0_IBSR0			(IO_IIC0.IO_IBSR0.byte)
#define	IIC0_IBSR0_BB    	(IO_IIC0.IO_IBSR0.bit.BB)
#define	IIC0_IBSR0_RSC    	(IO_IIC0.IO_IBSR0.bit.RSC)
#define	IIC0_IBSR0_AL    	(IO_IIC0.IO_IBSR0.bit.AL)
#define	IIC0_IBSR0_LRB    	(IO_IIC0.IO_IBSR0.bit.LRB)
#define	IIC0_IBSR0_TRX    	(IO_IIC0.IO_IBSR0.bit.TRX)
#define	IIC0_IBSR0_AAS    	(IO_IIC0.IO_IBSR0.bit.AAS)
#define	IIC0_IBSR0_GCA    	(IO_IIC0.IO_IBSR0.bit.GCA)
#define	IIC0_IBSR0_ADT    	(IO_IIC0.IO_IBSR0.bit.ADT)
#define	IIC0_ITBA0			(IO_IIC0.IO_ITBA0.hword)
#define	IIC0_ITBA0_TA    	(IO_IIC0.IO_ITBA0.bit.TA)
#define	IIC0_ITBA0_TA0    	(IO_IIC0.IO_ITBA0.bitc.TA0)
#define	IIC0_ITBA0_TA1    	(IO_IIC0.IO_ITBA0.bitc.TA1)
#define	IIC0_ITBA0_TA2    	(IO_IIC0.IO_ITBA0.bitc.TA2)
#define	IIC0_ITBA0_TA3    	(IO_IIC0.IO_ITBA0.bitc.TA3)
#define	IIC0_ITBA0_TA4    	(IO_IIC0.IO_ITBA0.bitc.TA4)
#define	IIC0_ITBA0_TA5    	(IO_IIC0.IO_ITBA0.bitc.TA5)
#define	IIC0_ITBA0_TA6    	(IO_IIC0.IO_ITBA0.bitc.TA6)
#define	IIC0_ITBA0_TA7    	(IO_IIC0.IO_ITBA0.bitc.TA7)
#define	IIC0_ITBA0_TA8    	(IO_IIC0.IO_ITBA0.bitc.TA8)
#define	IIC0_ITBA0_TA9    	(IO_IIC0.IO_ITBA0.bitc.TA9)
#define	IIC0_ITMK0			(IO_IIC0.IO_ITMK0.hword)
#define	IIC0_ITMK0_ENTB    	(IO_IIC0.IO_ITMK0.bit.ENTB)
#define	IIC0_ITMK0_RAL    	(IO_IIC0.IO_ITMK0.bit.RAL)
#define	IIC0_ITMK0_TM    	(IO_IIC0.IO_ITMK0.bit.TM)
#define	IIC0_ITMK0_TM0    	(IO_IIC0.IO_ITMK0.bitc.TM0)
#define	IIC0_ITMK0_TM1    	(IO_IIC0.IO_ITMK0.bitc.TM1)
#define	IIC0_ITMK0_TM2    	(IO_IIC0.IO_ITMK0.bitc.TM2)
#define	IIC0_ITMK0_TM3    	(IO_IIC0.IO_ITMK0.bitc.TM3)
#define	IIC0_ITMK0_TM4    	(IO_IIC0.IO_ITMK0.bitc.TM4)
#define	IIC0_ITMK0_TM5    	(IO_IIC0.IO_ITMK0.bitc.TM5)
#define	IIC0_ITMK0_TM6    	(IO_IIC0.IO_ITMK0.bitc.TM6)
#define	IIC0_ITMK0_TM7    	(IO_IIC0.IO_ITMK0.bitc.TM7)
#define	IIC0_ITMK0_TM8    	(IO_IIC0.IO_ITMK0.bitc.TM8)
#define	IIC0_ITMK0_TM9    	(IO_IIC0.IO_ITMK0.bitc.TM9)
#define	IIC0_ISMK0			(IO_IIC0.IO_ISMK0.byte)
#define	IIC0_ISMK0_ENSB    	(IO_IIC0.IO_ISMK0.bit.ENSB)
#define	IIC0_ISMK0_SM    	(IO_IIC0.IO_ISMK0.bit.SM)
#define	IIC0_ISMK0_SM0    	(IO_IIC0.IO_ISMK0.bitc.SM0)
#define	IIC0_ISMK0_SM1    	(IO_IIC0.IO_ISMK0.bitc.SM1)
#define	IIC0_ISMK0_SM2    	(IO_IIC0.IO_ISMK0.bitc.SM2)
#define	IIC0_ISMK0_SM3    	(IO_IIC0.IO_ISMK0.bitc.SM3)
#define	IIC0_ISMK0_SM4    	(IO_IIC0.IO_ISMK0.bitc.SM4)
#define	IIC0_ISMK0_SM5    	(IO_IIC0.IO_ISMK0.bitc.SM5)
#define	IIC0_ISMK0_SM6    	(IO_IIC0.IO_ISMK0.bitc.SM6)
#define	IIC0_ISBA0			(IO_IIC0.IO_ISBA0.byte)
#define	IIC0_ISBA0_SA    	(IO_IIC0.IO_ISBA0.bit.SA)
#define	IIC0_ISBA0_SA0    	(IO_IIC0.IO_ISBA0.bitc.SA0)
#define	IIC0_ISBA0_SA1    	(IO_IIC0.IO_ISBA0.bitc.SA1)
#define	IIC0_ISBA0_SA2    	(IO_IIC0.IO_ISBA0.bitc.SA2)
#define	IIC0_ISBA0_SA3    	(IO_IIC0.IO_ISBA0.bitc.SA3)
#define	IIC0_ISBA0_SA4    	(IO_IIC0.IO_ISBA0.bitc.SA4)
#define	IIC0_ISBA0_SA5    	(IO_IIC0.IO_ISBA0.bitc.SA5)
#define	IIC0_ISBA0_SA6    	(IO_IIC0.IO_ISBA0.bitc.SA6)
#define	IIC0_IDAR0	(IO_IIC0.IO_IDAR0)
#define	IIC0_ICCR0			(IO_IIC0.IO_ICCR0.byte)
#define	IIC0_ICCR0_NSF    	(IO_IIC0.IO_ICCR0.bit.NSF)
#define	IIC0_ICCR0_EN    	(IO_IIC0.IO_ICCR0.bit.EN)
#define	IIC0_ICCR0_CS    	(IO_IIC0.IO_ICCR0.bit.CS)
#define	IIC0_ICCR0_CS0    	(IO_IIC0.IO_ICCR0.bitc.CS0)
#define	IIC0_ICCR0_CS1    	(IO_IIC0.IO_ICCR0.bitc.CS1)
#define	IIC0_ICCR0_CS2    	(IO_IIC0.IO_ICCR0.bitc.CS2)
#define	IIC0_ICCR0_CS3    	(IO_IIC0.IO_ICCR0.bitc.CS3)
#define	IIC0_ICCR0_CS4    	(IO_IIC0.IO_ICCR0.bitc.CS4)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_GCN10,   locate=0x100
#endif

typedef union {
	__HWORD	hword;
	struct {
			__BYTE	TSEL7:4;
			__BYTE	TSEL2:4;
			__BYTE	TSEL1:4;
			__BYTE	TSEL0:4;
	} bit;
	struct {
			__BYTE	TSEL33:1;
			__BYTE	TSEL32:1;
			__BYTE	TSEL31:1;
			__BYTE	TSEL70:1;
			__BYTE	TSEL23:1;
			__BYTE	TSEL22:1;
			__BYTE	TSEL21:1;
			__BYTE	TSEL20:1;
			__BYTE	TSEL13:1;
			__BYTE	TSEL12:1;
			__BYTE	TSEL11:1;
			__BYTE	TSEL10:1;
			__BYTE	TSEL03:1;
			__BYTE	TSEL02:1;
			__BYTE	TSEL01:1;
			__BYTE	TSEL00:1;
	} bitc;
} GCN10STR;

__IO_EXTENDED	  GCN10STR	IO_GCN10;
#define	_gcn10		(IO_GCN10)
#define	GCN10		(IO_GCN10.hword)
#define	GCN10_TSEL7  	(IO_GCN10.bit.TSEL7)
#define	GCN10_TSEL70  	(IO_GCN10.bitc.TSEL70)
#define	GCN10_TSEL31  	(IO_GCN10.bitc.TSEL31)
#define	GCN10_TSEL32  	(IO_GCN10.bitc.TSEL32)
#define	GCN10_TSEL33  	(IO_GCN10.bitc.TSEL33)
#define	GCN10_TSEL2  	(IO_GCN10.bit.TSEL2)
#define	GCN10_TSEL20  	(IO_GCN10.bitc.TSEL20)
#define	GCN10_TSEL21  	(IO_GCN10.bitc.TSEL21)
#define	GCN10_TSEL22  	(IO_GCN10.bitc.TSEL22)
#define	GCN10_TSEL23  	(IO_GCN10.bitc.TSEL23)
#define	GCN10_TSEL1  	(IO_GCN10.bit.TSEL1)
#define	GCN10_TSEL10  	(IO_GCN10.bitc.TSEL10)
#define	GCN10_TSEL11  	(IO_GCN10.bitc.TSEL11)
#define	GCN10_TSEL12  	(IO_GCN10.bitc.TSEL12)
#define	GCN10_TSEL13  	(IO_GCN10.bitc.TSEL13)
#define	GCN10_TSEL0  	(IO_GCN10.bit.TSEL0)
#define	GCN10_TSEL00  	(IO_GCN10.bitc.TSEL00)
#define	GCN10_TSEL01  	(IO_GCN10.bitc.TSEL01)
#define	GCN10_TSEL02  	(IO_GCN10.bitc.TSEL02)
#define	GCN10_TSEL03  	(IO_GCN10.bitc.TSEL03)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_GCN20,   locate=0x103
#endif

typedef union {
	__BYTE	byte;
	struct {
			__BYTE	RESV0:1;
			__BYTE	RESV1:1;
			__BYTE	RESV2:1;
			__BYTE	RESV3:1;
			__BYTE	EN3:1;
			__BYTE	EN2:1;
			__BYTE	EN1:1;
			__BYTE	EN0:1;
	} bit;
	struct {
			__BYTE	RESV0:1;
			__BYTE	RESV1:1;
			__BYTE	RESV2:1;
			__BYTE	RESV3:1;
			__BYTE	EN3:1;
			__BYTE	EN2:1;
			__BYTE	EN1:1;
			__BYTE	EN0:1;
	} bitc;
} GCN20STR;

__IO_EXTENDED	  GCN20STR	IO_GCN20;
#define	_gcn20		(IO_GCN20)
#define	GCN20		(IO_GCN20.byte)
#define	GCN20_EN3  	(IO_GCN20.bit.EN3)
#define	GCN20_EN2  	(IO_GCN20.bit.EN2)
#define	GCN20_EN1  	(IO_GCN20.bit.EN1)
#define	GCN20_EN0  	(IO_GCN20.bit.EN0)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_GCN11,   locate=0x104
#endif

typedef union {
	__HWORD	hword;
	struct {
			__BYTE	TSEL7:4;
			__BYTE	TSEL6:4;
			__BYTE	TSEL5:4;
			__BYTE	TSEL4:4;
	} bit;
	struct {
			__BYTE	TSEL73:1;
			__BYTE	TSEL72:1;
			__BYTE	TSEL71:1;
			__BYTE	TSEL70:1;
			__BYTE	TSEL63:1;
			__BYTE	TSEL62:1;
			__BYTE	TSEL61:1;
			__BYTE	TSEL60:1;
			__BYTE	TSEL53:1;
			__BYTE	TSEL52:1;
			__BYTE	TSEL51:1;
			__BYTE	TSEL50:1;
			__BYTE	TSEL43:1;
			__BYTE	TSEL42:1;
			__BYTE	TSEL41:1;
			__BYTE	TSEL40:1;
	} bitc;
} GCN11STR;

__IO_EXTENDED	  GCN11STR	IO_GCN11;
#define	_gcn11		(IO_GCN11)
#define	GCN11		(IO_GCN11.hword)
#define	GCN11_TSEL7  	(IO_GCN11.bit.TSEL7)
#define	GCN11_TSEL70  	(IO_GCN11.bitc.TSEL70)
#define	GCN11_TSEL71  	(IO_GCN11.bitc.TSEL71)
#define	GCN11_TSEL72  	(IO_GCN11.bitc.TSEL72)
#define	GCN11_TSEL73  	(IO_GCN11.bitc.TSEL73)
#define	GCN11_TSEL6  	(IO_GCN11.bit.TSEL6)
#define	GCN11_TSEL60  	(IO_GCN11.bitc.TSEL60)
#define	GCN11_TSEL61  	(IO_GCN11.bitc.TSEL61)
#define	GCN11_TSEL62  	(IO_GCN11.bitc.TSEL62)
#define	GCN11_TSEL63  	(IO_GCN11.bitc.TSEL63)
#define	GCN11_TSEL5  	(IO_GCN11.bit.TSEL5)
#define	GCN11_TSEL50  	(IO_GCN11.bitc.TSEL50)
#define	GCN11_TSEL51  	(IO_GCN11.bitc.TSEL51)
#define	GCN11_TSEL52  	(IO_GCN11.bitc.TSEL52)
#define	GCN11_TSEL53  	(IO_GCN11.bitc.TSEL53)
#define	GCN11_TSEL4  	(IO_GCN11.bit.TSEL4)
#define	GCN11_TSEL40  	(IO_GCN11.bitc.TSEL40)
#define	GCN11_TSEL41  	(IO_GCN11.bitc.TSEL41)
#define	GCN11_TSEL42  	(IO_GCN11.bitc.TSEL42)
#define	GCN11_TSEL43  	(IO_GCN11.bitc.TSEL43)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_GCN21,attr=IO,locate=0x107
#endif

typedef union {
	__BYTE	byte;
	struct {
			__BYTE	RESV0:1;
			__BYTE	RESV1:1;
			__BYTE	RESV2:1;
			__BYTE	RESV3:1;
			__BYTE	EN3:1;
			__BYTE	EN2:1;
			__BYTE	EN1:1;
			__BYTE	EN0:1;
	} bit;
	struct {
			__BYTE	RESV0:1;
			__BYTE	RESV1:1;
			__BYTE	RESV2:1;
			__BYTE	RESV3:1;
			__BYTE	EN3:1;
			__BYTE	EN2:1;
			__BYTE	EN1:1;
			__BYTE	EN0:1;
	} bitc;
} GCN21STR;

__IO_EXTENDED	  GCN21STR	IO_GCN21;
#define	_gcn21		(IO_GCN21)
#define	GCN21		(IO_GCN21.byte)
#define	GCN21_EN3  	(IO_GCN21.bit.EN3)
#define	GCN21_EN2  	(IO_GCN21.bit.EN2)
#define	GCN21_EN1  	(IO_GCN21.bit.EN1)
#define	GCN21_EN0  	(IO_GCN21.bit.EN0)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_GCN12,attr=IO,locate=0x108
#endif

typedef union {
	__HWORD	hword;
	struct {
			__BYTE	TSEL11:4;
			__BYTE	TSEL10:4;
			__BYTE	TSEL9:4;
			__BYTE	TSEL8:4;
	} bit;
	struct {
			__BYTE	TSEL113:1;
			__BYTE	TSEL112:1;
			__BYTE	TSEL111:1;
			__BYTE	TSEL110:1;
			__BYTE	TSEL103:1;
			__BYTE	TSEL102:1;
			__BYTE	TSEL101:1;
			__BYTE	TSEL100:1;
			__BYTE	TSEL93:1;
			__BYTE	TSEL92:1;
			__BYTE	TSEL91:1;
			__BYTE	TSEL90:1;
			__BYTE	TSEL83:1;
			__BYTE	TSEL82:1;
			__BYTE	TSEL81:1;
			__BYTE	TSEL80:1;
	} bitc;
} GCN12STR;

__IO_EXTENDED	  GCN12STR	IO_GCN12;
#define	_gcn12		(IO_GCN12)
#define	GCN12		(IO_GCN12.hword)
#define	GCN12_TSEL11  	(IO_GCN12.bit.TSEL11)
#define	GCN12_TSEL110  	(IO_GCN12.bitc.TSEL110)
#define	GCN12_TSEL111  	(IO_GCN12.bitc.TSEL111)
#define	GCN12_TSEL112  	(IO_GCN12.bitc.TSEL112)
#define	GCN12_TSEL113  	(IO_GCN12.bitc.TSEL113)
#define	GCN12_TSEL10  	(IO_GCN12.bit.TSEL10)
#define	GCN12_TSEL100  	(IO_GCN12.bitc.TSEL100)
#define	GCN12_TSEL101  	(IO_GCN12.bitc.TSEL101)
#define	GCN12_TSEL102  	(IO_GCN12.bitc.TSEL102)
#define	GCN12_TSEL103  	(IO_GCN12.bitc.TSEL103)
#define	GCN12_TSEL9  	(IO_GCN12.bit.TSEL9)
#define	GCN12_TSEL90  	(IO_GCN12.bitc.TSEL90)
#define	GCN12_TSEL91  	(IO_GCN12.bitc.TSEL91)
#define	GCN12_TSEL92  	(IO_GCN12.bitc.TSEL92)
#define	GCN12_TSEL93  	(IO_GCN12.bitc.TSEL93)
#define	GCN12_TSEL8  	(IO_GCN12.bit.TSEL8)
#define	GCN12_TSEL80  	(IO_GCN12.bitc.TSEL80)
#define	GCN12_TSEL81  	(IO_GCN12.bitc.TSEL81)
#define	GCN12_TSEL82  	(IO_GCN12.bitc.TSEL82)
#define	GCN12_TSEL83  	(IO_GCN12.bitc.TSEL83)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_GCN22,attr=IO,locate=0x10B
#endif

typedef union {
	__BYTE	byte;
	struct {
			__BYTE	RESV0:1;
			__BYTE	RESV1:1;
			__BYTE	RESV2:1;
			__BYTE	RESV3:1;
			__BYTE	EN3:1;
			__BYTE	EN2:1;
			__BYTE	EN1:1;
			__BYTE	EN0:1;
	} bit;
	struct {
			__BYTE	RESV0:1;
			__BYTE	RESV1:1;
			__BYTE	RESV2:1;
			__BYTE	RESV3:1;
			__BYTE	EN3:1;
			__BYTE	EN2:1;
			__BYTE	EN1:1;
			__BYTE	EN0:1;
	} bitc;
} GCN22STR;

__IO_EXTENDED	  GCN22STR	IO_GCN22;
#define	_gcn22		(IO_GCN22)
#define	GCN22		(IO_GCN22.byte)
#define	GCN22_EN3  	(IO_GCN22.bit.EN3)
#define	GCN22_EN2  	(IO_GCN22.bit.EN2)
#define	GCN22_EN1  	(IO_GCN22.bit.EN1)
#define	GCN22_EN0  	(IO_GCN22.bit.EN0)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_PTMR00,attr=IO,locate=0x110
#endif

__IO_EXTENDED	const __HWORD	IO_PTMR00;
#define	_ptmr00		(IO_PTMR00)
#define	PTMR00	(_ptmr00)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_PCSR00,attr=IO,locate=0x112
#endif

__IO_EXTENDED	__HWORD	IO_PCSR00;
#define	_pcsr00		(IO_PCSR00)
#define	PCSR00	(_pcsr00)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_PDUT00,attr=IO,locate=0x114
#endif

__IO_EXTENDED	__HWORD	IO_PDUT00;
#define	_pdut00		(IO_PDUT00)
#define	PDUT00	(_pdut00)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_PCN00,attr=IO,locate=0x116
#endif

typedef union {
	__HWORD	hword;
	struct {
			__BYTE	CNTE:1;
			__BYTE	STGR:1;
			__BYTE	MDSE:1;
			__BYTE	RTRG:1;
			__BYTE	CKS:2;
			__BYTE	PGMS:1;
			__BYTE	RESV6:1;
			__BYTE	EGS:2;
			__BYTE	IREN:1;
			__BYTE	IRQF:1;
			__BYTE	IRS:2;
			__BYTE	RESV11:1;
			__BYTE	OSEL:1;
	} bit;
	struct {
			__BYTE	CNTE:1;
			__BYTE	STGR:1;
			__BYTE	MDSE:1;
			__BYTE	RTRG:1;
			__BYTE	CKS1:1;
			__BYTE	CKS0:1;
			__BYTE	PGMS:1;
			__BYTE	RESV7:1;
			__BYTE	EGS1:1;
			__BYTE	EGS0:1;
			__BYTE	IREN:1;
			__BYTE	IRQF:1;
			__BYTE	IRS1:1;
			__BYTE	IRS0:1;
			__BYTE	RESV14:1;
			__BYTE	OSEL:1;
	} bitc;
} PCN00STR;

__IO_EXTENDED	  PCN00STR	IO_PCN00;
#define	_pcn00		(IO_PCN00)
#define	PCN00		(IO_PCN00.hword)
#define	PCN00_CNTE  	(IO_PCN00.bit.CNTE)
#define	PCN00_STGR  	(IO_PCN00.bit.STGR)
#define	PCN00_MDSE  	(IO_PCN00.bit.MDSE)
#define	PCN00_RTRG  	(IO_PCN00.bit.RTRG)
#define	PCN00_CKS  	(IO_PCN00.bit.CKS)
#define	PCN00_CKS0  	(IO_PCN00.bitc.CKS0)
#define	PCN00_CKS1  	(IO_PCN00.bitc.CKS1)
#define	PCN00_PGMS  	(IO_PCN00.bit.PGMS)
#define	PCN00_EGS  	(IO_PCN00.bit.EGS)
#define	PCN00_EGS0  	(IO_PCN00.bitc.EGS0)
#define	PCN00_EGS1  	(IO_PCN00.bitc.EGS1)
#define	PCN00_IREN  	(IO_PCN00.bit.IREN)
#define	PCN00_IRQF  	(IO_PCN00.bit.IRQF)
#define	PCN00_IRS  	(IO_PCN00.bit.IRS)
#define	PCN00_IRS0  	(IO_PCN00.bitc.IRS0)
#define	PCN00_IRS1  	(IO_PCN00.bitc.IRS1)
#define	PCN00_OSEL  	(IO_PCN00.bit.OSEL)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_PTMR01,attr=IO,locate=0x118
#endif

__IO_EXTENDED	const __HWORD	IO_PTMR01;
#define	_ptmr01		(IO_PTMR01)
#define	PTMR01	(_ptmr01)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_PCSR01,attr=IO,locate=0x11A
#endif

__IO_EXTENDED	__HWORD	IO_PCSR01;
#define	_pcsr01		(IO_PCSR01)
#define	PCSR01	(_pcsr01)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_PDUT01,attr=IO,locate=0x11C
#endif

__IO_EXTENDED	__HWORD	IO_PDUT01;
#define	_pdut01		(IO_PDUT01)
#define	PDUT01	(_pdut01)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_PCN01,attr=IO,locate=0x11E
#endif

typedef union {
	__HWORD	hword;
	struct {
			__BYTE	CNTE:1;
			__BYTE	STGR:1;
			__BYTE	MDSE:1;
			__BYTE	RTRG:1;
			__BYTE	CKS:2;
			__BYTE	PGMS:1;
			__BYTE	RESV6:1;
			__BYTE	EGS:2;
			__BYTE	IREN:1;
			__BYTE	IRQF:1;
			__BYTE	IRS:2;
			__BYTE	RESV11:1;
			__BYTE	OSEL:1;
	} bit;
	struct {
			__BYTE	CNTE:1;
			__BYTE	STGR:1;
			__BYTE	MDSE:1;
			__BYTE	RTRG:1;
			__BYTE	CKS1:1;
			__BYTE	CKS0:1;
			__BYTE	PGMS:1;
			__BYTE	RESV7:1;
			__BYTE	EGS1:1;
			__BYTE	EGS0:1;
			__BYTE	IREN:1;
			__BYTE	IRQF:1;
			__BYTE	IRS1:1;
			__BYTE	IRS0:1;
			__BYTE	RESV14:1;
			__BYTE	OSEL:1;
	} bitc;
} PCN01STR;

__IO_EXTENDED	  PCN01STR	IO_PCN01;
#define	_pcn01		(IO_PCN01)
#define	PCN01		(IO_PCN01.hword)
#define	PCN01_CNTE  	(IO_PCN01.bit.CNTE)
#define	PCN01_STGR  	(IO_PCN01.bit.STGR)
#define	PCN01_MDSE  	(IO_PCN01.bit.MDSE)
#define	PCN01_RTRG  	(IO_PCN01.bit.RTRG)
#define	PCN01_CKS  	(IO_PCN01.bit.CKS)
#define	PCN01_CKS0  	(IO_PCN01.bitc.CKS0)
#define	PCN01_CKS1  	(IO_PCN01.bitc.CKS1)
#define	PCN01_PGMS  	(IO_PCN01.bit.PGMS)
#define	PCN01_EGS  	(IO_PCN01.bit.EGS)
#define	PCN01_EGS0  	(IO_PCN01.bitc.EGS0)
#define	PCN01_EGS1  	(IO_PCN01.bitc.EGS1)
#define	PCN01_IREN  	(IO_PCN01.bit.IREN)
#define	PCN01_IRQF  	(IO_PCN01.bit.IRQF)
#define	PCN01_IRS  	(IO_PCN01.bit.IRS)
#define	PCN01_IRS0  	(IO_PCN01.bitc.IRS0)
#define	PCN01_IRS1  	(IO_PCN01.bitc.IRS1)
#define	PCN01_OSEL  	(IO_PCN01.bit.OSEL)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_PTMR02,attr=IO,locate=0x120
#endif

__IO_EXTENDED	const __HWORD	IO_PTMR02;
#define	_ptmr02		(IO_PTMR02)
#define	PTMR02	(_ptmr02)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_PCSR02,attr=IO,locate=0x122
#endif

__IO_EXTENDED	__HWORD	IO_PCSR02;
#define	_pcsr02		(IO_PCSR02)
#define	PCSR02	(_pcsr02)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_PDUT02,attr=IO,locate=0x124
#endif

__IO_EXTENDED	__HWORD	IO_PDUT02;
#define	_pdut02		(IO_PDUT02)
#define	PDUT02	(_pdut02)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_PCN02,attr=IO,locate=0x126
#endif

typedef union {
	__HWORD	hword;
	struct {
			__BYTE	CNTE:1;
			__BYTE	STGR:1;
			__BYTE	MDSE:1;
			__BYTE	RTRG:1;
			__BYTE	CKS:2;
			__BYTE	PGMS:1;
			__BYTE	RESV6:1;
			__BYTE	EGS:2;
			__BYTE	IREN:1;
			__BYTE	IRQF:1;
			__BYTE	IRS:2;
			__BYTE	RESV11:1;
			__BYTE	OSEL:1;
	} bit;
	struct {
			__BYTE	CNTE:1;
			__BYTE	STGR:1;
			__BYTE	MDSE:1;
			__BYTE	RTRG:1;
			__BYTE	CKS1:1;
			__BYTE	CKS0:1;
			__BYTE	PGMS:1;
			__BYTE	RESV7:1;
			__BYTE	EGS1:1;
			__BYTE	EGS0:1;
			__BYTE	IREN:1;
			__BYTE	IRQF:1;
			__BYTE	IRS1:1;
			__BYTE	IRS0:1;
			__BYTE	RESV14:1;
			__BYTE	OSEL:1;
	} bitc;
} PCN02STR;

__IO_EXTENDED	  PCN02STR	IO_PCN02;
#define	_pcn02		(IO_PCN02)
#define	PCN02		(IO_PCN02.hword)
#define	PCN02_CNTE  	(IO_PCN02.bit.CNTE)
#define	PCN02_STGR  	(IO_PCN02.bit.STGR)
#define	PCN02_MDSE  	(IO_PCN02.bit.MDSE)
#define	PCN02_RTRG  	(IO_PCN02.bit.RTRG)
#define	PCN02_CKS  	(IO_PCN02.bit.CKS)
#define	PCN02_CKS0  	(IO_PCN02.bitc.CKS0)
#define	PCN02_CKS1  	(IO_PCN02.bitc.CKS1)
#define	PCN02_PGMS  	(IO_PCN02.bit.PGMS)
#define	PCN02_EGS  	(IO_PCN02.bit.EGS)
#define	PCN02_EGS0  	(IO_PCN02.bitc.EGS0)
#define	PCN02_EGS1  	(IO_PCN02.bitc.EGS1)
#define	PCN02_IREN  	(IO_PCN02.bit.IREN)
#define	PCN02_IRQF  	(IO_PCN02.bit.IRQF)
#define	PCN02_IRS  	(IO_PCN02.bit.IRS)
#define	PCN02_IRS0  	(IO_PCN02.bitc.IRS0)
#define	PCN02_IRS1  	(IO_PCN02.bitc.IRS1)
#define	PCN02_OSEL  	(IO_PCN02.bit.OSEL)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_PTMR03,attr=IO,locate=0x128
#endif

__IO_EXTENDED	const __HWORD	IO_PTMR03;
#define	_ptmr03		(IO_PTMR03)
#define	PTMR03	(_ptmr03)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_PCSR03,attr=IO,locate=0x12A
#endif

__IO_EXTENDED	__HWORD	IO_PCSR03;
#define	_pcsr03		(IO_PCSR03)
#define	PCSR03	(_pcsr03)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_PDUT03,attr=IO,locate=0x12C
#endif

__IO_EXTENDED	__HWORD	IO_PDUT03;
#define	_pdut03		(IO_PDUT03)
#define	PDUT03	(_pdut03)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_PCN03,attr=IO,locate=0x12E
#endif

typedef union {
	__HWORD	hword;
	struct {
			__BYTE	CNTE:1;
			__BYTE	STGR:1;
			__BYTE	MDSE:1;
			__BYTE	RTRG:1;
			__BYTE	CKS:2;
			__BYTE	PGMS:1;
			__BYTE	RESV6:1;
			__BYTE	EGS:2;
			__BYTE	IREN:1;
			__BYTE	IRQF:1;
			__BYTE	IRS:2;
			__BYTE	RESV11:1;
			__BYTE	OSEL:1;
	} bit;
	struct {
			__BYTE	CNTE:1;
			__BYTE	STGR:1;
			__BYTE	MDSE:1;
			__BYTE	RTRG:1;
			__BYTE	CKS1:1;
			__BYTE	CKS0:1;
			__BYTE	PGMS:1;
			__BYTE	RESV7:1;
			__BYTE	EGS1:1;
			__BYTE	EGS0:1;
			__BYTE	IREN:1;
			__BYTE	IRQF:1;
			__BYTE	IRS1:1;
			__BYTE	IRS0:1;
			__BYTE	RESV14:1;
			__BYTE	OSEL:1;
	} bitc;
} PCN03STR;

__IO_EXTENDED	  PCN03STR	IO_PCN03;
#define	_pcn03		(IO_PCN03)
#define	PCN03		(IO_PCN03.hword)
#define	PCN03_CNTE  	(IO_PCN03.bit.CNTE)
#define	PCN03_STGR  	(IO_PCN03.bit.STGR)
#define	PCN03_MDSE  	(IO_PCN03.bit.MDSE)
#define	PCN03_RTRG  	(IO_PCN03.bit.RTRG)
#define	PCN03_CKS  	(IO_PCN03.bit.CKS)
#define	PCN03_CKS0  	(IO_PCN03.bitc.CKS0)
#define	PCN03_CKS1  	(IO_PCN03.bitc.CKS1)
#define	PCN03_PGMS  	(IO_PCN03.bit.PGMS)
#define	PCN03_EGS  	(IO_PCN03.bit.EGS)
#define	PCN03_EGS0  	(IO_PCN03.bitc.EGS0)
#define	PCN03_EGS1  	(IO_PCN03.bitc.EGS1)
#define	PCN03_IREN  	(IO_PCN03.bit.IREN)
#define	PCN03_IRQF  	(IO_PCN03.bit.IRQF)
#define	PCN03_IRS  	(IO_PCN03.bit.IRS)
#define	PCN03_IRS0  	(IO_PCN03.bitc.IRS0)
#define	PCN03_IRS1  	(IO_PCN03.bitc.IRS1)
#define	PCN03_OSEL  	(IO_PCN03.bit.OSEL)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_PTMR04,attr=IO,locate=0x130
#endif

__IO_EXTENDED	const __HWORD	IO_PTMR04;
#define	_ptmr04		(IO_PTMR04)
#define	PTMR04	(_ptmr04)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_PCSR04,attr=IO,locate=0x132
#endif

__IO_EXTENDED	__HWORD	IO_PCSR04;
#define	_pcsr04		(IO_PCSR04)
#define	PCSR04	(_pcsr04)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_PDUT04,attr=IO,locate=0x134
#endif

__IO_EXTENDED	__HWORD	IO_PDUT04;
#define	_pdut04		(IO_PDUT04)
#define	PDUT04	(_pdut04)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_PCN04,attr=IO,locate=0x136
#endif

typedef union {
	__HWORD	hword;
	struct {
			__BYTE	CNTE:1;
			__BYTE	STGR:1;
			__BYTE	MDSE:1;
			__BYTE	RTRG:1;
			__BYTE	CKS:2;
			__BYTE	PGMS:1;
			__BYTE	RESV6:1;
			__BYTE	EGS:2;
			__BYTE	IREN:1;
			__BYTE	IRQF:1;
			__BYTE	IRS:2;
			__BYTE	RESV11:1;
			__BYTE	OSEL:1;
	} bit;
	struct {
			__BYTE	CNTE:1;
			__BYTE	STGR:1;
			__BYTE	MDSE:1;
			__BYTE	RTRG:1;
			__BYTE	CKS1:1;
			__BYTE	CKS0:1;
			__BYTE	PGMS:1;
			__BYTE	RESV7:1;
			__BYTE	EGS1:1;
			__BYTE	EGS0:1;
			__BYTE	IREN:1;
			__BYTE	IRQF:1;
			__BYTE	IRS1:1;
			__BYTE	IRS0:1;
			__BYTE	RESV14:1;
			__BYTE	OSEL:1;
	} bitc;
} PCN04STR;

__IO_EXTENDED	  PCN04STR	IO_PCN04;
#define	_pcn04		(IO_PCN04)
#define	PCN04		(IO_PCN04.hword)
#define	PCN04_CNTE  	(IO_PCN04.bit.CNTE)
#define	PCN04_STGR  	(IO_PCN04.bit.STGR)
#define	PCN04_MDSE  	(IO_PCN04.bit.MDSE)
#define	PCN04_RTRG  	(IO_PCN04.bit.RTRG)
#define	PCN04_CKS  	(IO_PCN04.bit.CKS)
#define	PCN04_CKS0  	(IO_PCN04.bitc.CKS0)
#define	PCN04_CKS1  	(IO_PCN04.bitc.CKS1)
#define	PCN04_PGMS  	(IO_PCN04.bit.PGMS)
#define	PCN04_EGS  	(IO_PCN04.bit.EGS)
#define	PCN04_EGS0  	(IO_PCN04.bitc.EGS0)
#define	PCN04_EGS1  	(IO_PCN04.bitc.EGS1)
#define	PCN04_IREN  	(IO_PCN04.bit.IREN)
#define	PCN04_IRQF  	(IO_PCN04.bit.IRQF)
#define	PCN04_IRS  	(IO_PCN04.bit.IRS)
#define	PCN04_IRS0  	(IO_PCN04.bitc.IRS0)
#define	PCN04_IRS1  	(IO_PCN04.bitc.IRS1)
#define	PCN04_OSEL  	(IO_PCN04.bit.OSEL)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_PTMR05,attr=IO,locate=0x138
#endif

__IO_EXTENDED	const __HWORD	IO_PTMR05;
#define	_ptmr05		(IO_PTMR05)
#define	PTMR05	(_ptmr05)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_PCSR05,attr=IO,locate=0x13A
#endif

__IO_EXTENDED	__HWORD	IO_PCSR05;
#define	_pcsr05		(IO_PCSR05)
#define	PCSR05	(_pcsr05)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_PDUT05,attr=IO,locate=0x13C
#endif

__IO_EXTENDED	__HWORD	IO_PDUT05;
#define	_pdut05		(IO_PDUT05)
#define	PDUT05	(_pdut05)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_PCN05,attr=IO,locate=0x13E
#endif

typedef union {
	__HWORD	hword;
	struct {
			__BYTE	CNTE:1;
			__BYTE	STGR:1;
			__BYTE	MDSE:1;
			__BYTE	RTRG:1;
			__BYTE	CKS:2;
			__BYTE	PGMS:1;
			__BYTE	RESV6:1;
			__BYTE	EGS:2;
			__BYTE	IREN:1;
			__BYTE	IRQF:1;
			__BYTE	IRS:2;
			__BYTE	RESV11:1;
			__BYTE	OSEL:1;
	} bit;
	struct {
			__BYTE	CNTE:1;
			__BYTE	STGR:1;
			__BYTE	MDSE:1;
			__BYTE	RTRG:1;
			__BYTE	CKS1:1;
			__BYTE	CKS0:1;
			__BYTE	PGMS:1;
			__BYTE	RESV7:1;
			__BYTE	EGS1:1;
			__BYTE	EGS0:1;
			__BYTE	IREN:1;
			__BYTE	IRQF:1;
			__BYTE	IRS1:1;
			__BYTE	IRS0:1;
			__BYTE	RESV14:1;
			__BYTE	OSEL:1;
	} bitc;
} PCN05STR;

__IO_EXTENDED	  PCN05STR	IO_PCN05;
#define	_pcn05		(IO_PCN05)
#define	PCN05		(IO_PCN05.hword)
#define	PCN05_CNTE  	(IO_PCN05.bit.CNTE)
#define	PCN05_STGR  	(IO_PCN05.bit.STGR)
#define	PCN05_MDSE  	(IO_PCN05.bit.MDSE)
#define	PCN05_RTRG  	(IO_PCN05.bit.RTRG)
#define	PCN05_CKS  	(IO_PCN05.bit.CKS)
#define	PCN05_CKS0  	(IO_PCN05.bitc.CKS0)
#define	PCN05_CKS1  	(IO_PCN05.bitc.CKS1)
#define	PCN05_PGMS  	(IO_PCN05.bit.PGMS)
#define	PCN05_EGS  	(IO_PCN05.bit.EGS)
#define	PCN05_EGS0  	(IO_PCN05.bitc.EGS0)
#define	PCN05_EGS1  	(IO_PCN05.bitc.EGS1)
#define	PCN05_IREN  	(IO_PCN05.bit.IREN)
#define	PCN05_IRQF  	(IO_PCN05.bit.IRQF)
#define	PCN05_IRS  	(IO_PCN05.bit.IRS)
#define	PCN05_IRS0  	(IO_PCN05.bitc.IRS0)
#define	PCN05_IRS1  	(IO_PCN05.bitc.IRS1)
#define	PCN05_OSEL  	(IO_PCN05.bit.OSEL)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_PTMR06,attr=IO,locate=0x140
#endif

__IO_EXTENDED	const __HWORD	IO_PTMR06;
#define	_ptmr06		(IO_PTMR06)
#define	PTMR06	(_ptmr06)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_PCSR06,attr=IO,locate=0x142
#endif

__IO_EXTENDED	__HWORD	IO_PCSR06;
#define	_pcsr06		(IO_PCSR06)
#define	PCSR06	(_pcsr06)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_PDUT06,attr=IO,locate=0x144
#endif

__IO_EXTENDED	__HWORD	IO_PDUT06;
#define	_pdut06		(IO_PDUT06)
#define	PDUT06	(_pdut06)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_PCN06,attr=IO,locate=0x146
#endif

typedef union {
	__HWORD	hword;
	struct {
			__BYTE	CNTE:1;
			__BYTE	STGR:1;
			__BYTE	MDSE:1;
			__BYTE	RTRG:1;
			__BYTE	CKS:2;
			__BYTE	PGMS:1;
			__BYTE	RESV6:1;
			__BYTE	EGS:2;
			__BYTE	IREN:1;
			__BYTE	IRQF:1;
			__BYTE	IRS:2;
			__BYTE	RESV11:1;
			__BYTE	OSEL:1;
	} bit;
	struct {
			__BYTE	CNTE:1;
			__BYTE	STGR:1;
			__BYTE	MDSE:1;
			__BYTE	RTRG:1;
			__BYTE	CKS1:1;
			__BYTE	CKS0:1;
			__BYTE	PGMS:1;
			__BYTE	RESV7:1;
			__BYTE	EGS1:1;
			__BYTE	EGS0:1;
			__BYTE	IREN:1;
			__BYTE	IRQF:1;
			__BYTE	IRS1:1;
			__BYTE	IRS0:1;
			__BYTE	RESV14:1;
			__BYTE	OSEL:1;
	} bitc;
} PCN06STR;

__IO_EXTENDED	  PCN06STR	IO_PCN06;
#define	_pcn06		(IO_PCN06)
#define	PCN06		(IO_PCN06.hword)
#define	PCN06_CNTE  	(IO_PCN06.bit.CNTE)
#define	PCN06_STGR  	(IO_PCN06.bit.STGR)
#define	PCN06_MDSE  	(IO_PCN06.bit.MDSE)
#define	PCN06_RTRG  	(IO_PCN06.bit.RTRG)
#define	PCN06_CKS  	(IO_PCN06.bit.CKS)
#define	PCN06_CKS0  	(IO_PCN06.bitc.CKS0)
#define	PCN06_CKS1  	(IO_PCN06.bitc.CKS1)
#define	PCN06_PGMS  	(IO_PCN06.bit.PGMS)
#define	PCN06_EGS  	(IO_PCN06.bit.EGS)
#define	PCN06_EGS0  	(IO_PCN06.bitc.EGS0)
#define	PCN06_EGS1  	(IO_PCN06.bitc.EGS1)
#define	PCN06_IREN  	(IO_PCN06.bit.IREN)
#define	PCN06_IRQF  	(IO_PCN06.bit.IRQF)
#define	PCN06_IRS  	(IO_PCN06.bit.IRS)
#define	PCN06_IRS0  	(IO_PCN06.bitc.IRS0)
#define	PCN06_IRS1  	(IO_PCN06.bitc.IRS1)
#define	PCN06_OSEL  	(IO_PCN06.bit.OSEL)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_PTMR07,attr=IO,locate=0x148
#endif

__IO_EXTENDED	const __HWORD	IO_PTMR07;
#define	_ptmr07		(IO_PTMR07)
#define	PTMR07	(_ptmr07)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_PCSR07,attr=IO,locate=0x14A
#endif

__IO_EXTENDED	__HWORD	IO_PCSR07;
#define	_pcsr07		(IO_PCSR07)
#define	PCSR07	(_pcsr07)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_PDUT07,attr=IO,locate=0x14C
#endif

__IO_EXTENDED	__HWORD	IO_PDUT07;
#define	_pdut07		(IO_PDUT07)
#define	PDUT07	(_pdut07)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_PCN07,attr=IO,locate=0x14E
#endif

typedef union {
	__HWORD	hword;
	struct {
			__BYTE	CNTE:1;
			__BYTE	STGR:1;
			__BYTE	MDSE:1;
			__BYTE	RTRG:1;
			__BYTE	CKS:2;
			__BYTE	PGMS:1;
			__BYTE	RESV6:1;
			__BYTE	EGS:2;
			__BYTE	IREN:1;
			__BYTE	IRQF:1;
			__BYTE	IRS:2;
			__BYTE	RESV11:1;
			__BYTE	OSEL:1;
	} bit;
	struct {
			__BYTE	CNTE:1;
			__BYTE	STGR:1;
			__BYTE	MDSE:1;
			__BYTE	RTRG:1;
			__BYTE	CKS1:1;
			__BYTE	CKS0:1;
			__BYTE	PGMS:1;
			__BYTE	RESV7:1;
			__BYTE	EGS1:1;
			__BYTE	EGS0:1;
			__BYTE	IREN:1;
			__BYTE	IRQF:1;
			__BYTE	IRS1:1;
			__BYTE	IRS0:1;
			__BYTE	RESV14:1;
			__BYTE	OSEL:1;
	} bitc;
} PCN07STR;

__IO_EXTENDED	  PCN07STR	IO_PCN07;
#define	_pcn07		(IO_PCN07)
#define	PCN07		(IO_PCN07.hword)
#define	PCN07_CNTE  	(IO_PCN07.bit.CNTE)
#define	PCN07_STGR  	(IO_PCN07.bit.STGR)
#define	PCN07_MDSE  	(IO_PCN07.bit.MDSE)
#define	PCN07_RTRG  	(IO_PCN07.bit.RTRG)
#define	PCN07_CKS  	(IO_PCN07.bit.CKS)
#define	PCN07_CKS0  	(IO_PCN07.bitc.CKS0)
#define	PCN07_CKS1  	(IO_PCN07.bitc.CKS1)
#define	PCN07_PGMS  	(IO_PCN07.bit.PGMS)
#define	PCN07_EGS  	(IO_PCN07.bit.EGS)
#define	PCN07_EGS0  	(IO_PCN07.bitc.EGS0)
#define	PCN07_EGS1  	(IO_PCN07.bitc.EGS1)
#define	PCN07_IREN  	(IO_PCN07.bit.IREN)
#define	PCN07_IRQF  	(IO_PCN07.bit.IRQF)
#define	PCN07_IRS  	(IO_PCN07.bit.IRS)
#define	PCN07_IRS0  	(IO_PCN07.bitc.IRS0)
#define	PCN07_IRS1  	(IO_PCN07.bitc.IRS1)
#define	PCN07_OSEL  	(IO_PCN07.bit.OSEL)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_PTMR08,attr=IO,locate=0x150
#endif

__IO_EXTENDED	const __HWORD	IO_PTMR08;
#define	_ptmr08		(IO_PTMR08)
#define	PTMR08	(_ptmr08)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_PCSR08,attr=IO,locate=0x152
#endif

__IO_EXTENDED	__HWORD	IO_PCSR08;
#define	_pcsr08		(IO_PCSR08)
#define	PCSR08	(_pcsr08)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_PDUT08,attr=IO,locate=0x154
#endif

__IO_EXTENDED	__HWORD	IO_PDUT08;
#define	_pdut08		(IO_PDUT08)
#define	PDUT08	(_pdut08)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_PCN08,attr=IO,locate=0x156
#endif

typedef union {
	__HWORD	hword;
	struct {
			__BYTE	CNTE:1;
			__BYTE	STGR:1;
			__BYTE	MDSE:1;
			__BYTE	RTRG:1;
			__BYTE	CKS:2;
			__BYTE	PGMS:1;
			__BYTE	RESV6:1;
			__BYTE	EGS:2;
			__BYTE	IREN:1;
			__BYTE	IRQF:1;
			__BYTE	IRS:2;
			__BYTE	RESV11:1;
			__BYTE	OSEL:1;
	} bit;
	struct {
			__BYTE	CNTE:1;
			__BYTE	STGR:1;
			__BYTE	MDSE:1;
			__BYTE	RTRG:1;
			__BYTE	CKS1:1;
			__BYTE	CKS0:1;
			__BYTE	PGMS:1;
			__BYTE	RESV7:1;
			__BYTE	EGS1:1;
			__BYTE	EGS0:1;
			__BYTE	IREN:1;
			__BYTE	IRQF:1;
			__BYTE	IRS1:1;
			__BYTE	IRS0:1;
			__BYTE	RESV14:1;
			__BYTE	OSEL:1;
	} bitc;
} PCN08STR;

__IO_EXTENDED	  PCN08STR	IO_PCN08;
#define	_pcn08		(IO_PCN08)
#define	PCN08		(IO_PCN08.hword)
#define	PCN08_CNTE  	(IO_PCN08.bit.CNTE)
#define	PCN08_STGR  	(IO_PCN08.bit.STGR)
#define	PCN08_MDSE  	(IO_PCN08.bit.MDSE)
#define	PCN08_RTRG  	(IO_PCN08.bit.RTRG)
#define	PCN08_CKS  	(IO_PCN08.bit.CKS)
#define	PCN08_CKS0  	(IO_PCN08.bitc.CKS0)
#define	PCN08_CKS1  	(IO_PCN08.bitc.CKS1)
#define	PCN08_PGMS  	(IO_PCN08.bit.PGMS)
#define	PCN08_EGS  	(IO_PCN08.bit.EGS)
#define	PCN08_EGS0  	(IO_PCN08.bitc.EGS0)
#define	PCN08_EGS1  	(IO_PCN08.bitc.EGS1)
#define	PCN08_IREN  	(IO_PCN08.bit.IREN)
#define	PCN08_IRQF  	(IO_PCN08.bit.IRQF)
#define	PCN08_IRS  	(IO_PCN08.bit.IRS)
#define	PCN08_IRS0  	(IO_PCN08.bitc.IRS0)
#define	PCN08_IRS1  	(IO_PCN08.bitc.IRS1)
#define	PCN08_OSEL  	(IO_PCN08.bit.OSEL)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_PTMR09,attr=IO,locate=0x158
#endif

__IO_EXTENDED	const __HWORD	IO_PTMR09;
#define	_ptmr09		(IO_PTMR09)
#define	PTMR09	(_ptmr09)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_PCSR09,attr=IO,locate=0x15A
#endif

__IO_EXTENDED	__HWORD	IO_PCSR09;
#define	_pcsr09		(IO_PCSR09)
#define	PCSR09	(_pcsr09)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_PDUT09,attr=IO,locate=0x15C
#endif

__IO_EXTENDED	__HWORD	IO_PDUT09;
#define	_pdut09		(IO_PDUT09)
#define	PDUT09	(_pdut09)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_PCN09,attr=IO,locate=0x15E
#endif

typedef union {
	__HWORD	hword;
	struct {
			__BYTE	CNTE:1;
			__BYTE	STGR:1;
			__BYTE	MDSE:1;
			__BYTE	RTRG:1;
			__BYTE	CKS:2;
			__BYTE	PGMS:1;
			__BYTE	RESV6:1;
			__BYTE	EGS:2;
			__BYTE	IREN:1;
			__BYTE	IRQF:1;
			__BYTE	IRS:2;
			__BYTE	RESV11:1;
			__BYTE	OSEL:1;
	} bit;
	struct {
			__BYTE	CNTE:1;
			__BYTE	STGR:1;
			__BYTE	MDSE:1;
			__BYTE	RTRG:1;
			__BYTE	CKS1:1;
			__BYTE	CKS0:1;
			__BYTE	PGMS:1;
			__BYTE	RESV7:1;
			__BYTE	EGS1:1;
			__BYTE	EGS0:1;
			__BYTE	IREN:1;
			__BYTE	IRQF:1;
			__BYTE	IRS1:1;
			__BYTE	IRS0:1;
			__BYTE	RESV14:1;
			__BYTE	OSEL:1;
	} bitc;
} PCN09STR;

__IO_EXTENDED	  PCN09STR	IO_PCN09;
#define	_pcn09		(IO_PCN09)
#define	PCN09		(IO_PCN09.hword)
#define	PCN09_CNTE  	(IO_PCN09.bit.CNTE)
#define	PCN09_STGR  	(IO_PCN09.bit.STGR)
#define	PCN09_MDSE  	(IO_PCN09.bit.MDSE)
#define	PCN09_RTRG  	(IO_PCN09.bit.RTRG)
#define	PCN09_CKS  	(IO_PCN09.bit.CKS)
#define	PCN09_CKS0  	(IO_PCN09.bitc.CKS0)
#define	PCN09_CKS1  	(IO_PCN09.bitc.CKS1)
#define	PCN09_PGMS  	(IO_PCN09.bit.PGMS)
#define	PCN09_EGS  	(IO_PCN09.bit.EGS)
#define	PCN09_EGS0  	(IO_PCN09.bitc.EGS0)
#define	PCN09_EGS1  	(IO_PCN09.bitc.EGS1)
#define	PCN09_IREN  	(IO_PCN09.bit.IREN)
#define	PCN09_IRQF  	(IO_PCN09.bit.IRQF)
#define	PCN09_IRS  	(IO_PCN09.bit.IRS)
#define	PCN09_IRS0  	(IO_PCN09.bitc.IRS0)
#define	PCN09_IRS1  	(IO_PCN09.bitc.IRS1)
#define	PCN09_OSEL  	(IO_PCN09.bit.OSEL)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_PTMR10,attr=IO,locate=0x160
#endif

__IO_EXTENDED	const __HWORD	IO_PTMR10;
#define	_ptmr10		(IO_PTMR10)
#define	PTMR10	(_ptmr10)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_PCSR10,attr=IO,locate=0x162
#endif

__IO_EXTENDED	__HWORD	IO_PCSR10;
#define	_pcsr10		(IO_PCSR10)
#define	PCSR10	(_pcsr10)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_PDUT10,attr=IO,locate=0x164
#endif

__IO_EXTENDED	__HWORD	IO_PDUT10;
#define	_pdut10		(IO_PDUT10)
#define	PDUT10	(_pdut10)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_PCN10,attr=IO,locate=0x166
#endif

typedef union {
	__HWORD	hword;
	struct {
			__BYTE	CNTE:1;
			__BYTE	STGR:1;
			__BYTE	MDSE:1;
			__BYTE	RTRG:1;
			__BYTE	CKS:2;
			__BYTE	PGMS:1;
			__BYTE	RESV6:1;
			__BYTE	EGS:2;
			__BYTE	IREN:1;
			__BYTE	IRQF:1;
			__BYTE	IRS:2;
			__BYTE	RESV11:1;
			__BYTE	OSEL:1;
	} bit;
	struct {
			__BYTE	CNTE:1;
			__BYTE	STGR:1;
			__BYTE	MDSE:1;
			__BYTE	RTRG:1;
			__BYTE	CKS1:1;
			__BYTE	CKS0:1;
			__BYTE	PGMS:1;
			__BYTE	RESV7:1;
			__BYTE	EGS1:1;
			__BYTE	EGS0:1;
			__BYTE	IREN:1;
			__BYTE	IRQF:1;
			__BYTE	IRS1:1;
			__BYTE	IRS0:1;
			__BYTE	RESV14:1;
			__BYTE	OSEL:1;
	} bitc;
} PCN10STR;

__IO_EXTENDED	  PCN10STR	IO_PCN10;
#define	_pcn10		(IO_PCN10)
#define	PCN10		(IO_PCN10.hword)
#define	PCN10_CNTE  	(IO_PCN10.bit.CNTE)
#define	PCN10_STGR  	(IO_PCN10.bit.STGR)
#define	PCN10_MDSE  	(IO_PCN10.bit.MDSE)
#define	PCN10_RTRG  	(IO_PCN10.bit.RTRG)
#define	PCN10_CKS  	(IO_PCN10.bit.CKS)
#define	PCN10_CKS0  	(IO_PCN10.bitc.CKS0)
#define	PCN10_CKS1  	(IO_PCN10.bitc.CKS1)
#define	PCN10_PGMS  	(IO_PCN10.bit.PGMS)
#define	PCN10_EGS  	(IO_PCN10.bit.EGS)
#define	PCN10_EGS0  	(IO_PCN10.bitc.EGS0)
#define	PCN10_EGS1  	(IO_PCN10.bitc.EGS1)
#define	PCN10_IREN  	(IO_PCN10.bit.IREN)
#define	PCN10_IRQF  	(IO_PCN10.bit.IRQF)
#define	PCN10_IRS  	(IO_PCN10.bit.IRS)
#define	PCN10_IRS0  	(IO_PCN10.bitc.IRS0)
#define	PCN10_IRS1  	(IO_PCN10.bitc.IRS1)
#define	PCN10_OSEL  	(IO_PCN10.bit.OSEL)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_PTMR11,attr=IO,locate=0x168
#endif

__IO_EXTENDED	const __HWORD	IO_PTMR11;
#define	_ptmr11		(IO_PTMR11)
#define	PTMR11	(_ptmr11)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_PCSR11,attr=IO,locate=0x16A
#endif

__IO_EXTENDED	__HWORD	IO_PCSR11;
#define	_pcsr11		(IO_PCSR11)
#define	PCSR11	(_pcsr11)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_PDUT11,attr=IO,locate=0x16C
#endif

__IO_EXTENDED	__HWORD	IO_PDUT11;
#define	_pdut11		(IO_PDUT11)
#define	PDUT11	(_pdut11)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_PCN11,attr=IO,locate=0x16E
#endif

typedef union {
	__HWORD	hword;
	struct {
			__BYTE	CNTE:1;
			__BYTE	STGR:1;
			__BYTE	MDSE:1;
			__BYTE	RTRG:1;
			__BYTE	CKS:2;
			__BYTE	PGMS:1;
			__BYTE	RESV6:1;
			__BYTE	EGS:2;
			__BYTE	IREN:1;
			__BYTE	IRQF:1;
			__BYTE	IRS:2;
			__BYTE	RESV11:1;
			__BYTE	OSEL:1;
	} bit;
	struct {
			__BYTE	CNTE:1;
			__BYTE	STGR:1;
			__BYTE	MDSE:1;
			__BYTE	RTRG:1;
			__BYTE	CKS1:1;
			__BYTE	CKS0:1;
			__BYTE	PGMS:1;
			__BYTE	RESV7:1;
			__BYTE	EGS1:1;
			__BYTE	EGS0:1;
			__BYTE	IREN:1;
			__BYTE	IRQF:1;
			__BYTE	IRS1:1;
			__BYTE	IRS0:1;
			__BYTE	RESV14:1;
			__BYTE	OSEL:1;
	} bitc;
} PCN11STR;

__IO_EXTENDED	  PCN11STR	IO_PCN11;
#define	_pcn11		(IO_PCN11)
#define	PCN11		(IO_PCN11.hword)
#define	PCN11_CNTE  	(IO_PCN11.bit.CNTE)
#define	PCN11_STGR  	(IO_PCN11.bit.STGR)
#define	PCN11_MDSE  	(IO_PCN11.bit.MDSE)
#define	PCN11_RTRG  	(IO_PCN11.bit.RTRG)
#define	PCN11_CKS  	(IO_PCN11.bit.CKS)
#define	PCN11_CKS0  	(IO_PCN11.bitc.CKS0)
#define	PCN11_CKS1  	(IO_PCN11.bitc.CKS1)
#define	PCN11_PGMS  	(IO_PCN11.bit.PGMS)
#define	PCN11_EGS  	(IO_PCN11.bit.EGS)
#define	PCN11_EGS0  	(IO_PCN11.bitc.EGS0)
#define	PCN11_EGS1  	(IO_PCN11.bitc.EGS1)
#define	PCN11_IREN  	(IO_PCN11.bit.IREN)
#define	PCN11_IRQF  	(IO_PCN11.bit.IRQF)
#define	PCN11_IRS  	(IO_PCN11.bit.IRS)
#define	PCN11_IRS0  	(IO_PCN11.bitc.IRS0)
#define	PCN11_IRS1  	(IO_PCN11.bitc.IRS1)
#define	PCN11_OSEL  	(IO_PCN11.bit.OSEL)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_ICS01,attr=IO,locate=0x181
#endif

typedef union {
	__BYTE	byte;
	struct {
			__BYTE	ICP1:1;
			__BYTE	ICP0:1;
			__BYTE	ICE1:1;
			__BYTE	ICE0:1;
			__BYTE	EG1:2;
			__BYTE	EG0:2;
	} bit;
	struct {
			__BYTE	ICP1:1;
			__BYTE	ICP0:1;
			__BYTE	ICE1:1;
			__BYTE	ICE0:1;
			__BYTE	EG11:1;
			__BYTE	EG10:1;
			__BYTE	EG01:1;
			__BYTE	EG00:1;
	} bitc;
} ICS01STR;

__IO_EXTENDED	  ICS01STR	IO_ICS01;
#define	_ics01		(IO_ICS01)
#define	ICS01		(IO_ICS01.byte)
#define	ICS01_ICP1  	(IO_ICS01.bit.ICP1)
#define	ICS01_ICP0  	(IO_ICS01.bit.ICP0)
#define	ICS01_ICE1  	(IO_ICS01.bit.ICE1)
#define	ICS01_ICE0  	(IO_ICS01.bit.ICE0)
#define	ICS01_EG1  	(IO_ICS01.bit.EG1)
#define	ICS01_EG10  	(IO_ICS01.bitc.EG10)
#define	ICS01_EG11  	(IO_ICS01.bitc.EG11)
#define	ICS01_EG0  	(IO_ICS01.bit.EG0)
#define	ICS01_EG00  	(IO_ICS01.bitc.EG00)
#define	ICS01_EG01  	(IO_ICS01.bitc.EG01)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_ICS23,attr=IO,locate=0x183
#endif

typedef union {
	__BYTE	byte;
	struct {
			__BYTE	ICP3:1;
			__BYTE	ICP2:1;
			__BYTE	ICE3:1;
			__BYTE	ICE2:1;
			__BYTE	EG3:2;
			__BYTE	EG2:2;
	} bit;
	struct {
			__BYTE	ICP3:1;
			__BYTE	ICP2:1;
			__BYTE	ICE3:1;
			__BYTE	ICE2:1;
			__BYTE	EG31:1;
			__BYTE	EG30:1;
			__BYTE	EG21:1;
			__BYTE	EG20:1;
	} bitc;
} ICS23STR;

__IO_EXTENDED	  ICS23STR	IO_ICS23;
#define	_ics23		(IO_ICS23)
#define	ICS23		(IO_ICS23.byte)
#define	ICS23_ICP3  	(IO_ICS23.bit.ICP3)
#define	ICS23_ICP2  	(IO_ICS23.bit.ICP2)
#define	ICS23_ICE3  	(IO_ICS23.bit.ICE3)
#define	ICS23_ICE2  	(IO_ICS23.bit.ICE2)
#define	ICS23_EG3  	(IO_ICS23.bit.EG3)
#define	ICS23_EG30  	(IO_ICS23.bitc.EG30)
#define	ICS23_EG31  	(IO_ICS23.bitc.EG31)
#define	ICS23_EG2  	(IO_ICS23.bit.EG2)
#define	ICS23_EG20  	(IO_ICS23.bitc.EG20)
#define	ICS23_EG21  	(IO_ICS23.bitc.EG21)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_IPCP0,attr=IO,locate=0x184
#endif

__IO_EXTENDED	const __HWORD	IO_IPCP0;
#define	_ipcp0		(IO_IPCP0)
#define	IPCP0	(_ipcp0)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_IPCP1,attr=IO,locate=0x186
#endif

__IO_EXTENDED	const __HWORD	IO_IPCP1;
#define	_ipcp1		(IO_IPCP1)
#define	IPCP1	(_ipcp1)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_IPCP2,attr=IO,locate=0x188
#endif

__IO_EXTENDED	const __HWORD	IO_IPCP2;
#define	_ipcp2		(IO_IPCP2)
#define	IPCP2	(_ipcp2)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_IPCP3,attr=IO,locate=0x18A
#endif

__IO_EXTENDED	const __HWORD	IO_IPCP3;
#define	_ipcp3		(IO_IPCP3)
#define	IPCP3	(_ipcp3)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_OCS01,attr=IO,locate=0x18C
#endif

typedef union {
	__HWORD	hword;
	struct {
			__BYTE	RESV0:1;
			__BYTE	RESV1:1;
			__BYTE	RESV2:1;
			__BYTE	CMOD:1;
			__BYTE	RESV4:1;
			__BYTE	RESV5:1;
			__BYTE	OTD1:1;
			__BYTE	OTD0:1;
			__BYTE	ICP1:1;
			__BYTE	ICP0:1;
			__BYTE	ICE1:1;
			__BYTE	ICE0:1;
			__BYTE	RESV12:1;
			__BYTE	RESV13:1;
			__BYTE	CST1:1;
			__BYTE	CST0:1;
	} bit;
	struct {
			__BYTE	RESV0:1;
			__BYTE	RESV1:1;
			__BYTE	RESV2:1;
			__BYTE	CMOD:1;
			__BYTE	RESV4:1;
			__BYTE	RESV5:1;
			__BYTE	OTD1:1;
			__BYTE	OTD0:1;
			__BYTE	ICP1:1;
			__BYTE	ICP0:1;
			__BYTE	ICE1:1;
			__BYTE	ICE0:1;
			__BYTE	RESV12:1;
			__BYTE	RESV13:1;
			__BYTE	CST1:1;
			__BYTE	CST0:1;
	} bitc;
} OCS01STR;

__IO_EXTENDED	  OCS01STR	IO_OCS01;
#define	_ocs01		(IO_OCS01)
#define	OCS01		(IO_OCS01.hword)
#define	OCS01_CMOD  	(IO_OCS01.bit.CMOD)
#define	OCS01_OTD1  	(IO_OCS01.bit.OTD1)
#define	OCS01_OTD0  	(IO_OCS01.bit.OTD0)
#define	OCS01_ICP1  	(IO_OCS01.bit.ICP1)
#define	OCS01_ICP0  	(IO_OCS01.bit.ICP0)
#define	OCS01_ICE1  	(IO_OCS01.bit.ICE1)
#define	OCS01_ICE0  	(IO_OCS01.bit.ICE0)
#define	OCS01_CST1  	(IO_OCS01.bit.CST1)
#define	OCS01_CST0  	(IO_OCS01.bit.CST0)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_OCS23,attr=IO,locate=0x18E
#endif

typedef union {
	__HWORD	hword;
	struct {
			__BYTE	RESV0:1;
			__BYTE	RESV1:1;
			__BYTE	RESV2:1;
			__BYTE	CMOD:1;
			__BYTE	RESV4:1;
			__BYTE	RESV5:1;
			__BYTE	OTD3:1;
			__BYTE	OTD2:1;
			__BYTE	ICP3:1;
			__BYTE	ICP2:1;
			__BYTE	ICE3:1;
			__BYTE	ICE2:1;
			__BYTE	RESV12:1;
			__BYTE	RESV13:1;
			__BYTE	CST3:1;
			__BYTE	CST2:1;
	} bit;
	struct {
			__BYTE	RESV0:1;
			__BYTE	RESV1:1;
			__BYTE	RESV2:1;
			__BYTE	CMOD:1;
			__BYTE	RESV4:1;
			__BYTE	RESV5:1;
			__BYTE	OTD3:1;
			__BYTE	OTD2:1;
			__BYTE	ICP3:1;
			__BYTE	ICP2:1;
			__BYTE	ICE3:1;
			__BYTE	ICE2:1;
			__BYTE	RESV12:1;
			__BYTE	RESV13:1;
			__BYTE	CST3:1;
			__BYTE	CST2:1;
	} bitc;
} OCS23STR;

__IO_EXTENDED	  OCS23STR	IO_OCS23;
#define	_ocs23		(IO_OCS23)
#define	OCS23		(IO_OCS23.hword)
#define	OCS23_CMOD  	(IO_OCS23.bit.CMOD)
#define	OCS23_OTD3  	(IO_OCS23.bit.OTD3)
#define	OCS23_OTD2  	(IO_OCS23.bit.OTD2)
#define	OCS23_ICP3  	(IO_OCS23.bit.ICP3)
#define	OCS23_ICP2  	(IO_OCS23.bit.ICP2)
#define	OCS23_ICE3  	(IO_OCS23.bit.ICE3)
#define	OCS23_ICE2  	(IO_OCS23.bit.ICE2)
#define	OCS23_CST3  	(IO_OCS23.bit.CST3)
#define	OCS23_CST2  	(IO_OCS23.bit.CST2)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_OCCP0,attr=IO,locate=0x190
#endif

__IO_EXTENDED	__HWORD	IO_OCCP0;
#define	_occp0		(IO_OCCP0)
#define	OCCP0	(_occp0)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_OCCP1,attr=IO,locate=0x192
#endif

__IO_EXTENDED	__HWORD	IO_OCCP1;
#define	_occp1		(IO_OCCP1)
#define	OCCP1	(_occp1)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_OCCP2,attr=IO,locate=0x194
#endif

__IO_EXTENDED	__HWORD	IO_OCCP2;
#define	_occp2		(IO_OCCP2)
#define	OCCP2	(_occp2)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_OCCP3,attr=IO,locate=0x196
#endif

__IO_EXTENDED	__HWORD	IO_OCCP3;
#define	_occp3		(IO_OCCP3)
#define	OCCP3	(_occp3)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_AD,attr=IO,locate=0x1A0
#endif

__IO_EXTENDED	struct {
	union {
		__WORD	word;
		struct {
			__BYTE	RESV00:1;
			__BYTE	RESV01:1;
			__BYTE	RESV02:1;
			__BYTE	RESV03:1;
			__BYTE	RESV04:1;
			__BYTE	RESV05:1;
			__BYTE	RESV06:1;
			__BYTE	RESV07:1;
			__BYTE	ADE23:1;
			__BYTE	ADE22:1;
			__BYTE	ADE21:1;
			__BYTE	ADE20:1;
			__BYTE	ADE19:1;
			__BYTE	ADE18:1;
			__BYTE	ADE17:1;
			__BYTE	ADE16:1;
			__BYTE	ADE15:1;
			__BYTE	ADE14:1;
			__BYTE	ADE13:1;
			__BYTE	ADE12:1;
			__BYTE	ADE11:1;
			__BYTE	ADE10:1;
			__BYTE	ADE9:1;
			__BYTE	ADE8:1;
			__BYTE	ADE7:1;
			__BYTE	ADE6:1;
			__BYTE	ADE5:1;
			__BYTE	ADE4:1;
			__BYTE	ADE3:1;
			__BYTE	ADE2:1;
			__BYTE	ADE1:1;
			__BYTE	ADE0:1;
		} bit;
		struct {
			__BYTE	RESV00:1;
			__BYTE	RESV01:1;
			__BYTE	RESV02:1;
			__BYTE	RESV03:1;
			__BYTE	RESV04:1;
			__BYTE	RESV05:1;
			__BYTE	RESV06:1;
			__BYTE	RESV07:1;
			__BYTE	ADE23:1;
			__BYTE	ADE22:1;
			__BYTE	ADE21:1;
			__BYTE	ADE20:1;
			__BYTE	ADE19:1;
			__BYTE	ADE18:1;
			__BYTE	ADE17:1;
			__BYTE	ADE16:1;
			__BYTE	ADE15:1;
			__BYTE	ADE14:1;
			__BYTE	ADE13:1;
			__BYTE	ADE12:1;
			__BYTE	ADE11:1;
			__BYTE	ADE10:1;
			__BYTE	ADE9:1;
			__BYTE	ADE8:1;
			__BYTE	ADE7:1;
			__BYTE	ADE6:1;
			__BYTE	ADE5:1;
			__BYTE	ADE4:1;
			__BYTE	ADE3:1;
			__BYTE	ADE2:1;
			__BYTE	ADE1:1;
			__BYTE	ADE0:1;
		} bitc;
	} IO_ADER;
	union {
		__BYTE	byte;
		struct {
			__BYTE	BUSY:1;
			__BYTE	INT:1;
			__BYTE	INTE:1;
			__BYTE	PAUS:1;
			__BYTE	STS:2;
			__BYTE	STRT:1;
			__BYTE	RESV46:1;
		} bit;
		struct {
			__BYTE	BUSY:1;
			__BYTE	INT:1;
			__BYTE	INTE:1;
			__BYTE	PAUS:1;
			__BYTE	STS1:1;
			__BYTE	STS0:1;
			__BYTE	STRT:1;
			__BYTE	RESV47:1;
		} bitc;
	} IO_ADCS1;
	union {
		__BYTE	byte;
		struct {
			__BYTE	MD:2;
			__BYTE	S10:1;
			__BYTE	ACH:5;
		} bit;
		struct {
			__BYTE	MD1:1;
			__BYTE	MD0:1;
			__BYTE	S10:1;
			__BYTE	ACH4:1;
			__BYTE	ACH3:1;
			__BYTE	ACH2:1;
			__BYTE	ACH1:1;
			__BYTE	ACH0:1;
		} bitc;
	} IO_ADCS0;
	const union {
		__HWORD	hword;
		struct {
			__BYTE	RESV60:1;
			__BYTE	RESV61:1;
			__BYTE	RESV62:1;
			__BYTE	RESV63:1;
			__BYTE	RESV64:1;
			__BYTE	RESV65:1;
			__HWORD	D:10;
		} bit;
		struct {
			__BYTE	RESV60:1;
			__BYTE	RESV61:1;
			__BYTE	RESV62:1;
			__BYTE	RESV63:1;
			__BYTE	RESV64:1;
			__BYTE	RESV65:1;
			__BYTE	D9:1;
			__BYTE	D8:1;
			__BYTE	D7:1;
			__BYTE	D6:1;
			__BYTE	D5:1;
			__BYTE	D4:1;
			__BYTE	D3:1;
			__BYTE	D2:1;
			__BYTE	D1:1;
			__BYTE	D0:1;
		} bitc;
	} IO_ADCR01;
	union {
		__HWORD	hword;
		struct {
			__BYTE	CT:6;
			__HWORD	ST:10;
		} bit;
		struct {
			__BYTE	CT5:1;
			__BYTE	CT4:1;
			__BYTE	CT3:1;
			__BYTE	CT2:1;
			__BYTE	CT1:1;
			__BYTE	CT0:1;
			__BYTE	ST9:1;
			__BYTE	ST8:1;
			__BYTE	ST7:1;
			__BYTE	ST6:1;
			__BYTE	ST5:1;
			__BYTE	ST4:1;
			__BYTE	ST3:1;
			__BYTE	ST2:1;
			__BYTE	ST1:1;
			__BYTE	ST0:1;
		} bitc;
	} IO_ADCT01;
	union {
		__BYTE	byte;
		struct {
			__BYTE	RESV100:1;
			__BYTE	RESV101:1;
			__BYTE	RESV102:1;
			__BYTE	ANS:5;
		} bit;
		struct {
			__BYTE	RESV100:1;
			__BYTE	RESV101:1;
			__BYTE	RESV102:1;
			__BYTE	ANS4:1;
			__BYTE	ANS3:1;
			__BYTE	ANS2:1;
			__BYTE	ANS1:1;
			__BYTE	ANS0:1;
		} bitc;
	} IO_ADSCH;
	union {
		__BYTE	byte;
		struct {
			__BYTE	RESV110:1;
			__BYTE	RESV111:1;
			__BYTE	RESV112:1;
			__BYTE	ANE:5;
		} bit;
		struct {
			__BYTE	RESV110:1;
			__BYTE	RESV111:1;
			__BYTE	RESV112:1;
			__BYTE	ANE4:1;
			__BYTE	ANE3:1;
			__BYTE	ANE2:1;
			__BYTE	ANE1:1;
			__BYTE	ANE0:1;
		} bitc;
	} IO_ADECH;
} IO_AD;

#define	AD_ADER			(IO_AD.IO_ADER.word)
#define	AD_ADER_ADE23    	(IO_AD.IO_ADER.bit.ADE23)
#define	AD_ADER_ADE22    	(IO_AD.IO_ADER.bit.ADE22)
#define	AD_ADER_ADE21    	(IO_AD.IO_ADER.bit.ADE21)
#define	AD_ADER_ADE20    	(IO_AD.IO_ADER.bit.ADE20)
#define	AD_ADER_ADE19    	(IO_AD.IO_ADER.bit.ADE19)
#define	AD_ADER_ADE18    	(IO_AD.IO_ADER.bit.ADE18)
#define	AD_ADER_ADE17    	(IO_AD.IO_ADER.bit.ADE17)
#define	AD_ADER_ADE16    	(IO_AD.IO_ADER.bit.ADE16)
#define	AD_ADER_ADE15    	(IO_AD.IO_ADER.bit.ADE15)
#define	AD_ADER_ADE14    	(IO_AD.IO_ADER.bit.ADE14)
#define	AD_ADER_ADE13    	(IO_AD.IO_ADER.bit.ADE13)
#define	AD_ADER_ADE12    	(IO_AD.IO_ADER.bit.ADE12)
#define	AD_ADER_ADE11    	(IO_AD.IO_ADER.bit.ADE11)
#define	AD_ADER_ADE10    	(IO_AD.IO_ADER.bit.ADE10)
#define	AD_ADER_ADE9    	(IO_AD.IO_ADER.bit.ADE9)
#define	AD_ADER_ADE8    	(IO_AD.IO_ADER.bit.ADE8)
#define	AD_ADER_ADE7    	(IO_AD.IO_ADER.bit.ADE7)
#define	AD_ADER_ADE6    	(IO_AD.IO_ADER.bit.ADE6)
#define	AD_ADER_ADE5    	(IO_AD.IO_ADER.bit.ADE5)
#define	AD_ADER_ADE4    	(IO_AD.IO_ADER.bit.ADE4)
#define	AD_ADER_ADE3    	(IO_AD.IO_ADER.bit.ADE3)
#define	AD_ADER_ADE2    	(IO_AD.IO_ADER.bit.ADE2)
#define	AD_ADER_ADE1    	(IO_AD.IO_ADER.bit.ADE1)
#define	AD_ADER_ADE0    	(IO_AD.IO_ADER.bit.ADE0)
#define	AD_ADCS1			(IO_AD.IO_ADCS1.byte)
#define	AD_ADCS1_BUSY    	(IO_AD.IO_ADCS1.bit.BUSY)
#define	AD_ADCS1_INT    	(IO_AD.IO_ADCS1.bit.INT)
#define	AD_ADCS1_INTE    	(IO_AD.IO_ADCS1.bit.INTE)
#define	AD_ADCS1_PAUS    	(IO_AD.IO_ADCS1.bit.PAUS)
#define	AD_ADCS1_STS    	(IO_AD.IO_ADCS1.bit.STS)
#define	AD_ADCS1_STS0    	(IO_AD.IO_ADCS1.bitc.STS0)
#define	AD_ADCS1_STS1    	(IO_AD.IO_ADCS1.bitc.STS1)
#define	AD_ADCS1_STRT    	(IO_AD.IO_ADCS1.bit.STRT)
#define	AD_ADCS0			(IO_AD.IO_ADCS0.byte)
#define	AD_ADCS0_MD    	(IO_AD.IO_ADCS0.bit.MD)
#define	AD_ADCS0_MD0    	(IO_AD.IO_ADCS0.bitc.MD0)
#define	AD_ADCS0_MD1    	(IO_AD.IO_ADCS0.bitc.MD1)
#define	AD_ADCS0_S10    	(IO_AD.IO_ADCS0.bit.S10)
#define	AD_ADCS0_ACH    	(IO_AD.IO_ADCS0.bit.ACH)
#define	AD_ADCS0_ACH0    	(IO_AD.IO_ADCS0.bitc.ACH0)
#define	AD_ADCS0_ACH1    	(IO_AD.IO_ADCS0.bitc.ACH1)
#define	AD_ADCS0_ACH2    	(IO_AD.IO_ADCS0.bitc.ACH2)
#define	AD_ADCS0_ACH3    	(IO_AD.IO_ADCS0.bitc.ACH3)
#define	AD_ADCS0_ACH4    	(IO_AD.IO_ADCS0.bitc.ACH4)
#define	AD_ADCR01			(IO_AD.IO_ADCR01.hword)
#define	AD_ADCR01_D    	(IO_AD.IO_ADCR01.bit.D)
#define	AD_ADCR01_D0    	(IO_AD.IO_ADCR01.bitc.D0)
#define	AD_ADCR01_D1    	(IO_AD.IO_ADCR01.bitc.D1)
#define	AD_ADCR01_D2    	(IO_AD.IO_ADCR01.bitc.D2)
#define	AD_ADCR01_D3    	(IO_AD.IO_ADCR01.bitc.D3)
#define	AD_ADCR01_D4    	(IO_AD.IO_ADCR01.bitc.D4)
#define	AD_ADCR01_D5    	(IO_AD.IO_ADCR01.bitc.D5)
#define	AD_ADCR01_D6    	(IO_AD.IO_ADCR01.bitc.D6)
#define	AD_ADCR01_D7    	(IO_AD.IO_ADCR01.bitc.D7)
#define	AD_ADCR01_D8    	(IO_AD.IO_ADCR01.bitc.D8)
#define	AD_ADCR01_D9    	(IO_AD.IO_ADCR01.bitc.D9)
#define	AD_ADCT01			(IO_AD.IO_ADCT01.hword)
#define	AD_ADCT01_CT    	(IO_AD.IO_ADCT01.bit.CT)
#define	AD_ADCT01_CT0    	(IO_AD.IO_ADCT01.bitc.CT0)
#define	AD_ADCT01_CT1    	(IO_AD.IO_ADCT01.bitc.CT1)
#define	AD_ADCT01_CT2    	(IO_AD.IO_ADCT01.bitc.CT2)
#define	AD_ADCT01_CT3    	(IO_AD.IO_ADCT01.bitc.CT3)
#define	AD_ADCT01_CT4    	(IO_AD.IO_ADCT01.bitc.CT4)
#define	AD_ADCT01_CT5    	(IO_AD.IO_ADCT01.bitc.CT5)
#define	AD_ADCT01_ST    	(IO_AD.IO_ADCT01.bit.ST)
#define	AD_ADCT01_ST0    	(IO_AD.IO_ADCT01.bitc.ST0)
#define	AD_ADCT01_ST1    	(IO_AD.IO_ADCT01.bitc.ST1)
#define	AD_ADCT01_ST2    	(IO_AD.IO_ADCT01.bitc.ST2)
#define	AD_ADCT01_ST3    	(IO_AD.IO_ADCT01.bitc.ST3)
#define	AD_ADCT01_ST4    	(IO_AD.IO_ADCT01.bitc.ST4)
#define	AD_ADCT01_ST5    	(IO_AD.IO_ADCT01.bitc.ST5)
#define	AD_ADCT01_ST6    	(IO_AD.IO_ADCT01.bitc.ST6)
#define	AD_ADCT01_ST7    	(IO_AD.IO_ADCT01.bitc.ST7)
#define	AD_ADCT01_ST8    	(IO_AD.IO_ADCT01.bitc.ST8)
#define	AD_ADCT01_ST9    	(IO_AD.IO_ADCT01.bitc.ST9)
#define	AD_ADSCH			(IO_AD.IO_ADSCH.byte)
#define	AD_ADSCH_ANS    	(IO_AD.IO_ADSCH.bit.ANS)
#define	AD_ADSCH_ANS0    	(IO_AD.IO_ADSCH.bitc.ANS0)
#define	AD_ADSCH_ANS1    	(IO_AD.IO_ADSCH.bitc.ANS1)
#define	AD_ADSCH_ANS2    	(IO_AD.IO_ADSCH.bitc.ANS2)
#define	AD_ADSCH_ANS3    	(IO_AD.IO_ADSCH.bitc.ANS3)
#define	AD_ADSCH_ANS4    	(IO_AD.IO_ADSCH.bitc.ANS4)
#define	AD_ADECH			(IO_AD.IO_ADECH.byte)
#define	AD_ADECH_ANE    	(IO_AD.IO_ADECH.bit.ANE)
#define	AD_ADECH_ANE0    	(IO_AD.IO_ADECH.bitc.ANE0)
#define	AD_ADECH_ANE1    	(IO_AD.IO_ADECH.bitc.ANE1)
#define	AD_ADECH_ANE2    	(IO_AD.IO_ADECH.bitc.ANE2)
#define	AD_ADECH_ANE3    	(IO_AD.IO_ADECH.bitc.ANE3)
#define	AD_ADECH_ANE4    	(IO_AD.IO_ADECH.bitc.ANE4)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_TMRLR0,attr=IO,locate=0x1B0
#endif

__IO_EXTENDED	__HWORD	IO_TMRLR0;
#define	_tmrlr0		(IO_TMRLR0)
#define	TMRLR0	(_tmrlr0)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_TMR0,attr=IO,locate=0x1B2
#endif

__IO_EXTENDED	const __HWORD	IO_TMR0;
#define	_tmr0		(IO_TMR0)
#define	TMR0	(_tmr0)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_TMCSR0,attr=IO,locate=0x1B6
#endif

typedef union {
	__HWORD	hword;
	struct {
			__BYTE	RESV0:1;
			__BYTE	RESV1:1;
			__BYTE	RESV2:1;
			__BYTE	CSL:3;
			__HWORD	MOD:3;
			__BYTE	RESV5:1;
			__BYTE	OUTL:1;
			__BYTE	RELD:1;
			__BYTE	INTE:1;
			__BYTE	UF:1;
			__BYTE	CNTE:1;
			__BYTE	TRG:1;
	} bit;
	struct {
			__BYTE	RESV0:1;
			__BYTE	RESV1:1;
			__BYTE	RESV2:1;
			__BYTE	CSL2:1;
			__BYTE	CSL1:1;
			__BYTE	CSL0:1;
			__BYTE	MOD2:1;
			__BYTE	MOD1:1;
			__BYTE	MOD0:1;
			__BYTE	RESV9:1;
			__BYTE	OUTL:1;
			__BYTE	RELD:1;
			__BYTE	INTE:1;
			__BYTE	UF:1;
			__BYTE	CNTE:1;
			__BYTE	TRG:1;
	} bitc;
} TMCSR0STR;

__IO_EXTENDED	  TMCSR0STR	IO_TMCSR0;
#define	_tmcsr0		(IO_TMCSR0)
#define	TMCSR0		(IO_TMCSR0.hword)
#define	TMCSR0_CSL  	(IO_TMCSR0.bit.CSL)
#define	TMCSR0_CSL0  	(IO_TMCSR0.bitc.CSL0)
#define	TMCSR0_CSL1  	(IO_TMCSR0.bitc.CSL1)
#define	TMCSR0_CSL2  	(IO_TMCSR0.bitc.CSL2)
#define	TMCSR0_MOD  	(IO_TMCSR0.bit.MOD)
#define	TMCSR0_MOD0  	(IO_TMCSR0.bitc.MOD0)
#define	TMCSR0_MOD1  	(IO_TMCSR0.bitc.MOD1)
#define	TMCSR0_MOD2  	(IO_TMCSR0.bitc.MOD2)
#define	TMCSR0_OUTL  	(IO_TMCSR0.bit.OUTL)
#define	TMCSR0_RELD  	(IO_TMCSR0.bit.RELD)
#define	TMCSR0_INTE  	(IO_TMCSR0.bit.INTE)
#define	TMCSR0_UF  	(IO_TMCSR0.bit.UF)
#define	TMCSR0_CNTE  	(IO_TMCSR0.bit.CNTE)
#define	TMCSR0_TRG  	(IO_TMCSR0.bit.TRG)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_TMRLR1,attr=IO,locate=0x1B8
#endif

__IO_EXTENDED	__HWORD	IO_TMRLR1;
#define	_tmrlr1		(IO_TMRLR1)
#define	TMRLR1	(_tmrlr1)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_TMR1,attr=IO,locate=0x1BA
#endif

__IO_EXTENDED	const __HWORD	IO_TMR1;
#define	_tmr1		(IO_TMR1)
#define	TMR1	(_tmr1)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_TMCSR1,attr=IO,locate=0x1BE
#endif

typedef union {
	__HWORD	hword;
	struct {
			__BYTE	RESV0:1;
			__BYTE	RESV1:1;
			__BYTE	RESV2:1;
			__BYTE	CSL:3;
			__HWORD	MOD:3;
			__BYTE	RESV5:1;
			__BYTE	OUTL:1;
			__BYTE	RELD:1;
			__BYTE	INTE:1;
			__BYTE	UF:1;
			__BYTE	CNTE:1;
			__BYTE	TRG:1;
	} bit;
	struct {
			__BYTE	RESV0:1;
			__BYTE	RESV1:1;
			__BYTE	RESV2:1;
			__BYTE	CSL2:1;
			__BYTE	CSL1:1;
			__BYTE	CSL0:1;
			__BYTE	MOD2:1;
			__BYTE	MOD1:1;
			__BYTE	MOD0:1;
			__BYTE	RESV9:1;
			__BYTE	OUTL:1;
			__BYTE	RELD:1;
			__BYTE	INTE:1;
			__BYTE	UF:1;
			__BYTE	CNTE:1;
			__BYTE	TRG:1;
	} bitc;
} TMCSR1STR;

__IO_EXTENDED	  TMCSR1STR	IO_TMCSR1;
#define	_tmcsr1		(IO_TMCSR1)
#define	TMCSR1		(IO_TMCSR1.hword)
#define	TMCSR1_CSL  	(IO_TMCSR1.bit.CSL)
#define	TMCSR1_CSL0  	(IO_TMCSR1.bitc.CSL0)
#define	TMCSR1_CSL1  	(IO_TMCSR1.bitc.CSL1)
#define	TMCSR1_CSL2  	(IO_TMCSR1.bitc.CSL2)
#define	TMCSR1_MOD  	(IO_TMCSR1.bit.MOD)
#define	TMCSR1_MOD0  	(IO_TMCSR1.bitc.MOD0)
#define	TMCSR1_MOD1  	(IO_TMCSR1.bitc.MOD1)
#define	TMCSR1_MOD2  	(IO_TMCSR1.bitc.MOD2)
#define	TMCSR1_OUTL  	(IO_TMCSR1.bit.OUTL)
#define	TMCSR1_RELD  	(IO_TMCSR1.bit.RELD)
#define	TMCSR1_INTE  	(IO_TMCSR1.bit.INTE)
#define	TMCSR1_UF  	(IO_TMCSR1.bit.UF)
#define	TMCSR1_CNTE  	(IO_TMCSR1.bit.CNTE)
#define	TMCSR1_TRG  	(IO_TMCSR1.bit.TRG)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_TMRLR2,attr=IO,locate=0x1C0
#endif

__IO_EXTENDED	__HWORD	IO_TMRLR2;
#define	_tmrlr2		(IO_TMRLR2)
#define	TMRLR2	(_tmrlr2)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_TMR2,attr=IO,locate=0x1C2
#endif

__IO_EXTENDED	const __HWORD	IO_TMR2;
#define	_tmr2		(IO_TMR2)
#define	TMR2	(_tmr2)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_TMCSR2,attr=IO,locate=0x1C6
#endif

typedef union {
	__HWORD	hword;
	struct {
			__BYTE	RESV0:1;
			__BYTE	RESV1:1;
			__BYTE	RESV2:1;
			__BYTE	CSL:3;
			__HWORD	MOD:3;
			__BYTE	RESV5:1;
			__BYTE	OUTL:1;
			__BYTE	RELD:1;
			__BYTE	INTE:1;
			__BYTE	UF:1;
			__BYTE	CNTE:1;
			__BYTE	TRG:1;
	} bit;
	struct {
			__BYTE	RESV0:1;
			__BYTE	RESV1:1;
			__BYTE	RESV2:1;
			__BYTE	CSL2:1;
			__BYTE	CSL1:1;
			__BYTE	CSL0:1;
			__BYTE	MOD2:1;
			__BYTE	MOD1:1;
			__BYTE	MOD0:1;
			__BYTE	RESV9:1;
			__BYTE	OUTL:1;
			__BYTE	RELD:1;
			__BYTE	INTE:1;
			__BYTE	UF:1;
			__BYTE	CNTE:1;
			__BYTE	TRG:1;
	} bitc;
} TMCSR2STR;

__IO_EXTENDED	  TMCSR2STR	IO_TMCSR2;
#define	_tmcsr2		(IO_TMCSR2)
#define	TMCSR2		(IO_TMCSR2.hword)
#define	TMCSR2_CSL  	(IO_TMCSR2.bit.CSL)
#define	TMCSR2_CSL0  	(IO_TMCSR2.bitc.CSL0)
#define	TMCSR2_CSL1  	(IO_TMCSR2.bitc.CSL1)
#define	TMCSR2_CSL2  	(IO_TMCSR2.bitc.CSL2)
#define	TMCSR2_MOD  	(IO_TMCSR2.bit.MOD)
#define	TMCSR2_MOD0  	(IO_TMCSR2.bitc.MOD0)
#define	TMCSR2_MOD1  	(IO_TMCSR2.bitc.MOD1)
#define	TMCSR2_MOD2  	(IO_TMCSR2.bitc.MOD2)
#define	TMCSR2_OUTL  	(IO_TMCSR2.bit.OUTL)
#define	TMCSR2_RELD  	(IO_TMCSR2.bit.RELD)
#define	TMCSR2_INTE  	(IO_TMCSR2.bit.INTE)
#define	TMCSR2_UF  	(IO_TMCSR2.bit.UF)
#define	TMCSR2_CNTE  	(IO_TMCSR2.bit.CNTE)
#define	TMCSR2_TRG  	(IO_TMCSR2.bit.TRG)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_TMRLR3,attr=IO,locate=0x1C8
#endif

__IO_EXTENDED	__HWORD	IO_TMRLR3;
#define	_tmrlr3		(IO_TMRLR3)
#define	TMRLR3	(_tmrlr3)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_TMR3,attr=IO,locate=0x1CA
#endif

__IO_EXTENDED	const __HWORD	IO_TMR3;
#define	_tmr3		(IO_TMR3)
#define	TMR3	(_tmr3)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_TMCSR3,attr=IO,locate=0x1CE
#endif

typedef union {
	__HWORD	hword;
	struct {
			__BYTE	RESV0:1;
			__BYTE	RESV1:1;
			__BYTE	RESV2:1;
			__BYTE	CSL:3;
			__HWORD	MOD:3;
			__BYTE	RESV5:1;
			__BYTE	OUTL:1;
			__BYTE	RELD:1;
			__BYTE	INTE:1;
			__BYTE	UF:1;
			__BYTE	CNTE:1;
			__BYTE	TRG:1;
	} bit;
	struct {
			__BYTE	RESV0:1;
			__BYTE	RESV1:1;
			__BYTE	RESV2:1;
			__BYTE	CSL2:1;
			__BYTE	CSL1:1;
			__BYTE	CSL0:1;
			__BYTE	MOD2:1;
			__BYTE	MOD1:1;
			__BYTE	MOD0:1;
			__BYTE	RESV9:1;
			__BYTE	OUTL:1;
			__BYTE	RELD:1;
			__BYTE	INTE:1;
			__BYTE	UF:1;
			__BYTE	CNTE:1;
			__BYTE	TRG:1;
	} bitc;
} TMCSR3STR;

__IO_EXTENDED	  TMCSR3STR	IO_TMCSR3;
#define	_tmcsr3		(IO_TMCSR3)
#define	TMCSR3		(IO_TMCSR3.hword)
#define	TMCSR3_CSL  	(IO_TMCSR3.bit.CSL)
#define	TMCSR3_CSL0  	(IO_TMCSR3.bitc.CSL0)
#define	TMCSR3_CSL1  	(IO_TMCSR3.bitc.CSL1)
#define	TMCSR3_CSL2  	(IO_TMCSR3.bitc.CSL2)
#define	TMCSR3_MOD  	(IO_TMCSR3.bit.MOD)
#define	TMCSR3_MOD0  	(IO_TMCSR3.bitc.MOD0)
#define	TMCSR3_MOD1  	(IO_TMCSR3.bitc.MOD1)
#define	TMCSR3_MOD2  	(IO_TMCSR3.bitc.MOD2)
#define	TMCSR3_OUTL  	(IO_TMCSR3.bit.OUTL)
#define	TMCSR3_RELD  	(IO_TMCSR3.bit.RELD)
#define	TMCSR3_INTE  	(IO_TMCSR3.bit.INTE)
#define	TMCSR3_UF  	(IO_TMCSR3.bit.UF)
#define	TMCSR3_CNTE  	(IO_TMCSR3.bit.CNTE)
#define	TMCSR3_TRG  	(IO_TMCSR3.bit.TRG)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_TMRLR4,attr=IO,locate=0x1D0
#endif

__IO_EXTENDED	__HWORD	IO_TMRLR4;
#define	_tmrlr4		(IO_TMRLR4)
#define	TMRLR4	(_tmrlr4)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_TMR4,attr=IO,locate=0x1D2
#endif

__IO_EXTENDED	const __HWORD	IO_TMR4;
#define	_tmr4		(IO_TMR4)
#define	TMR4	(_tmr4)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_TMCSR4,attr=IO,locate=0x1D6
#endif

typedef union {
	__HWORD	hword;
	struct {
			__BYTE	RESV0:1;
			__BYTE	RESV1:1;
			__BYTE	RESV2:1;
			__BYTE	CSL:3;
			__HWORD	MOD:3;
			__BYTE	RESV5:1;
			__BYTE	OUTL:1;
			__BYTE	RELD:1;
			__BYTE	INTE:1;
			__BYTE	UF:1;
			__BYTE	CNTE:1;
			__BYTE	TRG:1;
	} bit;
	struct {
			__BYTE	RESV0:1;
			__BYTE	RESV1:1;
			__BYTE	RESV2:1;
			__BYTE	CSL2:1;
			__BYTE	CSL1:1;
			__BYTE	CSL0:1;
			__BYTE	MOD2:1;
			__BYTE	MOD1:1;
			__BYTE	MOD0:1;
			__BYTE	RESV9:1;
			__BYTE	OUTL:1;
			__BYTE	RELD:1;
			__BYTE	INTE:1;
			__BYTE	UF:1;
			__BYTE	CNTE:1;
			__BYTE	TRG:1;
	} bitc;
} TMCSR4STR;

__IO_EXTENDED	  TMCSR4STR	IO_TMCSR4;
#define	_tmcsr4		(IO_TMCSR4)
#define	TMCSR4		(IO_TMCSR4.hword)
#define	TMCSR4_CSL  	(IO_TMCSR4.bit.CSL)
#define	TMCSR4_CSL0  	(IO_TMCSR4.bitc.CSL0)
#define	TMCSR4_CSL1  	(IO_TMCSR4.bitc.CSL1)
#define	TMCSR4_CSL2  	(IO_TMCSR4.bitc.CSL2)
#define	TMCSR4_MOD  	(IO_TMCSR4.bit.MOD)
#define	TMCSR4_MOD0  	(IO_TMCSR4.bitc.MOD0)
#define	TMCSR4_MOD1  	(IO_TMCSR4.bitc.MOD1)
#define	TMCSR4_MOD2  	(IO_TMCSR4.bitc.MOD2)
#define	TMCSR4_OUTL  	(IO_TMCSR4.bit.OUTL)
#define	TMCSR4_RELD  	(IO_TMCSR4.bit.RELD)
#define	TMCSR4_INTE  	(IO_TMCSR4.bit.INTE)
#define	TMCSR4_UF  	(IO_TMCSR4.bit.UF)
#define	TMCSR4_CNTE  	(IO_TMCSR4.bit.CNTE)
#define	TMCSR4_TRG  	(IO_TMCSR4.bit.TRG)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_TMRLR5,attr=IO,locate=0x1D8
#endif

__IO_EXTENDED	__HWORD	IO_TMRLR5;
#define	_tmrlr5		(IO_TMRLR5)
#define	TMRLR5	(_tmrlr5)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_TMR5,attr=IO,locate=0x1DA
#endif

__IO_EXTENDED	const __HWORD	IO_TMR5;
#define	_tmr5		(IO_TMR5)
#define	TMR5	(_tmr5)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_TMCSR5,attr=IO,locate=0x1DE
#endif

typedef union {
	__HWORD	hword;
	struct {
			__BYTE	RESV0:1;
			__BYTE	RESV1:1;
			__BYTE	RESV2:1;
			__BYTE	CSL:3;
			__HWORD	MOD:3;
			__BYTE	RESV5:1;
			__BYTE	OUTL:1;
			__BYTE	RELD:1;
			__BYTE	INTE:1;
			__BYTE	UF:1;
			__BYTE	CNTE:1;
			__BYTE	TRG:1;
	} bit;
	struct {
			__BYTE	RESV0:1;
			__BYTE	RESV1:1;
			__BYTE	RESV2:1;
			__BYTE	CSL2:1;
			__BYTE	CSL1:1;
			__BYTE	CSL0:1;
			__BYTE	MOD2:1;
			__BYTE	MOD1:1;
			__BYTE	MOD0:1;
			__BYTE	RESV9:1;
			__BYTE	OUTL:1;
			__BYTE	RELD:1;
			__BYTE	INTE:1;
			__BYTE	UF:1;
			__BYTE	CNTE:1;
			__BYTE	TRG:1;
	} bitc;
} TMCSR5STR;

__IO_EXTENDED	  TMCSR5STR	IO_TMCSR5;
#define	_tmcsr5		(IO_TMCSR5)
#define	TMCSR5		(IO_TMCSR5.hword)
#define	TMCSR5_CSL  	(IO_TMCSR5.bit.CSL)
#define	TMCSR5_CSL0  	(IO_TMCSR5.bitc.CSL0)
#define	TMCSR5_CSL1  	(IO_TMCSR5.bitc.CSL1)
#define	TMCSR5_CSL2  	(IO_TMCSR5.bitc.CSL2)
#define	TMCSR5_MOD  	(IO_TMCSR5.bit.MOD)
#define	TMCSR5_MOD0  	(IO_TMCSR5.bitc.MOD0)
#define	TMCSR5_MOD1  	(IO_TMCSR5.bitc.MOD1)
#define	TMCSR5_MOD2  	(IO_TMCSR5.bitc.MOD2)
#define	TMCSR5_OUTL  	(IO_TMCSR5.bit.OUTL)
#define	TMCSR5_RELD  	(IO_TMCSR5.bit.RELD)
#define	TMCSR5_INTE  	(IO_TMCSR5.bit.INTE)
#define	TMCSR5_UF  	(IO_TMCSR5.bit.UF)
#define	TMCSR5_CNTE  	(IO_TMCSR5.bit.CNTE)
#define	TMCSR5_TRG  	(IO_TMCSR5.bit.TRG)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_TMRLR6,attr=IO,locate=0x1E0
#endif

__IO_EXTENDED	__HWORD	IO_TMRLR6;
#define	_tmrlr6		(IO_TMRLR6)
#define	TMRLR6	(_tmrlr6)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_TMR6,attr=IO,locate=0x1E2
#endif

__IO_EXTENDED	const __HWORD	IO_TMR6;
#define	_tmr6		(IO_TMR6)
#define	TMR6	(_tmr6)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_TMCSR6,attr=IO,locate=0x1E6
#endif

typedef union {
	__HWORD	hword;
	struct {
			__BYTE	RESV0:1;
			__BYTE	RESV1:1;
			__BYTE	RESV2:1;
			__BYTE	CSL:3;
			__HWORD	MOD:3;
			__BYTE	RESV5:1;
			__BYTE	OUTL:1;
			__BYTE	RELD:1;
			__BYTE	INTE:1;
			__BYTE	UF:1;
			__BYTE	CNTE:1;
			__BYTE	TRG:1;
	} bit;
	struct {
			__BYTE	RESV0:1;
			__BYTE	RESV1:1;
			__BYTE	RESV2:1;
			__BYTE	CSL2:1;
			__BYTE	CSL1:1;
			__BYTE	CSL0:1;
			__BYTE	MOD2:1;
			__BYTE	MOD1:1;
			__BYTE	MOD0:1;
			__BYTE	RESV9:1;
			__BYTE	OUTL:1;
			__BYTE	RELD:1;
			__BYTE	INTE:1;
			__BYTE	UF:1;
			__BYTE	CNTE:1;
			__BYTE	TRG:1;
	} bitc;
} TMCSR6STR;

__IO_EXTENDED	  TMCSR6STR	IO_TMCSR6;
#define	_tmcsr6		(IO_TMCSR6)
#define	TMCSR6		(IO_TMCSR6.hword)
#define	TMCSR6_CSL  	(IO_TMCSR6.bit.CSL)
#define	TMCSR6_CSL0  	(IO_TMCSR6.bitc.CSL0)
#define	TMCSR6_CSL1  	(IO_TMCSR6.bitc.CSL1)
#define	TMCSR6_CSL2  	(IO_TMCSR6.bitc.CSL2)
#define	TMCSR6_MOD  	(IO_TMCSR6.bit.MOD)
#define	TMCSR6_MOD0  	(IO_TMCSR6.bitc.MOD0)
#define	TMCSR6_MOD1  	(IO_TMCSR6.bitc.MOD1)
#define	TMCSR6_MOD2  	(IO_TMCSR6.bitc.MOD2)
#define	TMCSR6_OUTL  	(IO_TMCSR6.bit.OUTL)
#define	TMCSR6_RELD  	(IO_TMCSR6.bit.RELD)
#define	TMCSR6_INTE  	(IO_TMCSR6.bit.INTE)
#define	TMCSR6_UF  	(IO_TMCSR6.bit.UF)
#define	TMCSR6_CNTE  	(IO_TMCSR6.bit.CNTE)
#define	TMCSR6_TRG  	(IO_TMCSR6.bit.TRG)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_TMRLR7,attr=IO,locate=0x1E8
#endif

__IO_EXTENDED	__HWORD	IO_TMRLR7;
#define	_tmrlr7		(IO_TMRLR7)
#define	TMRLR7	(_tmrlr7)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_TMR7,attr=IO,locate=0x1EA
#endif

__IO_EXTENDED	const __HWORD	IO_TMR7;
#define	_tmr7		(IO_TMR7)
#define	TMR7	(_tmr7)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_TMCSR7,attr=IO,locate=0x1EE
#endif

typedef union {
	__HWORD	hword;
	struct {
			__BYTE	RESV0:1;
			__BYTE	RESV1:1;
			__BYTE	RESV2:1;
			__BYTE	CSL:3;
			__HWORD	MOD:3;
			__BYTE	RESV5:1;
			__BYTE	OUTL:1;
			__BYTE	RELD:1;
			__BYTE	INTE:1;
			__BYTE	UF:1;
			__BYTE	CNTE:1;
			__BYTE	TRG:1;
	} bit;
	struct {
			__BYTE	RESV0:1;
			__BYTE	RESV1:1;
			__BYTE	RESV2:1;
			__BYTE	CSL2:1;
			__BYTE	CSL1:1;
			__BYTE	CSL0:1;
			__BYTE	MOD2:1;
			__BYTE	MOD1:1;
			__BYTE	MOD0:1;
			__BYTE	RESV9:1;
			__BYTE	OUTL:1;
			__BYTE	RELD:1;
			__BYTE	INTE:1;
			__BYTE	UF:1;
			__BYTE	CNTE:1;
			__BYTE	TRG:1;
	} bitc;
} TMCSR7STR;

__IO_EXTENDED	  TMCSR7STR	IO_TMCSR7;
#define	_tmcsr7		(IO_TMCSR7)
#define	TMCSR7		(IO_TMCSR7.hword)
#define	TMCSR7_CSL  	(IO_TMCSR7.bit.CSL)
#define	TMCSR7_CSL0  	(IO_TMCSR7.bitc.CSL0)
#define	TMCSR7_CSL1  	(IO_TMCSR7.bitc.CSL1)
#define	TMCSR7_CSL2  	(IO_TMCSR7.bitc.CSL2)
#define	TMCSR7_MOD  	(IO_TMCSR7.bit.MOD)
#define	TMCSR7_MOD0  	(IO_TMCSR7.bitc.MOD0)
#define	TMCSR7_MOD1  	(IO_TMCSR7.bitc.MOD1)
#define	TMCSR7_MOD2  	(IO_TMCSR7.bitc.MOD2)
#define	TMCSR7_OUTL  	(IO_TMCSR7.bit.OUTL)
#define	TMCSR7_RELD  	(IO_TMCSR7.bit.RELD)
#define	TMCSR7_INTE  	(IO_TMCSR7.bit.INTE)
#define	TMCSR7_UF  	(IO_TMCSR7.bit.UF)
#define	TMCSR7_CNTE  	(IO_TMCSR7.bit.CNTE)
#define	TMCSR7_TRG  	(IO_TMCSR7.bit.TRG)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_TCDT0,attr=IO,locate=0x1F0
#endif

__IO_EXTENDED	__HWORD	IO_TCDT0;
#define	_tcdt0		(IO_TCDT0)
#define	TCDT0	(_tcdt0)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_TCCS0,attr=IO,locate=0x1F3
#endif

typedef union {
	__BYTE	byte;
	struct {
			__BYTE	ECLK:1;
			__BYTE	IVF:1;
			__BYTE	IVFE:1;
			__BYTE	STOP:1;
			__BYTE	MODE:1;
			__BYTE	CLR:1;
			__BYTE	CLK:2;
	} bit;
	struct {
			__BYTE	ECLK:1;
			__BYTE	IVF:1;
			__BYTE	IVFE:1;
			__BYTE	STOP:1;
			__BYTE	MODE:1;
			__BYTE	CLR:1;
			__BYTE	CLK1:1;
			__BYTE	CLK0:1;
	} bitc;
} TCCS0STR;

__IO_EXTENDED	  TCCS0STR	IO_TCCS0;
#define	_tccs0		(IO_TCCS0)
#define	TCCS0		(IO_TCCS0.byte)
#define	TCCS0_ECLK  	(IO_TCCS0.bit.ECLK)
#define	TCCS0_IVF  	(IO_TCCS0.bit.IVF)
#define	TCCS0_IVFE  	(IO_TCCS0.bit.IVFE)
#define	TCCS0_STOP  	(IO_TCCS0.bit.STOP)
#define	TCCS0_MODE  	(IO_TCCS0.bit.MODE)
#define	TCCS0_CLR  	(IO_TCCS0.bit.CLR)
#define	TCCS0_CLK  	(IO_TCCS0.bit.CLK)
#define	TCCS0_CLK0  	(IO_TCCS0.bitc.CLK0)
#define	TCCS0_CLK1  	(IO_TCCS0.bitc.CLK1)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_TCDT1,attr=IO,locate=0x1F4
#endif

__IO_EXTENDED	__HWORD	IO_TCDT1;
#define	_tcdt1		(IO_TCDT1)
#define	TCDT1	(_tcdt1)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_TCCS1,attr=IO,locate=0x1F7
#endif

typedef union {
	__BYTE	byte;
	struct {
			__BYTE	ECLK:1;
			__BYTE	IVF:1;
			__BYTE	IVFE:1;
			__BYTE	STOP:1;
			__BYTE	MODE:1;
			__BYTE	CLR:1;
			__BYTE	CLK:2;
	} bit;
	struct {
			__BYTE	ECLK:1;
			__BYTE	IVF:1;
			__BYTE	IVFE:1;
			__BYTE	STOP:1;
			__BYTE	MODE:1;
			__BYTE	CLR:1;
			__BYTE	CLK1:1;
			__BYTE	CLK0:1;
	} bitc;
} TCCS1STR;

__IO_EXTENDED	  TCCS1STR	IO_TCCS1;
#define	_tccs1		(IO_TCCS1)
#define	TCCS1		(IO_TCCS1.byte)
#define	TCCS1_ECLK  	(IO_TCCS1.bit.ECLK)
#define	TCCS1_IVF  	(IO_TCCS1.bit.IVF)
#define	TCCS1_IVFE  	(IO_TCCS1.bit.IVFE)
#define	TCCS1_STOP  	(IO_TCCS1.bit.STOP)
#define	TCCS1_MODE  	(IO_TCCS1.bit.MODE)
#define	TCCS1_CLR  	(IO_TCCS1.bit.CLR)
#define	TCCS1_CLK  	(IO_TCCS1.bit.CLK)
#define	TCCS1_CLK0  	(IO_TCCS1.bitc.CLK0)
#define	TCCS1_CLK1  	(IO_TCCS1.bitc.CLK1)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_TCDT2,attr=IO,locate=0x1F8
#endif

__IO_EXTENDED	__HWORD	IO_TCDT2;
#define	_tcdt2		(IO_TCDT2)
#define	TCDT2	(_tcdt2)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_TCCS2,attr=IO,locate=0x1FB
#endif

typedef union {
	__BYTE	byte;
	struct {
			__BYTE	ECLK:1;
			__BYTE	IVF:1;
			__BYTE	IVFE:1;
			__BYTE	STOP:1;
			__BYTE	MODE:1;
			__BYTE	CLR:1;
			__BYTE	CLK:2;
	} bit;
	struct {
			__BYTE	ECLK:1;
			__BYTE	IVF:1;
			__BYTE	IVFE:1;
			__BYTE	STOP:1;
			__BYTE	MODE:1;
			__BYTE	CLR:1;
			__BYTE	CLK1:1;
			__BYTE	CLK0:1;
	} bitc;
} TCCS2STR;

__IO_EXTENDED	  TCCS2STR	IO_TCCS2;
#define	_tccs2		(IO_TCCS2)
#define	TCCS2		(IO_TCCS2.byte)
#define	TCCS2_ECLK  	(IO_TCCS2.bit.ECLK)
#define	TCCS2_IVF  	(IO_TCCS2.bit.IVF)
#define	TCCS2_IVFE  	(IO_TCCS2.bit.IVFE)
#define	TCCS2_STOP  	(IO_TCCS2.bit.STOP)
#define	TCCS2_MODE  	(IO_TCCS2.bit.MODE)
#define	TCCS2_CLR  	(IO_TCCS2.bit.CLR)
#define	TCCS2_CLK  	(IO_TCCS2.bit.CLK)
#define	TCCS2_CLK0  	(IO_TCCS2.bitc.CLK0)
#define	TCCS2_CLK1  	(IO_TCCS2.bitc.CLK1)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_TCDT3,attr=IO,locate=0x1FC
#endif

__IO_EXTENDED	__HWORD	IO_TCDT3;
#define	_tcdt3		(IO_TCDT3)
#define	TCDT3	(_tcdt3)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_TCCS3,attr=IO,locate=0x1FF
#endif

typedef union {
	__BYTE	byte;
	struct {
			__BYTE	ECLK:1;
			__BYTE	IVF:1;
			__BYTE	IVFE:1;
			__BYTE	STOP:1;
			__BYTE	MODE:1;
			__BYTE	CLR:1;
			__BYTE	CLK:2;
	} bit;
	struct {
			__BYTE	ECLK:1;
			__BYTE	IVF:1;
			__BYTE	IVFE:1;
			__BYTE	STOP:1;
			__BYTE	MODE:1;
			__BYTE	CLR:1;
			__BYTE	CLK1:1;
			__BYTE	CLK0:1;
	} bitc;
} TCCS3STR;

__IO_EXTENDED	  TCCS3STR	IO_TCCS3;
#define	_tccs3		(IO_TCCS3)
#define	TCCS3		(IO_TCCS3.byte)
#define	TCCS3_ECLK  	(IO_TCCS3.bit.ECLK)
#define	TCCS3_IVF  	(IO_TCCS3.bit.IVF)
#define	TCCS3_IVFE  	(IO_TCCS3.bit.IVFE)
#define	TCCS3_STOP  	(IO_TCCS3.bit.STOP)
#define	TCCS3_MODE  	(IO_TCCS3.bit.MODE)
#define	TCCS3_CLR  	(IO_TCCS3.bit.CLR)
#define	TCCS3_CLK  	(IO_TCCS3.bit.CLK)
#define	TCCS3_CLK0  	(IO_TCCS3.bitc.CLK0)
#define	TCCS3_CLK1  	(IO_TCCS3.bitc.CLK1)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_DMACA0,attr=IO,locate=0x200
#endif

typedef union {
	__WORD	word;
	struct {
			__BYTE	DENB:1;
			__BYTE	PAUS:1;
			__BYTE	STRG:1;
			__BYTE	IS:5;
			__BYTE	EIS:4;
			__BYTE	BLK:4;
			__WORD	DTC:16;
	} bit;
	struct {
			__BYTE	DENB:1;
			__BYTE	PAUS:1;
			__BYTE	STRG:1;
			__BYTE	IS4:1;
			__BYTE	IS3:1;
			__BYTE	IS2:1;
			__BYTE	IS1:1;
			__BYTE	IS0:1;
			__BYTE	EIS3:1;
			__BYTE	EIS2:1;
			__BYTE	EIS1:1;
			__BYTE	EIS0:1;
			__BYTE	BLK3:1;
			__BYTE	BLK2:1;
			__BYTE	BLK1:1;
			__BYTE	BLK0:1;
			__BYTE	DTC15:1;
			__BYTE	DTC14:1;
			__BYTE	DTC13:1;
			__BYTE	DTC12:1;
			__BYTE	DTC11:1;
			__BYTE	DTC10:1;
			__BYTE	DTC9:1;
			__BYTE	DTC8:1;
			__BYTE	DTC7:1;
			__BYTE	DTC6:1;
			__BYTE	DTC5:1;
			__BYTE	DTC4:1;
			__BYTE	DTC3:1;
			__BYTE	DTC2:1;
			__BYTE	DTC1:1;
			__BYTE	DTC0:1;
	} bitc;
} DMACA0STR;

__IO_EXTENDED	  DMACA0STR	IO_DMACA0;
#define	_dmaca0		(IO_DMACA0)
#define	DMACA0		(IO_DMACA0.word)
#define	DMACA0_DENB  	(IO_DMACA0.bit.DENB)
#define	DMACA0_PAUS  	(IO_DMACA0.bit.PAUS)
#define	DMACA0_STRG  	(IO_DMACA0.bit.STRG)
#define	DMACA0_IS  	(IO_DMACA0.bit.IS)
#define	DMACA0_IS0  	(IO_DMACA0.bitc.IS0)
#define	DMACA0_IS1  	(IO_DMACA0.bitc.IS1)
#define	DMACA0_IS2  	(IO_DMACA0.bitc.IS2)
#define	DMACA0_IS3  	(IO_DMACA0.bitc.IS3)
#define	DMACA0_IS4  	(IO_DMACA0.bitc.IS4)
#define	DMACA0_EIS  	(IO_DMACA0.bit.EIS)
#define	DMACA0_EIS0  	(IO_DMACA0.bitc.EIS0)
#define	DMACA0_EIS1  	(IO_DMACA0.bitc.EIS1)
#define	DMACA0_EIS2  	(IO_DMACA0.bitc.EIS2)
#define	DMACA0_EIS3  	(IO_DMACA0.bitc.EIS3)
#define	DMACA0_BLK  	(IO_DMACA0.bit.BLK)
#define	DMACA0_BLK0  	(IO_DMACA0.bitc.BLK0)
#define	DMACA0_BLK1  	(IO_DMACA0.bitc.BLK1)
#define	DMACA0_BLK2  	(IO_DMACA0.bitc.BLK2)
#define	DMACA0_BLK3  	(IO_DMACA0.bitc.BLK3)
#define	DMACA0_DTC  	(IO_DMACA0.bit.DTC)
#define	DMACA0_DTC0  	(IO_DMACA0.bitc.DTC0)
#define	DMACA0_DTC1  	(IO_DMACA0.bitc.DTC1)
#define	DMACA0_DTC2  	(IO_DMACA0.bitc.DTC2)
#define	DMACA0_DTC3  	(IO_DMACA0.bitc.DTC3)
#define	DMACA0_DTC4  	(IO_DMACA0.bitc.DTC4)
#define	DMACA0_DTC5  	(IO_DMACA0.bitc.DTC5)
#define	DMACA0_DTC6  	(IO_DMACA0.bitc.DTC6)
#define	DMACA0_DTC7  	(IO_DMACA0.bitc.DTC7)
#define	DMACA0_DTC8  	(IO_DMACA0.bitc.DTC8)
#define	DMACA0_DTC9  	(IO_DMACA0.bitc.DTC9)
#define	DMACA0_DTC10  	(IO_DMACA0.bitc.DTC10)
#define	DMACA0_DTC11  	(IO_DMACA0.bitc.DTC11)
#define	DMACA0_DTC12  	(IO_DMACA0.bitc.DTC12)
#define	DMACA0_DTC13  	(IO_DMACA0.bitc.DTC13)
#define	DMACA0_DTC14  	(IO_DMACA0.bitc.DTC14)
#define	DMACA0_DTC15  	(IO_DMACA0.bitc.DTC15)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_DMACB0,attr=IO,locate=0x204
#endif

typedef union {
	__WORD	word;
	struct {
			__BYTE	TYPE:2;
			__BYTE	MOD:2;
			__BYTE	WS:2;
			__BYTE	SADM:1;
			__BYTE	DADM:1;
			__BYTE	DTCR:1;
			__BYTE	SADR:1;
			__BYTE	DADR:1;
			__BYTE	ERIE:1;
			__BYTE	EDIE:1;
			__BYTE	DSS:3;
			__BYTE	SASZ:8;
			__BYTE	DASZ:8;
	} bit;
	struct {
			__BYTE	TYPE1:1;
			__BYTE	TYPE0:1;
			__BYTE	MOD1:1;
			__BYTE	MOD0:1;
			__BYTE	WS1:1;
			__BYTE	WS0:1;
			__BYTE	SADM:1;
			__BYTE	DADM:1;
			__BYTE	DTCR:1;
			__BYTE	SADR:1;
			__BYTE	DADR:1;
			__BYTE	ERIE:1;
			__BYTE	EDIE:1;
			__BYTE	DSS2:1;
			__BYTE	DSS1:1;
			__BYTE	DSS0:1;
			__BYTE	SASZ7:1;
			__BYTE	SASZ6:1;
			__BYTE	SASZ5:1;
			__BYTE	SASZ4:1;
			__BYTE	SASZ3:1;
			__BYTE	SASZ2:1;
			__BYTE	SASZ1:1;
			__BYTE	SASZ0:1;
			__BYTE	DASZ7:1;
			__BYTE	DASZ6:1;
			__BYTE	DASZ5:1;
			__BYTE	DASZ4:1;
			__BYTE	DASZ3:1;
			__BYTE	DASZ2:1;
			__BYTE	DASZ1:1;
			__BYTE	DASZ0:1;
	} bitc;
} DMACB0STR;

__IO_EXTENDED	  DMACB0STR	IO_DMACB0;
#define	_dmacb0		(IO_DMACB0)
#define	DMACB0		(IO_DMACB0.word)
#define	DMACB0_TYPE  	(IO_DMACB0.bit.TYPE)
#define	DMACB0_TYPE0  	(IO_DMACB0.bitc.TYPE0)
#define	DMACB0_TYPE1  	(IO_DMACB0.bitc.TYPE1)
#define	DMACB0_MOD  	(IO_DMACB0.bit.MOD)
#define	DMACB0_MOD0  	(IO_DMACB0.bitc.MOD0)
#define	DMACB0_MOD1  	(IO_DMACB0.bitc.MOD1)
#define	DMACB0_WS  	(IO_DMACB0.bit.WS)
#define	DMACB0_WS0  	(IO_DMACB0.bitc.WS0)
#define	DMACB0_WS1  	(IO_DMACB0.bitc.WS1)
#define	DMACB0_SADM  	(IO_DMACB0.bit.SADM)
#define	DMACB0_DADM  	(IO_DMACB0.bit.DADM)
#define	DMACB0_DTCR  	(IO_DMACB0.bit.DTCR)
#define	DMACB0_SADR  	(IO_DMACB0.bit.SADR)
#define	DMACB0_DADR  	(IO_DMACB0.bit.DADR)
#define	DMACB0_ERIE  	(IO_DMACB0.bit.ERIE)
#define	DMACB0_EDIE  	(IO_DMACB0.bit.EDIE)
#define	DMACB0_DSS  	(IO_DMACB0.bit.DSS)
#define	DMACB0_DSS0  	(IO_DMACB0.bitc.DSS0)
#define	DMACB0_DSS1  	(IO_DMACB0.bitc.DSS1)
#define	DMACB0_DSS2  	(IO_DMACB0.bitc.DSS2)
#define	DMACB0_SASZ  	(IO_DMACB0.bit.SASZ)
#define	DMACB0_SASZ0  	(IO_DMACB0.bitc.SASZ0)
#define	DMACB0_SASZ1  	(IO_DMACB0.bitc.SASZ1)
#define	DMACB0_SASZ2  	(IO_DMACB0.bitc.SASZ2)
#define	DMACB0_SASZ3  	(IO_DMACB0.bitc.SASZ3)
#define	DMACB0_SASZ4  	(IO_DMACB0.bitc.SASZ4)
#define	DMACB0_SASZ5  	(IO_DMACB0.bitc.SASZ5)
#define	DMACB0_SASZ6  	(IO_DMACB0.bitc.SASZ6)
#define	DMACB0_SASZ7  	(IO_DMACB0.bitc.SASZ7)
#define	DMACB0_DASZ  	(IO_DMACB0.bit.DASZ)
#define	DMACB0_DASZ0  	(IO_DMACB0.bitc.DASZ0)
#define	DMACB0_DASZ1  	(IO_DMACB0.bitc.DASZ1)
#define	DMACB0_DASZ2  	(IO_DMACB0.bitc.DASZ2)
#define	DMACB0_DASZ3  	(IO_DMACB0.bitc.DASZ3)
#define	DMACB0_DASZ4  	(IO_DMACB0.bitc.DASZ4)
#define	DMACB0_DASZ5  	(IO_DMACB0.bitc.DASZ5)
#define	DMACB0_DASZ6  	(IO_DMACB0.bitc.DASZ6)
#define	DMACB0_DASZ7  	(IO_DMACB0.bitc.DASZ7)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_DMACA1,attr=IO,locate=0x208
#endif

typedef union {
	__WORD	word;
	struct {
			__BYTE	DENB:1;
			__BYTE	PAUS:1;
			__BYTE	STRG:1;
			__BYTE	IS:5;
			__BYTE	EIS:4;
			__BYTE	BLK:4;
			__WORD	DTC:16;
	} bit;
	struct {
			__BYTE	DENB:1;
			__BYTE	PAUS:1;
			__BYTE	STRG:1;
			__BYTE	IS4:1;
			__BYTE	IS3:1;
			__BYTE	IS2:1;
			__BYTE	IS1:1;
			__BYTE	IS0:1;
			__BYTE	EIS3:1;
			__BYTE	EIS2:1;
			__BYTE	EIS1:1;
			__BYTE	EIS0:1;
			__BYTE	BLK3:1;
			__BYTE	BLK2:1;
			__BYTE	BLK1:1;
			__BYTE	BLK0:1;
			__BYTE	DTC15:1;
			__BYTE	DTC14:1;
			__BYTE	DTC13:1;
			__BYTE	DTC12:1;
			__BYTE	DTC11:1;
			__BYTE	DTC10:1;
			__BYTE	DTC9:1;
			__BYTE	DTC8:1;
			__BYTE	DTC7:1;
			__BYTE	DTC6:1;
			__BYTE	DTC5:1;
			__BYTE	DTC4:1;
			__BYTE	DTC3:1;
			__BYTE	DTC2:1;
			__BYTE	DTC1:1;
			__BYTE	DTC0:1;
	} bitc;
} DMACA1STR;

__IO_EXTENDED	  DMACA1STR	IO_DMACA1;
#define	_dmaca1		(IO_DMACA1)
#define	DMACA1		(IO_DMACA1.word)
#define	DMACA1_DENB  	(IO_DMACA1.bit.DENB)
#define	DMACA1_PAUS  	(IO_DMACA1.bit.PAUS)
#define	DMACA1_STRG  	(IO_DMACA1.bit.STRG)
#define	DMACA1_IS  	(IO_DMACA1.bit.IS)
#define	DMACA1_IS0  	(IO_DMACA1.bitc.IS0)
#define	DMACA1_IS1  	(IO_DMACA1.bitc.IS1)
#define	DMACA1_IS2  	(IO_DMACA1.bitc.IS2)
#define	DMACA1_IS3  	(IO_DMACA1.bitc.IS3)
#define	DMACA1_IS4  	(IO_DMACA1.bitc.IS4)
#define	DMACA1_EIS  	(IO_DMACA1.bit.EIS)
#define	DMACA1_EIS0  	(IO_DMACA1.bitc.EIS0)
#define	DMACA1_EIS1  	(IO_DMACA1.bitc.EIS1)
#define	DMACA1_EIS2  	(IO_DMACA1.bitc.EIS2)
#define	DMACA1_EIS3  	(IO_DMACA1.bitc.EIS3)
#define	DMACA1_BLK  	(IO_DMACA1.bit.BLK)
#define	DMACA1_BLK0  	(IO_DMACA1.bitc.BLK0)
#define	DMACA1_BLK1  	(IO_DMACA1.bitc.BLK1)
#define	DMACA1_BLK2  	(IO_DMACA1.bitc.BLK2)
#define	DMACA1_BLK3  	(IO_DMACA1.bitc.BLK3)
#define	DMACA1_DTC  	(IO_DMACA1.bit.DTC)
#define	DMACA1_DTC0  	(IO_DMACA1.bitc.DTC0)
#define	DMACA1_DTC1  	(IO_DMACA1.bitc.DTC1)
#define	DMACA1_DTC2  	(IO_DMACA1.bitc.DTC2)
#define	DMACA1_DTC3  	(IO_DMACA1.bitc.DTC3)
#define	DMACA1_DTC4  	(IO_DMACA1.bitc.DTC4)
#define	DMACA1_DTC5  	(IO_DMACA1.bitc.DTC5)
#define	DMACA1_DTC6  	(IO_DMACA1.bitc.DTC6)
#define	DMACA1_DTC7  	(IO_DMACA1.bitc.DTC7)
#define	DMACA1_DTC8  	(IO_DMACA1.bitc.DTC8)
#define	DMACA1_DTC9  	(IO_DMACA1.bitc.DTC9)
#define	DMACA1_DTC10  	(IO_DMACA1.bitc.DTC10)
#define	DMACA1_DTC11  	(IO_DMACA1.bitc.DTC11)
#define	DMACA1_DTC12  	(IO_DMACA1.bitc.DTC12)
#define	DMACA1_DTC13  	(IO_DMACA1.bitc.DTC13)
#define	DMACA1_DTC14  	(IO_DMACA1.bitc.DTC14)
#define	DMACA1_DTC15  	(IO_DMACA1.bitc.DTC15)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_DMACB1,attr=IO,locate=0x20C
#endif

typedef union {
	__WORD	word;
	struct {
			__BYTE	TYPE:2;
			__BYTE	MOD:2;
			__BYTE	WS:2;
			__BYTE	SADM:1;
			__BYTE	DADM:1;
			__BYTE	DTCR:1;
			__BYTE	SADR:1;
			__BYTE	DADR:1;
			__BYTE	ERIE:1;
			__BYTE	EDIE:1;
			__BYTE	DSS:3;
			__BYTE	SASZ:8;
			__BYTE	DASZ:8;
	} bit;
	struct {
			__BYTE	TYPE1:1;
			__BYTE	TYPE0:1;
			__BYTE	MOD1:1;
			__BYTE	MOD0:1;
			__BYTE	WS1:1;
			__BYTE	WS0:1;
			__BYTE	SADM:1;
			__BYTE	DADM:1;
			__BYTE	DTCR:1;
			__BYTE	SADR:1;
			__BYTE	DADR:1;
			__BYTE	ERIE:1;
			__BYTE	EDIE:1;
			__BYTE	DSS2:1;
			__BYTE	DSS1:1;
			__BYTE	DSS0:1;
			__BYTE	SASZ7:1;
			__BYTE	SASZ6:1;
			__BYTE	SASZ5:1;
			__BYTE	SASZ4:1;
			__BYTE	SASZ3:1;
			__BYTE	SASZ2:1;
			__BYTE	SASZ1:1;
			__BYTE	SASZ0:1;
			__BYTE	DASZ7:1;
			__BYTE	DASZ6:1;
			__BYTE	DASZ5:1;
			__BYTE	DASZ4:1;
			__BYTE	DASZ3:1;
			__BYTE	DASZ2:1;
			__BYTE	DASZ1:1;
			__BYTE	DASZ0:1;
	} bitc;
} DMACB1STR;

__IO_EXTENDED	  DMACB1STR	IO_DMACB1;
#define	_dmacb1		(IO_DMACB1)
#define	DMACB1		(IO_DMACB1.word)
#define	DMACB1_TYPE  	(IO_DMACB1.bit.TYPE)
#define	DMACB1_TYPE0  	(IO_DMACB1.bitc.TYPE0)
#define	DMACB1_TYPE1  	(IO_DMACB1.bitc.TYPE1)
#define	DMACB1_MOD  	(IO_DMACB1.bit.MOD)
#define	DMACB1_MOD0  	(IO_DMACB1.bitc.MOD0)
#define	DMACB1_MOD1  	(IO_DMACB1.bitc.MOD1)
#define	DMACB1_WS  	(IO_DMACB1.bit.WS)
#define	DMACB1_WS0  	(IO_DMACB1.bitc.WS0)
#define	DMACB1_WS1  	(IO_DMACB1.bitc.WS1)
#define	DMACB1_SADM  	(IO_DMACB1.bit.SADM)
#define	DMACB1_DADM  	(IO_DMACB1.bit.DADM)
#define	DMACB1_DTCR  	(IO_DMACB1.bit.DTCR)
#define	DMACB1_SADR  	(IO_DMACB1.bit.SADR)
#define	DMACB1_DADR  	(IO_DMACB1.bit.DADR)
#define	DMACB1_ERIE  	(IO_DMACB1.bit.ERIE)
#define	DMACB1_EDIE  	(IO_DMACB1.bit.EDIE)
#define	DMACB1_DSS  	(IO_DMACB1.bit.DSS)
#define	DMACB1_DSS0  	(IO_DMACB1.bitc.DSS0)
#define	DMACB1_DSS1  	(IO_DMACB1.bitc.DSS1)
#define	DMACB1_DSS2  	(IO_DMACB1.bitc.DSS2)
#define	DMACB1_SASZ  	(IO_DMACB1.bit.SASZ)
#define	DMACB1_SASZ0  	(IO_DMACB1.bitc.SASZ0)
#define	DMACB1_SASZ1  	(IO_DMACB1.bitc.SASZ1)
#define	DMACB1_SASZ2  	(IO_DMACB1.bitc.SASZ2)
#define	DMACB1_SASZ3  	(IO_DMACB1.bitc.SASZ3)
#define	DMACB1_SASZ4  	(IO_DMACB1.bitc.SASZ4)
#define	DMACB1_SASZ5  	(IO_DMACB1.bitc.SASZ5)
#define	DMACB1_SASZ6  	(IO_DMACB1.bitc.SASZ6)
#define	DMACB1_SASZ7  	(IO_DMACB1.bitc.SASZ7)
#define	DMACB1_DASZ  	(IO_DMACB1.bit.DASZ)
#define	DMACB1_DASZ0  	(IO_DMACB1.bitc.DASZ0)
#define	DMACB1_DASZ1  	(IO_DMACB1.bitc.DASZ1)
#define	DMACB1_DASZ2  	(IO_DMACB1.bitc.DASZ2)
#define	DMACB1_DASZ3  	(IO_DMACB1.bitc.DASZ3)
#define	DMACB1_DASZ4  	(IO_DMACB1.bitc.DASZ4)
#define	DMACB1_DASZ5  	(IO_DMACB1.bitc.DASZ5)
#define	DMACB1_DASZ6  	(IO_DMACB1.bitc.DASZ6)
#define	DMACB1_DASZ7  	(IO_DMACB1.bitc.DASZ7)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_DMACA2,attr=IO,locate=0x210
#endif

typedef union {
	__WORD	word;
	struct {
			__BYTE	DENB:1;
			__BYTE	PAUS:1;
			__BYTE	STRG:1;
			__BYTE	IS:5;
			__BYTE	EIS:4;
			__BYTE	BLK:4;
			__WORD	DTC:16;
	} bit;
	struct {
			__BYTE	DENB:1;
			__BYTE	PAUS:1;
			__BYTE	STRG:1;
			__BYTE	IS4:1;
			__BYTE	IS3:1;
			__BYTE	IS2:1;
			__BYTE	IS1:1;
			__BYTE	IS0:1;
			__BYTE	EIS3:1;
			__BYTE	EIS2:1;
			__BYTE	EIS1:1;
			__BYTE	EIS0:1;
			__BYTE	BLK3:1;
			__BYTE	BLK2:1;
			__BYTE	BLK1:1;
			__BYTE	BLK0:1;
			__BYTE	DTC15:1;
			__BYTE	DTC14:1;
			__BYTE	DTC13:1;
			__BYTE	DTC12:1;
			__BYTE	DTC11:1;
			__BYTE	DTC10:1;
			__BYTE	DTC9:1;
			__BYTE	DTC8:1;
			__BYTE	DTC7:1;
			__BYTE	DTC6:1;
			__BYTE	DTC5:1;
			__BYTE	DTC4:1;
			__BYTE	DTC3:1;
			__BYTE	DTC2:1;
			__BYTE	DTC1:1;
			__BYTE	DTC0:1;
	} bitc;
} DMACA2STR;

__IO_EXTENDED	  DMACA2STR	IO_DMACA2;
#define	_dmaca2		(IO_DMACA2)
#define	DMACA2		(IO_DMACA2.word)
#define	DMACA2_DENB  	(IO_DMACA2.bit.DENB)
#define	DMACA2_PAUS  	(IO_DMACA2.bit.PAUS)
#define	DMACA2_STRG  	(IO_DMACA2.bit.STRG)
#define	DMACA2_IS  	(IO_DMACA2.bit.IS)
#define	DMACA2_IS0  	(IO_DMACA2.bitc.IS0)
#define	DMACA2_IS1  	(IO_DMACA2.bitc.IS1)
#define	DMACA2_IS2  	(IO_DMACA2.bitc.IS2)
#define	DMACA2_IS3  	(IO_DMACA2.bitc.IS3)
#define	DMACA2_IS4  	(IO_DMACA2.bitc.IS4)
#define	DMACA2_EIS  	(IO_DMACA2.bit.EIS)
#define	DMACA2_EIS0  	(IO_DMACA2.bitc.EIS0)
#define	DMACA2_EIS1  	(IO_DMACA2.bitc.EIS1)
#define	DMACA2_EIS2  	(IO_DMACA2.bitc.EIS2)
#define	DMACA2_EIS3  	(IO_DMACA2.bitc.EIS3)
#define	DMACA2_BLK  	(IO_DMACA2.bit.BLK)
#define	DMACA2_BLK0  	(IO_DMACA2.bitc.BLK0)
#define	DMACA2_BLK1  	(IO_DMACA2.bitc.BLK1)
#define	DMACA2_BLK2  	(IO_DMACA2.bitc.BLK2)
#define	DMACA2_BLK3  	(IO_DMACA2.bitc.BLK3)
#define	DMACA2_DTC  	(IO_DMACA2.bit.DTC)
#define	DMACA2_DTC0  	(IO_DMACA2.bitc.DTC0)
#define	DMACA2_DTC1  	(IO_DMACA2.bitc.DTC1)
#define	DMACA2_DTC2  	(IO_DMACA2.bitc.DTC2)
#define	DMACA2_DTC3  	(IO_DMACA2.bitc.DTC3)
#define	DMACA2_DTC4  	(IO_DMACA2.bitc.DTC4)
#define	DMACA2_DTC5  	(IO_DMACA2.bitc.DTC5)
#define	DMACA2_DTC6  	(IO_DMACA2.bitc.DTC6)
#define	DMACA2_DTC7  	(IO_DMACA2.bitc.DTC7)
#define	DMACA2_DTC8  	(IO_DMACA2.bitc.DTC8)
#define	DMACA2_DTC9  	(IO_DMACA2.bitc.DTC9)
#define	DMACA2_DTC10  	(IO_DMACA2.bitc.DTC10)
#define	DMACA2_DTC11  	(IO_DMACA2.bitc.DTC11)
#define	DMACA2_DTC12  	(IO_DMACA2.bitc.DTC12)
#define	DMACA2_DTC13  	(IO_DMACA2.bitc.DTC13)
#define	DMACA2_DTC14  	(IO_DMACA2.bitc.DTC14)
#define	DMACA2_DTC15  	(IO_DMACA2.bitc.DTC15)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_DMACB2,attr=IO,locate=0x214
#endif

typedef union {
	__WORD	word;
	struct {
			__BYTE	TYPE:2;
			__BYTE	MOD:2;
			__BYTE	WS:2;
			__BYTE	SADM:1;
			__BYTE	DADM:1;
			__BYTE	DTCR:1;
			__BYTE	SADR:1;
			__BYTE	DADR:1;
			__BYTE	ERIE:1;
			__BYTE	EDIE:1;
			__BYTE	DSS:3;
			__BYTE	SASZ:8;
			__BYTE	DASZ:8;
	} bit;
	struct {
			__BYTE	TYPE1:1;
			__BYTE	TYPE0:1;
			__BYTE	MOD1:1;
			__BYTE	MOD0:1;
			__BYTE	WS1:1;
			__BYTE	WS0:1;
			__BYTE	SADM:1;
			__BYTE	DADM:1;
			__BYTE	DTCR:1;
			__BYTE	SADR:1;
			__BYTE	DADR:1;
			__BYTE	ERIE:1;
			__BYTE	EDIE:1;
			__BYTE	DSS2:1;
			__BYTE	DSS1:1;
			__BYTE	DSS0:1;
			__BYTE	SASZ7:1;
			__BYTE	SASZ6:1;
			__BYTE	SASZ5:1;
			__BYTE	SASZ4:1;
			__BYTE	SASZ3:1;
			__BYTE	SASZ2:1;
			__BYTE	SASZ1:1;
			__BYTE	SASZ0:1;
			__BYTE	DASZ7:1;
			__BYTE	DASZ6:1;
			__BYTE	DASZ5:1;
			__BYTE	DASZ4:1;
			__BYTE	DASZ3:1;
			__BYTE	DASZ2:1;
			__BYTE	DASZ1:1;
			__BYTE	DASZ0:1;
	} bitc;
} DMACB2STR;

__IO_EXTENDED	  DMACB2STR	IO_DMACB2;
#define	_dmacb2		(IO_DMACB2)
#define	DMACB2		(IO_DMACB2.word)
#define	DMACB2_TYPE  	(IO_DMACB2.bit.TYPE)
#define	DMACB2_TYPE0  	(IO_DMACB2.bitc.TYPE0)
#define	DMACB2_TYPE1  	(IO_DMACB2.bitc.TYPE1)
#define	DMACB2_MOD  	(IO_DMACB2.bit.MOD)
#define	DMACB2_MOD0  	(IO_DMACB2.bitc.MOD0)
#define	DMACB2_MOD1  	(IO_DMACB2.bitc.MOD1)
#define	DMACB2_WS  	(IO_DMACB2.bit.WS)
#define	DMACB2_WS0  	(IO_DMACB2.bitc.WS0)
#define	DMACB2_WS1  	(IO_DMACB2.bitc.WS1)
#define	DMACB2_SADM  	(IO_DMACB2.bit.SADM)
#define	DMACB2_DADM  	(IO_DMACB2.bit.DADM)
#define	DMACB2_DTCR  	(IO_DMACB2.bit.DTCR)
#define	DMACB2_SADR  	(IO_DMACB2.bit.SADR)
#define	DMACB2_DADR  	(IO_DMACB2.bit.DADR)
#define	DMACB2_ERIE  	(IO_DMACB2.bit.ERIE)
#define	DMACB2_EDIE  	(IO_DMACB2.bit.EDIE)
#define	DMACB2_DSS  	(IO_DMACB2.bit.DSS)
#define	DMACB2_DSS0  	(IO_DMACB2.bitc.DSS0)
#define	DMACB2_DSS1  	(IO_DMACB2.bitc.DSS1)
#define	DMACB2_DSS2  	(IO_DMACB2.bitc.DSS2)
#define	DMACB2_SASZ  	(IO_DMACB2.bit.SASZ)
#define	DMACB2_SASZ0  	(IO_DMACB2.bitc.SASZ0)
#define	DMACB2_SASZ1  	(IO_DMACB2.bitc.SASZ1)
#define	DMACB2_SASZ2  	(IO_DMACB2.bitc.SASZ2)
#define	DMACB2_SASZ3  	(IO_DMACB2.bitc.SASZ3)
#define	DMACB2_SASZ4  	(IO_DMACB2.bitc.SASZ4)
#define	DMACB2_SASZ5  	(IO_DMACB2.bitc.SASZ5)
#define	DMACB2_SASZ6  	(IO_DMACB2.bitc.SASZ6)
#define	DMACB2_SASZ7  	(IO_DMACB2.bitc.SASZ7)
#define	DMACB2_DASZ  	(IO_DMACB2.bit.DASZ)
#define	DMACB2_DASZ0  	(IO_DMACB2.bitc.DASZ0)
#define	DMACB2_DASZ1  	(IO_DMACB2.bitc.DASZ1)
#define	DMACB2_DASZ2  	(IO_DMACB2.bitc.DASZ2)
#define	DMACB2_DASZ3  	(IO_DMACB2.bitc.DASZ3)
#define	DMACB2_DASZ4  	(IO_DMACB2.bitc.DASZ4)
#define	DMACB2_DASZ5  	(IO_DMACB2.bitc.DASZ5)
#define	DMACB2_DASZ6  	(IO_DMACB2.bitc.DASZ6)
#define	DMACB2_DASZ7  	(IO_DMACB2.bitc.DASZ7)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_DMACA3,attr=IO,locate=0x218
#endif

typedef union {
	__WORD	word;
	struct {
			__BYTE	DENB:1;
			__BYTE	PAUS:1;
			__BYTE	STRG:1;
			__BYTE	IS:5;
			__BYTE	EIS:4;
			__BYTE	BLK:4;
			__WORD	DTC:16;
	} bit;
	struct {
			__BYTE	DENB:1;
			__BYTE	PAUS:1;
			__BYTE	STRG:1;
			__BYTE	IS4:1;
			__BYTE	IS3:1;
			__BYTE	IS2:1;
			__BYTE	IS1:1;
			__BYTE	IS0:1;
			__BYTE	EIS3:1;
			__BYTE	EIS2:1;
			__BYTE	EIS1:1;
			__BYTE	EIS0:1;
			__BYTE	BLK3:1;
			__BYTE	BLK2:1;
			__BYTE	BLK1:1;
			__BYTE	BLK0:1;
			__BYTE	DTC15:1;
			__BYTE	DTC14:1;
			__BYTE	DTC13:1;
			__BYTE	DTC12:1;
			__BYTE	DTC11:1;
			__BYTE	DTC10:1;
			__BYTE	DTC9:1;
			__BYTE	DTC8:1;
			__BYTE	DTC7:1;
			__BYTE	DTC6:1;
			__BYTE	DTC5:1;
			__BYTE	DTC4:1;
			__BYTE	DTC3:1;
			__BYTE	DTC2:1;
			__BYTE	DTC1:1;
			__BYTE	DTC0:1;
	} bitc;
} DMACA3STR;

__IO_EXTENDED	  DMACA3STR	IO_DMACA3;
#define	_dmaca3		(IO_DMACA3)
#define	DMACA3		(IO_DMACA3.word)
#define	DMACA3_DENB  	(IO_DMACA3.bit.DENB)
#define	DMACA3_PAUS  	(IO_DMACA3.bit.PAUS)
#define	DMACA3_STRG  	(IO_DMACA3.bit.STRG)
#define	DMACA3_IS  	(IO_DMACA3.bit.IS)
#define	DMACA3_IS0  	(IO_DMACA3.bitc.IS0)
#define	DMACA3_IS1  	(IO_DMACA3.bitc.IS1)
#define	DMACA3_IS2  	(IO_DMACA3.bitc.IS2)
#define	DMACA3_IS3  	(IO_DMACA3.bitc.IS3)
#define	DMACA3_IS4  	(IO_DMACA3.bitc.IS4)
#define	DMACA3_EIS  	(IO_DMACA3.bit.EIS)
#define	DMACA3_EIS0  	(IO_DMACA3.bitc.EIS0)
#define	DMACA3_EIS1  	(IO_DMACA3.bitc.EIS1)
#define	DMACA3_EIS2  	(IO_DMACA3.bitc.EIS2)
#define	DMACA3_EIS3  	(IO_DMACA3.bitc.EIS3)
#define	DMACA3_BLK  	(IO_DMACA3.bit.BLK)
#define	DMACA3_BLK0  	(IO_DMACA3.bitc.BLK0)
#define	DMACA3_BLK1  	(IO_DMACA3.bitc.BLK1)
#define	DMACA3_BLK2  	(IO_DMACA3.bitc.BLK2)
#define	DMACA3_BLK3  	(IO_DMACA3.bitc.BLK3)
#define	DMACA3_DTC  	(IO_DMACA3.bit.DTC)
#define	DMACA3_DTC0  	(IO_DMACA3.bitc.DTC0)
#define	DMACA3_DTC1  	(IO_DMACA3.bitc.DTC1)
#define	DMACA3_DTC2  	(IO_DMACA3.bitc.DTC2)
#define	DMACA3_DTC3  	(IO_DMACA3.bitc.DTC3)
#define	DMACA3_DTC4  	(IO_DMACA3.bitc.DTC4)
#define	DMACA3_DTC5  	(IO_DMACA3.bitc.DTC5)
#define	DMACA3_DTC6  	(IO_DMACA3.bitc.DTC6)
#define	DMACA3_DTC7  	(IO_DMACA3.bitc.DTC7)
#define	DMACA3_DTC8  	(IO_DMACA3.bitc.DTC8)
#define	DMACA3_DTC9  	(IO_DMACA3.bitc.DTC9)
#define	DMACA3_DTC10  	(IO_DMACA3.bitc.DTC10)
#define	DMACA3_DTC11  	(IO_DMACA3.bitc.DTC11)
#define	DMACA3_DTC12  	(IO_DMACA3.bitc.DTC12)
#define	DMACA3_DTC13  	(IO_DMACA3.bitc.DTC13)
#define	DMACA3_DTC14  	(IO_DMACA3.bitc.DTC14)
#define	DMACA3_DTC15  	(IO_DMACA3.bitc.DTC15)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_DMACB3,attr=IO,locate=0x21C
#endif

typedef union {
	__WORD	word;
	struct {
			__BYTE	TYPE:2;
			__BYTE	MOD:2;
			__BYTE	WS:2;
			__BYTE	SADM:1;
			__BYTE	DADM:1;
			__BYTE	DTCR:1;
			__BYTE	SADR:1;
			__BYTE	DADR:1;
			__BYTE	ERIE:1;
			__BYTE	EDIE:1;
			__BYTE	DSS:3;
			__BYTE	SASZ:8;
			__BYTE	DASZ:8;
	} bit;
	struct {
			__BYTE	TYPE1:1;
			__BYTE	TYPE0:1;
			__BYTE	MOD1:1;
			__BYTE	MOD0:1;
			__BYTE	WS1:1;
			__BYTE	WS0:1;
			__BYTE	SADM:1;
			__BYTE	DADM:1;
			__BYTE	DTCR:1;
			__BYTE	SADR:1;
			__BYTE	DADR:1;
			__BYTE	ERIE:1;
			__BYTE	EDIE:1;
			__BYTE	DSS2:1;
			__BYTE	DSS1:1;
			__BYTE	DSS0:1;
			__BYTE	SASZ7:1;
			__BYTE	SASZ6:1;
			__BYTE	SASZ5:1;
			__BYTE	SASZ4:1;
			__BYTE	SASZ3:1;
			__BYTE	SASZ2:1;
			__BYTE	SASZ1:1;
			__BYTE	SASZ0:1;
			__BYTE	DASZ7:1;
			__BYTE	DASZ6:1;
			__BYTE	DASZ5:1;
			__BYTE	DASZ4:1;
			__BYTE	DASZ3:1;
			__BYTE	DASZ2:1;
			__BYTE	DASZ1:1;
			__BYTE	DASZ0:1;
	} bitc;
} DMACB3STR;

__IO_EXTENDED	  DMACB3STR	IO_DMACB3;
#define	_dmacb3		(IO_DMACB3)
#define	DMACB3		(IO_DMACB3.word)
#define	DMACB3_TYPE  	(IO_DMACB3.bit.TYPE)
#define	DMACB3_TYPE0  	(IO_DMACB3.bitc.TYPE0)
#define	DMACB3_TYPE1  	(IO_DMACB3.bitc.TYPE1)
#define	DMACB3_MOD  	(IO_DMACB3.bit.MOD)
#define	DMACB3_MOD0  	(IO_DMACB3.bitc.MOD0)
#define	DMACB3_MOD1  	(IO_DMACB3.bitc.MOD1)
#define	DMACB3_WS  	(IO_DMACB3.bit.WS)
#define	DMACB3_WS0  	(IO_DMACB3.bitc.WS0)
#define	DMACB3_WS1  	(IO_DMACB3.bitc.WS1)
#define	DMACB3_SADM  	(IO_DMACB3.bit.SADM)
#define	DMACB3_DADM  	(IO_DMACB3.bit.DADM)
#define	DMACB3_DTCR  	(IO_DMACB3.bit.DTCR)
#define	DMACB3_SADR  	(IO_DMACB3.bit.SADR)
#define	DMACB3_DADR  	(IO_DMACB3.bit.DADR)
#define	DMACB3_ERIE  	(IO_DMACB3.bit.ERIE)
#define	DMACB3_EDIE  	(IO_DMACB3.bit.EDIE)
#define	DMACB3_DSS  	(IO_DMACB3.bit.DSS)
#define	DMACB3_DSS0  	(IO_DMACB3.bitc.DSS0)
#define	DMACB3_DSS1  	(IO_DMACB3.bitc.DSS1)
#define	DMACB3_DSS2  	(IO_DMACB3.bitc.DSS2)
#define	DMACB3_SASZ  	(IO_DMACB3.bit.SASZ)
#define	DMACB3_SASZ0  	(IO_DMACB3.bitc.SASZ0)
#define	DMACB3_SASZ1  	(IO_DMACB3.bitc.SASZ1)
#define	DMACB3_SASZ2  	(IO_DMACB3.bitc.SASZ2)
#define	DMACB3_SASZ3  	(IO_DMACB3.bitc.SASZ3)
#define	DMACB3_SASZ4  	(IO_DMACB3.bitc.SASZ4)
#define	DMACB3_SASZ5  	(IO_DMACB3.bitc.SASZ5)
#define	DMACB3_SASZ6  	(IO_DMACB3.bitc.SASZ6)
#define	DMACB3_SASZ7  	(IO_DMACB3.bitc.SASZ7)
#define	DMACB3_DASZ  	(IO_DMACB3.bit.DASZ)
#define	DMACB3_DASZ0  	(IO_DMACB3.bitc.DASZ0)
#define	DMACB3_DASZ1  	(IO_DMACB3.bitc.DASZ1)
#define	DMACB3_DASZ2  	(IO_DMACB3.bitc.DASZ2)
#define	DMACB3_DASZ3  	(IO_DMACB3.bitc.DASZ3)
#define	DMACB3_DASZ4  	(IO_DMACB3.bitc.DASZ4)
#define	DMACB3_DASZ5  	(IO_DMACB3.bitc.DASZ5)
#define	DMACB3_DASZ6  	(IO_DMACB3.bitc.DASZ6)
#define	DMACB3_DASZ7  	(IO_DMACB3.bitc.DASZ7)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_DMACA4,attr=IO,locate=0x220
#endif

typedef union {
	__WORD	word;
	struct {
			__BYTE	DENB:1;
			__BYTE	PAUS:1;
			__BYTE	STRG:1;
			__BYTE	IS:5;
			__BYTE	EIS:4;
			__BYTE	BLK:4;
			__WORD	DTC:16;
	} bit;
	struct {
			__BYTE	DENB:1;
			__BYTE	PAUS:1;
			__BYTE	STRG:1;
			__BYTE	IS4:1;
			__BYTE	IS3:1;
			__BYTE	IS2:1;
			__BYTE	IS1:1;
			__BYTE	IS0:1;
			__BYTE	EIS3:1;
			__BYTE	EIS2:1;
			__BYTE	EIS1:1;
			__BYTE	EIS0:1;
			__BYTE	BLK3:1;
			__BYTE	BLK2:1;
			__BYTE	BLK1:1;
			__BYTE	BLK0:1;
			__BYTE	DTC15:1;
			__BYTE	DTC14:1;
			__BYTE	DTC13:1;
			__BYTE	DTC12:1;
			__BYTE	DTC11:1;
			__BYTE	DTC10:1;
			__BYTE	DTC9:1;
			__BYTE	DTC8:1;
			__BYTE	DTC7:1;
			__BYTE	DTC6:1;
			__BYTE	DTC5:1;
			__BYTE	DTC4:1;
			__BYTE	DTC3:1;
			__BYTE	DTC2:1;
			__BYTE	DTC1:1;
			__BYTE	DTC0:1;
	} bitc;
} DMACA4STR;

__IO_EXTENDED	  DMACA4STR	IO_DMACA4;
#define	_dmaca4		(IO_DMACA4)
#define	DMACA4		(IO_DMACA4.word)
#define	DMACA4_DENB  	(IO_DMACA4.bit.DENB)
#define	DMACA4_PAUS  	(IO_DMACA4.bit.PAUS)
#define	DMACA4_STRG  	(IO_DMACA4.bit.STRG)
#define	DMACA4_IS  	(IO_DMACA4.bit.IS)
#define	DMACA4_IS0  	(IO_DMACA4.bitc.IS0)
#define	DMACA4_IS1  	(IO_DMACA4.bitc.IS1)
#define	DMACA4_IS2  	(IO_DMACA4.bitc.IS2)
#define	DMACA4_IS3  	(IO_DMACA4.bitc.IS3)
#define	DMACA4_IS4  	(IO_DMACA4.bitc.IS4)
#define	DMACA4_EIS  	(IO_DMACA4.bit.EIS)
#define	DMACA4_EIS0  	(IO_DMACA4.bitc.EIS0)
#define	DMACA4_EIS1  	(IO_DMACA4.bitc.EIS1)
#define	DMACA4_EIS2  	(IO_DMACA4.bitc.EIS2)
#define	DMACA4_EIS3  	(IO_DMACA4.bitc.EIS3)
#define	DMACA4_BLK  	(IO_DMACA4.bit.BLK)
#define	DMACA4_BLK0  	(IO_DMACA4.bitc.BLK0)
#define	DMACA4_BLK1  	(IO_DMACA4.bitc.BLK1)
#define	DMACA4_BLK2  	(IO_DMACA4.bitc.BLK2)
#define	DMACA4_BLK3  	(IO_DMACA4.bitc.BLK3)
#define	DMACA4_DTC  	(IO_DMACA4.bit.DTC)
#define	DMACA4_DTC0  	(IO_DMACA4.bitc.DTC0)
#define	DMACA4_DTC1  	(IO_DMACA4.bitc.DTC1)
#define	DMACA4_DTC2  	(IO_DMACA4.bitc.DTC2)
#define	DMACA4_DTC3  	(IO_DMACA4.bitc.DTC3)
#define	DMACA4_DTC4  	(IO_DMACA4.bitc.DTC4)
#define	DMACA4_DTC5  	(IO_DMACA4.bitc.DTC5)
#define	DMACA4_DTC6  	(IO_DMACA4.bitc.DTC6)
#define	DMACA4_DTC7  	(IO_DMACA4.bitc.DTC7)
#define	DMACA4_DTC8  	(IO_DMACA4.bitc.DTC8)
#define	DMACA4_DTC9  	(IO_DMACA4.bitc.DTC9)
#define	DMACA4_DTC10  	(IO_DMACA4.bitc.DTC10)
#define	DMACA4_DTC11  	(IO_DMACA4.bitc.DTC11)
#define	DMACA4_DTC12  	(IO_DMACA4.bitc.DTC12)
#define	DMACA4_DTC13  	(IO_DMACA4.bitc.DTC13)
#define	DMACA4_DTC14  	(IO_DMACA4.bitc.DTC14)
#define	DMACA4_DTC15  	(IO_DMACA4.bitc.DTC15)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_DMACB4,attr=IO,locate=0x224
#endif

typedef union {
	__WORD	word;
	struct {
			__BYTE	TYPE:2;
			__BYTE	MOD:2;
			__BYTE	WS:2;
			__BYTE	SADM:1;
			__BYTE	DADM:1;
			__BYTE	DTCR:1;
			__BYTE	SADR:1;
			__BYTE	DADR:1;
			__BYTE	ERIE:1;
			__BYTE	EDIE:1;
			__BYTE	DSS:3;
			__BYTE	SASZ:8;
			__BYTE	DASZ:8;
	} bit;
	struct {
			__BYTE	TYPE1:1;
			__BYTE	TYPE0:1;
			__BYTE	MOD1:1;
			__BYTE	MOD0:1;
			__BYTE	WS1:1;
			__BYTE	WS0:1;
			__BYTE	SADM:1;
			__BYTE	DADM:1;
			__BYTE	DTCR:1;
			__BYTE	SADR:1;
			__BYTE	DADR:1;
			__BYTE	ERIE:1;
			__BYTE	EDIE:1;
			__BYTE	DSS2:1;
			__BYTE	DSS1:1;
			__BYTE	DSS0:1;
			__BYTE	SASZ7:1;
			__BYTE	SASZ6:1;
			__BYTE	SASZ5:1;
			__BYTE	SASZ4:1;
			__BYTE	SASZ3:1;
			__BYTE	SASZ2:1;
			__BYTE	SASZ1:1;
			__BYTE	SASZ0:1;
			__BYTE	DASZ7:1;
			__BYTE	DASZ6:1;
			__BYTE	DASZ5:1;
			__BYTE	DASZ4:1;
			__BYTE	DASZ3:1;
			__BYTE	DASZ2:1;
			__BYTE	DASZ1:1;
			__BYTE	DASZ0:1;
	} bitc;
} DMACB4STR;

__IO_EXTENDED	  DMACB4STR	IO_DMACB4;
#define	_dmacb4		(IO_DMACB4)
#define	DMACB4		(IO_DMACB4.word)
#define	DMACB4_TYPE  	(IO_DMACB4.bit.TYPE)
#define	DMACB4_TYPE0  	(IO_DMACB4.bitc.TYPE0)
#define	DMACB4_TYPE1  	(IO_DMACB4.bitc.TYPE1)
#define	DMACB4_MOD  	(IO_DMACB4.bit.MOD)
#define	DMACB4_MOD0  	(IO_DMACB4.bitc.MOD0)
#define	DMACB4_MOD1  	(IO_DMACB4.bitc.MOD1)
#define	DMACB4_WS  	(IO_DMACB4.bit.WS)
#define	DMACB4_WS0  	(IO_DMACB4.bitc.WS0)
#define	DMACB4_WS1  	(IO_DMACB4.bitc.WS1)
#define	DMACB4_SADM  	(IO_DMACB4.bit.SADM)
#define	DMACB4_DADM  	(IO_DMACB4.bit.DADM)
#define	DMACB4_DTCR  	(IO_DMACB4.bit.DTCR)
#define	DMACB4_SADR  	(IO_DMACB4.bit.SADR)
#define	DMACB4_DADR  	(IO_DMACB4.bit.DADR)
#define	DMACB4_ERIE  	(IO_DMACB4.bit.ERIE)
#define	DMACB4_EDIE  	(IO_DMACB4.bit.EDIE)
#define	DMACB4_DSS  	(IO_DMACB4.bit.DSS)
#define	DMACB4_DSS0  	(IO_DMACB4.bitc.DSS0)
#define	DMACB4_DSS1  	(IO_DMACB4.bitc.DSS1)
#define	DMACB4_DSS2  	(IO_DMACB4.bitc.DSS2)
#define	DMACB4_SASZ  	(IO_DMACB4.bit.SASZ)
#define	DMACB4_SASZ0  	(IO_DMACB4.bitc.SASZ0)
#define	DMACB4_SASZ1  	(IO_DMACB4.bitc.SASZ1)
#define	DMACB4_SASZ2  	(IO_DMACB4.bitc.SASZ2)
#define	DMACB4_SASZ3  	(IO_DMACB4.bitc.SASZ3)
#define	DMACB4_SASZ4  	(IO_DMACB4.bitc.SASZ4)
#define	DMACB4_SASZ5  	(IO_DMACB4.bitc.SASZ5)
#define	DMACB4_SASZ6  	(IO_DMACB4.bitc.SASZ6)
#define	DMACB4_SASZ7  	(IO_DMACB4.bitc.SASZ7)
#define	DMACB4_DASZ  	(IO_DMACB4.bit.DASZ)
#define	DMACB4_DASZ0  	(IO_DMACB4.bitc.DASZ0)
#define	DMACB4_DASZ1  	(IO_DMACB4.bitc.DASZ1)
#define	DMACB4_DASZ2  	(IO_DMACB4.bitc.DASZ2)
#define	DMACB4_DASZ3  	(IO_DMACB4.bitc.DASZ3)
#define	DMACB4_DASZ4  	(IO_DMACB4.bitc.DASZ4)
#define	DMACB4_DASZ5  	(IO_DMACB4.bitc.DASZ5)
#define	DMACB4_DASZ6  	(IO_DMACB4.bitc.DASZ6)
#define	DMACB4_DASZ7  	(IO_DMACB4.bitc.DASZ7)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_DMACR,attr=IO,locate=0x240
#endif

typedef union {
	__BYTE	byte;
	struct {
			__BYTE	DMAE:1;
			__BYTE	RESV1:1;
			__BYTE	RESV2:1;
			__BYTE	PM01:1;
			__BYTE	DMAH:4;
	} bit;
	struct {
			__BYTE	DMAE:1;
			__BYTE	RESV1:1;
			__BYTE	RESV2:1;
			__BYTE	PM01:1;
			__BYTE	DMAH3:1;
			__BYTE	DMAH2:1;
			__BYTE	DMAH1:1;
			__BYTE	DMAH0:1;
	} bitc;
} DMACRSTR;

__IO_EXTENDED	  DMACRSTR	IO_DMACR;
#define	_dmacr		(IO_DMACR)
#define	DMACR		(IO_DMACR.byte)
#define	DMACR_DMAE  	(IO_DMACR.bit.DMAE)
#define	DMACR_PM01  	(IO_DMACR.bit.PM01)
#define	DMACR_DMAH  	(IO_DMACR.bit.DMAH)
#define	DMACR_DMAH0  	(IO_DMACR.bitc.DMAH0)
#define	DMACR_DMAH1  	(IO_DMACR.bitc.DMAH1)
#define	DMACR_DMAH2  	(IO_DMACR.bitc.DMAH2)
#define	DMACR_DMAH3  	(IO_DMACR.bitc.DMAH3)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_ICS45,attr=IO,locate=0x2D1
#endif

typedef union {
	__BYTE	byte;
	struct {
			__BYTE	ICP5:1;
			__BYTE	ICP4:1;
			__BYTE	ICE5:1;
			__BYTE	ICE4:1;
			__BYTE	EG5:2;
			__BYTE	EG4:2;
	} bit;
	struct {
			__BYTE	ICP5:1;
			__BYTE	ICP4:1;
			__BYTE	ICE5:1;
			__BYTE	ICE4:1;
			__BYTE	EG51:1;
			__BYTE	EG50:1;
			__BYTE	EG41:1;
			__BYTE	EG40:1;
	} bitc;
} ICS45STR;

__IO_EXTENDED	  ICS45STR	IO_ICS45;
#define	_ics45		(IO_ICS45)
#define	ICS45		(IO_ICS45.byte)
#define	ICS45_ICP5  	(IO_ICS45.bit.ICP5)
#define	ICS45_ICP4  	(IO_ICS45.bit.ICP4)
#define	ICS45_ICE5  	(IO_ICS45.bit.ICE5)
#define	ICS45_ICE4  	(IO_ICS45.bit.ICE4)
#define	ICS45_EG5  	(IO_ICS45.bit.EG5)
#define	ICS45_EG50  	(IO_ICS45.bitc.EG50)
#define	ICS45_EG51  	(IO_ICS45.bitc.EG51)
#define	ICS45_EG4  	(IO_ICS45.bit.EG4)
#define	ICS45_EG40  	(IO_ICS45.bitc.EG40)
#define	ICS45_EG41  	(IO_ICS45.bitc.EG41)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_ICS67,attr=IO,locate=0x2D3
#endif

typedef union {
	__BYTE	byte;
	struct {
			__BYTE	ICP7:1;
			__BYTE	ICP6:1;
			__BYTE	ICE7:1;
			__BYTE	ICE6:1;
			__BYTE	EG7:2;
			__BYTE	EG6:2;
	} bit;
	struct {
			__BYTE	ICP7:1;
			__BYTE	ICP6:1;
			__BYTE	ICE7:1;
			__BYTE	ICE6:1;
			__BYTE	EG71:1;
			__BYTE	EG70:1;
			__BYTE	EG61:1;
			__BYTE	EG60:1;
	} bitc;
} ICS67STR;

__IO_EXTENDED	  ICS67STR	IO_ICS67;
#define	_ics67		(IO_ICS67)
#define	ICS67		(IO_ICS67.byte)
#define	ICS67_ICP7  	(IO_ICS67.bit.ICP7)
#define	ICS67_ICP6  	(IO_ICS67.bit.ICP6)
#define	ICS67_ICE7  	(IO_ICS67.bit.ICE7)
#define	ICS67_ICE6  	(IO_ICS67.bit.ICE6)
#define	ICS67_EG7  	(IO_ICS67.bit.EG7)
#define	ICS67_EG70  	(IO_ICS67.bitc.EG70)
#define	ICS67_EG71  	(IO_ICS67.bitc.EG71)
#define	ICS67_EG6  	(IO_ICS67.bit.EG6)
#define	ICS67_EG60  	(IO_ICS67.bitc.EG60)
#define	ICS67_EG61  	(IO_ICS67.bitc.EG61)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_IPCP4,attr=IO,locate=0x2D4
#endif

__IO_EXTENDED	const __HWORD	IO_IPCP4;
#define	_ipcp4		(IO_IPCP4)
#define	IPCP4	(_ipcp4)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_IPCP5,attr=IO,locate=0x2D6
#endif

__IO_EXTENDED	const __HWORD	IO_IPCP5;
#define	_ipcp5		(IO_IPCP5)
#define	IPCP5	(_ipcp5)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_IPCP6,attr=IO,locate=0x2D8
#endif

__IO_EXTENDED	const __HWORD	IO_IPCP6;
#define	_ipcp6		(IO_IPCP6)
#define	IPCP6	(_ipcp6)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_IPCP7,attr=IO,locate=0x2DA
#endif

__IO_EXTENDED	const __HWORD	IO_IPCP7;
#define	_ipcp7		(IO_IPCP7)
#define	IPCP7	(_ipcp7)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_OCS45,attr=IO,locate=0x2DC
#endif

typedef union {
	__HWORD	hword;
	struct {
			__BYTE	RESV0:1;
			__BYTE	RESV1:1;
			__BYTE	RESV2:1;
			__BYTE	CMOD:1;
			__BYTE	RESV4:1;
			__BYTE	RESV5:1;
			__BYTE	OTD5:1;
			__BYTE	OTD4:1;
			__BYTE	ICP5:1;
			__BYTE	ICP4:1;
			__BYTE	ICE5:1;
			__BYTE	ICE4:1;
			__BYTE	RESV12:1;
			__BYTE	RESV13:1;
			__BYTE	CST5:1;
			__BYTE	CST4:1;
	} bit;
	struct {
			__BYTE	RESV0:1;
			__BYTE	RESV1:1;
			__BYTE	RESV2:1;
			__BYTE	CMOD:1;
			__BYTE	RESV4:1;
			__BYTE	RESV5:1;
			__BYTE	OTD5:1;
			__BYTE	OTD4:1;
			__BYTE	ICP5:1;
			__BYTE	ICP4:1;
			__BYTE	ICE5:1;
			__BYTE	ICE4:1;
			__BYTE	RESV12:1;
			__BYTE	RESV13:1;
			__BYTE	CST5:1;
			__BYTE	CST4:1;
	} bitc;
} OCS45STR;

__IO_EXTENDED	  OCS45STR	IO_OCS45;
#define	_ocs45		(IO_OCS45)
#define	OCS45		(IO_OCS45.hword)
#define	OCS45_CMOD  	(IO_OCS45.bit.CMOD)
#define	OCS45_OTD5  	(IO_OCS45.bit.OTD5)
#define	OCS45_OTD4  	(IO_OCS45.bit.OTD4)
#define	OCS45_ICP5  	(IO_OCS45.bit.ICP5)
#define	OCS45_ICP4  	(IO_OCS45.bit.ICP4)
#define	OCS45_ICE5  	(IO_OCS45.bit.ICE5)
#define	OCS45_ICE4  	(IO_OCS45.bit.ICE4)
#define	OCS45_CST5  	(IO_OCS45.bit.CST5)
#define	OCS45_CST4  	(IO_OCS45.bit.CST4)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_OCCP4,attr=IO,locate=0x2E0
#endif

__IO_EXTENDED	__HWORD	IO_OCCP4;
#define	_occp4		(IO_OCCP4)
#define	OCCP4	(_occp4)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_OCCP5,attr=IO,locate=0x2E2
#endif

__IO_EXTENDED	__HWORD	IO_OCCP5;
#define	_occp5		(IO_OCCP5)
#define	OCCP5	(_occp5)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_TCDT4,attr=IO,locate=0x2F0
#endif

__IO_EXTENDED	__HWORD	IO_TCDT4;
#define	_tcdt4		(IO_TCDT4)
#define	TCDT4	(_tcdt4)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_TCCS4,attr=IO,locate=0x2F3
#endif

typedef union {
	__BYTE	byte;
	struct {
			__BYTE	ECLK:1;
			__BYTE	IVF:1;
			__BYTE	IVFE:1;
			__BYTE	STOP:1;
			__BYTE	MODE:1;
			__BYTE	CLR:1;
			__BYTE	CLK:2;
	} bit;
	struct {
			__BYTE	ECLK:1;
			__BYTE	IVF:1;
			__BYTE	IVFE:1;
			__BYTE	STOP:1;
			__BYTE	MODE:1;
			__BYTE	CLR:1;
			__BYTE	CLK1:1;
			__BYTE	CLK0:1;
	} bitc;
} TCCS4STR;

__IO_EXTENDED	  TCCS4STR	IO_TCCS4;
#define	_tccs4		(IO_TCCS4)
#define	TCCS4		(IO_TCCS4.byte)
#define	TCCS4_ECLK  	(IO_TCCS4.bit.ECLK)
#define	TCCS4_IVF  	(IO_TCCS4.bit.IVF)
#define	TCCS4_IVFE  	(IO_TCCS4.bit.IVFE)
#define	TCCS4_STOP  	(IO_TCCS4.bit.STOP)
#define	TCCS4_MODE  	(IO_TCCS4.bit.MODE)
#define	TCCS4_CLR  	(IO_TCCS4.bit.CLR)
#define	TCCS4_CLK  	(IO_TCCS4.bit.CLK)
#define	TCCS4_CLK0  	(IO_TCCS4.bitc.CLK0)
#define	TCCS4_CLK1  	(IO_TCCS4.bitc.CLK1)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_TCDT5,attr=IO,locate=0x2F4
#endif

__IO_EXTENDED	__HWORD	IO_TCDT5;
#define	_tcdt5		(IO_TCDT5)
#define	TCDT5	(_tcdt5)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_TCCS5,attr=IO,locate=0x2F7
#endif

typedef union {
	__BYTE	byte;
	struct {
			__BYTE	ECLK:1;
			__BYTE	IVF:1;
			__BYTE	IVFE:1;
			__BYTE	STOP:1;
			__BYTE	MODE:1;
			__BYTE	CLR:1;
			__BYTE	CLK:2;
	} bit;
	struct {
			__BYTE	ECLK:1;
			__BYTE	IVF:1;
			__BYTE	IVFE:1;
			__BYTE	STOP:1;
			__BYTE	MODE:1;
			__BYTE	CLR:1;
			__BYTE	CLK1:1;
			__BYTE	CLK0:1;
	} bitc;
} TCCS5STR;

__IO_EXTENDED	  TCCS5STR	IO_TCCS5;
#define	_tccs5		(IO_TCCS5)
#define	TCCS5		(IO_TCCS5.byte)
#define	TCCS5_ECLK  	(IO_TCCS5.bit.ECLK)
#define	TCCS5_IVF  	(IO_TCCS5.bit.IVF)
#define	TCCS5_IVFE  	(IO_TCCS5.bit.IVFE)
#define	TCCS5_STOP  	(IO_TCCS5.bit.STOP)
#define	TCCS5_MODE  	(IO_TCCS5.bit.MODE)
#define	TCCS5_CLR  	(IO_TCCS5.bit.CLR)
#define	TCCS5_CLK  	(IO_TCCS5.bit.CLK)
#define	TCCS5_CLK0  	(IO_TCCS5.bitc.CLK0)
#define	TCCS5_CLK1  	(IO_TCCS5.bitc.CLK1)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_TCDT6,attr=IO,locate=0x2F8
#endif

__IO_EXTENDED	__HWORD	IO_TCDT6;
#define	_tcdt6		(IO_TCDT6)
#define	TCDT6	(_tcdt6)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_TCCS6,attr=IO,locate=0x2FB
#endif

typedef union {
	__BYTE	byte;
	struct {
			__BYTE	ECLK:1;
			__BYTE	IVF:1;
			__BYTE	IVFE:1;
			__BYTE	STOP:1;
			__BYTE	MODE:1;
			__BYTE	CLR:1;
			__BYTE	CLK:2;
	} bit;
	struct {
			__BYTE	ECLK:1;
			__BYTE	IVF:1;
			__BYTE	IVFE:1;
			__BYTE	STOP:1;
			__BYTE	MODE:1;
			__BYTE	CLR:1;
			__BYTE	CLK1:1;
			__BYTE	CLK0:1;
	} bitc;
} TCCS6STR;

__IO_EXTENDED	  TCCS6STR	IO_TCCS6;
#define	_tccs6		(IO_TCCS6)
#define	TCCS6		(IO_TCCS6.byte)
#define	TCCS6_ECLK  	(IO_TCCS6.bit.ECLK)
#define	TCCS6_IVF  	(IO_TCCS6.bit.IVF)
#define	TCCS6_IVFE  	(IO_TCCS6.bit.IVFE)
#define	TCCS6_STOP  	(IO_TCCS6.bit.STOP)
#define	TCCS6_MODE  	(IO_TCCS6.bit.MODE)
#define	TCCS6_CLR  	(IO_TCCS6.bit.CLR)
#define	TCCS6_CLK  	(IO_TCCS6.bit.CLK)
#define	TCCS6_CLK0  	(IO_TCCS6.bitc.CLK0)
#define	TCCS6_CLK1  	(IO_TCCS6.bitc.CLK1)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_TCDT7,attr=IO,locate=0x2FC
#endif

__IO_EXTENDED	__HWORD	IO_TCDT7;
#define	_tcdt7		(IO_TCDT7)
#define	TCDT7	(_tcdt7)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_TCCS7,attr=IO,locate=0x2FF
#endif

typedef union {
	__BYTE	byte;
	struct {
			__BYTE	ECLK:1;
			__BYTE	IVF:1;
			__BYTE	IVFE:1;
			__BYTE	STOP:1;
			__BYTE	MODE:1;
			__BYTE	CLR:1;
			__BYTE	CLK:2;
	} bit;
	struct {
			__BYTE	ECLK:1;
			__BYTE	IVF:1;
			__BYTE	IVFE:1;
			__BYTE	STOP:1;
			__BYTE	MODE:1;
			__BYTE	CLR:1;
			__BYTE	CLK1:1;
			__BYTE	CLK0:1;
	} bitc;
} TCCS7STR;

__IO_EXTENDED	  TCCS7STR	IO_TCCS7;
#define	_tccs7		(IO_TCCS7)
#define	TCCS7		(IO_TCCS7.byte)
#define	TCCS7_ECLK  	(IO_TCCS7.bit.ECLK)
#define	TCCS7_IVF  	(IO_TCCS7.bit.IVF)
#define	TCCS7_IVFE  	(IO_TCCS7.bit.IVFE)
#define	TCCS7_STOP  	(IO_TCCS7.bit.STOP)
#define	TCCS7_MODE  	(IO_TCCS7.bit.MODE)
#define	TCCS7_CLR  	(IO_TCCS7.bit.CLR)
#define	TCCS7_CLK  	(IO_TCCS7.bit.CLK)
#define	TCCS7_CLK0  	(IO_TCCS7.bitc.CLK0)
#define	TCCS7_CLK1  	(IO_TCCS7.bitc.CLK1)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_ROMS,attr=IO,locate=0x390
#endif

__IO_EXTENDED	__HWORD	IO_ROMS;
#define	_roms		(IO_ROMS)
#define	ROMS	(_roms)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_BSD0,attr=IO,locate=0x3F0
#endif

__IO_EXTENDED	__WORD	IO_BSD0;
#define	_bsd0		(IO_BSD0)
#define	BSD0	(_bsd0)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_BSD1,attr=IO,locate=0x3F4
#endif

__IO_EXTENDED	__WORD	IO_BSD1;
#define	_bsd1		(IO_BSD1)
#define	BSD1	(_bsd1)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_BSDC,attr=IO,locate=0x3F8
#endif

__IO_EXTENDED	__WORD	IO_BSDC;
#define	_bsdc		(IO_BSDC)
#define	BSDC	(_bsdc)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_BSRR,attr=IO,locate=0x3FC
#endif

__IO_EXTENDED	const __WORD	IO_BSRR;
#define	_bsrr		(IO_BSRR)
#define	BSRR	(_bsrr)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_ICR,locate=0x440
#endif

typedef union {
	__BYTE	byte;
	struct {
			__BYTE	RESV0:1;
			__BYTE	RESV1:1;
			__BYTE	RESV2:1;
			__BYTE	ICR:5;
	} bit;
	struct {
			__BYTE	RESV0:1;
			__BYTE	RESV1:1;
			__BYTE	RESV2:1;
			__BYTE	ICR4:1;
			__BYTE	ICR3:1;
			__BYTE	ICR2:1;
			__BYTE	ICR1:1;
			__BYTE	ICR0:1;
	} bitc;
} ICRSTR;

__IO_EXTENDED	ICRSTR	IO_ICR[CONSTANT_64];

#define	ICR0	(IO_ICR[CONSTANT_0].byte)
#define	ICR0_ICR  	(IO_ICR[CONSTANT_0].bit.ICR)
#define	ICR1	(IO_ICR[CONSTANT_1].byte)
#define	ICR1_ICR  	(IO_ICR[CONSTANT_1].bit.ICR)
#define	ICR2	(IO_ICR[CONSTANT_2].byte)
#define	ICR2_ICR  	(IO_ICR[CONSTANT_2].bit.ICR)
#define	ICR3	(IO_ICR[CONSTANT_3].byte)
#define	ICR3_ICR  	(IO_ICR[CONSTANT_3].bit.ICR)
#define	ICR4	(IO_ICR[CONSTANT_4].byte)
#define	ICR4_ICR  	(IO_ICR[CONSTANT_4].bit.ICR)
#define	ICR5	(IO_ICR[CONSTANT_5].byte)
#define	ICR5_ICR  	(IO_ICR[CONSTANT_5].bit.ICR)
#define	ICR6	(IO_ICR[CONSTANT_6].byte)
#define	ICR6_ICR  	(IO_ICR[CONSTANT_6].bit.ICR)
#define	ICR7	(IO_ICR[CONSTANT_7].byte)
#define	ICR7_ICR  	(IO_ICR[CONSTANT_7].bit.ICR)
#define	ICR8	(IO_ICR[CONSTANT_8].byte)
#define	ICR8_ICR  	(IO_ICR[CONSTANT_8].bit.ICR)
#define	ICR9	(IO_ICR[CONSTANT_9].byte)
#define	ICR9_ICR  	(IO_ICR[CONSTANT_9].bit.ICR)
#define	ICR10	(IO_ICR[CONSTANT_10].byte)
#define	ICR10_ICR  	(IO_ICR[CONSTANT_10].bit.ICR)
#define	ICR11	(IO_ICR[CONSTANT_11].byte)
#define	ICR11_ICR  	(IO_ICR[CONSTANT_11].bit.ICR)
#define	ICR12	(IO_ICR[CONSTANT_12].byte)
#define	ICR12_ICR  	(IO_ICR[CONSTANT_12].bit.ICR)
#define	ICR13	(IO_ICR[CONSTANT_13].byte)
#define	ICR13_ICR  	(IO_ICR[CONSTANT_13].bit.ICR)
#define	ICR14	(IO_ICR[CONSTANT_14].byte)
#define	ICR14_ICR  	(IO_ICR[CONSTANT_14].bit.ICR)
#define	ICR15	(IO_ICR[CONSTANT_15].byte)
#define	ICR15_ICR  	(IO_ICR[CONSTANT_15].bit.ICR)
#define	ICR16	(IO_ICR[CONSTANT_16].byte)
#define	ICR16_ICR  	(IO_ICR[CONSTANT_16].bit.ICR)
#define	ICR17	(IO_ICR[CONSTANT_17].byte)
#define	ICR17_ICR  	(IO_ICR[CONSTANT_17].bit.ICR)
#define	ICR18	(IO_ICR[CONSTANT_18].byte)
#define	ICR18_ICR  	(IO_ICR[CONSTANT_18].bit.ICR)
#define	ICR19	(IO_ICR[CONSTANT_19].byte)
#define	ICR19_ICR  	(IO_ICR[CONSTANT_19].bit.ICR)
#define	ICR20	(IO_ICR[CONSTANT_20].byte)
#define	ICR20_ICR  	(IO_ICR[CONSTANT_20].bit.ICR)
#define	ICR21	(IO_ICR[CONSTANT_21].byte)
#define	ICR21_ICR  	(IO_ICR[CONSTANT_21].bit.ICR)
#define	ICR22	(IO_ICR[CONSTANT_22].byte)
#define	ICR22_ICR  	(IO_ICR[CONSTANT_22].bit.ICR)
#define	ICR23	(IO_ICR[CONSTANT_23].byte)
#define	ICR23_ICR  	(IO_ICR[CONSTANT_23].bit.ICR)
#define	ICR24	(IO_ICR[CONSTANT_24].byte)
#define	ICR24_ICR  	(IO_ICR[CONSTANT_24].bit.ICR)
#define	ICR25	(IO_ICR[CONSTANT_25].byte)
#define	ICR25_ICR  	(IO_ICR[CONSTANT_25].bit.ICR)
#define	ICR26	(IO_ICR[CONSTANT_26].byte)
#define	ICR26_ICR  	(IO_ICR[CONSTANT_26].bit.ICR)
#define	ICR27	(IO_ICR[CONSTANT_27].byte)
#define	ICR27_ICR  	(IO_ICR[CONSTANT_27].bit.ICR)
#define	ICR28	(IO_ICR[CONSTANT_28].byte)
#define	ICR28_ICR  	(IO_ICR[CONSTANT_28].bit.ICR)
#define	ICR29	(IO_ICR[CONSTANT_29].byte)
#define	ICR29_ICR  	(IO_ICR[CONSTANT_29].bit.ICR)
#define	ICR30	(IO_ICR[CONSTANT_30].byte)
#define	ICR30_ICR  	(IO_ICR[CONSTANT_30].bit.ICR)
#define	ICR31	(IO_ICR[CONSTANT_31].byte)
#define	ICR31_ICR  	(IO_ICR[CONSTANT_31].bit.ICR)
#define	ICR32	(IO_ICR[CONSTANT_32].byte)
#define	ICR32_ICR  	(IO_ICR[CONSTANT_32].bit.ICR)
#define	ICR33	(IO_ICR[CONSTANT_33].byte)
#define	ICR33_ICR  	(IO_ICR[CONSTANT_33].bit.ICR)
#define	ICR34	(IO_ICR[CONSTANT_34].byte)
#define	ICR34_ICR  	(IO_ICR[CONSTANT_34].bit.ICR)
#define	ICR35	(IO_ICR[CONSTANT_35].byte)
#define	ICR35_ICR  	(IO_ICR[CONSTANT_35].bit.ICR)
#define	ICR36	(IO_ICR[CONSTANT_36].byte)
#define	ICR36_ICR  	(IO_ICR[CONSTANT_36].bit.ICR)
#define	ICR37	(IO_ICR[CONSTANT_37].byte)
#define	ICR37_ICR  	(IO_ICR[CONSTANT_37].bit.ICR)
#define	ICR38	(IO_ICR[CONSTANT_38].byte)
#define	ICR38_ICR  	(IO_ICR[CONSTANT_38].bit.ICR)
#define	ICR39	(IO_ICR[CONSTANT_39].byte)
#define	ICR39_ICR  	(IO_ICR[CONSTANT_39].bit.ICR)
#define	ICR40	(IO_ICR[CONSTANT_40].byte)
#define	ICR40_ICR  	(IO_ICR[CONSTANT_40].bit.ICR)
#define	ICR41	(IO_ICR[CONSTANT_41].byte)
#define	ICR41_ICR  	(IO_ICR[CONSTANT_41].bit.ICR)
#define	ICR42	(IO_ICR[CONSTANT_42].byte)
#define	ICR42_ICR  	(IO_ICR[CONSTANT_42].bit.ICR)
#define	ICR43	(IO_ICR[CONSTANT_43].byte)
#define	ICR43_ICR  	(IO_ICR[CONSTANT_43].bit.ICR)
#define	ICR44	(IO_ICR[CONSTANT_44].byte)
#define	ICR44_ICR  	(IO_ICR[CONSTANT_44].bit.ICR)
#define	ICR45	(IO_ICR[CONSTANT_45].byte)
#define	ICR45_ICR  	(IO_ICR[CONSTANT_45].bit.ICR)
#define	ICR46	(IO_ICR[CONSTANT_46].byte)
#define	ICR46_ICR  	(IO_ICR[CONSTANT_46].bit.ICR)
#define	ICR47	(IO_ICR[CONSTANT_47].byte)
#define	ICR47_ICR  	(IO_ICR[CONSTANT_47].bit.ICR)
#define	ICR48	(IO_ICR[CONSTANT_48].byte)
#define	ICR48_ICR  	(IO_ICR[CONSTANT_48].bit.ICR)
#define	ICR49	(IO_ICR[CONSTANT_49].byte)
#define	ICR49_ICR  	(IO_ICR[CONSTANT_49].bit.ICR)
#define	ICR50	(IO_ICR[CONSTANT_50].byte)
#define	ICR50_ICR  	(IO_ICR[CONSTANT_50].bit.ICR)
#define	ICR51	(IO_ICR[CONSTANT_51].byte)
#define	ICR51_ICR  	(IO_ICR[CONSTANT_51].bit.ICR)
#define	ICR52	(IO_ICR[CONSTANT_52].byte)
#define	ICR52_ICR  	(IO_ICR[CONSTANT_52].bit.ICR)
#define	ICR53	(IO_ICR[CONSTANT_53].byte)
#define	ICR53_ICR  	(IO_ICR[CONSTANT_53].bit.ICR)
#define	ICR54	(IO_ICR[CONSTANT_54].byte)
#define	ICR54_ICR  	(IO_ICR[CONSTANT_54].bit.ICR)
#define	ICR55	(IO_ICR[CONSTANT_55].byte)
#define	ICR55_ICR  	(IO_ICR[CONSTANT_55].bit.ICR)
#define	ICR56	(IO_ICR[CONSTANT_56].byte)
#define	ICR56_ICR  	(IO_ICR[CONSTANT_56].bit.ICR)
#define	ICR57	(IO_ICR[CONSTANT_57].byte)
#define	ICR57_ICR  	(IO_ICR[CONSTANT_57].bit.ICR)
#define	ICR58	(IO_ICR[CONSTANT_58].byte)
#define	ICR58_ICR  	(IO_ICR[CONSTANT_58].bit.ICR)
#define	ICR59	(IO_ICR[CONSTANT_59].byte)
#define	ICR59_ICR  	(IO_ICR[CONSTANT_59].bit.ICR)
#define	ICR60	(IO_ICR[CONSTANT_60].byte)
#define	ICR60_ICR  	(IO_ICR[CONSTANT_60].bit.ICR)
#define	ICR61	(IO_ICR[CONSTANT_61].byte)
#define	ICR61_ICR  	(IO_ICR[CONSTANT_61].bit.ICR)
#define	ICR62	(IO_ICR[CONSTANT_62].byte)
#define	ICR62_ICR  	(IO_ICR[CONSTANT_62].bit.ICR)
#define	ICR63	(IO_ICR[CONSTANT_63].byte)
#define	ICR63_ICR  	(IO_ICR[CONSTANT_63].bit.ICR)


#ifdef __IO_DEFINE
#pragma segment     DATA=IO_CLK,attr=IO,locate=0x480
#endif

__IO_EXTENDED	struct {
	union {
		__BYTE	byte;
		struct {
			__BYTE	INIT:1;
			__BYTE	HSTB:1;
			__BYTE	WDOG:1;
			__BYTE	ERST:1;
			__BYTE	SRST:1;
			__BYTE	LINIT:1;
			__BYTE	WT:2;
		} bit;
		struct {
			__BYTE	INIT:1;
			__BYTE	HSTB:1;
			__BYTE	WDOG:1;
			__BYTE	ERST:1;
			__BYTE	SRST:1;
			__BYTE	LINIT:1;
			__BYTE	WT1:1;
			__BYTE	WT0:1;
		} bitc;
	} IO_RSRR;
	union {
		__BYTE	byte;
		struct {
			__BYTE	STOP:1;
			__BYTE	SLEEP:1;
			__BYTE	HIZ:1;
			__BYTE	SRST:1;
			__BYTE	OS:2;
			__BYTE	OSCD2:1;
			__BYTE	OSCD1:1;
		} bit;
		struct {
			__BYTE	STOP:1;
			__BYTE	SLEEP:1;
			__BYTE	HIZ:1;
			__BYTE	SRST:1;
			__BYTE	OS1:1;
			__BYTE	OS0:1;
			__BYTE	OSCD2:1;
			__BYTE	OSCD1:1;
		} bitc;
	} IO_STCR;
	union {
		__BYTE	byte;
		struct {
			__BYTE	TBIF:1;
			__BYTE	TBIE:1;
			__BYTE	TBC:3;
			__BYTE	RESV23:1;
			__BYTE	SYNCR:1;
			__BYTE	SYNCS:1;
		} bit;
		struct {
			__BYTE	TBIF:1;
			__BYTE	TBIE:1;
			__BYTE	TBC2:1;
			__BYTE	TBC1:1;
			__BYTE	TBC0:1;
			__BYTE	RESV25:1;
			__BYTE	SYNCR:1;
			__BYTE	SYNCS:1;
		} bitc;
	} IO_TBCR;
	__BYTE	IO_CTBR;
	union {
		__BYTE	byte;
		struct {
			__BYTE	RESV40:1;
			__BYTE	RESV41:1;
			__BYTE	RESV42:1;
			__BYTE	RESV43:1;
			__BYTE	SCKEN:1;
			__BYTE	PLL1EN:1;
			__BYTE	CLKS:2;
		} bit;
		struct {
			__BYTE	RESV40:1;
			__BYTE	RESV41:1;
			__BYTE	RESV42:1;
			__BYTE	RESV43:1;
			__BYTE	SCKEN:1;
			__BYTE	PLL1EN:1;
			__BYTE	CLKS1:1;
			__BYTE	CLKS0:1;
		} bitc;
	} IO_CLKR;
	__BYTE	IO_WPR;
	union {
		__BYTE	byte;
		struct {
			__BYTE	B:4;
			__BYTE	P:4;
		} bit;
		struct {
			__BYTE	B3:1;
			__BYTE	B2:1;
			__BYTE	B1:1;
			__BYTE	B0:1;
			__BYTE	P3:1;
			__BYTE	P2:1;
			__BYTE	P1:1;
			__BYTE	P0:1;
		} bitc;
	} IO_DIVR0;
	union {
		__BYTE	byte;
		struct {
			__BYTE	T:4;
			__BYTE	RESV71:1;
			__BYTE	RESV72:1;
			__BYTE	RESV73:1;
			__BYTE	RESV74:1;
		} bit;
		struct {
			__BYTE	T3:1;
			__BYTE	T2:1;
			__BYTE	T1:1;
			__BYTE	T0:1;
			__BYTE	RESV74:1;
			__BYTE	RESV75:1;
			__BYTE	RESV76:1;
			__BYTE	RESV77:1;
		} bitc;
	} IO_DIVR1;
} IO_CLK;

#define	CLK_RSRR			(IO_CLK.IO_RSRR.byte)
#define	CLK_RSRR_INIT    	(IO_CLK.IO_RSRR.bit.INIT)
#define	CLK_RSRR_HSTB    	(IO_CLK.IO_RSRR.bit.HSTB)
#define	CLK_RSRR_WDOG    	(IO_CLK.IO_RSRR.bit.WDOG)
#define	CLK_RSRR_ERST    	(IO_CLK.IO_RSRR.bit.ERST)
#define	CLK_RSRR_SRST    	(IO_CLK.IO_RSRR.bit.SRST)
#define	CLK_RSRR_LINIT    	(IO_CLK.IO_RSRR.bit.LINIT)
#define	CLK_RSRR_WT    	(IO_CLK.IO_RSRR.bit.WT)
#define	CLK_RSRR_WT0    	(IO_CLK.IO_RSRR.bitc.WT0)
#define	CLK_RSRR_WT1    	(IO_CLK.IO_RSRR.bitc.WT1)
#define	CLK_STCR			(IO_CLK.IO_STCR.byte)
#define	CLK_STCR_STOP    	(IO_CLK.IO_STCR.bit.STOP)
#define	CLK_STCR_SLEEP    	(IO_CLK.IO_STCR.bit.SLEEP)
#define	CLK_STCR_HIZ    	(IO_CLK.IO_STCR.bit.HIZ)
#define	CLK_STCR_SRST    	(IO_CLK.IO_STCR.bit.SRST)
#define	CLK_STCR_OS    	(IO_CLK.IO_STCR.bit.OS)
#define	CLK_STCR_OS0    	(IO_CLK.IO_STCR.bitc.OS0)
#define	CLK_STCR_OS1    	(IO_CLK.IO_STCR.bitc.OS1)
#define	CLK_STCR_OSCD2    	(IO_CLK.IO_STCR.bit.OSCD2)
#define	CLK_STCR_OSCD1    	(IO_CLK.IO_STCR.bit.OSCD1)
#define	CLK_TBCR			(IO_CLK.IO_TBCR.byte)
#define	CLK_TBCR_TBIF    	(IO_CLK.IO_TBCR.bit.TBIF)
#define	CLK_TBCR_TBIE    	(IO_CLK.IO_TBCR.bit.TBIE)
#define	CLK_TBCR_TBC    	(IO_CLK.IO_TBCR.bit.TBC)
#define	CLK_TBCR_TBC0    	(IO_CLK.IO_TBCR.bitc.TBC0)
#define	CLK_TBCR_TBC1    	(IO_CLK.IO_TBCR.bitc.TBC1)
#define	CLK_TBCR_TBC2    	(IO_CLK.IO_TBCR.bitc.TBC2)
#define	CLK_TBCR_SYNCR    	(IO_CLK.IO_TBCR.bit.SYNCR)
#define	CLK_TBCR_SYNCS    	(IO_CLK.IO_TBCR.bit.SYNCS)
#define	CLK_CTBR	(IO_CLK.IO_CTBR)
#define	CLK_CLKR			(IO_CLK.IO_CLKR.byte)
#define	CLK_CLKR_SCKEN    	(IO_CLK.IO_CLKR.bit.SCKEN)
#define	CLK_CLKR_PLL1EN    	(IO_CLK.IO_CLKR.bit.PLL1EN)
#define	CLK_CLKR_CLKS    	(IO_CLK.IO_CLKR.bit.CLKS)
#define	CLK_CLKR_CLKS0    	(IO_CLK.IO_CLKR.bitc.CLKS0)
#define	CLK_CLKR_CLKS1    	(IO_CLK.IO_CLKR.bitc.CLKS1)
#define	CLK_WPR	(IO_CLK.IO_WPR)
#define	CLK_DIVR0			(IO_CLK.IO_DIVR0.byte)
#define	CLK_DIVR0_B    	(IO_CLK.IO_DIVR0.bit.B)
#define	CLK_DIVR0_B0    	(IO_CLK.IO_DIVR0.bitc.B0)
#define	CLK_DIVR0_B1    	(IO_CLK.IO_DIVR0.bitc.B1)
#define	CLK_DIVR0_B2    	(IO_CLK.IO_DIVR0.bitc.B2)
#define	CLK_DIVR0_B3    	(IO_CLK.IO_DIVR0.bitc.B3)
#define	CLK_DIVR0_P    	(IO_CLK.IO_DIVR0.bit.P)
#define	CLK_DIVR0_P0    	(IO_CLK.IO_DIVR0.bitc.P0)
#define	CLK_DIVR0_P1    	(IO_CLK.IO_DIVR0.bitc.P1)
#define	CLK_DIVR0_P2    	(IO_CLK.IO_DIVR0.bitc.P2)
#define	CLK_DIVR0_P3    	(IO_CLK.IO_DIVR0.bitc.P3)
#define	CLK_DIVR1			(IO_CLK.IO_DIVR1.byte)
#define	CLK_DIVR1_T    	(IO_CLK.IO_DIVR1.bit.T)
#define	CLK_DIVR1_T0    	(IO_CLK.IO_DIVR1.bitc.T0)
#define	CLK_DIVR1_T1    	(IO_CLK.IO_DIVR1.bitc.T1)
#define	CLK_DIVR1_T2    	(IO_CLK.IO_DIVR1.bitc.T2)
#define	CLK_DIVR1_T3    	(IO_CLK.IO_DIVR1.bitc.T3)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_PLL,attr=IO,locate=0x48C
#endif

__IO_EXTENDED	struct {
	union {
		__BYTE	byte;
		struct {
			__BYTE	RESV00:1;
			__BYTE	RESV01:1;
			__BYTE	RESV02:1;
			__BYTE	RESV03:1;
			__BYTE	DVM:4;
		} bit;
		struct {
			__BYTE	RESV00:1;
			__BYTE	RESV01:1;
			__BYTE	RESV02:1;
			__BYTE	RESV03:1;
			__BYTE	DVM3:1;
			__BYTE	DVM2:1;
			__BYTE	DVM1:1;
			__BYTE	DVM0:1;
		} bitc;
	} IO_DIVM;
	union {
		__BYTE	byte;
		struct {
			__BYTE	RESV10:1;
			__BYTE	RESV11:1;
			__BYTE	DVN:6;
		} bit;
		struct {
			__BYTE	RESV10:1;
			__BYTE	RESV11:1;
			__BYTE	DVN5:1;
			__BYTE	DVN4:1;
			__BYTE	DVN3:1;
			__BYTE	DVN2:1;
			__BYTE	DVN1:1;
			__BYTE	DVN0:1;
		} bitc;
	} IO_DIVN;
	union {
		__BYTE	byte;
		struct {
			__BYTE	RESV20:1;
			__BYTE	RESV21:1;
			__BYTE	RESV22:1;
			__BYTE	RESV23:1;
			__BYTE	DVG:4;
		} bit;
		struct {
			__BYTE	RESV20:1;
			__BYTE	RESV21:1;
			__BYTE	RESV22:1;
			__BYTE	RESV23:1;
			__BYTE	DVG3:1;
			__BYTE	DVG2:1;
			__BYTE	DVG1:1;
			__BYTE	DVG0:1;
		} bitc;
	} IO_DIVG;
	union {
		__BYTE	byte;
		struct {
			__BYTE	MLG:8;
		} bit;
		struct {
			__BYTE	MLG7:1;
			__BYTE	MLG6:1;
			__BYTE	MLG5:1;
			__BYTE	MLG4:1;
			__BYTE	MLG3:1;
			__BYTE	MLG2:1;
			__BYTE	MLG1:1;
			__BYTE	MLG0:1;
		} bitc;
	} IO_MULG;
	union {
		__BYTE	byte;
		struct {
			__BYTE	RESV40:1;
			__BYTE	RESV41:1;
			__BYTE	RESV42:1;
			__BYTE	RESV43:1;
			__BYTE	IEDN:1;
			__BYTE	GRDN:1;
			__BYTE	IEUP:1;
			__BYTE	GRUP:1;
		} bit;
		struct {
			__BYTE	RESV40:1;
			__BYTE	RESV41:1;
			__BYTE	RESV42:1;
			__BYTE	RESV43:1;
			__BYTE	IEDN:1;
			__BYTE	GRDN:1;
			__BYTE	IEUP:1;
			__BYTE	GRUP:1;
		} bitc;
	} IO_CTRL;
	__BYTE	IO_RESV1;
	__BYTE	IO_RESV2;
	__BYTE	IO_RESV3;
} IO_PLL;

#define	PLL_DIVM			(IO_PLL.IO_DIVM.byte)
#define	PLL_DIVM_DVM    	(IO_PLL.IO_DIVM.bit.DVM)
#define	PLL_DIVM_DVM0    	(IO_PLL.IO_DIVM.bitc.DVM0)
#define	PLL_DIVM_DVM1    	(IO_PLL.IO_DIVM.bitc.DVM1)
#define	PLL_DIVM_DVM2    	(IO_PLL.IO_DIVM.bitc.DVM2)
#define	PLL_DIVM_DVM3    	(IO_PLL.IO_DIVM.bitc.DVM3)
#define	PLL_DIVN			(IO_PLL.IO_DIVN.byte)
#define	PLL_DIVN_DVN    	(IO_PLL.IO_DIVN.bit.DVN)
#define	PLL_DIVN_DVN0    	(IO_PLL.IO_DIVN.bitc.DVN0)
#define	PLL_DIVN_DVN1    	(IO_PLL.IO_DIVN.bitc.DVN1)
#define	PLL_DIVN_DVN2    	(IO_PLL.IO_DIVN.bitc.DVN2)
#define	PLL_DIVN_DVN3    	(IO_PLL.IO_DIVN.bitc.DVN3)
#define	PLL_DIVN_DVN4    	(IO_PLL.IO_DIVN.bitc.DVN4)
#define	PLL_DIVN_DVN5    	(IO_PLL.IO_DIVN.bitc.DVN5)
#define	PLL_DIVG			(IO_PLL.IO_DIVG.byte)
#define	PLL_DIVG_DVG    	(IO_PLL.IO_DIVG.bit.DVG)
#define	PLL_DIVG_DVG0    	(IO_PLL.IO_DIVG.bitc.DVG0)
#define	PLL_DIVG_DVG1    	(IO_PLL.IO_DIVG.bitc.DVG1)
#define	PLL_DIVG_DVG2    	(IO_PLL.IO_DIVG.bitc.DVG2)
#define	PLL_DIVG_DVG3    	(IO_PLL.IO_DIVG.bitc.DVG3)
#define	PLL_MULG			(IO_PLL.IO_MULG.byte)
#define	PLL_MULG_MLG    	(IO_PLL.IO_MULG.bit.MLG)
#define	PLL_MULG_MLG0    	(IO_PLL.IO_MULG.bitc.MLG0)
#define	PLL_MULG_MLG1    	(IO_PLL.IO_MULG.bitc.MLG1)
#define	PLL_MULG_MLG2    	(IO_PLL.IO_MULG.bitc.MLG2)
#define	PLL_MULG_MLG3    	(IO_PLL.IO_MULG.bitc.MLG3)
#define	PLL_MULG_MLG4    	(IO_PLL.IO_MULG.bitc.MLG4)
#define	PLL_MULG_MLG5    	(IO_PLL.IO_MULG.bitc.MLG5)
#define	PLL_MULG_MLG6    	(IO_PLL.IO_MULG.bitc.MLG6)
#define	PLL_MULG_MLG7    	(IO_PLL.IO_MULG.bitc.MLG7)
#define	PLL_CTRL			(IO_PLL.IO_CTRL.byte)
#define	PLL_CTRL_IEDN    	(IO_PLL.IO_CTRL.bit.IEDN)
#define	PLL_CTRL_GRDN    	(IO_PLL.IO_CTRL.bit.GRDN)
#define	PLL_CTRL_IEUP    	(IO_PLL.IO_CTRL.bit.IEUP)
#define	PLL_CTRL_GRUP    	(IO_PLL.IO_CTRL.bit.GRUP)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_OSCC1,attr=IO,locate=0x494
#endif

__IO_EXTENDED	__BYTE	IO_OSCC1;
#define	_oscc1		(IO_OSCC1)
#define	OSCC1	(_oscc1)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_OSCS1,attr=IO,locate=0x495
#endif

__IO_EXTENDED	__BYTE	IO_OSCS1;
#define	_oscs1		(IO_OSCS1)
#define	OSCS1	(_oscs1)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_OSCC2,attr=IO,locate=0x496
#endif

__IO_EXTENDED	__BYTE	IO_OSCC2;
#define	_oscc2		(IO_OSCC2)
#define	OSCC2	(_oscc2)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_OSCS2,attr=IO,locate=0x497
#endif

__IO_EXTENDED	__BYTE	IO_OSCS2;
#define	_oscs2		(IO_OSCS2)
#define	OSCS2	(_oscs2)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_PORTEN,attr=IO,locate=0x498
#endif

typedef union {
	__BYTE	byte;
	struct {
			__BYTE	RESV0:1;
			__BYTE	RESV1:1;
			__BYTE	RESV2:1;
			__BYTE	RESV3:1;
			__BYTE	RESV4:1;
			__BYTE	RESV5:1;
			__BYTE	CPORTEN:1;
			__BYTE	GPORTEN:1;
	} bit;
	struct {
			__BYTE	RESV0:1;
			__BYTE	RESV1:1;
			__BYTE	RESV2:1;
			__BYTE	RESV3:1;
			__BYTE	RESV4:1;
			__BYTE	RESV5:1;
			__BYTE	CPORTEN:1;
			__BYTE	GPORTEN:1;
	} bitc;
} PORTENSTR;

__IO_EXTENDED	  PORTENSTR	IO_PORTEN;
#define	_porten		(IO_PORTEN)
#define	PORTEN		(IO_PORTEN.byte)
#define	PORTEN_CPORTEN  	(IO_PORTEN.bit.CPORTEN)
#define	PORTEN_GPORTEN  	(IO_PORTEN.bit.GPORTEN)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_WT,attr=IO,locate=0x4A0
#endif

__IO_EXTENDED	struct {
	__BYTE	IO_RESV1;
	union {
		__BYTE	byte;
		struct {
			__BYTE	RESV10:1;
			__BYTE	RESV11:1;
			__BYTE	RESV12:1;
			__BYTE	RESV13:1;
			__BYTE	RESV14:1;
			__BYTE	RESV15:1;
			__BYTE	INTE4:1;
			__BYTE	INT4:1;
		} bit;
		struct {
			__BYTE	RESV10:1;
			__BYTE	RESV11:1;
			__BYTE	RESV12:1;
			__BYTE	RESV13:1;
			__BYTE	RESV14:1;
			__BYTE	RESV15:1;
			__BYTE	INTE4:1;
			__BYTE	INT4:1;
		} bitc;
	} IO_WTCER;
	union {
		__BYTE	byte;
		struct {
			__BYTE	INTE3:1;
			__BYTE	INT3:1;
			__BYTE	INTE2:1;
			__BYTE	INT2:1;
			__BYTE	INTE1:1;
			__BYTE	INT1:1;
			__BYTE	INTE0:1;
			__BYTE	INT0:1;
		} bit;
		struct {
			__BYTE	INTE3:1;
			__BYTE	INT3:1;
			__BYTE	INTE2:1;
			__BYTE	INT2:1;
			__BYTE	INTE1:1;
			__BYTE	INT1:1;
			__BYTE	INTE0:1;
			__BYTE	INT0:1;
		} bitc;
	} IO_WTCRH;
	union {
		__BYTE	byte;
		struct {
			__BYTE	RESV30:1;
			__BYTE	RESV31:1;
			__BYTE	RESV32:1;
			__BYTE	RESV33:1;
			__BYTE	RUN:1;
			__BYTE	UPDT:1;
			__BYTE	RESV36:1;
			__BYTE	ST:1;
		} bit;
		struct {
			__BYTE	RESV30:1;
			__BYTE	RESV31:1;
			__BYTE	RESV32:1;
			__BYTE	RESV33:1;
			__BYTE	RUN:1;
			__BYTE	UPDT:1;
			__BYTE	RESV36:1;
			__BYTE	ST:1;
		} bitc;
	} IO_WTCRL;
	__BYTE	IO_RESV2;
	__BYTE	IO_WTBRH;
	__BYTE	IO_WTBRM;
	__BYTE	IO_WTBRL;
	__BYTE	IO_WTHR;
	__BYTE	IO_WTMR;
	__BYTE	IO_WTSR;
	__BYTE	IO_RESV3;
} IO_WT;

#define	WT_WTCER			(IO_WT.IO_WTCER.byte)
#define	WT_WTCER_INTE4    	(IO_WT.IO_WTCER.bit.INTE4)
#define	WT_WTCER_INT4    	(IO_WT.IO_WTCER.bit.INT4)
#define	WT_WTCRH			(IO_WT.IO_WTCRH.byte)
#define	WT_WTCRH_INTE3    	(IO_WT.IO_WTCRH.bit.INTE3)
#define	WT_WTCRH_INT3    	(IO_WT.IO_WTCRH.bit.INT3)
#define	WT_WTCRH_INTE2    	(IO_WT.IO_WTCRH.bit.INTE2)
#define	WT_WTCRH_INT2    	(IO_WT.IO_WTCRH.bit.INT2)
#define	WT_WTCRH_INTE1    	(IO_WT.IO_WTCRH.bit.INTE1)
#define	WT_WTCRH_INT1    	(IO_WT.IO_WTCRH.bit.INT1)
#define	WT_WTCRH_INTE0    	(IO_WT.IO_WTCRH.bit.INTE0)
#define	WT_WTCRH_INT0    	(IO_WT.IO_WTCRH.bit.INT0)
#define	WT_WTCRL			(IO_WT.IO_WTCRL.byte)
#define	WT_WTCRL_RUN    	(IO_WT.IO_WTCRL.bit.RUN)
#define	WT_WTCRL_UPDT    	(IO_WT.IO_WTCRL.bit.UPDT)
#define	WT_WTCRL_ST    	(IO_WT.IO_WTCRL.bit.ST)
#define	WT_WTBRH	(IO_WT.IO_WTBRH)
#define	WT_WTBRM	(IO_WT.IO_WTBRM)
#define	WT_WTBRL	(IO_WT.IO_WTBRL)
#define	WT_WTHR	(IO_WT.IO_WTHR)
#define	WT_WTMR	(IO_WT.IO_WTMR)
#define	WT_WTSR	(IO_WT.IO_WTSR)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_CSS,attr=IO,locate=0x4AC
#endif

__IO_EXTENDED	struct {
	__BYTE	IO_CSVTR;
	union {
		__BYTE	byte;
		struct {
			__BYTE	SCKS:1;
			__BYTE	MM:1;
			__BYTE	SM:1;
			__BYTE	RCE:1;
			__BYTE	MSVE:1;
			__BYTE	SSVE:1;
			__BYTE	SRST:1;
			__BYTE	OUTE:1;
		} bit;
		struct {
			__BYTE	SCKS:1;
			__BYTE	MM:1;
			__BYTE	SM:1;
			__BYTE	RCE:1;
			__BYTE	MSVE:1;
			__BYTE	SSVE:1;
			__BYTE	SRST:1;
			__BYTE	OUTE:1;
		} bitc;
	} IO_CSVCR;
	union {
		__BYTE	byte;
		struct {
			__BYTE	EDSUEN:1;
			__BYTE	PLLLOCK:1;
			__BYTE	RCSEL:1;
			__BYTE	MONCKI:1;
			__BYTE	CSC:4;
		} bit;
		struct {
			__BYTE	EDSUEN:1;
			__BYTE	PLLLOCK:1;
			__BYTE	RCSEL:1;
			__BYTE	MONCKI:1;
			__BYTE	CSC3:1;
			__BYTE	CSC2:1;
			__BYTE	CSC1:1;
			__BYTE	CSC0:1;
		} bitc;
	} IO_CSCFG;
	union {
		__BYTE	byte;
		struct {
			__BYTE	CMPRE:4;
			__BYTE	CMSEL:4;
		} bit;
		struct {
			__BYTE	CMPRE3:1;
			__BYTE	CMPRE2:1;
			__BYTE	CMPRE1:1;
			__BYTE	CMPRE0:1;
			__BYTE	CMSEL3:1;
			__BYTE	CMSEL2:1;
			__BYTE	CMSEL1:1;
			__BYTE	CMSEL0:1;
		} bitc;
	} IO_CMCFG;
} IO_CSS;

#define	CSS_CSVTR	(IO_CSS.IO_CSVTR)
#define	CSS_CSVCR			(IO_CSS.IO_CSVCR.byte)
#define	CSS_CSVCR_SCKS    	(IO_CSS.IO_CSVCR.bit.SCKS)
#define	CSS_CSVCR_MM    	(IO_CSS.IO_CSVCR.bit.MM)
#define	CSS_CSVCR_SM    	(IO_CSS.IO_CSVCR.bit.SM)
#define	CSS_CSVCR_RCE    	(IO_CSS.IO_CSVCR.bit.RCE)
#define	CSS_CSVCR_MSVE    	(IO_CSS.IO_CSVCR.bit.MSVE)
#define	CSS_CSVCR_SSVE    	(IO_CSS.IO_CSVCR.bit.SSVE)
#define	CSS_CSVCR_SRST    	(IO_CSS.IO_CSVCR.bit.SRST)
#define	CSS_CSVCR_OUTE    	(IO_CSS.IO_CSVCR.bit.OUTE)
#define	CSS_CSCFG			(IO_CSS.IO_CSCFG.byte)
#define	CSS_CSCFG_EDSUEN    	(IO_CSS.IO_CSCFG.bit.EDSUEN)
#define	CSS_CSCFG_PLLLOCK    	(IO_CSS.IO_CSCFG.bit.PLLLOCK)
#define	CSS_CSCFG_RCSEL    	(IO_CSS.IO_CSCFG.bit.RCSEL)
#define	CSS_CSCFG_MONCKI    	(IO_CSS.IO_CSCFG.bit.MONCKI)
#define	CSS_CSCFG_CSC    	(IO_CSS.IO_CSCFG.bit.CSC)
#define	CSS_CSCFG_CSC0    	(IO_CSS.IO_CSCFG.bitc.CSC0)
#define	CSS_CSCFG_CSC1    	(IO_CSS.IO_CSCFG.bitc.CSC1)
#define	CSS_CSCFG_CSC2    	(IO_CSS.IO_CSCFG.bitc.CSC2)
#define	CSS_CSCFG_CSC3    	(IO_CSS.IO_CSCFG.bitc.CSC3)
#define	CSS_CMCFG			(IO_CSS.IO_CMCFG.byte)
#define	CSS_CMCFG_CMPRE    	(IO_CSS.IO_CMCFG.bit.CMPRE)
#define	CSS_CMCFG_CMPRE0    	(IO_CSS.IO_CMCFG.bitc.CMPRE0)
#define	CSS_CMCFG_CMPRE1    	(IO_CSS.IO_CMCFG.bitc.CMPRE1)
#define	CSS_CMCFG_CMPRE2    	(IO_CSS.IO_CMCFG.bitc.CMPRE2)
#define	CSS_CMCFG_CMPRE3    	(IO_CSS.IO_CMCFG.bitc.CMPRE3)
#define	CSS_CMCFG_CMSEL    	(IO_CSS.IO_CMCFG.bit.CMSEL)
#define	CSS_CMCFG_CMSEL0    	(IO_CSS.IO_CMCFG.bitc.CMSEL0)
#define	CSS_CMCFG_CMSEL1    	(IO_CSS.IO_CMCFG.bitc.CMSEL1)
#define	CSS_CMCFG_CMSEL2    	(IO_CSS.IO_CMCFG.bitc.CMSEL2)
#define	CSS_CMCFG_CMSEL3    	(IO_CSS.IO_CMCFG.bitc.CMSEL3)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_CUSO,attr=IO,locate=0x4B0
#endif

__IO_EXTENDED	struct {
	union {
		__HWORD	hword;
		struct {
			__BYTE	RESV00:1;
			__BYTE	RESV01:1;
			__BYTE	RESV02:1;
			__BYTE	RESV03:1;
			__BYTE	RESV04:1;
			__BYTE	RESV05:1;
			__BYTE	RESV06:1;
			__BYTE	RESV07:1;
			__BYTE	RESV08:1;
			__BYTE	RESV09:1;
			__BYTE	RESV010:1;
			__BYTE	STRT:1;
			__BYTE	RESV012:1;
			__BYTE	RESV013:1;
			__BYTE	INT:1;
			__BYTE	INTEN:1;
		} bit;
		struct {
			__BYTE	RESV00:1;
			__BYTE	RESV01:1;
			__BYTE	RESV02:1;
			__BYTE	RESV03:1;
			__BYTE	RESV04:1;
			__BYTE	RESV05:1;
			__BYTE	RESV06:1;
			__BYTE	RESV07:1;
			__BYTE	RESV08:1;
			__BYTE	RESV09:1;
			__BYTE	RESV010:1;
			__BYTE	STRT:1;
			__BYTE	RESV012:1;
			__BYTE	RESV013:1;
			__BYTE	INT:1;
			__BYTE	INTEN:1;
		} bitc;
	} IO_CUCR;
	__HWORD	IO_CUTD;
	const __HWORD	IO_CUTR1;
	const __HWORD	IO_CUTR2;
} IO_CUSO;

#define	CUSO_CUCR			(IO_CUSO.IO_CUCR.hword)
#define	CUSO_CUCR_STRT    	(IO_CUSO.IO_CUCR.bit.STRT)
#define	CUSO_CUCR_INT    	(IO_CUSO.IO_CUCR.bit.INT)
#define	CUSO_CUCR_INTEN    	(IO_CUSO.IO_CUCR.bit.INTEN)
#define	CUSO_CUTD	(IO_CUSO.IO_CUTD)
#define	CUSO_CUTR1	(IO_CUSO.IO_CUTR1)
#define	CUSO_CUTR2	(IO_CUSO.IO_CUTR2)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_CM,attr=IO,locate=0x4B8
#endif

__IO_EXTENDED	struct {
	__HWORD	IO_CMPR;
	__BYTE	IO_RESV1;
	union {
		__BYTE	byte;
		struct {
			__BYTE	RESV30:1;
			__BYTE	RESV31:1;
			__BYTE	RESV32:1;
			__BYTE	RESV33:1;
			__BYTE	FMODRUN:1;
			__BYTE	RESV35:1;
			__BYTE	FMOD:1;
			__BYTE	PDX:1;
		} bit;
		struct {
			__BYTE	RESV30:1;
			__BYTE	RESV31:1;
			__BYTE	RESV32:1;
			__BYTE	RESV33:1;
			__BYTE	FMODRUN:1;
			__BYTE	RESV35:1;
			__BYTE	FMOD:1;
			__BYTE	PDX:1;
		} bitc;
	} IO_CMCR;
	__HWORD	IO_CMT1;
	__HWORD	IO_CMT2;
} IO_CM;

#define	CM_CMPR	(IO_CM.IO_CMPR)
#define	CM_CMCR			(IO_CM.IO_CMCR.byte)
#define	CM_CMCR_FMODRUN    	(IO_CM.IO_CMCR.bit.FMODRUN)
#define	CM_CMCR_FMOD    	(IO_CM.IO_CMCR.bit.FMOD)
#define	CM_CMCR_PDX    	(IO_CM.IO_CMCR.bit.PDX)
#define	CM_CMT1	(IO_CM.IO_CMT1)
#define	CM_CMT2	(IO_CM.IO_CMT2)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_CANPRE,attr=IO,locate=0x4C0
#endif

typedef union {
	__BYTE	byte;
	struct {
			__BYTE	RESV0:1;
			__BYTE	RESV1:1;
			__BYTE	CPCKS1:1;
			__BYTE	CPCKS0:1;
			__BYTE	DVC3:1;
			__BYTE	DVC2:1;
			__BYTE	DVC1:1;
			__BYTE	DVC0:1;
	} bit;
	struct {
			__BYTE	RESV0:1;
			__BYTE	RESV1:1;
			__BYTE	CPCKS1:1;
			__BYTE	CPCKS0:1;
			__BYTE	DVC3:1;
			__BYTE	DVC2:1;
			__BYTE	DVC1:1;
			__BYTE	DVC0:1;
	} bitc;
} CANPRESTR;

__IO_EXTENDED	  CANPRESTR	IO_CANPRE;
#define	_canpre		(IO_CANPRE)
#define	CANPRE		(IO_CANPRE.byte)
#define	CANPRE_CPCKS1  	(IO_CANPRE.bit.CPCKS1)
#define	CANPRE_CPCKS0  	(IO_CANPRE.bit.CPCKS0)
#define	CANPRE_DVC3  	(IO_CANPRE.bit.DVC3)
#define	CANPRE_DVC2  	(IO_CANPRE.bit.DVC2)
#define	CANPRE_DVC1  	(IO_CANPRE.bit.DVC1)
#define	CANPRE_DVC0  	(IO_CANPRE.bit.DVC0)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_CANCKD,attr=IO,locate=0x4C1
#endif

__IO_EXTENDED	__BYTE	IO_CANCKD;
#define	_canckd		(IO_CANCKD)
#define	CANCKD	(_canckd)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_LVD,attr=IO,locate=0x4C4
#endif

__IO_EXTENDED	struct {
	union {
		__BYTE	byte;
		struct {
			__BYTE	LVESEL:4;
			__BYTE	LVISEL:4;
		} bit;
		struct {
			__BYTE	LVESEL3:1;
			__BYTE	LVESEL2:1;
			__BYTE	LVESEL1:1;
			__BYTE	LVESEL0:1;
			__BYTE	LVISEL3:1;
			__BYTE	LVISEL2:1;
			__BYTE	LVISEL1:1;
			__BYTE	LVISEL0:1;
		} bitc;
	} IO_LVSEL;
	union {
		__BYTE	byte;
		struct {
			__BYTE	RESV10:1;
			__BYTE	LVSEL:1;
			__BYTE	LVEPD:1;
			__BYTE	LVIPD:1;
			__BYTE	LVREN:1;
			__BYTE	RESV15:1;
			__BYTE	LVIEN:1;
			__BYTE	LVIRQ:1;
		} bit;
		struct {
			__BYTE	RESV10:1;
			__BYTE	LVSEL:1;
			__BYTE	LVEPD:1;
			__BYTE	LVIPD:1;
			__BYTE	LVREN:1;
			__BYTE	RESV15:1;
			__BYTE	LVIEN:1;
			__BYTE	LVIRQ:1;
		} bitc;
	} IO_LVDET;
	union {
		__BYTE	byte;
		struct {
			__BYTE	RESV20:1;
			__BYTE	RESV21:1;
			__BYTE	RESV22:1;
			__BYTE	RESV23:1;
			__BYTE	RESV24:1;
			__BYTE	RESV25:1;
			__BYTE	ED1:1;
			__BYTE	ED0:1;
		} bit;
		struct {
			__BYTE	RESV20:1;
			__BYTE	RESV21:1;
			__BYTE	RESV22:1;
			__BYTE	RESV23:1;
			__BYTE	RESV24:1;
			__BYTE	RESV25:1;
			__BYTE	ED1:1;
			__BYTE	ED0:1;
		} bitc;
	} IO_HWWDE;
	union {
		__BYTE	byte;
		struct {
			__BYTE	RESV30:1;
			__BYTE	RESV31:1;
			__BYTE	RESV32:1;
			__BYTE	RESV33:1;
			__BYTE	CL:1;
			__BYTE	RESV35:1;
			__BYTE	RESV36:1;
			__BYTE	CPUF:1;
		} bit;
		struct {
			__BYTE	RESV30:1;
			__BYTE	RESV31:1;
			__BYTE	RESV32:1;
			__BYTE	RESV33:1;
			__BYTE	CL:1;
			__BYTE	RESV35:1;
			__BYTE	RESV36:1;
			__BYTE	CPUF:1;
		} bitc;
	} IO_HWWD;
} IO_LVD;

#define	LVD_LVSEL			(IO_LVD.IO_LVSEL.byte)
#define	LVD_LVSEL_LVESEL    	(IO_LVD.IO_LVSEL.bit.LVESEL)
#define	LVD_LVSEL_LVESEL0    	(IO_LVD.IO_LVSEL.bitc.LVESEL0)
#define	LVD_LVSEL_LVESEL1    	(IO_LVD.IO_LVSEL.bitc.LVESEL1)
#define	LVD_LVSEL_LVESEL2    	(IO_LVD.IO_LVSEL.bitc.LVESEL2)
#define	LVD_LVSEL_LVESEL3    	(IO_LVD.IO_LVSEL.bitc.LVESEL3)
#define	LVD_LVSEL_LVISEL    	(IO_LVD.IO_LVSEL.bit.LVISEL)
#define	LVD_LVSEL_LVISEL0    	(IO_LVD.IO_LVSEL.bitc.LVISEL0)
#define	LVD_LVSEL_LVISEL1    	(IO_LVD.IO_LVSEL.bitc.LVISEL1)
#define	LVD_LVSEL_LVISEL2    	(IO_LVD.IO_LVSEL.bitc.LVISEL2)
#define	LVD_LVSEL_LVISEL3    	(IO_LVD.IO_LVSEL.bitc.LVISEL3)
#define	LVD_LVDET			(IO_LVD.IO_LVDET.byte)
#define	LVD_LVDET_LVSEL    	(IO_LVD.IO_LVDET.bit.LVSEL)
#define	LVD_LVDET_LVEPD    	(IO_LVD.IO_LVDET.bit.LVEPD)
#define	LVD_LVDET_LVIPD    	(IO_LVD.IO_LVDET.bit.LVIPD)
#define	LVD_LVDET_LVREN    	(IO_LVD.IO_LVDET.bit.LVREN)
#define	LVD_LVDET_LVIEN    	(IO_LVD.IO_LVDET.bit.LVIEN)
#define	LVD_LVDET_LVIRQ    	(IO_LVD.IO_LVDET.bit.LVIRQ)
#define	LVD_HWWDE			(IO_LVD.IO_HWWDE.byte)
#define	LVD_HWWDE_ED1    	(IO_LVD.IO_HWWDE.bit.ED1)
#define	LVD_HWWDE_ED0    	(IO_LVD.IO_HWWDE.bit.ED0)
#define	LVD_HWWD			(IO_LVD.IO_HWWD.byte)
#define	LVD_HWWD_CL    	(IO_LVD.IO_HWWD.bit.CL)
#define	LVD_HWWD_CPUF    	(IO_LVD.IO_HWWD.bit.CPUF)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_OST,attr=IO,locate=0x4C8
#endif

__IO_EXTENDED	struct {
	union {
		__BYTE	byte;
		struct {
			__BYTE	WIF:1;
			__BYTE	WIE:1;
			__BYTE	WEN:1;
			__BYTE	RESV03:1;
			__BYTE	RESV04:1;
			__BYTE	WS:2;
			__BYTE	WCL:1;
		} bit;
		struct {
			__BYTE	WIF:1;
			__BYTE	WIE:1;
			__BYTE	WEN:1;
			__BYTE	RESV03:1;
			__BYTE	RESV04:1;
			__BYTE	WS1:1;
			__BYTE	WS0:1;
			__BYTE	WCL:1;
		} bitc;
	} IO_OSCRH;
	__BYTE	IO_RESV1;
	union {
		__BYTE	byte;
		struct {
			__BYTE	WIF:1;
			__BYTE	WIE:1;
			__BYTE	WEN:1;
			__BYTE	RESV23:1;
			__BYTE	RESV24:1;
			__BYTE	WS:2;
			__BYTE	WCL:1;
		} bit;
		struct {
			__BYTE	WIF:1;
			__BYTE	WIE:1;
			__BYTE	WEN:1;
			__BYTE	RESV23:1;
			__BYTE	RESV24:1;
			__BYTE	WS1:1;
			__BYTE	WS0:1;
			__BYTE	WCL:1;
		} bitc;
	} IO_WPCRH;
	__BYTE	IO_RESV2;
} IO_OST;

#define	OST_OSCRH			(IO_OST.IO_OSCRH.byte)
#define	OST_OSCRH_WIF    	(IO_OST.IO_OSCRH.bit.WIF)
#define	OST_OSCRH_WIE    	(IO_OST.IO_OSCRH.bit.WIE)
#define	OST_OSCRH_WEN    	(IO_OST.IO_OSCRH.bit.WEN)
#define	OST_OSCRH_WS    	(IO_OST.IO_OSCRH.bit.WS)
#define	OST_OSCRH_WS0    	(IO_OST.IO_OSCRH.bitc.WS0)
#define	OST_OSCRH_WS1    	(IO_OST.IO_OSCRH.bitc.WS1)
#define	OST_OSCRH_WCL    	(IO_OST.IO_OSCRH.bit.WCL)
#define	OST_WPCRH			(IO_OST.IO_WPCRH.byte)
#define	OST_WPCRH_WIF    	(IO_OST.IO_WPCRH.bit.WIF)
#define	OST_WPCRH_WIE    	(IO_OST.IO_WPCRH.bit.WIE)
#define	OST_WPCRH_WEN    	(IO_OST.IO_WPCRH.bit.WEN)
#define	OST_WPCRH_WS    	(IO_OST.IO_WPCRH.bit.WS)
#define	OST_WPCRH_WS0    	(IO_OST.IO_WPCRH.bitc.WS0)
#define	OST_WPCRH_WS1    	(IO_OST.IO_WPCRH.bitc.WS1)
#define	OST_WPCRH_WCL    	(IO_OST.IO_WPCRH.bit.WCL)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_OSC,attr=IO,locate=0x4CC
#endif

__IO_EXTENDED	struct {
	union {
		__BYTE	byte;
		struct {
			__BYTE	RESV00:1;
			__BYTE	RESV01:1;
			__BYTE	RESV02:1;
			__BYTE	RESV03:1;
			__BYTE	RESV04:1;
			__BYTE	RESV05:1;
			__BYTE	RESV06:1;
			__BYTE	OSCDS1:1;
		} bit;
		struct {
			__BYTE	RESV00:1;
			__BYTE	RESV01:1;
			__BYTE	RESV02:1;
			__BYTE	RESV03:1;
			__BYTE	RESV04:1;
			__BYTE	RESV05:1;
			__BYTE	RESV06:1;
			__BYTE	OSCDS1:1;
		} bitc;
	} IO_OSCCR;
	__BYTE	IO_RESV1;
	__BYTE	IO_RESV2;
	__BYTE	IO_RESV3;
} IO_OSC;

#define	OSC_OSCCR			(IO_OSC.IO_OSCCR.byte)
#define	OSC_OSCCR_OSCDS1    	(IO_OSC.IO_OSCCR.bit.OSCDS1)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_PLL2,attr=IO,locate=0x4DC
#endif

__IO_EXTENDED	struct {
	union {
		__BYTE	byte;
		struct {
			__BYTE	RESV00:1;
			__BYTE	RESV01:1;
			__BYTE	RESV02:1;
			__BYTE	RESV03:1;
			__BYTE	DVM:4;
		} bit;
		struct {
			__BYTE	RESV00:1;
			__BYTE	RESV01:1;
			__BYTE	RESV02:1;
			__BYTE	RESV03:1;
			__BYTE	DVM3:1;
			__BYTE	DVM2:1;
			__BYTE	DVM1:1;
			__BYTE	DVM0:1;
		} bitc;
	} IO_DIVM;
	union {
		__BYTE	byte;
		struct {
			__BYTE	RESV10:1;
			__BYTE	RESV11:1;
			__BYTE	DVN:6;
		} bit;
		struct {
			__BYTE	RESV10:1;
			__BYTE	RESV11:1;
			__BYTE	DVN5:1;
			__BYTE	DVN4:1;
			__BYTE	DVN3:1;
			__BYTE	DVN2:1;
			__BYTE	DVN1:1;
			__BYTE	DVN0:1;
		} bitc;
	} IO_DIVN;
	union {
		__BYTE	byte;
		struct {
			__BYTE	RESV20:1;
			__BYTE	RESV21:1;
			__BYTE	RESV22:1;
			__BYTE	RESV23:1;
			__BYTE	DVG:4;
		} bit;
		struct {
			__BYTE	RESV20:1;
			__BYTE	RESV21:1;
			__BYTE	RESV22:1;
			__BYTE	RESV23:1;
			__BYTE	DVG3:1;
			__BYTE	DVG2:1;
			__BYTE	DVG1:1;
			__BYTE	DVG0:1;
		} bitc;
	} IO_DIVG;
	union {
		__BYTE	byte;
		struct {
			__BYTE	MLG:8;
		} bit;
		struct {
			__BYTE	MLG7:1;
			__BYTE	MLG6:1;
			__BYTE	MLG5:1;
			__BYTE	MLG4:1;
			__BYTE	MLG3:1;
			__BYTE	MLG2:1;
			__BYTE	MLG1:1;
			__BYTE	MLG0:1;
		} bitc;
	} IO_MULG;
	union {
		__BYTE	byte;
		struct {
			__BYTE	RESV40:1;
			__BYTE	RESV41:1;
			__BYTE	RESV42:1;
			__BYTE	RESV43:1;
			__BYTE	IEDN:1;
			__BYTE	GRDN:1;
			__BYTE	IEUP:1;
			__BYTE	GRUP:1;
		} bit;
		struct {
			__BYTE	RESV40:1;
			__BYTE	RESV41:1;
			__BYTE	RESV42:1;
			__BYTE	RESV43:1;
			__BYTE	IEDN:1;
			__BYTE	GRDN:1;
			__BYTE	IEUP:1;
			__BYTE	GRUP:1;
		} bitc;
	} IO_CTRL;
	__BYTE	IO_RESV1;
	union {
		__BYTE	byte;
		struct {
			__BYTE	RESV60:1;
			__BYTE	RESV61:1;
			__BYTE	RESV62:1;
			__BYTE	RESV63:1;
			__BYTE	CKDBL:1;
			__BYTE	PLL2EN:1;
			__BYTE	CLKS:2;
		} bit;
		struct {
			__BYTE	RESV60:1;
			__BYTE	RESV61:1;
			__BYTE	RESV62:1;
			__BYTE	RESV63:1;
			__BYTE	CKDBL:1;
			__BYTE	PLL2EN:1;
			__BYTE	CLKS1:1;
			__BYTE	CLKS0:1;
		} bitc;
	} IO_CLKR2;
	__BYTE	IO_RESV2;
} IO_PLL2;

#define	PLL2_DIVM			(IO_PLL2.IO_DIVM.byte)
#define	PLL2_DIVM_DVM    	(IO_PLL2.IO_DIVM.bit.DVM)
#define	PLL2_DIVM_DVM0    	(IO_PLL2.IO_DIVM.bitc.DVM0)
#define	PLL2_DIVM_DVM1    	(IO_PLL2.IO_DIVM.bitc.DVM1)
#define	PLL2_DIVM_DVM2    	(IO_PLL2.IO_DIVM.bitc.DVM2)
#define	PLL2_DIVM_DVM3    	(IO_PLL2.IO_DIVM.bitc.DVM3)
#define	PLL2_DIVN			(IO_PLL2.IO_DIVN.byte)
#define	PLL2_DIVN_DVN    	(IO_PLL2.IO_DIVN.bit.DVN)
#define	PLL2_DIVN_DVN0    	(IO_PLL2.IO_DIVN.bitc.DVN0)
#define	PLL2_DIVN_DVN1    	(IO_PLL2.IO_DIVN.bitc.DVN1)
#define	PLL2_DIVN_DVN2    	(IO_PLL2.IO_DIVN.bitc.DVN2)
#define	PLL2_DIVN_DVN3    	(IO_PLL2.IO_DIVN.bitc.DVN3)
#define	PLL2_DIVN_DVN4    	(IO_PLL2.IO_DIVN.bitc.DVN4)
#define	PLL2_DIVN_DVN5    	(IO_PLL2.IO_DIVN.bitc.DVN5)
#define	PLL2_DIVG			(IO_PLL2.IO_DIVG.byte)
#define	PLL2_DIVG_DVG    	(IO_PLL2.IO_DIVG.bit.DVG)
#define	PLL2_DIVG_DVG0    	(IO_PLL2.IO_DIVG.bitc.DVG0)
#define	PLL2_DIVG_DVG1    	(IO_PLL2.IO_DIVG.bitc.DVG1)
#define	PLL2_DIVG_DVG2    	(IO_PLL2.IO_DIVG.bitc.DVG2)
#define	PLL2_DIVG_DVG3    	(IO_PLL2.IO_DIVG.bitc.DVG3)
#define	PLL2_MULG			(IO_PLL2.IO_MULG.byte)
#define	PLL2_MULG_MLG    	(IO_PLL2.IO_MULG.bit.MLG)
#define	PLL2_MULG_MLG0    	(IO_PLL2.IO_MULG.bitc.MLG0)
#define	PLL2_MULG_MLG1    	(IO_PLL2.IO_MULG.bitc.MLG1)
#define	PLL2_MULG_MLG2    	(IO_PLL2.IO_MULG.bitc.MLG2)
#define	PLL2_MULG_MLG3    	(IO_PLL2.IO_MULG.bitc.MLG3)
#define	PLL2_MULG_MLG4    	(IO_PLL2.IO_MULG.bitc.MLG4)
#define	PLL2_MULG_MLG5    	(IO_PLL2.IO_MULG.bitc.MLG5)
#define	PLL2_MULG_MLG6    	(IO_PLL2.IO_MULG.bitc.MLG6)
#define	PLL2_MULG_MLG7    	(IO_PLL2.IO_MULG.bitc.MLG7)
#define	PLL2_CTRL			(IO_PLL2.IO_CTRL.byte)
#define	PLL2_CTRL_IEDN    	(IO_PLL2.IO_CTRL.bit.IEDN)
#define	PLL2_CTRL_GRDN    	(IO_PLL2.IO_CTRL.bit.GRDN)
#define	PLL2_CTRL_IEUP    	(IO_PLL2.IO_CTRL.bit.IEUP)
#define	PLL2_CTRL_GRUP    	(IO_PLL2.IO_CTRL.bit.GRUP)
#define	PLL2_CLKR2			(IO_PLL2.IO_CLKR2.byte)
#define	PLL2_CLKR2_CKDBL    	(IO_PLL2.IO_CLKR2.bit.CKDBL)
#define	PLL2_CLKR2_PLL2EN    	(IO_PLL2.IO_CLKR2.bit.PLL2EN)
#define	PLL2_CLKR2_CLKS    	(IO_PLL2.IO_CLKR2.bit.CLKS)
#define	PLL2_CLKR2_CLKS0    	(IO_PLL2.IO_CLKR2.bitc.CLKS0)
#define	PLL2_CLKR2_CLKS1    	(IO_PLL2.IO_CLKR2.bitc.CLKS1)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_IOS,attr=IO,locate=0xC03
#endif

__IO_EXTENDED	__BYTE	IO_IOS;
#define	_ios		(IO_IOS)
#define	IOS	(_ios)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_PORT2,attr=IO,locate=0xD00
#endif

__IO_EXTENDED	struct {
	__BYTE	IO_RESV000;
	__BYTE	IO_RESV001;
	__BYTE	IO_RESV002;
	__BYTE	IO_RESV003;
	__BYTE	IO_RESV004;
	__BYTE	IO_RESV005;
	__BYTE	IO_RESV006;
	__BYTE	IO_RESV007;
	__BYTE	IO_RESV008;
	__BYTE	IO_RESV009;
	__BYTE	IO_RESV010;
	__BYTE	IO_RESV011;
	__BYTE	IO_RESV012;
	__BYTE	IO_RESV013;
	const union {
		__BYTE	byte;
		struct {
			__BYTE	P14_7:1;
			__BYTE	P14_6:1;
			__BYTE	P14_5:1;
			__BYTE	P14_4:1;
			__BYTE	P14_3:1;
			__BYTE	P14_2:1;
			__BYTE	P14_1:1;
			__BYTE	P14_0:1;
		} bit;
		struct {
			__BYTE	P14_7:1;
			__BYTE	P14_6:1;
			__BYTE	P14_5:1;
			__BYTE	P14_4:1;
			__BYTE	P14_3:1;
			__BYTE	P14_2:1;
			__BYTE	P14_1:1;
			__BYTE	P14_0:1;
		} bitc;
	} IO_PDRD14;
	const union {
		__BYTE	byte;
		struct {
			__BYTE	RESV150:1;
			__BYTE	RESV151:1;
			__BYTE	P15_5:1;
			__BYTE	P15_4:1;
			__BYTE	P15_3:1;
			__BYTE	P15_2:1;
			__BYTE	P15_1:1;
			__BYTE	P15_0:1;
		} bit;
		struct {
			__BYTE	RESV150:1;
			__BYTE	RESV151:1;
			__BYTE	P15_5:1;
			__BYTE	P15_4:1;
			__BYTE	P15_3:1;
			__BYTE	P15_2:1;
			__BYTE	P15_1:1;
			__BYTE	P15_0:1;
		} bitc;
	} IO_PDRD15;
	const union {
		__BYTE	byte;
		struct {
			__BYTE	P16_7:1;
			__BYTE	RESV161:1;
			__BYTE	RESV162:1;
			__BYTE	RESV163:1;
			__BYTE	P16_3:1;
			__BYTE	P16_2:1;
			__BYTE	P16_1:1;
			__BYTE	P16_0:1;
		} bit;
		struct {
			__BYTE	P16_7:1;
			__BYTE	RESV161:1;
			__BYTE	RESV162:1;
			__BYTE	RESV163:1;
			__BYTE	P16_3:1;
			__BYTE	P16_2:1;
			__BYTE	P16_1:1;
			__BYTE	P16_0:1;
		} bitc;
	} IO_PDRD16;
	const union {
		__BYTE	byte;
		struct {
			__BYTE	P17_7:1;
			__BYTE	P17_6:1;
			__BYTE	P17_5:1;
			__BYTE	P17_4:1;
			__BYTE	P17_3:1;
			__BYTE	P17_2:1;
			__BYTE	P17_1:1;
			__BYTE	P17_0:1;
		} bit;
		struct {
			__BYTE	P17_7:1;
			__BYTE	P17_6:1;
			__BYTE	P17_5:1;
			__BYTE	P17_4:1;
			__BYTE	P17_3:1;
			__BYTE	P17_2:1;
			__BYTE	P17_1:1;
			__BYTE	P17_0:1;
		} bitc;
	} IO_PDRD17;
	const union {
		__BYTE	byte;
		struct {
			__BYTE	RESV180:1;
			__BYTE	P18_6:1;
			__BYTE	P18_5:1;
			__BYTE	P18_4:1;
			__BYTE	RESV184:1;
			__BYTE	P18_2:1;
			__BYTE	P18_1:1;
			__BYTE	P18_0:1;
		} bit;
		struct {
			__BYTE	RESV180:1;
			__BYTE	P18_6:1;
			__BYTE	P18_5:1;
			__BYTE	P18_4:1;
			__BYTE	RESV184:1;
			__BYTE	P18_2:1;
			__BYTE	P18_1:1;
			__BYTE	P18_0:1;
		} bitc;
	} IO_PDRD18;
	const union {
		__BYTE	byte;
		struct {
			__BYTE	RESV190:1;
			__BYTE	RESV191:1;
			__BYTE	RESV192:1;
			__BYTE	RESV193:1;
			__BYTE	RESV194:1;
			__BYTE	P19_2:1;
			__BYTE	P19_1:1;
			__BYTE	P19_0:1;
		} bit;
		struct {
			__BYTE	RESV190:1;
			__BYTE	RESV191:1;
			__BYTE	RESV192:1;
			__BYTE	RESV193:1;
			__BYTE	RESV194:1;
			__BYTE	P19_2:1;
			__BYTE	P19_1:1;
			__BYTE	P19_0:1;
		} bitc;
	} IO_PDRD19;
	__BYTE	IO_RESV020;
	__BYTE	IO_RESV021;
	const union {
		__BYTE	byte;
		struct {
			__BYTE	RESV220:1;
			__BYTE	RESV221:1;
			__BYTE	P22_5:1;
			__BYTE	P22_4:1;
			__BYTE	RESV224:1;
			__BYTE	RESV225:1;
			__BYTE	P22_1:1;
			__BYTE	P22_0:1;
		} bit;
		struct {
			__BYTE	RESV220:1;
			__BYTE	RESV221:1;
			__BYTE	P22_5:1;
			__BYTE	P22_4:1;
			__BYTE	RESV224:1;
			__BYTE	RESV225:1;
			__BYTE	P22_1:1;
			__BYTE	P22_0:1;
		} bitc;
	} IO_PDRD22;
	const union {
		__BYTE	byte;
		struct {
			__BYTE	RESV230:1;
			__BYTE	RESV231:1;
			__BYTE	RESV232:1;
			__BYTE	RESV233:1;
			__BYTE	RESV234:1;
			__BYTE	RESV235:1;
			__BYTE	P23_1:1;
			__BYTE	P23_0:1;
		} bit;
		struct {
			__BYTE	RESV230:1;
			__BYTE	RESV231:1;
			__BYTE	RESV232:1;
			__BYTE	RESV233:1;
			__BYTE	RESV234:1;
			__BYTE	RESV235:1;
			__BYTE	P23_1:1;
			__BYTE	P23_0:1;
		} bitc;
	} IO_PDRD23;
	const union {
		__BYTE	byte;
		struct {
			__BYTE	P24_7:1;
			__BYTE	P24_6:1;
			__BYTE	P24_5:1;
			__BYTE	P24_4:1;
			__BYTE	P24_3:1;
			__BYTE	P24_2:1;
			__BYTE	P24_1:1;
			__BYTE	P24_0:1;
		} bit;
		struct {
			__BYTE	P24_7:1;
			__BYTE	P24_6:1;
			__BYTE	P24_5:1;
			__BYTE	P24_4:1;
			__BYTE	P24_3:1;
			__BYTE	P24_2:1;
			__BYTE	P24_1:1;
			__BYTE	P24_0:1;
		} bitc;
	} IO_PDRD24;
	__BYTE	IO_RESV025;
	__BYTE	IO_RESV026;
	const union {
		__BYTE	byte;
		struct {
			__BYTE	RESV270:1;
			__BYTE	RESV271:1;
			__BYTE	RESV272:1;
			__BYTE	RESV273:1;
			__BYTE	P27_3:1;
			__BYTE	P27_2:1;
			__BYTE	P27_1:1;
			__BYTE	P27_0:1;
		} bit;
		struct {
			__BYTE	RESV270:1;
			__BYTE	RESV271:1;
			__BYTE	RESV272:1;
			__BYTE	RESV273:1;
			__BYTE	P27_3:1;
			__BYTE	P27_2:1;
			__BYTE	P27_1:1;
			__BYTE	P27_0:1;
		} bitc;
	} IO_PDRD27;
	const union {
		__BYTE	byte;
		struct {
			__BYTE	RESV280:1;
			__BYTE	RESV281:1;
			__BYTE	RESV282:1;
			__BYTE	P28_4:1;
			__BYTE	P28_3:1;
			__BYTE	P28_2:1;
			__BYTE	P28_1:1;
			__BYTE	P28_0:1;
		} bit;
		struct {
			__BYTE	RESV280:1;
			__BYTE	RESV281:1;
			__BYTE	RESV282:1;
			__BYTE	P28_4:1;
			__BYTE	P28_3:1;
			__BYTE	P28_2:1;
			__BYTE	P28_1:1;
			__BYTE	P28_0:1;
		} bitc;
	} IO_PDRD28;
	const union {
		__BYTE	byte;
		struct {
			__BYTE	P29_7:1;
			__BYTE	P29_6:1;
			__BYTE	P29_5:1;
			__BYTE	P29_4:1;
			__BYTE	P29_3:1;
			__BYTE	P29_2:1;
			__BYTE	P29_1:1;
			__BYTE	P29_0:1;
		} bit;
		struct {
			__BYTE	P29_7:1;
			__BYTE	P29_6:1;
			__BYTE	P29_5:1;
			__BYTE	P29_4:1;
			__BYTE	P29_3:1;
			__BYTE	P29_2:1;
			__BYTE	P29_1:1;
			__BYTE	P29_0:1;
		} bitc;
	} IO_PDRD29;
	__BYTE	IO_RESV030;
	const union {
		__BYTE	byte;
		struct {
			__BYTE	RESV310:1;
			__BYTE	P31_6:1;
			__BYTE	P31_5:1;
			__BYTE	P31_4:1;
			__BYTE	RESV314:1;
			__BYTE	P31_2:1;
			__BYTE	P31_1:1;
			__BYTE	P31_0:1;
		} bit;
		struct {
			__BYTE	RESV310:1;
			__BYTE	P31_6:1;
			__BYTE	P31_5:1;
			__BYTE	P31_4:1;
			__BYTE	RESV314:1;
			__BYTE	P31_2:1;
			__BYTE	P31_1:1;
			__BYTE	P31_0:1;
		} bitc;
	} IO_PDRD31;
	__BYTE	IO_RESV32[CONSTANT_46];
	union {
		__BYTE	byte;
		struct {
			__BYTE	P14_7:1;
			__BYTE	P14_6:1;
			__BYTE	P14_5:1;
			__BYTE	P14_4:1;
			__BYTE	P14_3:1;
			__BYTE	P14_2:1;
			__BYTE	P14_1:1;
			__BYTE	P14_0:1;
		} bit;
		struct {
			__BYTE	P14_7:1;
			__BYTE	P14_6:1;
			__BYTE	P14_5:1;
			__BYTE	P14_4:1;
			__BYTE	P14_3:1;
			__BYTE	P14_2:1;
			__BYTE	P14_1:1;
			__BYTE	P14_0:1;
		} bitc;
	} IO_DDR14;
	union {
		__BYTE	byte;
		struct {
			__BYTE	RESV790:1;
			__BYTE	RESV791:1;
			__BYTE	P15_5:1;
			__BYTE	P15_4:1;
			__BYTE	P15_3:1;
			__BYTE	P15_2:1;
			__BYTE	P15_1:1;
			__BYTE	P15_0:1;
		} bit;
		struct {
			__BYTE	RESV790:1;
			__BYTE	RESV791:1;
			__BYTE	P15_5:1;
			__BYTE	P15_4:1;
			__BYTE	P15_3:1;
			__BYTE	P15_2:1;
			__BYTE	P15_1:1;
			__BYTE	P15_0:1;
		} bitc;
	} IO_DDR15;
	union {
		__BYTE	byte;
		struct {
			__BYTE	P16_7:1;
			__BYTE	RESV801:1;
			__BYTE	RESV802:1;
			__BYTE	RESV803:1;
			__BYTE	P16_3:1;
			__BYTE	P16_2:1;
			__BYTE	P16_1:1;
			__BYTE	P16_0:1;
		} bit;
		struct {
			__BYTE	P16_7:1;
			__BYTE	RESV801:1;
			__BYTE	RESV802:1;
			__BYTE	RESV803:1;
			__BYTE	P16_3:1;
			__BYTE	P16_2:1;
			__BYTE	P16_1:1;
			__BYTE	P16_0:1;
		} bitc;
	} IO_DDR16;
	union {
		__BYTE	byte;
		struct {
			__BYTE	P17_7:1;
			__BYTE	P17_6:1;
			__BYTE	P17_5:1;
			__BYTE	P17_4:1;
			__BYTE	P17_3:1;
			__BYTE	P17_2:1;
			__BYTE	P17_1:1;
			__BYTE	P17_0:1;
		} bit;
		struct {
			__BYTE	P17_7:1;
			__BYTE	P17_6:1;
			__BYTE	P17_5:1;
			__BYTE	P17_4:1;
			__BYTE	P17_3:1;
			__BYTE	P17_2:1;
			__BYTE	P17_1:1;
			__BYTE	P17_0:1;
		} bitc;
	} IO_DDR17;
	union {
		__BYTE	byte;
		struct {
			__BYTE	RESV820:1;
			__BYTE	P18_6:1;
			__BYTE	P18_5:1;
			__BYTE	P18_4:1;
			__BYTE	RESV824:1;
			__BYTE	P18_2:1;
			__BYTE	P18_1:1;
			__BYTE	P18_0:1;
		} bit;
		struct {
			__BYTE	RESV820:1;
			__BYTE	P18_6:1;
			__BYTE	P18_5:1;
			__BYTE	P18_4:1;
			__BYTE	RESV824:1;
			__BYTE	P18_2:1;
			__BYTE	P18_1:1;
			__BYTE	P18_0:1;
		} bitc;
	} IO_DDR18;
	union {
		__BYTE	byte;
		struct {
			__BYTE	RESV830:1;
			__BYTE	RESV831:1;
			__BYTE	RESV832:1;
			__BYTE	RESV833:1;
			__BYTE	RESV834:1;
			__BYTE	P19_2:1;
			__BYTE	P19_1:1;
			__BYTE	P19_0:1;
		} bit;
		struct {
			__BYTE	RESV830:1;
			__BYTE	RESV831:1;
			__BYTE	RESV832:1;
			__BYTE	RESV833:1;
			__BYTE	RESV834:1;
			__BYTE	P19_2:1;
			__BYTE	P19_1:1;
			__BYTE	P19_0:1;
		} bitc;
	} IO_DDR19;
	__BYTE	IO_RESV084;
	__BYTE	IO_RESV085;
	union {
		__BYTE	byte;
		struct {
			__BYTE	RESV860:1;
			__BYTE	RESV861:1;
			__BYTE	P22_5:1;
			__BYTE	P22_4:1;
			__BYTE	RESV864:1;
			__BYTE	RESV865:1;
			__BYTE	P22_1:1;
			__BYTE	P22_0:1;
		} bit;
		struct {
			__BYTE	RESV860:1;
			__BYTE	RESV861:1;
			__BYTE	P22_5:1;
			__BYTE	P22_4:1;
			__BYTE	RESV864:1;
			__BYTE	RESV865:1;
			__BYTE	P22_1:1;
			__BYTE	P22_0:1;
		} bitc;
	} IO_DDR22;
	union {
		__BYTE	byte;
		struct {
			__BYTE	RESV870:1;
			__BYTE	RESV871:1;
			__BYTE	RESV872:1;
			__BYTE	RESV873:1;
			__BYTE	RESV874:1;
			__BYTE	RESV875:1;
			__BYTE	P23_1:1;
			__BYTE	P23_0:1;
		} bit;
		struct {
			__BYTE	RESV870:1;
			__BYTE	RESV871:1;
			__BYTE	RESV872:1;
			__BYTE	RESV873:1;
			__BYTE	RESV874:1;
			__BYTE	RESV875:1;
			__BYTE	P23_1:1;
			__BYTE	P23_0:1;
		} bitc;
	} IO_DDR23;
	union {
		__BYTE	byte;
		struct {
			__BYTE	P24_7:1;
			__BYTE	P24_6:1;
			__BYTE	P24_5:1;
			__BYTE	P24_4:1;
			__BYTE	P24_3:1;
			__BYTE	P24_2:1;
			__BYTE	P24_1:1;
			__BYTE	P24_0:1;
		} bit;
		struct {
			__BYTE	P24_7:1;
			__BYTE	P24_6:1;
			__BYTE	P24_5:1;
			__BYTE	P24_4:1;
			__BYTE	P24_3:1;
			__BYTE	P24_2:1;
			__BYTE	P24_1:1;
			__BYTE	P24_0:1;
		} bitc;
	} IO_DDR24;
	__BYTE	IO_RESV089;
	__BYTE	IO_RESV090;
	union {
		__BYTE	byte;
		struct {
			__BYTE	RESV910:1;
			__BYTE	RESV911:1;
			__BYTE	RESV912:1;
			__BYTE	RESV913:1;
			__BYTE	P27_3:1;
			__BYTE	P27_2:1;
			__BYTE	P27_1:1;
			__BYTE	P27_0:1;
		} bit;
		struct {
			__BYTE	RESV910:1;
			__BYTE	RESV911:1;
			__BYTE	RESV912:1;
			__BYTE	RESV913:1;
			__BYTE	P27_3:1;
			__BYTE	P27_2:1;
			__BYTE	P27_1:1;
			__BYTE	P27_0:1;
		} bitc;
	} IO_DDR27;
	union {
		__BYTE	byte;
		struct {
			__BYTE	RESV920:1;
			__BYTE	RESV921:1;
			__BYTE	RESV922:1;
			__BYTE	P28_4:1;
			__BYTE	P28_3:1;
			__BYTE	P28_2:1;
			__BYTE	P28_1:1;
			__BYTE	P28_0:1;
		} bit;
		struct {
			__BYTE	RESV920:1;
			__BYTE	RESV921:1;
			__BYTE	RESV922:1;
			__BYTE	P28_4:1;
			__BYTE	P28_3:1;
			__BYTE	P28_2:1;
			__BYTE	P28_1:1;
			__BYTE	P28_0:1;
		} bitc;
	} IO_DDR28;
	union {
		__BYTE	byte;
		struct {
			__BYTE	P29_7:1;
			__BYTE	P29_6:1;
			__BYTE	P29_5:1;
			__BYTE	P29_4:1;
			__BYTE	P29_3:1;
			__BYTE	P29_2:1;
			__BYTE	P29_1:1;
			__BYTE	P29_0:1;
		} bit;
		struct {
			__BYTE	P29_7:1;
			__BYTE	P29_6:1;
			__BYTE	P29_5:1;
			__BYTE	P29_4:1;
			__BYTE	P29_3:1;
			__BYTE	P29_2:1;
			__BYTE	P29_1:1;
			__BYTE	P29_0:1;
		} bitc;
	} IO_DDR29;
	__BYTE	IO_RESV94;
	union {
		__BYTE	byte;
		struct {
			__BYTE	RESV950:1;
			__BYTE	P31_6:1;
			__BYTE	P31_5:1;
			__BYTE	P31_4:1;
			__BYTE	RESV954:1;
			__BYTE	P31_2:1;
			__BYTE	P31_1:1;
			__BYTE	P31_0:1;
		} bit;
		struct {
			__BYTE	RESV950:1;
			__BYTE	P31_6:1;
			__BYTE	P31_5:1;
			__BYTE	P31_4:1;
			__BYTE	RESV954:1;
			__BYTE	P31_2:1;
			__BYTE	P31_1:1;
			__BYTE	P31_0:1;
		} bitc;
	} IO_DDR31;
	__BYTE	IO_RESV96[CONSTANT_46];
	union {
		__BYTE	byte;
		struct {
			__BYTE	P14_7:1;
			__BYTE	P14_6:1;
			__BYTE	P14_5:1;
			__BYTE	P14_4:1;
			__BYTE	P14_3:1;
			__BYTE	P14_2:1;
			__BYTE	P14_1:1;
			__BYTE	P14_0:1;
		} bit;
		struct {
			__BYTE	P14_7:1;
			__BYTE	P14_6:1;
			__BYTE	P14_5:1;
			__BYTE	P14_4:1;
			__BYTE	P14_3:1;
			__BYTE	P14_2:1;
			__BYTE	P14_1:1;
			__BYTE	P14_0:1;
		} bitc;
	} IO_PFR14;
	union {
		__BYTE	byte;
		struct {
			__BYTE	RESV1430:1;
			__BYTE	RESV1431:1;
			__BYTE	P15_5:1;
			__BYTE	P16_4:1;
			__BYTE	P15_3:1;
			__BYTE	P15_2:1;
			__BYTE	P15_1:1;
			__BYTE	P15_0:1;
		} bit;
		struct {
			__BYTE	RESV1430:1;
			__BYTE	RESV1431:1;
			__BYTE	P15_5:1;
			__BYTE	P16_4:1;
			__BYTE	P15_3:1;
			__BYTE	P15_2:1;
			__BYTE	P15_1:1;
			__BYTE	P15_0:1;
		} bitc;
	} IO_PFR15;
	union {
		__BYTE	byte;
		struct {
			__BYTE	P16_7:1;
			__BYTE	RESV1441:1;
			__BYTE	RESV1442:1;
			__BYTE	RESV1443:1;
			__BYTE	P16_3:1;
			__BYTE	P16_2:1;
			__BYTE	P16_1:1;
			__BYTE	P16_0:1;
		} bit;
		struct {
			__BYTE	P16_7:1;
			__BYTE	RESV1441:1;
			__BYTE	RESV1442:1;
			__BYTE	RESV1443:1;
			__BYTE	P16_3:1;
			__BYTE	P16_2:1;
			__BYTE	P16_1:1;
			__BYTE	P16_0:1;
		} bitc;
	} IO_PFR16;
	union {
		__BYTE	byte;
		struct {
			__BYTE	P17_7:1;
			__BYTE	P17_6:1;
			__BYTE	P17_5:1;
			__BYTE	P17_4:1;
			__BYTE	P17_3:1;
			__BYTE	P17_2:1;
			__BYTE	P17_1:1;
			__BYTE	P17_0:1;
		} bit;
		struct {
			__BYTE	P17_7:1;
			__BYTE	P17_6:1;
			__BYTE	P17_5:1;
			__BYTE	P17_4:1;
			__BYTE	P17_3:1;
			__BYTE	P17_2:1;
			__BYTE	P17_1:1;
			__BYTE	P17_0:1;
		} bitc;
	} IO_PFR17;
	union {
		__BYTE	byte;
		struct {
			__BYTE	RESV1460:1;
			__BYTE	P18_6:1;
			__BYTE	P18_5:1;
			__BYTE	P18_4:1;
			__BYTE	RESV1464:1;
			__BYTE	P18_2:1;
			__BYTE	P18_1:1;
			__BYTE	P18_0:1;
		} bit;
		struct {
			__BYTE	RESV1460:1;
			__BYTE	P18_6:1;
			__BYTE	P18_5:1;
			__BYTE	P18_4:1;
			__BYTE	RESV1464:1;
			__BYTE	P18_2:1;
			__BYTE	P18_1:1;
			__BYTE	P18_0:1;
		} bitc;
	} IO_PFR18;
	union {
		__BYTE	byte;
		struct {
			__BYTE	RESV1470:1;
			__BYTE	RESV1471:1;
			__BYTE	RESV1472:1;
			__BYTE	RESV1473:1;
			__BYTE	RESV1474:1;
			__BYTE	P19_2:1;
			__BYTE	P19_1:1;
			__BYTE	P19_0:1;
		} bit;
		struct {
			__BYTE	RESV1470:1;
			__BYTE	RESV1471:1;
			__BYTE	RESV1472:1;
			__BYTE	RESV1473:1;
			__BYTE	RESV1474:1;
			__BYTE	P19_2:1;
			__BYTE	P19_1:1;
			__BYTE	P19_0:1;
		} bitc;
	} IO_PFR19;
	__BYTE	IO_RESV148;
	__BYTE	IO_RESV149;
	union {
		__BYTE	byte;
		struct {
			__BYTE	RESV1500:1;
			__BYTE	RESV1501:1;
			__BYTE	P22_5:1;
			__BYTE	P22_4:1;
			__BYTE	RESV1504:1;
			__BYTE	RESV1505:1;
			__BYTE	P22_1:1;
			__BYTE	P22_0:1;
		} bit;
		struct {
			__BYTE	RESV1500:1;
			__BYTE	RESV1501:1;
			__BYTE	P22_5:1;
			__BYTE	P22_4:1;
			__BYTE	RESV1504:1;
			__BYTE	RESV1505:1;
			__BYTE	P22_1:1;
			__BYTE	P22_0:1;
		} bitc;
	} IO_PFR22;
	union {
		__BYTE	byte;
		struct {
			__BYTE	RESV1510:1;
			__BYTE	RESV1511:1;
			__BYTE	RESV1512:1;
			__BYTE	RESV1513:1;
			__BYTE	RESV1514:1;
			__BYTE	RESV1515:1;
			__BYTE	P23_1:1;
			__BYTE	P23_0:1;
		} bit;
		struct {
			__BYTE	RESV1510:1;
			__BYTE	RESV1511:1;
			__BYTE	RESV1512:1;
			__BYTE	RESV1513:1;
			__BYTE	RESV1514:1;
			__BYTE	RESV1515:1;
			__BYTE	P23_1:1;
			__BYTE	P23_0:1;
		} bitc;
	} IO_PFR23;
	union {
		__BYTE	byte;
		struct {
			__BYTE	P24_7:1;
			__BYTE	P24_6:1;
			__BYTE	P24_5:1;
			__BYTE	P24_4:1;
			__BYTE	P24_3:1;
			__BYTE	P24_2:1;
			__BYTE	P24_1:1;
			__BYTE	P24_0:1;
		} bit;
		struct {
			__BYTE	P24_7:1;
			__BYTE	P24_6:1;
			__BYTE	P24_5:1;
			__BYTE	P24_4:1;
			__BYTE	P24_3:1;
			__BYTE	P24_2:1;
			__BYTE	P24_1:1;
			__BYTE	P24_0:1;
		} bitc;
	} IO_PFR24;
	__BYTE	IO_RESV153;
	__BYTE	IO_RESV154;
	union {
		__BYTE	byte;
		struct {
			__BYTE	RESV1550:1;
			__BYTE	RESV1551:1;
			__BYTE	RESV1552:1;
			__BYTE	RESV1553:1;
			__BYTE	P27_3:1;
			__BYTE	P27_2:1;
			__BYTE	P27_1:1;
			__BYTE	P27_0:1;
		} bit;
		struct {
			__BYTE	RESV1550:1;
			__BYTE	RESV1551:1;
			__BYTE	RESV1552:1;
			__BYTE	RESV1553:1;
			__BYTE	P27_3:1;
			__BYTE	P27_2:1;
			__BYTE	P27_1:1;
			__BYTE	P27_0:1;
		} bitc;
	} IO_PFR27;
	union {
		__BYTE	byte;
		struct {
			__BYTE	RESV1560:1;
			__BYTE	RESV1561:1;
			__BYTE	RESV1562:1;
			__BYTE	P28_4:1;
			__BYTE	P28_3:1;
			__BYTE	P28_2:1;
			__BYTE	P28_1:1;
			__BYTE	P28_0:1;
		} bit;
		struct {
			__BYTE	RESV1560:1;
			__BYTE	RESV1561:1;
			__BYTE	RESV1562:1;
			__BYTE	P28_4:1;
			__BYTE	P28_3:1;
			__BYTE	P28_2:1;
			__BYTE	P28_1:1;
			__BYTE	P28_0:1;
		} bitc;
	} IO_PFR28;
	union {
		__BYTE	byte;
		struct {
			__BYTE	P29_7:1;
			__BYTE	P29_6:1;
			__BYTE	P29_5:1;
			__BYTE	P29_4:1;
			__BYTE	P29_3:1;
			__BYTE	P29_2:1;
			__BYTE	P29_1:1;
			__BYTE	P29_0:1;
		} bit;
		struct {
			__BYTE	P29_7:1;
			__BYTE	P29_6:1;
			__BYTE	P29_5:1;
			__BYTE	P29_4:1;
			__BYTE	P29_3:1;
			__BYTE	P29_2:1;
			__BYTE	P29_1:1;
			__BYTE	P29_0:1;
		} bitc;
	} IO_PFR29;
	__BYTE	IO_RESV158;
	union {
		__BYTE	byte;
		struct {
			__BYTE	RESV1590:1;
			__BYTE	P31_6:1;
			__BYTE	P31_5:1;
			__BYTE	P31_4:1;
			__BYTE	RESV1594:1;
			__BYTE	P31_2:1;
			__BYTE	P31_1:1;
			__BYTE	P31_0:1;
		} bit;
		struct {
			__BYTE	RESV1590:1;
			__BYTE	P31_6:1;
			__BYTE	P31_5:1;
			__BYTE	P31_4:1;
			__BYTE	RESV1594:1;
			__BYTE	P31_2:1;
			__BYTE	P31_1:1;
			__BYTE	P31_0:1;
		} bitc;
	} IO_PFR31;
	__BYTE	IO_RESV160[CONSTANT_46];
	union {
		__BYTE	byte;
		struct {
			__BYTE	P14_7:1;
			__BYTE	P14_6:1;
			__BYTE	P14_5:1;
			__BYTE	P14_4:1;
			__BYTE	P14_3:1;
			__BYTE	P14_2:1;
			__BYTE	P14_1:1;
			__BYTE	P14_0:1;
		} bit;
		struct {
			__BYTE	P14_7:1;
			__BYTE	P14_6:1;
			__BYTE	P14_5:1;
			__BYTE	P14_4:1;
			__BYTE	P14_3:1;
			__BYTE	P14_2:1;
			__BYTE	P14_1:1;
			__BYTE	P14_0:1;
		} bitc;
	} IO_EPFR14;
	union {
		__BYTE	byte;
		struct {
			__BYTE	RESV2070:1;
			__BYTE	RESV2071:1;
			__BYTE	P15_5:1;
			__BYTE	P15_4:1;
			__BYTE	P15_3:1;
			__BYTE	P15_2:1;
			__BYTE	P15_1:1;
			__BYTE	P15_0:1;
		} bit;
		struct {
			__BYTE	RESV2070:1;
			__BYTE	RESV2071:1;
			__BYTE	P15_5:1;
			__BYTE	P15_4:1;
			__BYTE	P15_3:1;
			__BYTE	P15_2:1;
			__BYTE	P15_1:1;
			__BYTE	P15_0:1;
		} bitc;
	} IO_EPFR15;
	union {
		__BYTE	byte;
		struct {
			__BYTE	P16_7:1;
			__BYTE	RESV2081:1;
			__BYTE	RESV2082:1;
			__BYTE	RESV2083:1;
			__BYTE	RESV2084:1;
			__BYTE	RESV2085:1;
			__BYTE	RESV2086:1;
			__BYTE	RESV2087:1;
		} bit;
		struct {
			__BYTE	P16_7:1;
			__BYTE	RESV2081:1;
			__BYTE	RESV2082:1;
			__BYTE	RESV2083:1;
			__BYTE	RESV2084:1;
			__BYTE	RESV2085:1;
			__BYTE	RESV2086:1;
			__BYTE	RESV2087:1;
		} bitc;
	} IO_EPFR16;
	__BYTE	IO_EPFR17;
	union {
		__BYTE	byte;
		struct {
			__BYTE	RESV2100:1;
			__BYTE	P18_6:1;
			__BYTE	RESV2102:1;
			__BYTE	RESV2103:1;
			__BYTE	RESV2104:1;
			__BYTE	P18_2:1;
			__BYTE	RESV2106:1;
			__BYTE	RESV2107:1;
		} bit;
		struct {
			__BYTE	RESV2100:1;
			__BYTE	P18_6:1;
			__BYTE	RESV2102:1;
			__BYTE	RESV2103:1;
			__BYTE	RESV2104:1;
			__BYTE	P18_2:1;
			__BYTE	RESV2106:1;
			__BYTE	RESV2107:1;
		} bitc;
	} IO_EPFR18;
	union {
		__BYTE	byte;
		struct {
			__BYTE	RESV2110:1;
			__BYTE	RESV2111:1;
			__BYTE	RESV2112:1;
			__BYTE	RESV2113:1;
			__BYTE	RESV2114:1;
			__BYTE	P19_2:1;
			__BYTE	RESV2116:1;
			__BYTE	RESV2117:1;
		} bit;
		struct {
			__BYTE	RESV2110:1;
			__BYTE	RESV2111:1;
			__BYTE	RESV2112:1;
			__BYTE	RESV2113:1;
			__BYTE	RESV2114:1;
			__BYTE	P19_2:1;
			__BYTE	RESV2116:1;
			__BYTE	RESV2117:1;
		} bitc;
	} IO_EPFR19;
	__BYTE	IO_RESV212;
	__BYTE	IO_RESV213;
	__BYTE	IO_EPFR22;
	__BYTE	IO_EPFR23;
	__BYTE	IO_EPFR24;
	__BYTE	IO_RESV217;
	__BYTE	IO_RESV218;
	union {
		__BYTE	byte;
		struct {
			__BYTE	RESV2190:1;
			__BYTE	RESV2191:1;
			__BYTE	RESV2192:1;
			__BYTE	RESV2193:1;
			__BYTE	P27_3:1;
			__BYTE	P27_2:1;
			__BYTE	P27_1:1;
			__BYTE	P27_0:1;
		} bit;
		struct {
			__BYTE	RESV2190:1;
			__BYTE	RESV2191:1;
			__BYTE	RESV2192:1;
			__BYTE	RESV2193:1;
			__BYTE	P27_3:1;
			__BYTE	P27_2:1;
			__BYTE	P27_1:1;
			__BYTE	P27_0:1;
		} bitc;
	} IO_EPFR27;
	__BYTE	IO_EPFR28;
	__BYTE	IO_EPFR29;
	__BYTE	IO_RESV222;
	union {
		__BYTE	byte;
		struct {
			__BYTE	RESV2230:1;
			__BYTE	P31_6:1;
			__BYTE	P31_5:1;
			__BYTE	P31_4:1;
			__BYTE	RESV2234:1;
			__BYTE	P31_2:1;
			__BYTE	P31_1:1;
			__BYTE	P31_0:1;
		} bit;
		struct {
			__BYTE	RESV2230:1;
			__BYTE	P31_6:1;
			__BYTE	P31_5:1;
			__BYTE	P31_4:1;
			__BYTE	RESV2234:1;
			__BYTE	P31_2:1;
			__BYTE	P31_1:1;
			__BYTE	P31_0:1;
		} bitc;
	} IO_EPFR31;
	__BYTE	IO_RESV224[CONSTANT_46];
	union {
		__BYTE	byte;
		struct {
			__BYTE	P14_7:1;
			__BYTE	P14_6:1;
			__BYTE	P14_5:1;
			__BYTE	P14_4:1;
			__BYTE	P14_3:1;
			__BYTE	P14_2:1;
			__BYTE	P14_1:1;
			__BYTE	P14_0:1;
		} bit;
		struct {
			__BYTE	P14_7:1;
			__BYTE	P14_6:1;
			__BYTE	P14_5:1;
			__BYTE	P14_4:1;
			__BYTE	P14_3:1;
			__BYTE	P14_2:1;
			__BYTE	P14_1:1;
			__BYTE	P14_0:1;
		} bitc;
	} IO_PODR14;
	union {
		__BYTE	byte;
		struct {
			__BYTE	RESV2710:1;
			__BYTE	RESV2711:1;
			__BYTE	P15_5:1;
			__BYTE	P15_4:1;
			__BYTE	P15_3:1;
			__BYTE	P15_2:1;
			__BYTE	P15_1:1;
			__BYTE	P15_0:1;
		} bit;
		struct {
			__BYTE	RESV2710:1;
			__BYTE	RESV2711:1;
			__BYTE	P15_5:1;
			__BYTE	P15_4:1;
			__BYTE	P15_3:1;
			__BYTE	P15_2:1;
			__BYTE	P15_1:1;
			__BYTE	P15_0:1;
		} bitc;
	} IO_PODR15;
	union {
		__BYTE	byte;
		struct {
			__BYTE	P16_7:1;
			__BYTE	RESV2721:1;
			__BYTE	RESV2722:1;
			__BYTE	RESV2723:1;
			__BYTE	P16_3:1;
			__BYTE	P16_2:1;
			__BYTE	P16_1:1;
			__BYTE	P16_0:1;
		} bit;
		struct {
			__BYTE	P16_7:1;
			__BYTE	RESV2721:1;
			__BYTE	RESV2722:1;
			__BYTE	RESV2723:1;
			__BYTE	P16_3:1;
			__BYTE	P16_2:1;
			__BYTE	P16_1:1;
			__BYTE	P16_0:1;
		} bitc;
	} IO_PODR16;
	union {
		__BYTE	byte;
		struct {
			__BYTE	P17_7:1;
			__BYTE	P17_6:1;
			__BYTE	P17_5:1;
			__BYTE	P17_4:1;
			__BYTE	P17_3:1;
			__BYTE	P17_2:1;
			__BYTE	P17_1:1;
			__BYTE	P17_0:1;
		} bit;
		struct {
			__BYTE	P17_7:1;
			__BYTE	P17_6:1;
			__BYTE	P17_5:1;
			__BYTE	P17_4:1;
			__BYTE	P17_3:1;
			__BYTE	P17_2:1;
			__BYTE	P17_1:1;
			__BYTE	P17_0:1;
		} bitc;
	} IO_PODR17;
	union {
		__BYTE	byte;
		struct {
			__BYTE	RESV2740:1;
			__BYTE	P18_6:1;
			__BYTE	P18_5:1;
			__BYTE	P18_4:1;
			__BYTE	RESV2744:1;
			__BYTE	P18_2:1;
			__BYTE	P18_1:1;
			__BYTE	P18_0:1;
		} bit;
		struct {
			__BYTE	RESV2740:1;
			__BYTE	P18_6:1;
			__BYTE	P18_5:1;
			__BYTE	P18_4:1;
			__BYTE	RESV2744:1;
			__BYTE	P18_2:1;
			__BYTE	P18_1:1;
			__BYTE	P18_0:1;
		} bitc;
	} IO_PODR18;
	union {
		__BYTE	byte;
		struct {
			__BYTE	RESV2750:1;
			__BYTE	RESV2751:1;
			__BYTE	RESV2752:1;
			__BYTE	RESV2753:1;
			__BYTE	RESV2754:1;
			__BYTE	P19_2:1;
			__BYTE	P19_1:1;
			__BYTE	P19_0:1;
		} bit;
		struct {
			__BYTE	RESV2750:1;
			__BYTE	RESV2751:1;
			__BYTE	RESV2752:1;
			__BYTE	RESV2753:1;
			__BYTE	RESV2754:1;
			__BYTE	P19_2:1;
			__BYTE	P19_1:1;
			__BYTE	P19_0:1;
		} bitc;
	} IO_PODR19;
	__BYTE	IO_RESV276;
	__BYTE	IO_RESV277;
	union {
		__BYTE	byte;
		struct {
			__BYTE	RESV2780:1;
			__BYTE	RESV2781:1;
			__BYTE	P22_5:1;
			__BYTE	P22_4:1;
			__BYTE	RESV2784:1;
			__BYTE	RESV2785:1;
			__BYTE	P22_1:1;
			__BYTE	P22_0:1;
		} bit;
		struct {
			__BYTE	RESV2780:1;
			__BYTE	RESV2781:1;
			__BYTE	P22_5:1;
			__BYTE	P22_4:1;
			__BYTE	RESV2784:1;
			__BYTE	RESV2785:1;
			__BYTE	P22_1:1;
			__BYTE	P22_0:1;
		} bitc;
	} IO_PODR22;
	union {
		__BYTE	byte;
		struct {
			__BYTE	RESV2790:1;
			__BYTE	RESV2791:1;
			__BYTE	RESV2792:1;
			__BYTE	RESV2793:1;
			__BYTE	RESV2794:1;
			__BYTE	RESV2795:1;
			__BYTE	P23_1:1;
			__BYTE	P23_0:1;
		} bit;
		struct {
			__BYTE	RESV2790:1;
			__BYTE	RESV2791:1;
			__BYTE	RESV2792:1;
			__BYTE	RESV2793:1;
			__BYTE	RESV2794:1;
			__BYTE	RESV2795:1;
			__BYTE	P23_1:1;
			__BYTE	P23_0:1;
		} bitc;
	} IO_PODR23;
	union {
		__BYTE	byte;
		struct {
			__BYTE	P24_7:1;
			__BYTE	P24_6:1;
			__BYTE	P24_5:1;
			__BYTE	P24_4:1;
			__BYTE	P24_3:1;
			__BYTE	P24_2:1;
			__BYTE	P24_1:1;
			__BYTE	P24_0:1;
		} bit;
		struct {
			__BYTE	P24_7:1;
			__BYTE	P24_6:1;
			__BYTE	P24_5:1;
			__BYTE	P24_4:1;
			__BYTE	P24_3:1;
			__BYTE	P24_2:1;
			__BYTE	P24_1:1;
			__BYTE	P24_0:1;
		} bitc;
	} IO_PODR24;
	__BYTE	IO_RESV281;
	__BYTE	IO_RESV282;
	union {
		__BYTE	byte;
		struct {
			__BYTE	RESV2830:1;
			__BYTE	RESV2831:1;
			__BYTE	RESV2832:1;
			__BYTE	RESV2833:1;
			__BYTE	P27_3:1;
			__BYTE	P27_2:1;
			__BYTE	P27_1:1;
			__BYTE	P27_0:1;
		} bit;
		struct {
			__BYTE	RESV2830:1;
			__BYTE	RESV2831:1;
			__BYTE	RESV2832:1;
			__BYTE	RESV2833:1;
			__BYTE	P27_3:1;
			__BYTE	P27_2:1;
			__BYTE	P27_1:1;
			__BYTE	P27_0:1;
		} bitc;
	} IO_PODR27;
	union {
		__BYTE	byte;
		struct {
			__BYTE	RESV2840:1;
			__BYTE	RESV2841:1;
			__BYTE	RESV2842:1;
			__BYTE	P28_4:1;
			__BYTE	P28_3:1;
			__BYTE	P28_2:1;
			__BYTE	P28_1:1;
			__BYTE	P28_0:1;
		} bit;
		struct {
			__BYTE	RESV2840:1;
			__BYTE	RESV2841:1;
			__BYTE	RESV2842:1;
			__BYTE	P28_4:1;
			__BYTE	P28_3:1;
			__BYTE	P28_2:1;
			__BYTE	P28_1:1;
			__BYTE	P28_0:1;
		} bitc;
	} IO_PODR28;
	union {
		__BYTE	byte;
		struct {
			__BYTE	P29_7:1;
			__BYTE	P29_6:1;
			__BYTE	P29_5:1;
			__BYTE	P29_4:1;
			__BYTE	P29_3:1;
			__BYTE	P29_2:1;
			__BYTE	P29_1:1;
			__BYTE	P29_0:1;
		} bit;
		struct {
			__BYTE	P29_7:1;
			__BYTE	P29_6:1;
			__BYTE	P29_5:1;
			__BYTE	P29_4:1;
			__BYTE	P29_3:1;
			__BYTE	P29_2:1;
			__BYTE	P29_1:1;
			__BYTE	P29_0:1;
		} bitc;
	} IO_PODR29;
	__BYTE	IO_RESV286;
	union {
		__BYTE	byte;
		struct {
			__BYTE	RESV2870:1;
			__BYTE	P31_6:1;
			__BYTE	P31_5:1;
			__BYTE	P31_4:1;
			__BYTE	RESV2874:1;
			__BYTE	P31_2:1;
			__BYTE	P31_1:1;
			__BYTE	P31_0:1;
		} bit;
		struct {
			__BYTE	RESV2870:1;
			__BYTE	P31_6:1;
			__BYTE	P31_5:1;
			__BYTE	P31_4:1;
			__BYTE	RESV2874:1;
			__BYTE	P31_2:1;
			__BYTE	P31_1:1;
			__BYTE	P31_0:1;
		} bitc;
	} IO_PODR31;
	__BYTE	IO_RESV288[CONSTANT_46];
	union {
		__BYTE	byte;
		struct {
			__BYTE	P14_7:1;
			__BYTE	P14_6:1;
			__BYTE	P14_5:1;
			__BYTE	P14_4:1;
			__BYTE	P14_3:1;
			__BYTE	P14_2:1;
			__BYTE	P14_1:1;
			__BYTE	P14_0:1;
		} bit;
		struct {
			__BYTE	P14_7:1;
			__BYTE	P14_6:1;
			__BYTE	P14_5:1;
			__BYTE	P14_4:1;
			__BYTE	P14_3:1;
			__BYTE	P14_2:1;
			__BYTE	P14_1:1;
			__BYTE	P14_0:1;
		} bitc;
	} IO_PILR14;
	union {
		__BYTE	byte;
		struct {
			__BYTE	RESV3350:1;
			__BYTE	RESV3351:1;
			__BYTE	P15_5:1;
			__BYTE	P15_4:1;
			__BYTE	P15_3:1;
			__BYTE	P15_2:1;
			__BYTE	P15_1:1;
			__BYTE	P15_0:1;
		} bit;
		struct {
			__BYTE	RESV3350:1;
			__BYTE	RESV3351:1;
			__BYTE	P15_5:1;
			__BYTE	P15_4:1;
			__BYTE	P15_3:1;
			__BYTE	P15_2:1;
			__BYTE	P15_1:1;
			__BYTE	P15_0:1;
		} bitc;
	} IO_PILR15;
	union {
		__BYTE	byte;
		struct {
			__BYTE	P16_7:1;
			__BYTE	RESV3361:1;
			__BYTE	RESV3362:1;
			__BYTE	RESV3363:1;
			__BYTE	P16_3:1;
			__BYTE	P16_2:1;
			__BYTE	P16_1:1;
			__BYTE	P16_0:1;
		} bit;
		struct {
			__BYTE	P16_7:1;
			__BYTE	RESV3361:1;
			__BYTE	RESV3362:1;
			__BYTE	RESV3363:1;
			__BYTE	P16_3:1;
			__BYTE	P16_2:1;
			__BYTE	P16_1:1;
			__BYTE	P16_0:1;
		} bitc;
	} IO_PILR16;
	union {
		__BYTE	byte;
		struct {
			__BYTE	P17_7:1;
			__BYTE	P17_6:1;
			__BYTE	P17_5:1;
			__BYTE	P17_4:1;
			__BYTE	P17_3:1;
			__BYTE	P17_2:1;
			__BYTE	P17_1:1;
			__BYTE	P17_0:1;
		} bit;
		struct {
			__BYTE	P17_7:1;
			__BYTE	P17_6:1;
			__BYTE	P17_5:1;
			__BYTE	P17_4:1;
			__BYTE	P17_3:1;
			__BYTE	P17_2:1;
			__BYTE	P17_1:1;
			__BYTE	P17_0:1;
		} bitc;
	} IO_PILR17;
	union {
		__BYTE	byte;
		struct {
			__BYTE	RESV3380:1;
			__BYTE	P18_6:1;
			__BYTE	P18_5:1;
			__BYTE	P18_4:1;
			__BYTE	RESV3384:1;
			__BYTE	P18_2:1;
			__BYTE	P18_1:1;
			__BYTE	P18_0:1;
		} bit;
		struct {
			__BYTE	RESV3380:1;
			__BYTE	P18_6:1;
			__BYTE	P18_5:1;
			__BYTE	P18_4:1;
			__BYTE	RESV3384:1;
			__BYTE	P18_2:1;
			__BYTE	P18_1:1;
			__BYTE	P18_0:1;
		} bitc;
	} IO_PILR18;
	union {
		__BYTE	byte;
		struct {
			__BYTE	RESV3390:1;
			__BYTE	RESV3391:1;
			__BYTE	RESV3392:1;
			__BYTE	RESV3393:1;
			__BYTE	RESV3394:1;
			__BYTE	P19_2:1;
			__BYTE	P19_1:1;
			__BYTE	P19_0:1;
		} bit;
		struct {
			__BYTE	RESV3390:1;
			__BYTE	RESV3391:1;
			__BYTE	RESV3392:1;
			__BYTE	RESV3393:1;
			__BYTE	RESV3394:1;
			__BYTE	P19_2:1;
			__BYTE	P19_1:1;
			__BYTE	P19_0:1;
		} bitc;
	} IO_PILR19;
	__BYTE	IO_RESV340;
	__BYTE	IO_RESV341;
	union {
		__BYTE	byte;
		struct {
			__BYTE	RESV3420:1;
			__BYTE	RESV3421:1;
			__BYTE	P22_5:1;
			__BYTE	P22_4:1;
			__BYTE	RESV3424:1;
			__BYTE	RESV3425:1;
			__BYTE	P22_1:1;
			__BYTE	P22_0:1;
		} bit;
		struct {
			__BYTE	RESV3420:1;
			__BYTE	RESV3421:1;
			__BYTE	P22_5:1;
			__BYTE	P22_4:1;
			__BYTE	RESV3424:1;
			__BYTE	RESV3425:1;
			__BYTE	P22_1:1;
			__BYTE	P22_0:1;
		} bitc;
	} IO_PILR22;
	union {
		__BYTE	byte;
		struct {
			__BYTE	RESV3430:1;
			__BYTE	RESV3431:1;
			__BYTE	RESV3432:1;
			__BYTE	RESV3433:1;
			__BYTE	RESV3434:1;
			__BYTE	RESV3435:1;
			__BYTE	P23_1:1;
			__BYTE	P23_0:1;
		} bit;
		struct {
			__BYTE	RESV3430:1;
			__BYTE	RESV3431:1;
			__BYTE	RESV3432:1;
			__BYTE	RESV3433:1;
			__BYTE	RESV3434:1;
			__BYTE	RESV3435:1;
			__BYTE	P23_1:1;
			__BYTE	P23_0:1;
		} bitc;
	} IO_PILR23;
	union {
		__BYTE	byte;
		struct {
			__BYTE	P24_7:1;
			__BYTE	P24_6:1;
			__BYTE	P24_5:1;
			__BYTE	P24_4:1;
			__BYTE	P24_3:1;
			__BYTE	P24_2:1;
			__BYTE	P24_1:1;
			__BYTE	P24_0:1;
		} bit;
		struct {
			__BYTE	P24_7:1;
			__BYTE	P24_6:1;
			__BYTE	P24_5:1;
			__BYTE	P24_4:1;
			__BYTE	P24_3:1;
			__BYTE	P24_2:1;
			__BYTE	P24_1:1;
			__BYTE	P24_0:1;
		} bitc;
	} IO_PILR24;
	__BYTE	IO_RESV345;
	__BYTE	IO_RESV346;
	union {
		__BYTE	byte;
		struct {
			__BYTE	RESV3470:1;
			__BYTE	RESV3471:1;
			__BYTE	RESV3472:1;
			__BYTE	RESV3473:1;
			__BYTE	P27_3:1;
			__BYTE	P27_2:1;
			__BYTE	P27_1:1;
			__BYTE	P27_0:1;
		} bit;
		struct {
			__BYTE	RESV3470:1;
			__BYTE	RESV3471:1;
			__BYTE	RESV3472:1;
			__BYTE	RESV3473:1;
			__BYTE	P27_3:1;
			__BYTE	P27_2:1;
			__BYTE	P27_1:1;
			__BYTE	P27_0:1;
		} bitc;
	} IO_PILR27;
	union {
		__BYTE	byte;
		struct {
			__BYTE	RESV3480:1;
			__BYTE	RESV3481:1;
			__BYTE	RESV3482:1;
			__BYTE	P28_4:1;
			__BYTE	P28_3:1;
			__BYTE	P28_2:1;
			__BYTE	P28_1:1;
			__BYTE	P28_0:1;
		} bit;
		struct {
			__BYTE	RESV3480:1;
			__BYTE	RESV3481:1;
			__BYTE	RESV3482:1;
			__BYTE	P28_4:1;
			__BYTE	P28_3:1;
			__BYTE	P28_2:1;
			__BYTE	P28_1:1;
			__BYTE	P28_0:1;
		} bitc;
	} IO_PILR28;
	union {
		__BYTE	byte;
		struct {
			__BYTE	P29_7:1;
			__BYTE	P29_6:1;
			__BYTE	P29_5:1;
			__BYTE	P29_4:1;
			__BYTE	P29_3:1;
			__BYTE	P29_2:1;
			__BYTE	P29_1:1;
			__BYTE	P29_0:1;
		} bit;
		struct {
			__BYTE	P29_7:1;
			__BYTE	P29_6:1;
			__BYTE	P29_5:1;
			__BYTE	P29_4:1;
			__BYTE	P29_3:1;
			__BYTE	P29_2:1;
			__BYTE	P29_1:1;
			__BYTE	P29_0:1;
		} bitc;
	} IO_PILR29;
	__BYTE	IO_RESV350;
	union {
		__BYTE	byte;
		struct {
			__BYTE	RESV3510:1;
			__BYTE	P31_6:1;
			__BYTE	P31_5:1;
			__BYTE	P31_4:1;
			__BYTE	RESV3514:1;
			__BYTE	P31_2:1;
			__BYTE	P31_1:1;
			__BYTE	P31_0:1;
		} bit;
		struct {
			__BYTE	RESV3510:1;
			__BYTE	P31_6:1;
			__BYTE	P31_5:1;
			__BYTE	P31_4:1;
			__BYTE	RESV3514:1;
			__BYTE	P31_2:1;
			__BYTE	P31_1:1;
			__BYTE	P31_0:1;
		} bitc;
	} IO_PILR31;
	__BYTE	IO_RESV352[CONSTANT_46];
	union {
		__BYTE	byte;
		struct {
			__BYTE	P14_7:1;
			__BYTE	P14_6:1;
			__BYTE	P14_5:1;
			__BYTE	P14_4:1;
			__BYTE	P14_3:1;
			__BYTE	P14_2:1;
			__BYTE	P14_1:1;
			__BYTE	P14_0:1;
		} bit;
		struct {
			__BYTE	P14_7:1;
			__BYTE	P14_6:1;
			__BYTE	P14_5:1;
			__BYTE	P14_4:1;
			__BYTE	P14_3:1;
			__BYTE	P14_2:1;
			__BYTE	P14_1:1;
			__BYTE	P14_0:1;
		} bitc;
	} IO_EPILR14;
	union {
		__BYTE	byte;
		struct {
			__BYTE	RESV3990:1;
			__BYTE	RESV3991:1;
			__BYTE	P15_5:1;
			__BYTE	P15_4:1;
			__BYTE	P15_3:1;
			__BYTE	P15_2:1;
			__BYTE	P15_1:1;
			__BYTE	P15_0:1;
		} bit;
		struct {
			__BYTE	RESV3990:1;
			__BYTE	RESV3991:1;
			__BYTE	P15_5:1;
			__BYTE	P15_4:1;
			__BYTE	P15_3:1;
			__BYTE	P15_2:1;
			__BYTE	P15_1:1;
			__BYTE	P15_0:1;
		} bitc;
	} IO_EPILR15;
	union {
		__BYTE	byte;
		struct {
			__BYTE	P16_7:1;
			__BYTE	RESV4001:1;
			__BYTE	RESV4002:1;
			__BYTE	RESV4003:1;
			__BYTE	P16_3:1;
			__BYTE	P16_2:1;
			__BYTE	P16_1:1;
			__BYTE	P16_0:1;
		} bit;
		struct {
			__BYTE	P16_7:1;
			__BYTE	RESV4001:1;
			__BYTE	RESV4002:1;
			__BYTE	RESV4003:1;
			__BYTE	P16_3:1;
			__BYTE	P16_2:1;
			__BYTE	P16_1:1;
			__BYTE	P16_0:1;
		} bitc;
	} IO_EPILR16;
	union {
		__BYTE	byte;
		struct {
			__BYTE	P17_7:1;
			__BYTE	P17_6:1;
			__BYTE	P17_5:1;
			__BYTE	P17_4:1;
			__BYTE	P17_3:1;
			__BYTE	P17_2:1;
			__BYTE	P17_1:1;
			__BYTE	P17_0:1;
		} bit;
		struct {
			__BYTE	P17_7:1;
			__BYTE	P17_6:1;
			__BYTE	P17_5:1;
			__BYTE	P17_4:1;
			__BYTE	P17_3:1;
			__BYTE	P17_2:1;
			__BYTE	P17_1:1;
			__BYTE	P17_0:1;
		} bitc;
	} IO_EPILR17;
	union {
		__BYTE	byte;
		struct {
			__BYTE	RESV4020:1;
			__BYTE	P18_6:1;
			__BYTE	P18_5:1;
			__BYTE	P18_4:1;
			__BYTE	RESV4024:1;
			__BYTE	P18_2:1;
			__BYTE	P18_1:1;
			__BYTE	P18_0:1;
		} bit;
		struct {
			__BYTE	RESV4020:1;
			__BYTE	P18_6:1;
			__BYTE	P18_5:1;
			__BYTE	P18_4:1;
			__BYTE	RESV4024:1;
			__BYTE	P18_2:1;
			__BYTE	P18_1:1;
			__BYTE	P18_0:1;
		} bitc;
	} IO_EPILR18;
	union {
		__BYTE	byte;
		struct {
			__BYTE	RESV4030:1;
			__BYTE	RESV4031:1;
			__BYTE	RESV4032:1;
			__BYTE	RESV4033:1;
			__BYTE	RESV4034:1;
			__BYTE	P19_2:1;
			__BYTE	P19_1:1;
			__BYTE	P19_0:1;
		} bit;
		struct {
			__BYTE	RESV4030:1;
			__BYTE	RESV4031:1;
			__BYTE	RESV4032:1;
			__BYTE	RESV4033:1;
			__BYTE	RESV4034:1;
			__BYTE	P19_2:1;
			__BYTE	P19_1:1;
			__BYTE	P19_0:1;
		} bitc;
	} IO_EPILR19;
	__BYTE	IO_RESV404;
	__BYTE	IO_RESV405;
	union {
		__BYTE	byte;
		struct {
			__BYTE	RESV4060:1;
			__BYTE	RESV4061:1;
			__BYTE	P22_5:1;
			__BYTE	P22_4:1;
			__BYTE	RESV4064:1;
			__BYTE	RESV4065:1;
			__BYTE	P22_1:1;
			__BYTE	P22_0:1;
		} bit;
		struct {
			__BYTE	RESV4060:1;
			__BYTE	RESV4061:1;
			__BYTE	P22_5:1;
			__BYTE	P22_4:1;
			__BYTE	RESV4064:1;
			__BYTE	RESV4065:1;
			__BYTE	P22_1:1;
			__BYTE	P22_0:1;
		} bitc;
	} IO_EPILR22;
	union {
		__BYTE	byte;
		struct {
			__BYTE	RESV4070:1;
			__BYTE	RESV4071:1;
			__BYTE	RESV4072:1;
			__BYTE	RESV4073:1;
			__BYTE	RESV4074:1;
			__BYTE	RESV4075:1;
			__BYTE	P23_1:1;
			__BYTE	P23_0:1;
		} bit;
		struct {
			__BYTE	RESV4070:1;
			__BYTE	RESV4071:1;
			__BYTE	RESV4072:1;
			__BYTE	RESV4073:1;
			__BYTE	RESV4074:1;
			__BYTE	RESV4075:1;
			__BYTE	P23_1:1;
			__BYTE	P23_0:1;
		} bitc;
	} IO_EPILR23;
	union {
		__BYTE	byte;
		struct {
			__BYTE	P24_7:1;
			__BYTE	P24_6:1;
			__BYTE	P24_5:1;
			__BYTE	P24_4:1;
			__BYTE	P24_3:1;
			__BYTE	P24_2:1;
			__BYTE	P24_1:1;
			__BYTE	P24_0:1;
		} bit;
		struct {
			__BYTE	P24_7:1;
			__BYTE	P24_6:1;
			__BYTE	P24_5:1;
			__BYTE	P24_4:1;
			__BYTE	P24_3:1;
			__BYTE	P24_2:1;
			__BYTE	P24_1:1;
			__BYTE	P24_0:1;
		} bitc;
	} IO_EPILR24;
	__BYTE	IO_RESV409;
	__BYTE	IO_RESV410;
	union {
		__BYTE	byte;
		struct {
			__BYTE	RESV4110:1;
			__BYTE	RESV4111:1;
			__BYTE	RESV4112:1;
			__BYTE	RESV4113:1;
			__BYTE	P27_3:1;
			__BYTE	P27_2:1;
			__BYTE	P27_1:1;
			__BYTE	P27_0:1;
		} bit;
		struct {
			__BYTE	RESV4110:1;
			__BYTE	RESV4111:1;
			__BYTE	RESV4112:1;
			__BYTE	RESV4113:1;
			__BYTE	P27_3:1;
			__BYTE	P27_2:1;
			__BYTE	P27_1:1;
			__BYTE	P27_0:1;
		} bitc;
	} IO_EPILR27;
	union {
		__BYTE	byte;
		struct {
			__BYTE	RESV4120:1;
			__BYTE	RESV4121:1;
			__BYTE	RESV4122:1;
			__BYTE	P28_4:1;
			__BYTE	P28_3:1;
			__BYTE	P28_2:1;
			__BYTE	P28_1:1;
			__BYTE	P28_0:1;
		} bit;
		struct {
			__BYTE	RESV4120:1;
			__BYTE	RESV4121:1;
			__BYTE	RESV4122:1;
			__BYTE	P28_4:1;
			__BYTE	P28_3:1;
			__BYTE	P28_2:1;
			__BYTE	P28_1:1;
			__BYTE	P28_0:1;
		} bitc;
	} IO_EPILR28;
	union {
		__BYTE	byte;
		struct {
			__BYTE	P29_7:1;
			__BYTE	P29_6:1;
			__BYTE	P29_5:1;
			__BYTE	P29_4:1;
			__BYTE	P29_3:1;
			__BYTE	P29_2:1;
			__BYTE	P29_1:1;
			__BYTE	P29_0:1;
		} bit;
		struct {
			__BYTE	P29_7:1;
			__BYTE	P29_6:1;
			__BYTE	P29_5:1;
			__BYTE	P29_4:1;
			__BYTE	P29_3:1;
			__BYTE	P29_2:1;
			__BYTE	P29_1:1;
			__BYTE	P29_0:1;
		} bitc;
	} IO_EPILR29;
	__BYTE	IO_RESV414;
	union {
		__BYTE	byte;
		struct {
			__BYTE	RESV4150:1;
			__BYTE	P31_6:1;
			__BYTE	P31_5:1;
			__BYTE	P31_4:1;
			__BYTE	RESV4154:1;
			__BYTE	P31_2:1;
			__BYTE	P31_1:1;
			__BYTE	P31_0:1;
		} bit;
		struct {
			__BYTE	RESV4150:1;
			__BYTE	P31_6:1;
			__BYTE	P31_5:1;
			__BYTE	P31_4:1;
			__BYTE	RESV4154:1;
			__BYTE	P31_2:1;
			__BYTE	P31_1:1;
			__BYTE	P31_0:1;
		} bitc;
	} IO_EPILR31;
	__BYTE	IO_RESV416[CONSTANT_46];
	union {
		__BYTE	byte;
		struct {
			__BYTE	P14_7:1;
			__BYTE	P14_6:1;
			__BYTE	P14_5:1;
			__BYTE	P14_4:1;
			__BYTE	P14_3:1;
			__BYTE	P14_2:1;
			__BYTE	P14_1:1;
			__BYTE	P14_0:1;
		} bit;
		struct {
			__BYTE	P14_7:1;
			__BYTE	P14_6:1;
			__BYTE	P14_5:1;
			__BYTE	P14_4:1;
			__BYTE	P14_3:1;
			__BYTE	P14_2:1;
			__BYTE	P14_1:1;
			__BYTE	P14_0:1;
		} bitc;
	} IO_PPER14;
	union {
		__BYTE	byte;
		struct {
			__BYTE	RESV4630:1;
			__BYTE	RESV4631:1;
			__BYTE	P15_5:1;
			__BYTE	P15_4:1;
			__BYTE	P15_3:1;
			__BYTE	P15_2:1;
			__BYTE	P15_1:1;
			__BYTE	P15_0:1;
		} bit;
		struct {
			__BYTE	RESV4630:1;
			__BYTE	RESV4631:1;
			__BYTE	P15_5:1;
			__BYTE	P15_4:1;
			__BYTE	P15_3:1;
			__BYTE	P15_2:1;
			__BYTE	P15_1:1;
			__BYTE	P15_0:1;
		} bitc;
	} IO_PPER15;
	union {
		__BYTE	byte;
		struct {
			__BYTE	P16_7:1;
			__BYTE	RESV4641:1;
			__BYTE	RESV4642:1;
			__BYTE	RESV4643:1;
			__BYTE	P16_3:1;
			__BYTE	P16_2:1;
			__BYTE	P16_1:1;
			__BYTE	P16_0:1;
		} bit;
		struct {
			__BYTE	P16_7:1;
			__BYTE	RESV4641:1;
			__BYTE	RESV4642:1;
			__BYTE	RESV4643:1;
			__BYTE	P16_3:1;
			__BYTE	P16_2:1;
			__BYTE	P16_1:1;
			__BYTE	P16_0:1;
		} bitc;
	} IO_PPER16;
	union {
		__BYTE	byte;
		struct {
			__BYTE	P17_7:1;
			__BYTE	P17_6:1;
			__BYTE	P17_5:1;
			__BYTE	P17_4:1;
			__BYTE	P17_3:1;
			__BYTE	P17_2:1;
			__BYTE	P17_1:1;
			__BYTE	P17_0:1;
		} bit;
		struct {
			__BYTE	P17_7:1;
			__BYTE	P17_6:1;
			__BYTE	P17_5:1;
			__BYTE	P17_4:1;
			__BYTE	P17_3:1;
			__BYTE	P17_2:1;
			__BYTE	P17_1:1;
			__BYTE	P17_0:1;
		} bitc;
	} IO_PPER17;
	union {
		__BYTE	byte;
		struct {
			__BYTE	RESV4660:1;
			__BYTE	P18_6:1;
			__BYTE	P18_5:1;
			__BYTE	P18_4:1;
			__BYTE	RESV4664:1;
			__BYTE	P18_2:1;
			__BYTE	P18_1:1;
			__BYTE	P18_0:1;
		} bit;
		struct {
			__BYTE	RESV4660:1;
			__BYTE	P18_6:1;
			__BYTE	P18_5:1;
			__BYTE	P18_4:1;
			__BYTE	RESV4664:1;
			__BYTE	P18_2:1;
			__BYTE	P18_1:1;
			__BYTE	P18_0:1;
		} bitc;
	} IO_PPER18;
	union {
		__BYTE	byte;
		struct {
			__BYTE	RESV4670:1;
			__BYTE	RESV4671:1;
			__BYTE	RESV4672:1;
			__BYTE	RESV4673:1;
			__BYTE	RESV4674:1;
			__BYTE	P19_2:1;
			__BYTE	P19_1:1;
			__BYTE	P19_0:1;
		} bit;
		struct {
			__BYTE	RESV4670:1;
			__BYTE	RESV4671:1;
			__BYTE	RESV4672:1;
			__BYTE	RESV4673:1;
			__BYTE	RESV4674:1;
			__BYTE	P19_2:1;
			__BYTE	P19_1:1;
			__BYTE	P19_0:1;
		} bitc;
	} IO_PPER19;
	__BYTE	IO_RESV468;
	__BYTE	IO_RESV469;
	union {
		__BYTE	byte;
		struct {
			__BYTE	RESV4700:1;
			__BYTE	RESV4701:1;
			__BYTE	P22_5:1;
			__BYTE	P22_4:1;
			__BYTE	RESV4704:1;
			__BYTE	RESV4705:1;
			__BYTE	P22_1:1;
			__BYTE	P22_0:1;
		} bit;
		struct {
			__BYTE	RESV4700:1;
			__BYTE	RESV4701:1;
			__BYTE	P22_5:1;
			__BYTE	P22_4:1;
			__BYTE	RESV4704:1;
			__BYTE	RESV4705:1;
			__BYTE	P22_1:1;
			__BYTE	P22_0:1;
		} bitc;
	} IO_PPER22;
	union {
		__BYTE	byte;
		struct {
			__BYTE	RESV4710:1;
			__BYTE	RESV4711:1;
			__BYTE	RESV4712:1;
			__BYTE	RESV4713:1;
			__BYTE	RESV4714:1;
			__BYTE	RESV4715:1;
			__BYTE	P23_1:1;
			__BYTE	P23_0:1;
		} bit;
		struct {
			__BYTE	RESV4710:1;
			__BYTE	RESV4711:1;
			__BYTE	RESV4712:1;
			__BYTE	RESV4713:1;
			__BYTE	RESV4714:1;
			__BYTE	RESV4715:1;
			__BYTE	P23_1:1;
			__BYTE	P23_0:1;
		} bitc;
	} IO_PPER23;
	union {
		__BYTE	byte;
		struct {
			__BYTE	P24_7:1;
			__BYTE	P24_6:1;
			__BYTE	P24_5:1;
			__BYTE	P24_4:1;
			__BYTE	P24_3:1;
			__BYTE	P24_2:1;
			__BYTE	P24_1:1;
			__BYTE	P24_0:1;
		} bit;
		struct {
			__BYTE	P24_7:1;
			__BYTE	P24_6:1;
			__BYTE	P24_5:1;
			__BYTE	P24_4:1;
			__BYTE	P24_3:1;
			__BYTE	P24_2:1;
			__BYTE	P24_1:1;
			__BYTE	P24_0:1;
		} bitc;
	} IO_PPER24;
	__BYTE	IO_RESV473;
	__BYTE	IO_RESV474;
	union {
		__BYTE	byte;
		struct {
			__BYTE	RESV4750:1;
			__BYTE	RESV4751:1;
			__BYTE	RESV4752:1;
			__BYTE	RESV4753:1;
			__BYTE	P27_3:1;
			__BYTE	P27_2:1;
			__BYTE	P27_1:1;
			__BYTE	P27_0:1;
		} bit;
		struct {
			__BYTE	RESV4750:1;
			__BYTE	RESV4751:1;
			__BYTE	RESV4752:1;
			__BYTE	RESV4753:1;
			__BYTE	P27_3:1;
			__BYTE	P27_2:1;
			__BYTE	P27_1:1;
			__BYTE	P27_0:1;
		} bitc;
	} IO_PPER27;
	union {
		__BYTE	byte;
		struct {
			__BYTE	RESV4760:1;
			__BYTE	RESV4761:1;
			__BYTE	RESV4762:1;
			__BYTE	P28_4:1;
			__BYTE	P28_3:1;
			__BYTE	P28_2:1;
			__BYTE	P28_1:1;
			__BYTE	P28_0:1;
		} bit;
		struct {
			__BYTE	RESV4760:1;
			__BYTE	RESV4761:1;
			__BYTE	RESV4762:1;
			__BYTE	P28_4:1;
			__BYTE	P28_3:1;
			__BYTE	P28_2:1;
			__BYTE	P28_1:1;
			__BYTE	P28_0:1;
		} bitc;
	} IO_PPER28;
	union {
		__BYTE	byte;
		struct {
			__BYTE	P29_7:1;
			__BYTE	P29_6:1;
			__BYTE	P29_5:1;
			__BYTE	P29_4:1;
			__BYTE	P29_3:1;
			__BYTE	P29_2:1;
			__BYTE	P29_1:1;
			__BYTE	P29_0:1;
		} bit;
		struct {
			__BYTE	P29_7:1;
			__BYTE	P29_6:1;
			__BYTE	P29_5:1;
			__BYTE	P29_4:1;
			__BYTE	P29_3:1;
			__BYTE	P29_2:1;
			__BYTE	P29_1:1;
			__BYTE	P29_0:1;
		} bitc;
	} IO_PPER29;
	__BYTE	IO_RESV478;
	union {
		__BYTE	byte;
		struct {
			__BYTE	RESV4790:1;
			__BYTE	P31_6:1;
			__BYTE	P31_5:1;
			__BYTE	P31_4:1;
			__BYTE	RESV4794:1;
			__BYTE	P31_2:1;
			__BYTE	P31_1:1;
			__BYTE	P31_0:1;
		} bit;
		struct {
			__BYTE	RESV4790:1;
			__BYTE	P31_6:1;
			__BYTE	P31_5:1;
			__BYTE	P31_4:1;
			__BYTE	RESV4794:1;
			__BYTE	P31_2:1;
			__BYTE	P31_1:1;
			__BYTE	P31_0:1;
		} bitc;
	} IO_PPER31;
	__BYTE	IO_RESV480[CONSTANT_46];
	union {
		__BYTE	byte;
		struct {
			__BYTE	P14_7:1;
			__BYTE	P14_6:1;
			__BYTE	P14_5:1;
			__BYTE	P14_4:1;
			__BYTE	P14_3:1;
			__BYTE	P14_2:1;
			__BYTE	P14_1:1;
			__BYTE	P14_0:1;
		} bit;
		struct {
			__BYTE	P14_7:1;
			__BYTE	P14_6:1;
			__BYTE	P14_5:1;
			__BYTE	P14_4:1;
			__BYTE	P14_3:1;
			__BYTE	P14_2:1;
			__BYTE	P14_1:1;
			__BYTE	P14_0:1;
		} bitc;
	} IO_PPCR14;
	union {
		__BYTE	byte;
		struct {
			__BYTE	RESV5270:1;
			__BYTE	RESV5271:1;
			__BYTE	P15_5:1;
			__BYTE	P15_4:1;
			__BYTE	P15_3:1;
			__BYTE	P15_2:1;
			__BYTE	P15_1:1;
			__BYTE	P15_0:1;
		} bit;
		struct {
			__BYTE	RESV5270:1;
			__BYTE	RESV5271:1;
			__BYTE	P15_5:1;
			__BYTE	P15_4:1;
			__BYTE	P15_3:1;
			__BYTE	P15_2:1;
			__BYTE	P15_1:1;
			__BYTE	P15_0:1;
		} bitc;
	} IO_PPCR15;
	union {
		__BYTE	byte;
		struct {
			__BYTE	P16_7:1;
			__BYTE	RESV5281:1;
			__BYTE	RESV5282:1;
			__BYTE	RESV5283:1;
			__BYTE	P16_3:1;
			__BYTE	P16_2:1;
			__BYTE	P16_1:1;
			__BYTE	P16_0:1;
		} bit;
		struct {
			__BYTE	P16_7:1;
			__BYTE	RESV5281:1;
			__BYTE	RESV5282:1;
			__BYTE	RESV5283:1;
			__BYTE	P16_3:1;
			__BYTE	P16_2:1;
			__BYTE	P16_1:1;
			__BYTE	P16_0:1;
		} bitc;
	} IO_PPCR16;
	union {
		__BYTE	byte;
		struct {
			__BYTE	P17_7:1;
			__BYTE	P17_6:1;
			__BYTE	P17_5:1;
			__BYTE	P17_4:1;
			__BYTE	P17_3:1;
			__BYTE	P17_2:1;
			__BYTE	P17_1:1;
			__BYTE	P17_0:1;
		} bit;
		struct {
			__BYTE	P17_7:1;
			__BYTE	P17_6:1;
			__BYTE	P17_5:1;
			__BYTE	P17_4:1;
			__BYTE	P17_3:1;
			__BYTE	P17_2:1;
			__BYTE	P17_1:1;
			__BYTE	P17_0:1;
		} bitc;
	} IO_PPCR17;
	union {
		__BYTE	byte;
		struct {
			__BYTE	RESV5300:1;
			__BYTE	P18_6:1;
			__BYTE	P18_5:1;
			__BYTE	P18_4:1;
			__BYTE	RESV5304:1;
			__BYTE	P18_2:1;
			__BYTE	P18_1:1;
			__BYTE	P18_0:1;
		} bit;
		struct {
			__BYTE	RESV5300:1;
			__BYTE	P18_6:1;
			__BYTE	P18_5:1;
			__BYTE	P18_4:1;
			__BYTE	RESV5304:1;
			__BYTE	P18_2:1;
			__BYTE	P18_1:1;
			__BYTE	P18_0:1;
		} bitc;
	} IO_PPCR18;
	union {
		__BYTE	byte;
		struct {
			__BYTE	RESV5310:1;
			__BYTE	RESV5311:1;
			__BYTE	RESV5312:1;
			__BYTE	RESV5313:1;
			__BYTE	RESV5314:1;
			__BYTE	P19_2:1;
			__BYTE	P19_1:1;
			__BYTE	P19_0:1;
		} bit;
		struct {
			__BYTE	RESV5310:1;
			__BYTE	RESV5311:1;
			__BYTE	RESV5312:1;
			__BYTE	RESV5313:1;
			__BYTE	RESV5314:1;
			__BYTE	P19_2:1;
			__BYTE	P19_1:1;
			__BYTE	P19_0:1;
		} bitc;
	} IO_PPCR19;
	__BYTE	IO_RESV532;
	__BYTE	IO_RESV533;
	union {
		__BYTE	byte;
		struct {
			__BYTE	RESV5340:1;
			__BYTE	RESV5341:1;
			__BYTE	P22_5:1;
			__BYTE	P22_4:1;
			__BYTE	RESV5344:1;
			__BYTE	RESV5345:1;
			__BYTE	P22_1:1;
			__BYTE	P22_0:1;
		} bit;
		struct {
			__BYTE	RESV5340:1;
			__BYTE	RESV5341:1;
			__BYTE	P22_5:1;
			__BYTE	P22_4:1;
			__BYTE	RESV5344:1;
			__BYTE	RESV5345:1;
			__BYTE	P22_1:1;
			__BYTE	P22_0:1;
		} bitc;
	} IO_PPCR22;
	union {
		__BYTE	byte;
		struct {
			__BYTE	RESV5350:1;
			__BYTE	RESV5351:1;
			__BYTE	RESV5352:1;
			__BYTE	RESV5353:1;
			__BYTE	RESV5354:1;
			__BYTE	RESV5355:1;
			__BYTE	P23_1:1;
			__BYTE	P23_0:1;
		} bit;
		struct {
			__BYTE	RESV5350:1;
			__BYTE	RESV5351:1;
			__BYTE	RESV5352:1;
			__BYTE	RESV5353:1;
			__BYTE	RESV5354:1;
			__BYTE	RESV5355:1;
			__BYTE	P23_1:1;
			__BYTE	P23_0:1;
		} bitc;
	} IO_PPCR23;
	union {
		__BYTE	byte;
		struct {
			__BYTE	P24_7:1;
			__BYTE	P24_6:1;
			__BYTE	P24_5:1;
			__BYTE	P24_4:1;
			__BYTE	P24_3:1;
			__BYTE	P24_2:1;
			__BYTE	P24_1:1;
			__BYTE	P24_0:1;
		} bit;
		struct {
			__BYTE	P24_7:1;
			__BYTE	P24_6:1;
			__BYTE	P24_5:1;
			__BYTE	P24_4:1;
			__BYTE	P24_3:1;
			__BYTE	P24_2:1;
			__BYTE	P24_1:1;
			__BYTE	P24_0:1;
		} bitc;
	} IO_PPCR24;
	__BYTE	IO_RESV537;
	__BYTE	IO_RESV538;
	union {
		__BYTE	byte;
		struct {
			__BYTE	RESV5390:1;
			__BYTE	RESV5391:1;
			__BYTE	RESV5392:1;
			__BYTE	RESV5393:1;
			__BYTE	P27_3:1;
			__BYTE	P27_2:1;
			__BYTE	P27_1:1;
			__BYTE	P27_0:1;
		} bit;
		struct {
			__BYTE	RESV5390:1;
			__BYTE	RESV5391:1;
			__BYTE	RESV5392:1;
			__BYTE	RESV5393:1;
			__BYTE	P27_3:1;
			__BYTE	P27_2:1;
			__BYTE	P27_1:1;
			__BYTE	P27_0:1;
		} bitc;
	} IO_PPCR27;
	union {
		__BYTE	byte;
		struct {
			__BYTE	RESV5400:1;
			__BYTE	RESV5401:1;
			__BYTE	RESV5402:1;
			__BYTE	P28_4:1;
			__BYTE	P28_3:1;
			__BYTE	P28_2:1;
			__BYTE	P28_1:1;
			__BYTE	P28_0:1;
		} bit;
		struct {
			__BYTE	RESV5400:1;
			__BYTE	RESV5401:1;
			__BYTE	RESV5402:1;
			__BYTE	P28_4:1;
			__BYTE	P28_3:1;
			__BYTE	P28_2:1;
			__BYTE	P28_1:1;
			__BYTE	P28_0:1;
		} bitc;
	} IO_PPCR28;
	union {
		__BYTE	byte;
		struct {
			__BYTE	P29_7:1;
			__BYTE	P29_6:1;
			__BYTE	P29_5:1;
			__BYTE	P29_4:1;
			__BYTE	P29_3:1;
			__BYTE	P29_2:1;
			__BYTE	P29_1:1;
			__BYTE	P29_0:1;
		} bit;
		struct {
			__BYTE	P29_7:1;
			__BYTE	P29_6:1;
			__BYTE	P29_5:1;
			__BYTE	P29_4:1;
			__BYTE	P29_3:1;
			__BYTE	P29_2:1;
			__BYTE	P29_1:1;
			__BYTE	P29_0:1;
		} bitc;
	} IO_PPCR29;
	__BYTE	IO_RESV542;
	union {
		__BYTE	byte;
		struct {
			__BYTE	RESV5430:1;
			__BYTE	P31_6:1;
			__BYTE	P31_5:1;
			__BYTE	P31_4:1;
			__BYTE	RESV5434:1;
			__BYTE	P31_2:1;
			__BYTE	P31_1:1;
			__BYTE	P31_0:1;
		} bit;
		struct {
			__BYTE	RESV5430:1;
			__BYTE	P31_6:1;
			__BYTE	P31_5:1;
			__BYTE	P31_4:1;
			__BYTE	RESV5434:1;
			__BYTE	P31_2:1;
			__BYTE	P31_1:1;
			__BYTE	P31_0:1;
		} bitc;
	} IO_PPCR31;
} IO_PORT2;

#define	PORT2_PDRD14			(IO_PORT2.IO_PDRD14.byte)
#define	PORT2_PDRD14_P14_7    	(IO_PORT2.IO_PDRD14.bit.P14_7)
#define	PORT2_PDRD14_P14_6    	(IO_PORT2.IO_PDRD14.bit.P14_6)
#define	PORT2_PDRD14_P14_5    	(IO_PORT2.IO_PDRD14.bit.P14_5)
#define	PORT2_PDRD14_P14_4    	(IO_PORT2.IO_PDRD14.bit.P14_4)
#define	PORT2_PDRD14_P14_3    	(IO_PORT2.IO_PDRD14.bit.P14_3)
#define	PORT2_PDRD14_P14_2    	(IO_PORT2.IO_PDRD14.bit.P14_2)
#define	PORT2_PDRD14_P14_1    	(IO_PORT2.IO_PDRD14.bit.P14_1)
#define	PORT2_PDRD14_P14_0    	(IO_PORT2.IO_PDRD14.bit.P14_0)
#define	PORT2_PDRD15			(IO_PORT2.IO_PDRD15.byte)
#define	PORT2_PDRD15_P15_5    	(IO_PORT2.IO_PDRD15.bit.P15_5)
#define	PORT2_PDRD15_P15_4    	(IO_PORT2.IO_PDRD15.bit.P15_4)
#define	PORT2_PDRD15_P15_3    	(IO_PORT2.IO_PDRD15.bit.P15_3)
#define	PORT2_PDRD15_P15_2    	(IO_PORT2.IO_PDRD15.bit.P15_2)
#define	PORT2_PDRD15_P15_1    	(IO_PORT2.IO_PDRD15.bit.P15_1)
#define	PORT2_PDRD15_P15_0    	(IO_PORT2.IO_PDRD15.bit.P15_0)
#define	PORT2_PDRD16			(IO_PORT2.IO_PDRD16.byte)
#define	PORT2_PDRD16_P16_7    	(IO_PORT2.IO_PDRD16.bit.P16_7)
#define	PORT2_PDRD16_P16_3    	(IO_PORT2.IO_PDRD16.bit.P16_3)
#define	PORT2_PDRD16_P16_2    	(IO_PORT2.IO_PDRD16.bit.P16_2)
#define	PORT2_PDRD16_P16_1    	(IO_PORT2.IO_PDRD16.bit.P16_1)
#define	PORT2_PDRD16_P16_0    	(IO_PORT2.IO_PDRD16.bit.P16_0)
#define	PORT2_PDRD17			(IO_PORT2.IO_PDRD17.byte)
#define	PORT2_PDRD17_P17_7    	(IO_PORT2.IO_PDRD17.bit.P17_7)
#define	PORT2_PDRD17_P17_6    	(IO_PORT2.IO_PDRD17.bit.P17_6)
#define	PORT2_PDRD17_P17_5    	(IO_PORT2.IO_PDRD17.bit.P17_5)
#define	PORT2_PDRD17_P17_4    	(IO_PORT2.IO_PDRD17.bit.P17_4)
#define	PORT2_PDRD17_P17_3    	(IO_PORT2.IO_PDRD17.bit.P17_3)
#define	PORT2_PDRD17_P17_2    	(IO_PORT2.IO_PDRD17.bit.P17_2)
#define	PORT2_PDRD17_P17_1    	(IO_PORT2.IO_PDRD17.bit.P17_1)
#define	PORT2_PDRD17_P17_0    	(IO_PORT2.IO_PDRD17.bit.P17_0)
#define	PORT2_PDRD18			(IO_PORT2.IO_PDRD18.byte)
#define	PORT2_PDRD18_P18_6    	(IO_PORT2.IO_PDRD18.bit.P18_6)
#define	PORT2_PDRD18_P18_5    	(IO_PORT2.IO_PDRD18.bit.P18_5)
#define	PORT2_PDRD18_P18_4    	(IO_PORT2.IO_PDRD18.bit.P18_4)
#define	PORT2_PDRD18_P18_2    	(IO_PORT2.IO_PDRD18.bit.P18_2)
#define	PORT2_PDRD18_P18_1    	(IO_PORT2.IO_PDRD18.bit.P18_1)
#define	PORT2_PDRD18_P18_0    	(IO_PORT2.IO_PDRD18.bit.P18_0)
#define	PORT2_PDRD19			(IO_PORT2.IO_PDRD19.byte)
#define	PORT2_PDRD19_P19_2    	(IO_PORT2.IO_PDRD19.bit.P19_2)
#define	PORT2_PDRD19_P19_1    	(IO_PORT2.IO_PDRD19.bit.P19_1)
#define	PORT2_PDRD19_P19_0    	(IO_PORT2.IO_PDRD19.bit.P19_0)
#define	PORT2_PDRD22			(IO_PORT2.IO_PDRD22.byte)
#define	PORT2_PDRD22_P22_5    	(IO_PORT2.IO_PDRD22.bit.P22_5)
#define	PORT2_PDRD22_P22_4    	(IO_PORT2.IO_PDRD22.bit.P22_4)
#define	PORT2_PDRD22_P22_1    	(IO_PORT2.IO_PDRD22.bit.P22_1)
#define	PORT2_PDRD22_P22_0    	(IO_PORT2.IO_PDRD22.bit.P22_0)
#define	PORT2_PDRD23			(IO_PORT2.IO_PDRD23.byte)
#define	PORT2_PDRD23_P23_1    	(IO_PORT2.IO_PDRD23.bit.P23_1)
#define	PORT2_PDRD23_P23_0    	(IO_PORT2.IO_PDRD23.bit.P23_0)
#define	PORT2_PDRD24			(IO_PORT2.IO_PDRD24.byte)
#define	PORT2_PDRD24_P24_7    	(IO_PORT2.IO_PDRD24.bit.P24_7)
#define	PORT2_PDRD24_P24_6    	(IO_PORT2.IO_PDRD24.bit.P24_6)
#define	PORT2_PDRD24_P24_5    	(IO_PORT2.IO_PDRD24.bit.P24_5)
#define	PORT2_PDRD24_P24_4    	(IO_PORT2.IO_PDRD24.bit.P24_4)
#define	PORT2_PDRD24_P24_3    	(IO_PORT2.IO_PDRD24.bit.P24_3)
#define	PORT2_PDRD24_P24_2    	(IO_PORT2.IO_PDRD24.bit.P24_2)
#define	PORT2_PDRD24_P24_1    	(IO_PORT2.IO_PDRD24.bit.P24_1)
#define	PORT2_PDRD24_P24_0    	(IO_PORT2.IO_PDRD24.bit.P24_0)
#define	PORT2_PDRD27			(IO_PORT2.IO_PDRD27.byte)
#define	PORT2_PDRD27_P27_3    	(IO_PORT2.IO_PDRD27.bit.P27_3)
#define	PORT2_PDRD27_P27_2    	(IO_PORT2.IO_PDRD27.bit.P27_2)
#define	PORT2_PDRD27_P27_1    	(IO_PORT2.IO_PDRD27.bit.P27_1)
#define	PORT2_PDRD27_P27_0    	(IO_PORT2.IO_PDRD27.bit.P27_0)
#define	PORT2_PDRD28			(IO_PORT2.IO_PDRD28.byte)
#define	PORT2_PDRD28_P28_4    	(IO_PORT2.IO_PDRD28.bit.P28_4)
#define	PORT2_PDRD28_P28_3    	(IO_PORT2.IO_PDRD28.bit.P28_3)
#define	PORT2_PDRD28_P28_2    	(IO_PORT2.IO_PDRD28.bit.P28_2)
#define	PORT2_PDRD28_P28_1    	(IO_PORT2.IO_PDRD28.bit.P28_1)
#define	PORT2_PDRD28_P28_0    	(IO_PORT2.IO_PDRD28.bit.P28_0)
#define	PORT2_PDRD29			(IO_PORT2.IO_PDRD29.byte)
#define	PORT2_PDRD29_P29_7    	(IO_PORT2.IO_PDRD29.bit.P29_7)
#define	PORT2_PDRD29_P29_6    	(IO_PORT2.IO_PDRD29.bit.P29_6)
#define	PORT2_PDRD29_P29_5    	(IO_PORT2.IO_PDRD29.bit.P29_5)
#define	PORT2_PDRD29_P29_4    	(IO_PORT2.IO_PDRD29.bit.P29_4)
#define	PORT2_PDRD29_P29_3    	(IO_PORT2.IO_PDRD29.bit.P29_3)
#define	PORT2_PDRD29_P29_2    	(IO_PORT2.IO_PDRD29.bit.P29_2)
#define	PORT2_PDRD29_P29_1    	(IO_PORT2.IO_PDRD29.bit.P29_1)
#define	PORT2_PDRD29_P29_0    	(IO_PORT2.IO_PDRD29.bit.P29_0)
#define	PORT2_PDRD31			(IO_PORT2.IO_PDRD31.byte)
#define	PORT2_PDRD31_P31_6    	(IO_PORT2.IO_PDRD31.bit.P31_6)
#define	PORT2_PDRD31_P31_5    	(IO_PORT2.IO_PDRD31.bit.P31_5)
#define	PORT2_PDRD31_P31_4    	(IO_PORT2.IO_PDRD31.bit.P31_4)
#define	PORT2_PDRD31_P31_2    	(IO_PORT2.IO_PDRD31.bit.P31_2)
#define	PORT2_PDRD31_P31_1    	(IO_PORT2.IO_PDRD31.bit.P31_1)
#define	PORT2_PDRD31_P31_0    	(IO_PORT2.IO_PDRD31.bit.P31_0)
#define	PORT2_RESV32_0  	(IO_PORT2.RESV32[CONSTANT_0])
#define	PORT2_RESV32_1  	(IO_PORT2.RESV32[CONSTANT_1])
#define	PORT2_RESV32_2  	(IO_PORT2.RESV32[CONSTANT_2])
#define	PORT2_RESV32_3  	(IO_PORT2.RESV32[CONSTANT_3])
#define	PORT2_RESV32_4  	(IO_PORT2.RESV32[CONSTANT_4])
#define	PORT2_RESV32_5  	(IO_PORT2.RESV32[CONSTANT_5])
#define	PORT2_RESV32_6  	(IO_PORT2.RESV32[CONSTANT_6])
#define	PORT2_RESV32_7  	(IO_PORT2.RESV32[CONSTANT_7])
#define	PORT2_RESV32_8  	(IO_PORT2.RESV32[CONSTANT_8])
#define	PORT2_RESV32_9  	(IO_PORT2.RESV32[CONSTANT_9])
#define	PORT2_RESV32_10  	(IO_PORT2.RESV32[CONSTANT_10])
#define	PORT2_RESV32_11  	(IO_PORT2.RESV32[CONSTANT_11])
#define	PORT2_RESV32_12  	(IO_PORT2.RESV32[CONSTANT_12])
#define	PORT2_RESV32_13  	(IO_PORT2.RESV32[CONSTANT_13])
#define	PORT2_RESV32_14  	(IO_PORT2.RESV32[CONSTANT_14])
#define	PORT2_RESV32_15  	(IO_PORT2.RESV32[CONSTANT_15])
#define	PORT2_RESV32_16  	(IO_PORT2.RESV32[CONSTANT_16])
#define	PORT2_RESV32_17  	(IO_PORT2.RESV32[CONSTANT_17])
#define	PORT2_RESV32_18  	(IO_PORT2.RESV32[CONSTANT_18])
#define	PORT2_RESV32_19  	(IO_PORT2.RESV32[CONSTANT_19])
#define	PORT2_RESV32_20  	(IO_PORT2.RESV32[CONSTANT_20])
#define	PORT2_RESV32_21  	(IO_PORT2.RESV32[CONSTANT_21])
#define	PORT2_RESV32_22  	(IO_PORT2.RESV32[CONSTANT_22])
#define	PORT2_RESV32_23  	(IO_PORT2.RESV32[CONSTANT_23])
#define	PORT2_RESV32_24  	(IO_PORT2.RESV32[CONSTANT_24])
#define	PORT2_RESV32_25  	(IO_PORT2.RESV32[CONSTANT_25])
#define	PORT2_RESV32_26  	(IO_PORT2.RESV32[CONSTANT_26])
#define	PORT2_RESV32_27  	(IO_PORT2.RESV32[CONSTANT_27])
#define	PORT2_RESV32_28  	(IO_PORT2.RESV32[CONSTANT_28])
#define	PORT2_RESV32_29  	(IO_PORT2.RESV32[CONSTANT_29])
#define	PORT2_RESV32_30  	(IO_PORT2.RESV32[CONSTANT_30])
#define	PORT2_RESV32_31  	(IO_PORT2.RESV32[CONSTANT_31])
#define	PORT2_RESV32_32  	(IO_PORT2.RESV32[CONSTANT_32])
#define	PORT2_RESV32_33  	(IO_PORT2.RESV32[CONSTANT_33])
#define	PORT2_RESV32_34  	(IO_PORT2.RESV32[CONSTANT_34])
#define	PORT2_RESV32_35  	(IO_PORT2.RESV32[CONSTANT_35])
#define	PORT2_RESV32_36  	(IO_PORT2.RESV32[CONSTANT_36])
#define	PORT2_RESV32_37  	(IO_PORT2.RESV32[CONSTANT_37])
#define	PORT2_RESV32_38  	(IO_PORT2.RESV32[CONSTANT_38])
#define	PORT2_RESV32_39  	(IO_PORT2.RESV32[CONSTANT_39])
#define	PORT2_RESV32_40  	(IO_PORT2.RESV32[CONSTANT_40])
#define	PORT2_RESV32_41  	(IO_PORT2.RESV32[CONSTANT_41])
#define	PORT2_RESV32_42  	(IO_PORT2.RESV32[CONSTANT_42])
#define	PORT2_RESV32_43  	(IO_PORT2.RESV32[CONSTANT_43])
#define	PORT2_RESV32_44  	(IO_PORT2.RESV32[CONSTANT_44])
#define	PORT2_RESV32_45  	(IO_PORT2.RESV32[CONSTANT_45])
#define	PORT2_DDR14			(IO_PORT2.IO_DDR14.byte)
#define	PORT2_DDR14_P14_7    	(IO_PORT2.IO_DDR14.bit.P14_7)
#define	PORT2_DDR14_P14_6    	(IO_PORT2.IO_DDR14.bit.P14_6)
#define	PORT2_DDR14_P14_5    	(IO_PORT2.IO_DDR14.bit.P14_5)
#define	PORT2_DDR14_P14_4    	(IO_PORT2.IO_DDR14.bit.P14_4)
#define	PORT2_DDR14_P14_3    	(IO_PORT2.IO_DDR14.bit.P14_3)
#define	PORT2_DDR14_P14_2    	(IO_PORT2.IO_DDR14.bit.P14_2)
#define	PORT2_DDR14_P14_1    	(IO_PORT2.IO_DDR14.bit.P14_1)
#define	PORT2_DDR14_P14_0    	(IO_PORT2.IO_DDR14.bit.P14_0)
#define	PORT2_DDR15			(IO_PORT2.IO_DDR15.byte)
#define	PORT2_DDR15_P15_5    	(IO_PORT2.IO_DDR15.bit.P15_5)
#define	PORT2_DDR15_P15_4    	(IO_PORT2.IO_DDR15.bit.P15_4)
#define	PORT2_DDR15_P15_3    	(IO_PORT2.IO_DDR15.bit.P15_3)
#define	PORT2_DDR15_P15_2    	(IO_PORT2.IO_DDR15.bit.P15_2)
#define	PORT2_DDR15_P15_1    	(IO_PORT2.IO_DDR15.bit.P15_1)
#define	PORT2_DDR15_P15_0    	(IO_PORT2.IO_DDR15.bit.P15_0)
#define	PORT2_DDR16			(IO_PORT2.IO_DDR16.byte)
#define	PORT2_DDR16_P16_7    	(IO_PORT2.IO_DDR16.bit.P16_7)
#define	PORT2_DDR16_P16_3    	(IO_PORT2.IO_DDR16.bit.P16_3)
#define	PORT2_DDR16_P16_2    	(IO_PORT2.IO_DDR16.bit.P16_2)
#define	PORT2_DDR16_P16_1    	(IO_PORT2.IO_DDR16.bit.P16_1)
#define	PORT2_DDR16_P16_0    	(IO_PORT2.IO_DDR16.bit.P16_0)
#define	PORT2_DDR17			(IO_PORT2.IO_DDR17.byte)
#define	PORT2_DDR17_P17_7    	(IO_PORT2.IO_DDR17.bit.P17_7)
#define	PORT2_DDR17_P17_6    	(IO_PORT2.IO_DDR17.bit.P17_6)
#define	PORT2_DDR17_P17_5    	(IO_PORT2.IO_DDR17.bit.P17_5)
#define	PORT2_DDR17_P17_4    	(IO_PORT2.IO_DDR17.bit.P17_4)
#define	PORT2_DDR17_P17_3    	(IO_PORT2.IO_DDR17.bit.P17_3)
#define	PORT2_DDR17_P17_2    	(IO_PORT2.IO_DDR17.bit.P17_2)
#define	PORT2_DDR17_P17_1    	(IO_PORT2.IO_DDR17.bit.P17_1)
#define	PORT2_DDR17_P17_0    	(IO_PORT2.IO_DDR17.bit.P17_0)
#define	PORT2_DDR18			(IO_PORT2.IO_DDR18.byte)
#define	PORT2_DDR18_P18_6    	(IO_PORT2.IO_DDR18.bit.P18_6)
#define	PORT2_DDR18_P18_5    	(IO_PORT2.IO_DDR18.bit.P18_5)
#define	PORT2_DDR18_P18_4    	(IO_PORT2.IO_DDR18.bit.P18_4)
#define	PORT2_DDR18_P18_2    	(IO_PORT2.IO_DDR18.bit.P18_2)
#define	PORT2_DDR18_P18_1    	(IO_PORT2.IO_DDR18.bit.P18_1)
#define	PORT2_DDR18_P18_0    	(IO_PORT2.IO_DDR18.bit.P18_0)
#define	PORT2_DDR19			(IO_PORT2.IO_DDR19.byte)
#define	PORT2_DDR19_P19_2    	(IO_PORT2.IO_DDR19.bit.P19_2)
#define	PORT2_DDR19_P19_1    	(IO_PORT2.IO_DDR19.bit.P19_1)
#define	PORT2_DDR19_P19_0    	(IO_PORT2.IO_DDR19.bit.P19_0)
#define	PORT2_DDR22			(IO_PORT2.IO_DDR22.byte)
#define	PORT2_DDR22_P22_5    	(IO_PORT2.IO_DDR22.bit.P22_5)
#define	PORT2_DDR22_P22_4    	(IO_PORT2.IO_DDR22.bit.P22_4)
#define	PORT2_DDR22_P22_1    	(IO_PORT2.IO_DDR22.bit.P22_1)
#define	PORT2_DDR22_P22_0    	(IO_PORT2.IO_DDR22.bit.P22_0)
#define	PORT2_DDR23			(IO_PORT2.IO_DDR23.byte)
#define	PORT2_DDR23_P23_1    	(IO_PORT2.IO_DDR23.bit.P23_1)
#define	PORT2_DDR23_P23_0    	(IO_PORT2.IO_DDR23.bit.P23_0)
#define	PORT2_DDR24			(IO_PORT2.IO_DDR24.byte)
#define	PORT2_DDR24_P24_7    	(IO_PORT2.IO_DDR24.bit.P24_7)
#define	PORT2_DDR24_P24_6    	(IO_PORT2.IO_DDR24.bit.P24_6)
#define	PORT2_DDR24_P24_5    	(IO_PORT2.IO_DDR24.bit.P24_5)
#define	PORT2_DDR24_P24_4    	(IO_PORT2.IO_DDR24.bit.P24_4)
#define	PORT2_DDR24_P24_3    	(IO_PORT2.IO_DDR24.bit.P24_3)
#define	PORT2_DDR24_P24_2    	(IO_PORT2.IO_DDR24.bit.P24_2)
#define	PORT2_DDR24_P24_1    	(IO_PORT2.IO_DDR24.bit.P24_1)
#define	PORT2_DDR24_P24_0    	(IO_PORT2.IO_DDR24.bit.P24_0)
#define	PORT2_DDR27			(IO_PORT2.IO_DDR27.byte)
#define	PORT2_DDR27_P27_3    	(IO_PORT2.IO_DDR27.bit.P27_3)
#define	PORT2_DDR27_P27_2    	(IO_PORT2.IO_DDR27.bit.P27_2)
#define	PORT2_DDR27_P27_1    	(IO_PORT2.IO_DDR27.bit.P27_1)
#define	PORT2_DDR27_P27_0    	(IO_PORT2.IO_DDR27.bit.P27_0)
#define	PORT2_DDR28			(IO_PORT2.IO_DDR28.byte)
#define	PORT2_DDR28_P28_4    	(IO_PORT2.IO_DDR28.bit.P28_4)
#define	PORT2_DDR28_P28_3    	(IO_PORT2.IO_DDR28.bit.P28_3)
#define	PORT2_DDR28_P28_2    	(IO_PORT2.IO_DDR28.bit.P28_2)
#define	PORT2_DDR28_P28_1    	(IO_PORT2.IO_DDR28.bit.P28_1)
#define	PORT2_DDR28_P28_0    	(IO_PORT2.IO_DDR28.bit.P28_0)
#define	PORT2_DDR29			(IO_PORT2.IO_DDR29.byte)
#define	PORT2_DDR29_P29_7    	(IO_PORT2.IO_DDR29.bit.P29_7)
#define	PORT2_DDR29_P29_6    	(IO_PORT2.IO_DDR29.bit.P29_6)
#define	PORT2_DDR29_P29_5    	(IO_PORT2.IO_DDR29.bit.P29_5)
#define	PORT2_DDR29_P29_4    	(IO_PORT2.IO_DDR29.bit.P29_4)
#define	PORT2_DDR29_P29_3    	(IO_PORT2.IO_DDR29.bit.P29_3)
#define	PORT2_DDR29_P29_2    	(IO_PORT2.IO_DDR29.bit.P29_2)
#define	PORT2_DDR29_P29_1    	(IO_PORT2.IO_DDR29.bit.P29_1)
#define	PORT2_DDR29_P29_0    	(IO_PORT2.IO_DDR29.bit.P29_0)
#define	PORT2_DDR31			(IO_PORT2.IO_DDR31.byte)
#define	PORT2_DDR31_P31_6    	(IO_PORT2.IO_DDR31.bit.P31_6)
#define	PORT2_DDR31_P31_5    	(IO_PORT2.IO_DDR31.bit.P31_5)
#define	PORT2_DDR31_P31_4    	(IO_PORT2.IO_DDR31.bit.P31_4)
#define	PORT2_DDR31_P31_2    	(IO_PORT2.IO_DDR31.bit.P31_2)
#define	PORT2_DDR31_P31_1    	(IO_PORT2.IO_DDR31.bit.P31_1)
#define	PORT2_DDR31_P31_0    	(IO_PORT2.IO_DDR31.bit.P31_0)
#define	PORT2_RESV96_0  	(IO_PORT2.RESV96[CONSTANT_0])
#define	PORT2_RESV96_1  	(IO_PORT2.RESV96[CONSTANT_1])
#define	PORT2_RESV96_2  	(IO_PORT2.RESV96[CONSTANT_2])
#define	PORT2_RESV96_3  	(IO_PORT2.RESV96[CONSTANT_3])
#define	PORT2_RESV96_4  	(IO_PORT2.RESV96[CONSTANT_4])
#define	PORT2_RESV96_5  	(IO_PORT2.RESV96[CONSTANT_5])
#define	PORT2_RESV96_6  	(IO_PORT2.RESV96[CONSTANT_6])
#define	PORT2_RESV96_7  	(IO_PORT2.RESV96[CONSTANT_7])
#define	PORT2_RESV96_8  	(IO_PORT2.RESV96[CONSTANT_8])
#define	PORT2_RESV96_9  	(IO_PORT2.RESV96[CONSTANT_9])
#define	PORT2_RESV96_10  	(IO_PORT2.RESV96[CONSTANT_10])
#define	PORT2_RESV96_11  	(IO_PORT2.RESV96[CONSTANT_11])
#define	PORT2_RESV96_12  	(IO_PORT2.RESV96[CONSTANT_12])
#define	PORT2_RESV96_13  	(IO_PORT2.RESV96[CONSTANT_13])
#define	PORT2_RESV96_14  	(IO_PORT2.RESV96[CONSTANT_14])
#define	PORT2_RESV96_15  	(IO_PORT2.RESV96[CONSTANT_15])
#define	PORT2_RESV96_16  	(IO_PORT2.RESV96[CONSTANT_16])
#define	PORT2_RESV96_17  	(IO_PORT2.RESV96[CONSTANT_17])
#define	PORT2_RESV96_18  	(IO_PORT2.RESV96[CONSTANT_18])
#define	PORT2_RESV96_19  	(IO_PORT2.RESV96[CONSTANT_19])
#define	PORT2_RESV96_20  	(IO_PORT2.RESV96[CONSTANT_20])
#define	PORT2_RESV96_21  	(IO_PORT2.RESV96[CONSTANT_21])
#define	PORT2_RESV96_22  	(IO_PORT2.RESV96[CONSTANT_22])
#define	PORT2_RESV96_23  	(IO_PORT2.RESV96[CONSTANT_23])
#define	PORT2_RESV96_24  	(IO_PORT2.RESV96[CONSTANT_24])
#define	PORT2_RESV96_25  	(IO_PORT2.RESV96[CONSTANT_25])
#define	PORT2_RESV96_26  	(IO_PORT2.RESV96[CONSTANT_26])
#define	PORT2_RESV96_27  	(IO_PORT2.RESV96[CONSTANT_27])
#define	PORT2_RESV96_28  	(IO_PORT2.RESV96[CONSTANT_28])
#define	PORT2_RESV96_29  	(IO_PORT2.RESV96[CONSTANT_29])
#define	PORT2_RESV96_30  	(IO_PORT2.RESV96[CONSTANT_30])
#define	PORT2_RESV96_31  	(IO_PORT2.RESV96[CONSTANT_31])
#define	PORT2_RESV96_32  	(IO_PORT2.RESV96[CONSTANT_32])
#define	PORT2_RESV96_33  	(IO_PORT2.RESV96[CONSTANT_33])
#define	PORT2_RESV96_34  	(IO_PORT2.RESV96[CONSTANT_34])
#define	PORT2_RESV96_35  	(IO_PORT2.RESV96[CONSTANT_35])
#define	PORT2_RESV96_36  	(IO_PORT2.RESV96[CONSTANT_36])
#define	PORT2_RESV96_37  	(IO_PORT2.RESV96[CONSTANT_37])
#define	PORT2_RESV96_38  	(IO_PORT2.RESV96[CONSTANT_38])
#define	PORT2_RESV96_39  	(IO_PORT2.RESV96[CONSTANT_39])
#define	PORT2_RESV96_40  	(IO_PORT2.RESV96[CONSTANT_40])
#define	PORT2_RESV96_41  	(IO_PORT2.RESV96[CONSTANT_41])
#define	PORT2_RESV96_42  	(IO_PORT2.RESV96[CONSTANT_42])
#define	PORT2_RESV96_43  	(IO_PORT2.RESV96[CONSTANT_43])
#define	PORT2_RESV96_44  	(IO_PORT2.RESV96[CONSTANT_44])
#define	PORT2_RESV96_45  	(IO_PORT2.RESV96[CONSTANT_45])
#define	PORT2_PFR14			(IO_PORT2.IO_PFR14.byte)
#define	PORT2_PFR14_P14_7    	(IO_PORT2.IO_PFR14.bit.P14_7)
#define	PORT2_PFR14_P14_6    	(IO_PORT2.IO_PFR14.bit.P14_6)
#define	PORT2_PFR14_P14_5    	(IO_PORT2.IO_PFR14.bit.P14_5)
#define	PORT2_PFR14_P14_4    	(IO_PORT2.IO_PFR14.bit.P14_4)
#define	PORT2_PFR14_P14_3    	(IO_PORT2.IO_PFR14.bit.P14_3)
#define	PORT2_PFR14_P14_2    	(IO_PORT2.IO_PFR14.bit.P14_2)
#define	PORT2_PFR14_P14_1    	(IO_PORT2.IO_PFR14.bit.P14_1)
#define	PORT2_PFR14_P14_0    	(IO_PORT2.IO_PFR14.bit.P14_0)
#define	PORT2_PFR15			(IO_PORT2.IO_PFR15.byte)
#define	PORT2_PFR15_P15_5    	(IO_PORT2.IO_PFR15.bit.P15_5)
#define	PORT2_PFR15_P16_4    	(IO_PORT2.IO_PFR15.bit.P16_4)
#define	PORT2_PFR15_P15_3    	(IO_PORT2.IO_PFR15.bit.P15_3)
#define	PORT2_PFR15_P15_2    	(IO_PORT2.IO_PFR15.bit.P15_2)
#define	PORT2_PFR15_P15_1    	(IO_PORT2.IO_PFR15.bit.P15_1)
#define	PORT2_PFR15_P15_0    	(IO_PORT2.IO_PFR15.bit.P15_0)
#define	PORT2_PFR16			(IO_PORT2.IO_PFR16.byte)
#define	PORT2_PFR16_P16_7    	(IO_PORT2.IO_PFR16.bit.P16_7)
#define	PORT2_PFR16_P16_3    	(IO_PORT2.IO_PFR16.bit.P16_3)
#define	PORT2_PFR16_P16_2    	(IO_PORT2.IO_PFR16.bit.P16_2)
#define	PORT2_PFR16_P16_1    	(IO_PORT2.IO_PFR16.bit.P16_1)
#define	PORT2_PFR16_P16_0    	(IO_PORT2.IO_PFR16.bit.P16_0)
#define	PORT2_PFR17			(IO_PORT2.IO_PFR17.byte)
#define	PORT2_PFR17_P17_7    	(IO_PORT2.IO_PFR17.bit.P17_7)
#define	PORT2_PFR17_P17_6    	(IO_PORT2.IO_PFR17.bit.P17_6)
#define	PORT2_PFR17_P17_5    	(IO_PORT2.IO_PFR17.bit.P17_5)
#define	PORT2_PFR17_P17_4    	(IO_PORT2.IO_PFR17.bit.P17_4)
#define	PORT2_PFR17_P17_3    	(IO_PORT2.IO_PFR17.bit.P17_3)
#define	PORT2_PFR17_P17_2    	(IO_PORT2.IO_PFR17.bit.P17_2)
#define	PORT2_PFR17_P17_1    	(IO_PORT2.IO_PFR17.bit.P17_1)
#define	PORT2_PFR17_P17_0    	(IO_PORT2.IO_PFR17.bit.P17_0)
#define	PORT2_PFR18			(IO_PORT2.IO_PFR18.byte)
#define	PORT2_PFR18_P18_6    	(IO_PORT2.IO_PFR18.bit.P18_6)
#define	PORT2_PFR18_P18_5    	(IO_PORT2.IO_PFR18.bit.P18_5)
#define	PORT2_PFR18_P18_4    	(IO_PORT2.IO_PFR18.bit.P18_4)
#define	PORT2_PFR18_P18_2    	(IO_PORT2.IO_PFR18.bit.P18_2)
#define	PORT2_PFR18_P18_1    	(IO_PORT2.IO_PFR18.bit.P18_1)
#define	PORT2_PFR18_P18_0    	(IO_PORT2.IO_PFR18.bit.P18_0)
#define	PORT2_PFR19			(IO_PORT2.IO_PFR19.byte)
#define	PORT2_PFR19_P19_2    	(IO_PORT2.IO_PFR19.bit.P19_2)
#define	PORT2_PFR19_P19_1    	(IO_PORT2.IO_PFR19.bit.P19_1)
#define	PORT2_PFR19_P19_0    	(IO_PORT2.IO_PFR19.bit.P19_0)
#define	PORT2_PFR22			(IO_PORT2.IO_PFR22.byte)
#define	PORT2_PFR22_P22_5    	(IO_PORT2.IO_PFR22.bit.P22_5)
#define	PORT2_PFR22_P22_4    	(IO_PORT2.IO_PFR22.bit.P22_4)
#define	PORT2_PFR22_P22_1    	(IO_PORT2.IO_PFR22.bit.P22_1)
#define	PORT2_PFR22_P22_0    	(IO_PORT2.IO_PFR22.bit.P22_0)
#define	PORT2_PFR23			(IO_PORT2.IO_PFR23.byte)
#define	PORT2_PFR23_P23_1    	(IO_PORT2.IO_PFR23.bit.P23_1)
#define	PORT2_PFR23_P23_0    	(IO_PORT2.IO_PFR23.bit.P23_0)
#define	PORT2_PFR24			(IO_PORT2.IO_PFR24.byte)
#define	PORT2_PFR24_P24_7    	(IO_PORT2.IO_PFR24.bit.P24_7)
#define	PORT2_PFR24_P24_6    	(IO_PORT2.IO_PFR24.bit.P24_6)
#define	PORT2_PFR24_P24_5    	(IO_PORT2.IO_PFR24.bit.P24_5)
#define	PORT2_PFR24_P24_4    	(IO_PORT2.IO_PFR24.bit.P24_4)
#define	PORT2_PFR24_P24_3    	(IO_PORT2.IO_PFR24.bit.P24_3)
#define	PORT2_PFR24_P24_2    	(IO_PORT2.IO_PFR24.bit.P24_2)
#define	PORT2_PFR24_P24_1    	(IO_PORT2.IO_PFR24.bit.P24_1)
#define	PORT2_PFR24_P24_0    	(IO_PORT2.IO_PFR24.bit.P24_0)
#define	PORT2_PFR27			(IO_PORT2.IO_PFR27.byte)
#define	PORT2_PFR27_P27_3    	(IO_PORT2.IO_PFR27.bit.P27_3)
#define	PORT2_PFR27_P27_2    	(IO_PORT2.IO_PFR27.bit.P27_2)
#define	PORT2_PFR27_P27_1    	(IO_PORT2.IO_PFR27.bit.P27_1)
#define	PORT2_PFR27_P27_0    	(IO_PORT2.IO_PFR27.bit.P27_0)
#define	PORT2_PFR28			(IO_PORT2.IO_PFR28.byte)
#define	PORT2_PFR28_P28_4    	(IO_PORT2.IO_PFR28.bit.P28_4)
#define	PORT2_PFR28_P28_3    	(IO_PORT2.IO_PFR28.bit.P28_3)
#define	PORT2_PFR28_P28_2    	(IO_PORT2.IO_PFR28.bit.P28_2)
#define	PORT2_PFR28_P28_1    	(IO_PORT2.IO_PFR28.bit.P28_1)
#define	PORT2_PFR28_P28_0    	(IO_PORT2.IO_PFR28.bit.P28_0)
#define	PORT2_PFR29			(IO_PORT2.IO_PFR29.byte)
#define	PORT2_PFR29_P29_7    	(IO_PORT2.IO_PFR29.bit.P29_7)
#define	PORT2_PFR29_P29_6    	(IO_PORT2.IO_PFR29.bit.P29_6)
#define	PORT2_PFR29_P29_5    	(IO_PORT2.IO_PFR29.bit.P29_5)
#define	PORT2_PFR29_P29_4    	(IO_PORT2.IO_PFR29.bit.P29_4)
#define	PORT2_PFR29_P29_3    	(IO_PORT2.IO_PFR29.bit.P29_3)
#define	PORT2_PFR29_P29_2    	(IO_PORT2.IO_PFR29.bit.P29_2)
#define	PORT2_PFR29_P29_1    	(IO_PORT2.IO_PFR29.bit.P29_1)
#define	PORT2_PFR29_P29_0    	(IO_PORT2.IO_PFR29.bit.P29_0)
#define	PORT2_PFR31			(IO_PORT2.IO_PFR31.byte)
#define	PORT2_PFR31_P31_6    	(IO_PORT2.IO_PFR31.bit.P31_6)
#define	PORT2_PFR31_P31_5    	(IO_PORT2.IO_PFR31.bit.P31_5)
#define	PORT2_PFR31_P31_4    	(IO_PORT2.IO_PFR31.bit.P31_4)
#define	PORT2_PFR31_P31_2    	(IO_PORT2.IO_PFR31.bit.P31_2)
#define	PORT2_PFR31_P31_1    	(IO_PORT2.IO_PFR31.bit.P31_1)
#define	PORT2_PFR31_P31_0    	(IO_PORT2.IO_PFR31.bit.P31_0)
#define	PORT2_RESV160_0  	(IO_PORT2.RESV160[CONSTANT_0])
#define	PORT2_RESV160_1  	(IO_PORT2.RESV160[CONSTANT_1])
#define	PORT2_RESV160_2  	(IO_PORT2.RESV160[CONSTANT_2])
#define	PORT2_RESV160_3  	(IO_PORT2.RESV160[CONSTANT_3])
#define	PORT2_RESV160_4  	(IO_PORT2.RESV160[CONSTANT_4])
#define	PORT2_RESV160_5  	(IO_PORT2.RESV160[CONSTANT_5])
#define	PORT2_RESV160_6  	(IO_PORT2.RESV160[CONSTANT_6])
#define	PORT2_RESV160_7  	(IO_PORT2.RESV160[CONSTANT_7])
#define	PORT2_RESV160_8  	(IO_PORT2.RESV160[CONSTANT_8])
#define	PORT2_RESV160_9  	(IO_PORT2.RESV160[CONSTANT_9])
#define	PORT2_RESV160_10  	(IO_PORT2.RESV160[CONSTANT_10])
#define	PORT2_RESV160_11  	(IO_PORT2.RESV160[CONSTANT_11])
#define	PORT2_RESV160_12  	(IO_PORT2.RESV160[CONSTANT_12])
#define	PORT2_RESV160_13  	(IO_PORT2.RESV160[CONSTANT_13])
#define	PORT2_RESV160_14  	(IO_PORT2.RESV160[CONSTANT_14])
#define	PORT2_RESV160_15  	(IO_PORT2.RESV160[CONSTANT_15])
#define	PORT2_RESV160_16  	(IO_PORT2.RESV160[CONSTANT_16])
#define	PORT2_RESV160_17  	(IO_PORT2.RESV160[CONSTANT_17])
#define	PORT2_RESV160_18  	(IO_PORT2.RESV160[CONSTANT_18])
#define	PORT2_RESV160_19  	(IO_PORT2.RESV160[CONSTANT_19])
#define	PORT2_RESV160_20  	(IO_PORT2.RESV160[CONSTANT_20])
#define	PORT2_RESV160_21  	(IO_PORT2.RESV160[CONSTANT_21])
#define	PORT2_RESV160_22  	(IO_PORT2.RESV160[CONSTANT_22])
#define	PORT2_RESV160_23  	(IO_PORT2.RESV160[CONSTANT_23])
#define	PORT2_RESV160_24  	(IO_PORT2.RESV160[CONSTANT_24])
#define	PORT2_RESV160_25  	(IO_PORT2.RESV160[CONSTANT_25])
#define	PORT2_RESV160_26  	(IO_PORT2.RESV160[CONSTANT_26])
#define	PORT2_RESV160_27  	(IO_PORT2.RESV160[CONSTANT_27])
#define	PORT2_RESV160_28  	(IO_PORT2.RESV160[CONSTANT_28])
#define	PORT2_RESV160_29  	(IO_PORT2.RESV160[CONSTANT_29])
#define	PORT2_RESV160_30  	(IO_PORT2.RESV160[CONSTANT_30])
#define	PORT2_RESV160_31  	(IO_PORT2.RESV160[CONSTANT_31])
#define	PORT2_RESV160_32  	(IO_PORT2.RESV160[CONSTANT_32])
#define	PORT2_RESV160_33  	(IO_PORT2.RESV160[CONSTANT_33])
#define	PORT2_RESV160_34  	(IO_PORT2.RESV160[CONSTANT_34])
#define	PORT2_RESV160_35  	(IO_PORT2.RESV160[CONSTANT_35])
#define	PORT2_RESV160_36  	(IO_PORT2.RESV160[CONSTANT_36])
#define	PORT2_RESV160_37  	(IO_PORT2.RESV160[CONSTANT_37])
#define	PORT2_RESV160_38  	(IO_PORT2.RESV160[CONSTANT_38])
#define	PORT2_RESV160_39  	(IO_PORT2.RESV160[CONSTANT_39])
#define	PORT2_RESV160_40  	(IO_PORT2.RESV160[CONSTANT_40])
#define	PORT2_RESV160_41  	(IO_PORT2.RESV160[CONSTANT_41])
#define	PORT2_RESV160_42  	(IO_PORT2.RESV160[CONSTANT_42])
#define	PORT2_RESV160_43  	(IO_PORT2.RESV160[CONSTANT_43])
#define	PORT2_RESV160_44  	(IO_PORT2.RESV160[CONSTANT_44])
#define	PORT2_RESV160_45  	(IO_PORT2.RESV160[CONSTANT_45])
#define	PORT2_EPFR14			(IO_PORT2.IO_EPFR14.byte)
#define	PORT2_EPFR14_P14_7    	(IO_PORT2.IO_EPFR14.bit.P14_7)
#define	PORT2_EPFR14_P14_6    	(IO_PORT2.IO_EPFR14.bit.P14_6)
#define	PORT2_EPFR14_P14_5    	(IO_PORT2.IO_EPFR14.bit.P14_5)
#define	PORT2_EPFR14_P14_4    	(IO_PORT2.IO_EPFR14.bit.P14_4)
#define	PORT2_EPFR14_P14_3    	(IO_PORT2.IO_EPFR14.bit.P14_3)
#define	PORT2_EPFR14_P14_2    	(IO_PORT2.IO_EPFR14.bit.P14_2)
#define	PORT2_EPFR14_P14_1    	(IO_PORT2.IO_EPFR14.bit.P14_1)
#define	PORT2_EPFR14_P14_0    	(IO_PORT2.IO_EPFR14.bit.P14_0)
#define	PORT2_EPFR15			(IO_PORT2.IO_EPFR15.byte)
#define	PORT2_EPFR15_P15_5    	(IO_PORT2.IO_EPFR15.bit.P15_5)
#define	PORT2_EPFR15_P15_4    	(IO_PORT2.IO_EPFR15.bit.P15_4)
#define	PORT2_EPFR15_P15_3    	(IO_PORT2.IO_EPFR15.bit.P15_3)
#define	PORT2_EPFR15_P15_2    	(IO_PORT2.IO_EPFR15.bit.P15_2)
#define	PORT2_EPFR15_P15_1    	(IO_PORT2.IO_EPFR15.bit.P15_1)
#define	PORT2_EPFR15_P15_0    	(IO_PORT2.IO_EPFR15.bit.P15_0)
#define	PORT2_EPFR16			(IO_PORT2.IO_EPFR16.byte)
#define	PORT2_EPFR16_P16_7    	(IO_PORT2.IO_EPFR16.bit.P16_7)
#define	PORT2_EPFR17	(IO_PORT2.IO_EPFR17)
#define	PORT2_EPFR18			(IO_PORT2.IO_EPFR18.byte)
#define	PORT2_EPFR18_P18_6    	(IO_PORT2.IO_EPFR18.bit.P18_6)
#define	PORT2_EPFR18_P18_2    	(IO_PORT2.IO_EPFR18.bit.P18_2)
#define	PORT2_EPFR19			(IO_PORT2.IO_EPFR19.byte)
#define	PORT2_EPFR19_P19_2    	(IO_PORT2.IO_EPFR19.bit.P19_2)
#define	PORT2_EPFR22	(IO_PORT2.IO_EPFR22)
#define	PORT2_EPFR23	(IO_PORT2.IO_EPFR23)
#define	PORT2_EPFR24	(IO_PORT2.IO_EPFR24)
#define	PORT2_EPFR27			(IO_PORT2.IO_EPFR27.byte)
#define	PORT2_EPFR27_P27_3    	(IO_PORT2.IO_EPFR27.bit.P27_3)
#define	PORT2_EPFR27_P27_2    	(IO_PORT2.IO_EPFR27.bit.P27_2)
#define	PORT2_EPFR27_P27_1    	(IO_PORT2.IO_EPFR27.bit.P27_1)
#define	PORT2_EPFR27_P27_0    	(IO_PORT2.IO_EPFR27.bit.P27_0)
#define	PORT2_EPFR28	(IO_PORT2.IO_EPFR28)
#define	PORT2_EPFR29	(IO_PORT2.IO_EPFR29)
#define	PORT2_EPFR31			(IO_PORT2.IO_EPFR31.byte)
#define	PORT2_EPFR31_P31_6    	(IO_PORT2.IO_EPFR31.bit.P31_6)
#define	PORT2_EPFR31_P31_5    	(IO_PORT2.IO_EPFR31.bit.P31_5)
#define	PORT2_EPFR31_P31_4    	(IO_PORT2.IO_EPFR31.bit.P31_4)
#define	PORT2_EPFR31_P31_2    	(IO_PORT2.IO_EPFR31.bit.P31_2)
#define	PORT2_EPFR31_P31_1    	(IO_PORT2.IO_EPFR31.bit.P31_1)
#define	PORT2_EPFR31_P31_0    	(IO_PORT2.IO_EPFR31.bit.P31_0)
#define	PORT2_RESV224_0  	(IO_PORT2.RESV224[CONSTANT_0])
#define	PORT2_RESV224_1  	(IO_PORT2.RESV224[CONSTANT_1])
#define	PORT2_RESV224_2  	(IO_PORT2.RESV224[CONSTANT_2])
#define	PORT2_RESV224_3  	(IO_PORT2.RESV224[CONSTANT_3])
#define	PORT2_RESV224_4  	(IO_PORT2.RESV224[CONSTANT_4])
#define	PORT2_RESV224_5  	(IO_PORT2.RESV224[CONSTANT_5])
#define	PORT2_RESV224_6  	(IO_PORT2.RESV224[CONSTANT_6])
#define	PORT2_RESV224_7  	(IO_PORT2.RESV224[CONSTANT_7])
#define	PORT2_RESV224_8  	(IO_PORT2.RESV224[CONSTANT_8])
#define	PORT2_RESV224_9  	(IO_PORT2.RESV224[CONSTANT_9])
#define	PORT2_RESV224_10  	(IO_PORT2.RESV224[CONSTANT_10])
#define	PORT2_RESV224_11  	(IO_PORT2.RESV224[CONSTANT_11])
#define	PORT2_RESV224_12  	(IO_PORT2.RESV224[CONSTANT_12])
#define	PORT2_RESV224_13  	(IO_PORT2.RESV224[CONSTANT_13])
#define	PORT2_RESV224_14  	(IO_PORT2.RESV224[CONSTANT_14])
#define	PORT2_RESV224_15  	(IO_PORT2.RESV224[CONSTANT_15])
#define	PORT2_RESV224_16  	(IO_PORT2.RESV224[CONSTANT_16])
#define	PORT2_RESV224_17  	(IO_PORT2.RESV224[CONSTANT_17])
#define	PORT2_RESV224_18  	(IO_PORT2.RESV224[CONSTANT_18])
#define	PORT2_RESV224_19  	(IO_PORT2.RESV224[CONSTANT_19])
#define	PORT2_RESV224_20  	(IO_PORT2.RESV224[CONSTANT_20])
#define	PORT2_RESV224_21  	(IO_PORT2.RESV224[CONSTANT_21])
#define	PORT2_RESV224_22  	(IO_PORT2.RESV224[CONSTANT_22])
#define	PORT2_RESV224_23  	(IO_PORT2.RESV224[CONSTANT_23])
#define	PORT2_RESV224_24  	(IO_PORT2.RESV224[CONSTANT_24])
#define	PORT2_RESV224_25  	(IO_PORT2.RESV224[CONSTANT_25])
#define	PORT2_RESV224_26  	(IO_PORT2.RESV224[CONSTANT_26])
#define	PORT2_RESV224_27  	(IO_PORT2.RESV224[CONSTANT_27])
#define	PORT2_RESV224_28  	(IO_PORT2.RESV224[CONSTANT_28])
#define	PORT2_RESV224_29  	(IO_PORT2.RESV224[CONSTANT_29])
#define	PORT2_RESV224_30  	(IO_PORT2.RESV224[CONSTANT_30])
#define	PORT2_RESV224_31  	(IO_PORT2.RESV224[CONSTANT_31])
#define	PORT2_RESV224_32  	(IO_PORT2.RESV224[CONSTANT_32])
#define	PORT2_RESV224_33  	(IO_PORT2.RESV224[CONSTANT_33])
#define	PORT2_RESV224_34  	(IO_PORT2.RESV224[CONSTANT_34])
#define	PORT2_RESV224_35  	(IO_PORT2.RESV224[CONSTANT_35])
#define	PORT2_RESV224_36  	(IO_PORT2.RESV224[CONSTANT_36])
#define	PORT2_RESV224_37  	(IO_PORT2.RESV224[CONSTANT_37])
#define	PORT2_RESV224_38  	(IO_PORT2.RESV224[CONSTANT_38])
#define	PORT2_RESV224_39  	(IO_PORT2.RESV224[CONSTANT_39])
#define	PORT2_RESV224_40  	(IO_PORT2.RESV224[CONSTANT_40])
#define	PORT2_RESV224_41  	(IO_PORT2.RESV224[CONSTANT_41])
#define	PORT2_RESV224_42  	(IO_PORT2.RESV224[CONSTANT_42])
#define	PORT2_RESV224_43  	(IO_PORT2.RESV224[CONSTANT_43])
#define	PORT2_RESV224_44  	(IO_PORT2.RESV224[CONSTANT_44])
#define	PORT2_RESV224_45  	(IO_PORT2.RESV224[CONSTANT_45])
#define	PORT2_PODR14			(IO_PORT2.IO_PODR14.byte)
#define	PORT2_PODR14_P14_7    	(IO_PORT2.IO_PODR14.bit.P14_7)
#define	PORT2_PODR14_P14_6    	(IO_PORT2.IO_PODR14.bit.P14_6)
#define	PORT2_PODR14_P14_5    	(IO_PORT2.IO_PODR14.bit.P14_5)
#define	PORT2_PODR14_P14_4    	(IO_PORT2.IO_PODR14.bit.P14_4)
#define	PORT2_PODR14_P14_3    	(IO_PORT2.IO_PODR14.bit.P14_3)
#define	PORT2_PODR14_P14_2    	(IO_PORT2.IO_PODR14.bit.P14_2)
#define	PORT2_PODR14_P14_1    	(IO_PORT2.IO_PODR14.bit.P14_1)
#define	PORT2_PODR14_P14_0    	(IO_PORT2.IO_PODR14.bit.P14_0)
#define	PORT2_PODR15			(IO_PORT2.IO_PODR15.byte)
#define	PORT2_PODR15_P15_5    	(IO_PORT2.IO_PODR15.bit.P15_5)
#define	PORT2_PODR15_P15_4    	(IO_PORT2.IO_PODR15.bit.P15_4)
#define	PORT2_PODR15_P15_3    	(IO_PORT2.IO_PODR15.bit.P15_3)
#define	PORT2_PODR15_P15_2    	(IO_PORT2.IO_PODR15.bit.P15_2)
#define	PORT2_PODR15_P15_1    	(IO_PORT2.IO_PODR15.bit.P15_1)
#define	PORT2_PODR15_P15_0    	(IO_PORT2.IO_PODR15.bit.P15_0)
#define	PORT2_PODR16			(IO_PORT2.IO_PODR16.byte)
#define	PORT2_PODR16_P16_7    	(IO_PORT2.IO_PODR16.bit.P16_7)
#define	PORT2_PODR16_P16_3    	(IO_PORT2.IO_PODR16.bit.P16_3)
#define	PORT2_PODR16_P16_2    	(IO_PORT2.IO_PODR16.bit.P16_2)
#define	PORT2_PODR16_P16_1    	(IO_PORT2.IO_PODR16.bit.P16_1)
#define	PORT2_PODR16_P16_0    	(IO_PORT2.IO_PODR16.bit.P16_0)
#define	PORT2_PODR17			(IO_PORT2.IO_PODR17.byte)
#define	PORT2_PODR17_P17_7    	(IO_PORT2.IO_PODR17.bit.P17_7)
#define	PORT2_PODR17_P17_6    	(IO_PORT2.IO_PODR17.bit.P17_6)
#define	PORT2_PODR17_P17_5    	(IO_PORT2.IO_PODR17.bit.P17_5)
#define	PORT2_PODR17_P17_4    	(IO_PORT2.IO_PODR17.bit.P17_4)
#define	PORT2_PODR17_P17_3    	(IO_PORT2.IO_PODR17.bit.P17_3)
#define	PORT2_PODR17_P17_2    	(IO_PORT2.IO_PODR17.bit.P17_2)
#define	PORT2_PODR17_P17_1    	(IO_PORT2.IO_PODR17.bit.P17_1)
#define	PORT2_PODR17_P17_0    	(IO_PORT2.IO_PODR17.bit.P17_0)
#define	PORT2_PODR18			(IO_PORT2.IO_PODR18.byte)
#define	PORT2_PODR18_P18_6    	(IO_PORT2.IO_PODR18.bit.P18_6)
#define	PORT2_PODR18_P18_5    	(IO_PORT2.IO_PODR18.bit.P18_5)
#define	PORT2_PODR18_P18_4    	(IO_PORT2.IO_PODR18.bit.P18_4)
#define	PORT2_PODR18_P18_2    	(IO_PORT2.IO_PODR18.bit.P18_2)
#define	PORT2_PODR18_P18_1    	(IO_PORT2.IO_PODR18.bit.P18_1)
#define	PORT2_PODR18_P18_0    	(IO_PORT2.IO_PODR18.bit.P18_0)
#define	PORT2_PODR19			(IO_PORT2.IO_PODR19.byte)
#define	PORT2_PODR19_P19_2    	(IO_PORT2.IO_PODR19.bit.P19_2)
#define	PORT2_PODR19_P19_1    	(IO_PORT2.IO_PODR19.bit.P19_1)
#define	PORT2_PODR19_P19_0    	(IO_PORT2.IO_PODR19.bit.P19_0)
#define	PORT2_PODR22			(IO_PORT2.IO_PODR22.byte)
#define	PORT2_PODR22_P22_5    	(IO_PORT2.IO_PODR22.bit.P22_5)
#define	PORT2_PODR22_P22_4    	(IO_PORT2.IO_PODR22.bit.P22_4)
#define	PORT2_PODR22_P22_1    	(IO_PORT2.IO_PODR22.bit.P22_1)
#define	PORT2_PODR22_P22_0    	(IO_PORT2.IO_PODR22.bit.P22_0)
#define	PORT2_PODR23			(IO_PORT2.IO_PODR23.byte)
#define	PORT2_PODR23_P23_1    	(IO_PORT2.IO_PODR23.bit.P23_1)
#define	PORT2_PODR23_P23_0    	(IO_PORT2.IO_PODR23.bit.P23_0)
#define	PORT2_PODR24			(IO_PORT2.IO_PODR24.byte)
#define	PORT2_PODR24_P24_7    	(IO_PORT2.IO_PODR24.bit.P24_7)
#define	PORT2_PODR24_P24_6    	(IO_PORT2.IO_PODR24.bit.P24_6)
#define	PORT2_PODR24_P24_5    	(IO_PORT2.IO_PODR24.bit.P24_5)
#define	PORT2_PODR24_P24_4    	(IO_PORT2.IO_PODR24.bit.P24_4)
#define	PORT2_PODR24_P24_3    	(IO_PORT2.IO_PODR24.bit.P24_3)
#define	PORT2_PODR24_P24_2    	(IO_PORT2.IO_PODR24.bit.P24_2)
#define	PORT2_PODR24_P24_1    	(IO_PORT2.IO_PODR24.bit.P24_1)
#define	PORT2_PODR24_P24_0    	(IO_PORT2.IO_PODR24.bit.P24_0)
#define	PORT2_PODR27			(IO_PORT2.IO_PODR27.byte)
#define	PORT2_PODR27_P27_3    	(IO_PORT2.IO_PODR27.bit.P27_3)
#define	PORT2_PODR27_P27_2    	(IO_PORT2.IO_PODR27.bit.P27_2)
#define	PORT2_PODR27_P27_1    	(IO_PORT2.IO_PODR27.bit.P27_1)
#define	PORT2_PODR27_P27_0    	(IO_PORT2.IO_PODR27.bit.P27_0)
#define	PORT2_PODR28			(IO_PORT2.IO_PODR28.byte)
#define	PORT2_PODR28_P28_4    	(IO_PORT2.IO_PODR28.bit.P28_4)
#define	PORT2_PODR28_P28_3    	(IO_PORT2.IO_PODR28.bit.P28_3)
#define	PORT2_PODR28_P28_2    	(IO_PORT2.IO_PODR28.bit.P28_2)
#define	PORT2_PODR28_P28_1    	(IO_PORT2.IO_PODR28.bit.P28_1)
#define	PORT2_PODR28_P28_0    	(IO_PORT2.IO_PODR28.bit.P28_0)
#define	PORT2_PODR29			(IO_PORT2.IO_PODR29.byte)
#define	PORT2_PODR29_P29_7    	(IO_PORT2.IO_PODR29.bit.P29_7)
#define	PORT2_PODR29_P29_6    	(IO_PORT2.IO_PODR29.bit.P29_6)
#define	PORT2_PODR29_P29_5    	(IO_PORT2.IO_PODR29.bit.P29_5)
#define	PORT2_PODR29_P29_4    	(IO_PORT2.IO_PODR29.bit.P29_4)
#define	PORT2_PODR29_P29_3    	(IO_PORT2.IO_PODR29.bit.P29_3)
#define	PORT2_PODR29_P29_2    	(IO_PORT2.IO_PODR29.bit.P29_2)
#define	PORT2_PODR29_P29_1    	(IO_PORT2.IO_PODR29.bit.P29_1)
#define	PORT2_PODR29_P29_0    	(IO_PORT2.IO_PODR29.bit.P29_0)
#define	PORT2_PODR31			(IO_PORT2.IO_PODR31.byte)
#define	PORT2_PODR31_P31_6    	(IO_PORT2.IO_PODR31.bit.P31_6)
#define	PORT2_PODR31_P31_5    	(IO_PORT2.IO_PODR31.bit.P31_5)
#define	PORT2_PODR31_P31_4    	(IO_PORT2.IO_PODR31.bit.P31_4)
#define	PORT2_PODR31_P31_2    	(IO_PORT2.IO_PODR31.bit.P31_2)
#define	PORT2_PODR31_P31_1    	(IO_PORT2.IO_PODR31.bit.P31_1)
#define	PORT2_PODR31_P31_0    	(IO_PORT2.IO_PODR31.bit.P31_0)
#define	PORT2_RESV288_0  	(IO_PORT2.RESV288[CONSTANT_0])
#define	PORT2_RESV288_1  	(IO_PORT2.RESV288[CONSTANT_1])
#define	PORT2_RESV288_2  	(IO_PORT2.RESV288[CONSTANT_2])
#define	PORT2_RESV288_3  	(IO_PORT2.RESV288[CONSTANT_3])
#define	PORT2_RESV288_4  	(IO_PORT2.RESV288[CONSTANT_4])
#define	PORT2_RESV288_5  	(IO_PORT2.RESV288[CONSTANT_5])
#define	PORT2_RESV288_6  	(IO_PORT2.RESV288[CONSTANT_6])
#define	PORT2_RESV288_7  	(IO_PORT2.RESV288[CONSTANT_7])
#define	PORT2_RESV288_8  	(IO_PORT2.RESV288[CONSTANT_8])
#define	PORT2_RESV288_9  	(IO_PORT2.RESV288[CONSTANT_9])
#define	PORT2_RESV288_10  	(IO_PORT2.RESV288[CONSTANT_10])
#define	PORT2_RESV288_11  	(IO_PORT2.RESV288[CONSTANT_11])
#define	PORT2_RESV288_12  	(IO_PORT2.RESV288[CONSTANT_12])
#define	PORT2_RESV288_13  	(IO_PORT2.RESV288[CONSTANT_13])
#define	PORT2_RESV288_14  	(IO_PORT2.RESV288[CONSTANT_14])
#define	PORT2_RESV288_15  	(IO_PORT2.RESV288[CONSTANT_15])
#define	PORT2_RESV288_16  	(IO_PORT2.RESV288[CONSTANT_16])
#define	PORT2_RESV288_17  	(IO_PORT2.RESV288[CONSTANT_17])
#define	PORT2_RESV288_18  	(IO_PORT2.RESV288[CONSTANT_18])
#define	PORT2_RESV288_19  	(IO_PORT2.RESV288[CONSTANT_19])
#define	PORT2_RESV288_20  	(IO_PORT2.RESV288[CONSTANT_20])
#define	PORT2_RESV288_21  	(IO_PORT2.RESV288[CONSTANT_21])
#define	PORT2_RESV288_22  	(IO_PORT2.RESV288[CONSTANT_22])
#define	PORT2_RESV288_23  	(IO_PORT2.RESV288[CONSTANT_23])
#define	PORT2_RESV288_24  	(IO_PORT2.RESV288[CONSTANT_24])
#define	PORT2_RESV288_25  	(IO_PORT2.RESV288[CONSTANT_25])
#define	PORT2_RESV288_26  	(IO_PORT2.RESV288[CONSTANT_26])
#define	PORT2_RESV288_27  	(IO_PORT2.RESV288[CONSTANT_27])
#define	PORT2_RESV288_28  	(IO_PORT2.RESV288[CONSTANT_28])
#define	PORT2_RESV288_29  	(IO_PORT2.RESV288[CONSTANT_29])
#define	PORT2_RESV288_30  	(IO_PORT2.RESV288[CONSTANT_30])
#define	PORT2_RESV288_31  	(IO_PORT2.RESV288[CONSTANT_31])
#define	PORT2_RESV288_32  	(IO_PORT2.RESV288[CONSTANT_32])
#define	PORT2_RESV288_33  	(IO_PORT2.RESV288[CONSTANT_33])
#define	PORT2_RESV288_34  	(IO_PORT2.RESV288[CONSTANT_34])
#define	PORT2_RESV288_35  	(IO_PORT2.RESV288[CONSTANT_35])
#define	PORT2_RESV288_36  	(IO_PORT2.RESV288[CONSTANT_36])
#define	PORT2_RESV288_37  	(IO_PORT2.RESV288[CONSTANT_37])
#define	PORT2_RESV288_38  	(IO_PORT2.RESV288[CONSTANT_38])
#define	PORT2_RESV288_39  	(IO_PORT2.RESV288[CONSTANT_39])
#define	PORT2_RESV288_40  	(IO_PORT2.RESV288[CONSTANT_40])
#define	PORT2_RESV288_41  	(IO_PORT2.RESV288[CONSTANT_41])
#define	PORT2_RESV288_42  	(IO_PORT2.RESV288[CONSTANT_42])
#define	PORT2_RESV288_43  	(IO_PORT2.RESV288[CONSTANT_43])
#define	PORT2_RESV288_44  	(IO_PORT2.RESV288[CONSTANT_44])
#define	PORT2_RESV288_45  	(IO_PORT2.RESV288[CONSTANT_45])
#define	PORT2_PILR14			(IO_PORT2.IO_PILR14.byte)
#define	PORT2_PILR14_P14_7    	(IO_PORT2.IO_PILR14.bit.P14_7)
#define	PORT2_PILR14_P14_6    	(IO_PORT2.IO_PILR14.bit.P14_6)
#define	PORT2_PILR14_P14_5    	(IO_PORT2.IO_PILR14.bit.P14_5)
#define	PORT2_PILR14_P14_4    	(IO_PORT2.IO_PILR14.bit.P14_4)
#define	PORT2_PILR14_P14_3    	(IO_PORT2.IO_PILR14.bit.P14_3)
#define	PORT2_PILR14_P14_2    	(IO_PORT2.IO_PILR14.bit.P14_2)
#define	PORT2_PILR14_P14_1    	(IO_PORT2.IO_PILR14.bit.P14_1)
#define	PORT2_PILR14_P14_0    	(IO_PORT2.IO_PILR14.bit.P14_0)
#define	PORT2_PILR15			(IO_PORT2.IO_PILR15.byte)
#define	PORT2_PILR15_P15_5    	(IO_PORT2.IO_PILR15.bit.P15_5)
#define	PORT2_PILR15_P15_4    	(IO_PORT2.IO_PILR15.bit.P15_4)
#define	PORT2_PILR15_P15_3    	(IO_PORT2.IO_PILR15.bit.P15_3)
#define	PORT2_PILR15_P15_2    	(IO_PORT2.IO_PILR15.bit.P15_2)
#define	PORT2_PILR15_P15_1    	(IO_PORT2.IO_PILR15.bit.P15_1)
#define	PORT2_PILR15_P15_0    	(IO_PORT2.IO_PILR15.bit.P15_0)
#define	PORT2_PILR16			(IO_PORT2.IO_PILR16.byte)
#define	PORT2_PILR16_P16_7    	(IO_PORT2.IO_PILR16.bit.P16_7)
#define	PORT2_PILR16_P16_3    	(IO_PORT2.IO_PILR16.bit.P16_3)
#define	PORT2_PILR16_P16_2    	(IO_PORT2.IO_PILR16.bit.P16_2)
#define	PORT2_PILR16_P16_1    	(IO_PORT2.IO_PILR16.bit.P16_1)
#define	PORT2_PILR16_P16_0    	(IO_PORT2.IO_PILR16.bit.P16_0)
#define	PORT2_PILR17			(IO_PORT2.IO_PILR17.byte)
#define	PORT2_PILR17_P17_7    	(IO_PORT2.IO_PILR17.bit.P17_7)
#define	PORT2_PILR17_P17_6    	(IO_PORT2.IO_PILR17.bit.P17_6)
#define	PORT2_PILR17_P17_5    	(IO_PORT2.IO_PILR17.bit.P17_5)
#define	PORT2_PILR17_P17_4    	(IO_PORT2.IO_PILR17.bit.P17_4)
#define	PORT2_PILR17_P17_3    	(IO_PORT2.IO_PILR17.bit.P17_3)
#define	PORT2_PILR17_P17_2    	(IO_PORT2.IO_PILR17.bit.P17_2)
#define	PORT2_PILR17_P17_1    	(IO_PORT2.IO_PILR17.bit.P17_1)
#define	PORT2_PILR17_P17_0    	(IO_PORT2.IO_PILR17.bit.P17_0)
#define	PORT2_PILR18			(IO_PORT2.IO_PILR18.byte)
#define	PORT2_PILR18_P18_6    	(IO_PORT2.IO_PILR18.bit.P18_6)
#define	PORT2_PILR18_P18_5    	(IO_PORT2.IO_PILR18.bit.P18_5)
#define	PORT2_PILR18_P18_4    	(IO_PORT2.IO_PILR18.bit.P18_4)
#define	PORT2_PILR18_P18_2    	(IO_PORT2.IO_PILR18.bit.P18_2)
#define	PORT2_PILR18_P18_1    	(IO_PORT2.IO_PILR18.bit.P18_1)
#define	PORT2_PILR18_P18_0    	(IO_PORT2.IO_PILR18.bit.P18_0)
#define	PORT2_PILR19			(IO_PORT2.IO_PILR19.byte)
#define	PORT2_PILR19_P19_2    	(IO_PORT2.IO_PILR19.bit.P19_2)
#define	PORT2_PILR19_P19_1    	(IO_PORT2.IO_PILR19.bit.P19_1)
#define	PORT2_PILR19_P19_0    	(IO_PORT2.IO_PILR19.bit.P19_0)
#define	PORT2_PILR22			(IO_PORT2.IO_PILR22.byte)
#define	PORT2_PILR22_P22_5    	(IO_PORT2.IO_PILR22.bit.P22_5)
#define	PORT2_PILR22_P22_4    	(IO_PORT2.IO_PILR22.bit.P22_4)
#define	PORT2_PILR22_P22_1    	(IO_PORT2.IO_PILR22.bit.P22_1)
#define	PORT2_PILR22_P22_0    	(IO_PORT2.IO_PILR22.bit.P22_0)
#define	PORT2_PILR23			(IO_PORT2.IO_PILR23.byte)
#define	PORT2_PILR23_P23_1    	(IO_PORT2.IO_PILR23.bit.P23_1)
#define	PORT2_PILR23_P23_0    	(IO_PORT2.IO_PILR23.bit.P23_0)
#define	PORT2_PILR24			(IO_PORT2.IO_PILR24.byte)
#define	PORT2_PILR24_P24_7    	(IO_PORT2.IO_PILR24.bit.P24_7)
#define	PORT2_PILR24_P24_6    	(IO_PORT2.IO_PILR24.bit.P24_6)
#define	PORT2_PILR24_P24_5    	(IO_PORT2.IO_PILR24.bit.P24_5)
#define	PORT2_PILR24_P24_4    	(IO_PORT2.IO_PILR24.bit.P24_4)
#define	PORT2_PILR24_P24_3    	(IO_PORT2.IO_PILR24.bit.P24_3)
#define	PORT2_PILR24_P24_2    	(IO_PORT2.IO_PILR24.bit.P24_2)
#define	PORT2_PILR24_P24_1    	(IO_PORT2.IO_PILR24.bit.P24_1)
#define	PORT2_PILR24_P24_0    	(IO_PORT2.IO_PILR24.bit.P24_0)
#define	PORT2_PILR27			(IO_PORT2.IO_PILR27.byte)
#define	PORT2_PILR27_P27_3    	(IO_PORT2.IO_PILR27.bit.P27_3)
#define	PORT2_PILR27_P27_2    	(IO_PORT2.IO_PILR27.bit.P27_2)
#define	PORT2_PILR27_P27_1    	(IO_PORT2.IO_PILR27.bit.P27_1)
#define	PORT2_PILR27_P27_0    	(IO_PORT2.IO_PILR27.bit.P27_0)
#define	PORT2_PILR28			(IO_PORT2.IO_PILR28.byte)
#define	PORT2_PILR28_P28_4    	(IO_PORT2.IO_PILR28.bit.P28_4)
#define	PORT2_PILR28_P28_3    	(IO_PORT2.IO_PILR28.bit.P28_3)
#define	PORT2_PILR28_P28_2    	(IO_PORT2.IO_PILR28.bit.P28_2)
#define	PORT2_PILR28_P28_1    	(IO_PORT2.IO_PILR28.bit.P28_1)
#define	PORT2_PILR28_P28_0    	(IO_PORT2.IO_PILR28.bit.P28_0)
#define	PORT2_PILR29			(IO_PORT2.IO_PILR29.byte)
#define	PORT2_PILR29_P29_7    	(IO_PORT2.IO_PILR29.bit.P29_7)
#define	PORT2_PILR29_P29_6    	(IO_PORT2.IO_PILR29.bit.P29_6)
#define	PORT2_PILR29_P29_5    	(IO_PORT2.IO_PILR29.bit.P29_5)
#define	PORT2_PILR29_P29_4    	(IO_PORT2.IO_PILR29.bit.P29_4)
#define	PORT2_PILR29_P29_3    	(IO_PORT2.IO_PILR29.bit.P29_3)
#define	PORT2_PILR29_P29_2    	(IO_PORT2.IO_PILR29.bit.P29_2)
#define	PORT2_PILR29_P29_1    	(IO_PORT2.IO_PILR29.bit.P29_1)
#define	PORT2_PILR29_P29_0    	(IO_PORT2.IO_PILR29.bit.P29_0)
#define	PORT2_PILR31			(IO_PORT2.IO_PILR31.byte)
#define	PORT2_PILR31_P31_6    	(IO_PORT2.IO_PILR31.bit.P31_6)
#define	PORT2_PILR31_P31_5    	(IO_PORT2.IO_PILR31.bit.P31_5)
#define	PORT2_PILR31_P31_4    	(IO_PORT2.IO_PILR31.bit.P31_4)
#define	PORT2_PILR31_P31_2    	(IO_PORT2.IO_PILR31.bit.P31_2)
#define	PORT2_PILR31_P31_1    	(IO_PORT2.IO_PILR31.bit.P31_1)
#define	PORT2_PILR31_P31_0    	(IO_PORT2.IO_PILR31.bit.P31_0)
#define	PORT2_RESV352_0  	(IO_PORT2.RESV352[CONSTANT_0])
#define	PORT2_RESV352_1  	(IO_PORT2.RESV352[CONSTANT_1])
#define	PORT2_RESV352_2  	(IO_PORT2.RESV352[CONSTANT_2])
#define	PORT2_RESV352_3  	(IO_PORT2.RESV352[CONSTANT_3])
#define	PORT2_RESV352_4  	(IO_PORT2.RESV352[CONSTANT_4])
#define	PORT2_RESV352_5  	(IO_PORT2.RESV352[CONSTANT_5])
#define	PORT2_RESV352_6  	(IO_PORT2.RESV352[CONSTANT_6])
#define	PORT2_RESV352_7  	(IO_PORT2.RESV352[CONSTANT_7])
#define	PORT2_RESV352_8  	(IO_PORT2.RESV352[CONSTANT_8])
#define	PORT2_RESV352_9  	(IO_PORT2.RESV352[CONSTANT_9])
#define	PORT2_RESV352_10  	(IO_PORT2.RESV352[CONSTANT_10])
#define	PORT2_RESV352_11  	(IO_PORT2.RESV352[CONSTANT_11])
#define	PORT2_RESV352_12  	(IO_PORT2.RESV352[CONSTANT_12])
#define	PORT2_RESV352_13  	(IO_PORT2.RESV352[CONSTANT_13])
#define	PORT2_RESV352_14  	(IO_PORT2.RESV352[CONSTANT_14])
#define	PORT2_RESV352_15  	(IO_PORT2.RESV352[CONSTANT_15])
#define	PORT2_RESV352_16  	(IO_PORT2.RESV352[CONSTANT_16])
#define	PORT2_RESV352_17  	(IO_PORT2.RESV352[CONSTANT_17])
#define	PORT2_RESV352_18  	(IO_PORT2.RESV352[CONSTANT_18])
#define	PORT2_RESV352_19  	(IO_PORT2.RESV352[CONSTANT_19])
#define	PORT2_RESV352_20  	(IO_PORT2.RESV352[CONSTANT_20])
#define	PORT2_RESV352_21  	(IO_PORT2.RESV352[CONSTANT_21])
#define	PORT2_RESV352_22  	(IO_PORT2.RESV352[CONSTANT_22])
#define	PORT2_RESV352_23  	(IO_PORT2.RESV352[CONSTANT_23])
#define	PORT2_RESV352_24  	(IO_PORT2.RESV352[CONSTANT_24])
#define	PORT2_RESV352_25  	(IO_PORT2.RESV352[CONSTANT_25])
#define	PORT2_RESV352_26  	(IO_PORT2.RESV352[CONSTANT_26])
#define	PORT2_RESV352_27  	(IO_PORT2.RESV352[CONSTANT_27])
#define	PORT2_RESV352_28  	(IO_PORT2.RESV352[CONSTANT_28])
#define	PORT2_RESV352_29  	(IO_PORT2.RESV352[CONSTANT_29])
#define	PORT2_RESV352_30  	(IO_PORT2.RESV352[CONSTANT_30])
#define	PORT2_RESV352_31  	(IO_PORT2.RESV352[CONSTANT_31])
#define	PORT2_RESV352_32  	(IO_PORT2.RESV352[CONSTANT_32])
#define	PORT2_RESV352_33  	(IO_PORT2.RESV352[CONSTANT_33])
#define	PORT2_RESV352_34  	(IO_PORT2.RESV352[CONSTANT_34])
#define	PORT2_RESV352_35  	(IO_PORT2.RESV352[CONSTANT_35])
#define	PORT2_RESV352_36  	(IO_PORT2.RESV352[CONSTANT_36])
#define	PORT2_RESV352_37  	(IO_PORT2.RESV352[CONSTANT_37])
#define	PORT2_RESV352_38  	(IO_PORT2.RESV352[CONSTANT_38])
#define	PORT2_RESV352_39  	(IO_PORT2.RESV352[CONSTANT_39])
#define	PORT2_RESV352_40  	(IO_PORT2.RESV352[CONSTANT_40])
#define	PORT2_RESV352_41  	(IO_PORT2.RESV352[CONSTANT_41])
#define	PORT2_RESV352_42  	(IO_PORT2.RESV352[CONSTANT_42])
#define	PORT2_RESV352_43  	(IO_PORT2.RESV352[CONSTANT_43])
#define	PORT2_RESV352_44  	(IO_PORT2.RESV352[CONSTANT_44])
#define	PORT2_RESV352_45  	(IO_PORT2.RESV352[CONSTANT_45])
#define	PORT2_EPILR14			(IO_PORT2.IO_EPILR14.byte)
#define	PORT2_EPILR14_P14_7    	(IO_PORT2.IO_EPILR14.bit.P14_7)
#define	PORT2_EPILR14_P14_6    	(IO_PORT2.IO_EPILR14.bit.P14_6)
#define	PORT2_EPILR14_P14_5    	(IO_PORT2.IO_EPILR14.bit.P14_5)
#define	PORT2_EPILR14_P14_4    	(IO_PORT2.IO_EPILR14.bit.P14_4)
#define	PORT2_EPILR14_P14_3    	(IO_PORT2.IO_EPILR14.bit.P14_3)
#define	PORT2_EPILR14_P14_2    	(IO_PORT2.IO_EPILR14.bit.P14_2)
#define	PORT2_EPILR14_P14_1    	(IO_PORT2.IO_EPILR14.bit.P14_1)
#define	PORT2_EPILR14_P14_0    	(IO_PORT2.IO_EPILR14.bit.P14_0)
#define	PORT2_EPILR15			(IO_PORT2.IO_EPILR15.byte)
#define	PORT2_EPILR15_P15_5    	(IO_PORT2.IO_EPILR15.bit.P15_5)
#define	PORT2_EPILR15_P15_4    	(IO_PORT2.IO_EPILR15.bit.P15_4)
#define	PORT2_EPILR15_P15_3    	(IO_PORT2.IO_EPILR15.bit.P15_3)
#define	PORT2_EPILR15_P15_2    	(IO_PORT2.IO_EPILR15.bit.P15_2)
#define	PORT2_EPILR15_P15_1    	(IO_PORT2.IO_EPILR15.bit.P15_1)
#define	PORT2_EPILR15_P15_0    	(IO_PORT2.IO_EPILR15.bit.P15_0)
#define	PORT2_EPILR16			(IO_PORT2.IO_EPILR16.byte)
#define	PORT2_EPILR16_P16_7    	(IO_PORT2.IO_EPILR16.bit.P16_7)
#define	PORT2_EPILR16_P16_3    	(IO_PORT2.IO_EPILR16.bit.P16_3)
#define	PORT2_EPILR16_P16_2    	(IO_PORT2.IO_EPILR16.bit.P16_2)
#define	PORT2_EPILR16_P16_1    	(IO_PORT2.IO_EPILR16.bit.P16_1)
#define	PORT2_EPILR16_P16_0    	(IO_PORT2.IO_EPILR16.bit.P16_0)
#define	PORT2_EPILR17			(IO_PORT2.IO_EPILR17.byte)
#define	PORT2_EPILR17_P17_7    	(IO_PORT2.IO_EPILR17.bit.P17_7)
#define	PORT2_EPILR17_P17_6    	(IO_PORT2.IO_EPILR17.bit.P17_6)
#define	PORT2_EPILR17_P17_5    	(IO_PORT2.IO_EPILR17.bit.P17_5)
#define	PORT2_EPILR17_P17_4    	(IO_PORT2.IO_EPILR17.bit.P17_4)
#define	PORT2_EPILR17_P17_3    	(IO_PORT2.IO_EPILR17.bit.P17_3)
#define	PORT2_EPILR17_P17_2    	(IO_PORT2.IO_EPILR17.bit.P17_2)
#define	PORT2_EPILR17_P17_1    	(IO_PORT2.IO_EPILR17.bit.P17_1)
#define	PORT2_EPILR17_P17_0    	(IO_PORT2.IO_EPILR17.bit.P17_0)
#define	PORT2_EPILR18			(IO_PORT2.IO_EPILR18.byte)
#define	PORT2_EPILR18_P18_6    	(IO_PORT2.IO_EPILR18.bit.P18_6)
#define	PORT2_EPILR18_P18_5    	(IO_PORT2.IO_EPILR18.bit.P18_5)
#define	PORT2_EPILR18_P18_4    	(IO_PORT2.IO_EPILR18.bit.P18_4)
#define	PORT2_EPILR18_P18_2    	(IO_PORT2.IO_EPILR18.bit.P18_2)
#define	PORT2_EPILR18_P18_1    	(IO_PORT2.IO_EPILR18.bit.P18_1)
#define	PORT2_EPILR18_P18_0    	(IO_PORT2.IO_EPILR18.bit.P18_0)
#define	PORT2_EPILR19			(IO_PORT2.IO_EPILR19.byte)
#define	PORT2_EPILR19_P19_2    	(IO_PORT2.IO_EPILR19.bit.P19_2)
#define	PORT2_EPILR19_P19_1    	(IO_PORT2.IO_EPILR19.bit.P19_1)
#define	PORT2_EPILR19_P19_0    	(IO_PORT2.IO_EPILR19.bit.P19_0)
#define	PORT2_EPILR22			(IO_PORT2.IO_EPILR22.byte)
#define	PORT2_EPILR22_P22_5    	(IO_PORT2.IO_EPILR22.bit.P22_5)
#define	PORT2_EPILR22_P22_4    	(IO_PORT2.IO_EPILR22.bit.P22_4)
#define	PORT2_EPILR22_P22_1    	(IO_PORT2.IO_EPILR22.bit.P22_1)
#define	PORT2_EPILR22_P22_0    	(IO_PORT2.IO_EPILR22.bit.P22_0)
#define	PORT2_EPILR23			(IO_PORT2.IO_EPILR23.byte)
#define	PORT2_EPILR23_P23_1    	(IO_PORT2.IO_EPILR23.bit.P23_1)
#define	PORT2_EPILR23_P23_0    	(IO_PORT2.IO_EPILR23.bit.P23_0)
#define	PORT2_EPILR24			(IO_PORT2.IO_EPILR24.byte)
#define	PORT2_EPILR24_P24_7    	(IO_PORT2.IO_EPILR24.bit.P24_7)
#define	PORT2_EPILR24_P24_6    	(IO_PORT2.IO_EPILR24.bit.P24_6)
#define	PORT2_EPILR24_P24_5    	(IO_PORT2.IO_EPILR24.bit.P24_5)
#define	PORT2_EPILR24_P24_4    	(IO_PORT2.IO_EPILR24.bit.P24_4)
#define	PORT2_EPILR24_P24_3    	(IO_PORT2.IO_EPILR24.bit.P24_3)
#define	PORT2_EPILR24_P24_2    	(IO_PORT2.IO_EPILR24.bit.P24_2)
#define	PORT2_EPILR24_P24_1    	(IO_PORT2.IO_EPILR24.bit.P24_1)
#define	PORT2_EPILR24_P24_0    	(IO_PORT2.IO_EPILR24.bit.P24_0)
#define	PORT2_EPILR27			(IO_PORT2.IO_EPILR27.byte)
#define	PORT2_EPILR27_P27_3    	(IO_PORT2.IO_EPILR27.bit.P27_3)
#define	PORT2_EPILR27_P27_2    	(IO_PORT2.IO_EPILR27.bit.P27_2)
#define	PORT2_EPILR27_P27_1    	(IO_PORT2.IO_EPILR27.bit.P27_1)
#define	PORT2_EPILR27_P27_0    	(IO_PORT2.IO_EPILR27.bit.P27_0)
#define	PORT2_EPILR28			(IO_PORT2.IO_EPILR28.byte)
#define	PORT2_EPILR28_P28_4    	(IO_PORT2.IO_EPILR28.bit.P28_4)
#define	PORT2_EPILR28_P28_3    	(IO_PORT2.IO_EPILR28.bit.P28_3)
#define	PORT2_EPILR28_P28_2    	(IO_PORT2.IO_EPILR28.bit.P28_2)
#define	PORT2_EPILR28_P28_1    	(IO_PORT2.IO_EPILR28.bit.P28_1)
#define	PORT2_EPILR28_P28_0    	(IO_PORT2.IO_EPILR28.bit.P28_0)
#define	PORT2_EPILR29			(IO_PORT2.IO_EPILR29.byte)
#define	PORT2_EPILR29_P29_7    	(IO_PORT2.IO_EPILR29.bit.P29_7)
#define	PORT2_EPILR29_P29_6    	(IO_PORT2.IO_EPILR29.bit.P29_6)
#define	PORT2_EPILR29_P29_5    	(IO_PORT2.IO_EPILR29.bit.P29_5)
#define	PORT2_EPILR29_P29_4    	(IO_PORT2.IO_EPILR29.bit.P29_4)
#define	PORT2_EPILR29_P29_3    	(IO_PORT2.IO_EPILR29.bit.P29_3)
#define	PORT2_EPILR29_P29_2    	(IO_PORT2.IO_EPILR29.bit.P29_2)
#define	PORT2_EPILR29_P29_1    	(IO_PORT2.IO_EPILR29.bit.P29_1)
#define	PORT2_EPILR29_P29_0    	(IO_PORT2.IO_EPILR29.bit.P29_0)
#define	PORT2_EPILR31			(IO_PORT2.IO_EPILR31.byte)
#define	PORT2_EPILR31_P31_6    	(IO_PORT2.IO_EPILR31.bit.P31_6)
#define	PORT2_EPILR31_P31_5    	(IO_PORT2.IO_EPILR31.bit.P31_5)
#define	PORT2_EPILR31_P31_4    	(IO_PORT2.IO_EPILR31.bit.P31_4)
#define	PORT2_EPILR31_P31_2    	(IO_PORT2.IO_EPILR31.bit.P31_2)
#define	PORT2_EPILR31_P31_1    	(IO_PORT2.IO_EPILR31.bit.P31_1)
#define	PORT2_EPILR31_P31_0    	(IO_PORT2.IO_EPILR31.bit.P31_0)
#define	PORT2_RESV416_0  	(IO_PORT2.RESV416[CONSTANT_0])
#define	PORT2_RESV416_1  	(IO_PORT2.RESV416[CONSTANT_1])
#define	PORT2_RESV416_2  	(IO_PORT2.RESV416[CONSTANT_2])
#define	PORT2_RESV416_3  	(IO_PORT2.RESV416[CONSTANT_3])
#define	PORT2_RESV416_4  	(IO_PORT2.RESV416[CONSTANT_4])
#define	PORT2_RESV416_5  	(IO_PORT2.RESV416[CONSTANT_5])
#define	PORT2_RESV416_6  	(IO_PORT2.RESV416[CONSTANT_6])
#define	PORT2_RESV416_7  	(IO_PORT2.RESV416[CONSTANT_7])
#define	PORT2_RESV416_8  	(IO_PORT2.RESV416[CONSTANT_8])
#define	PORT2_RESV416_9  	(IO_PORT2.RESV416[CONSTANT_9])
#define	PORT2_RESV416_10  	(IO_PORT2.RESV416[CONSTANT_10])
#define	PORT2_RESV416_11  	(IO_PORT2.RESV416[CONSTANT_11])
#define	PORT2_RESV416_12  	(IO_PORT2.RESV416[CONSTANT_12])
#define	PORT2_RESV416_13  	(IO_PORT2.RESV416[CONSTANT_13])
#define	PORT2_RESV416_14  	(IO_PORT2.RESV416[CONSTANT_14])
#define	PORT2_RESV416_15  	(IO_PORT2.RESV416[CONSTANT_15])
#define	PORT2_RESV416_16  	(IO_PORT2.RESV416[CONSTANT_16])
#define	PORT2_RESV416_17  	(IO_PORT2.RESV416[CONSTANT_17])
#define	PORT2_RESV416_18  	(IO_PORT2.RESV416[CONSTANT_18])
#define	PORT2_RESV416_19  	(IO_PORT2.RESV416[CONSTANT_19])
#define	PORT2_RESV416_20  	(IO_PORT2.RESV416[CONSTANT_20])
#define	PORT2_RESV416_21  	(IO_PORT2.RESV416[CONSTANT_21])
#define	PORT2_RESV416_22  	(IO_PORT2.RESV416[CONSTANT_22])
#define	PORT2_RESV416_23  	(IO_PORT2.RESV416[CONSTANT_23])
#define	PORT2_RESV416_24  	(IO_PORT2.RESV416[CONSTANT_24])
#define	PORT2_RESV416_25  	(IO_PORT2.RESV416[CONSTANT_25])
#define	PORT2_RESV416_26  	(IO_PORT2.RESV416[CONSTANT_26])
#define	PORT2_RESV416_27  	(IO_PORT2.RESV416[CONSTANT_27])
#define	PORT2_RESV416_28  	(IO_PORT2.RESV416[CONSTANT_28])
#define	PORT2_RESV416_29  	(IO_PORT2.RESV416[CONSTANT_29])
#define	PORT2_RESV416_30  	(IO_PORT2.RESV416[CONSTANT_30])
#define	PORT2_RESV416_31  	(IO_PORT2.RESV416[CONSTANT_31])
#define	PORT2_RESV416_32  	(IO_PORT2.RESV416[CONSTANT_32])
#define	PORT2_RESV416_33  	(IO_PORT2.RESV416[CONSTANT_33])
#define	PORT2_RESV416_34  	(IO_PORT2.RESV416[CONSTANT_34])
#define	PORT2_RESV416_35  	(IO_PORT2.RESV416[CONSTANT_35])
#define	PORT2_RESV416_36  	(IO_PORT2.RESV416[CONSTANT_36])
#define	PORT2_RESV416_37  	(IO_PORT2.RESV416[CONSTANT_37])
#define	PORT2_RESV416_38  	(IO_PORT2.RESV416[CONSTANT_38])
#define	PORT2_RESV416_39  	(IO_PORT2.RESV416[CONSTANT_39])
#define	PORT2_RESV416_40  	(IO_PORT2.RESV416[CONSTANT_40])
#define	PORT2_RESV416_41  	(IO_PORT2.RESV416[CONSTANT_41])
#define	PORT2_RESV416_42  	(IO_PORT2.RESV416[CONSTANT_42])
#define	PORT2_RESV416_43  	(IO_PORT2.RESV416[CONSTANT_43])
#define	PORT2_RESV416_44  	(IO_PORT2.RESV416[CONSTANT_44])
#define	PORT2_RESV416_45  	(IO_PORT2.RESV416[CONSTANT_45])
#define	PORT2_PPER14			(IO_PORT2.IO_PPER14.byte)
#define	PORT2_PPER14_P14_7    	(IO_PORT2.IO_PPER14.bit.P14_7)
#define	PORT2_PPER14_P14_6    	(IO_PORT2.IO_PPER14.bit.P14_6)
#define	PORT2_PPER14_P14_5    	(IO_PORT2.IO_PPER14.bit.P14_5)
#define	PORT2_PPER14_P14_4    	(IO_PORT2.IO_PPER14.bit.P14_4)
#define	PORT2_PPER14_P14_3    	(IO_PORT2.IO_PPER14.bit.P14_3)
#define	PORT2_PPER14_P14_2    	(IO_PORT2.IO_PPER14.bit.P14_2)
#define	PORT2_PPER14_P14_1    	(IO_PORT2.IO_PPER14.bit.P14_1)
#define	PORT2_PPER14_P14_0    	(IO_PORT2.IO_PPER14.bit.P14_0)
#define	PORT2_PPER15			(IO_PORT2.IO_PPER15.byte)
#define	PORT2_PPER15_P15_5    	(IO_PORT2.IO_PPER15.bit.P15_5)
#define	PORT2_PPER15_P15_4    	(IO_PORT2.IO_PPER15.bit.P15_4)
#define	PORT2_PPER15_P15_3    	(IO_PORT2.IO_PPER15.bit.P15_3)
#define	PORT2_PPER15_P15_2    	(IO_PORT2.IO_PPER15.bit.P15_2)
#define	PORT2_PPER15_P15_1    	(IO_PORT2.IO_PPER15.bit.P15_1)
#define	PORT2_PPER15_P15_0    	(IO_PORT2.IO_PPER15.bit.P15_0)
#define	PORT2_PPER16			(IO_PORT2.IO_PPER16.byte)
#define	PORT2_PPER16_P16_7    	(IO_PORT2.IO_PPER16.bit.P16_7)
#define	PORT2_PPER16_P16_3    	(IO_PORT2.IO_PPER16.bit.P16_3)
#define	PORT2_PPER16_P16_2    	(IO_PORT2.IO_PPER16.bit.P16_2)
#define	PORT2_PPER16_P16_1    	(IO_PORT2.IO_PPER16.bit.P16_1)
#define	PORT2_PPER16_P16_0    	(IO_PORT2.IO_PPER16.bit.P16_0)
#define	PORT2_PPER17			(IO_PORT2.IO_PPER17.byte)
#define	PORT2_PPER17_P17_7    	(IO_PORT2.IO_PPER17.bit.P17_7)
#define	PORT2_PPER17_P17_6    	(IO_PORT2.IO_PPER17.bit.P17_6)
#define	PORT2_PPER17_P17_5    	(IO_PORT2.IO_PPER17.bit.P17_5)
#define	PORT2_PPER17_P17_4    	(IO_PORT2.IO_PPER17.bit.P17_4)
#define	PORT2_PPER17_P17_3    	(IO_PORT2.IO_PPER17.bit.P17_3)
#define	PORT2_PPER17_P17_2    	(IO_PORT2.IO_PPER17.bit.P17_2)
#define	PORT2_PPER17_P17_1    	(IO_PORT2.IO_PPER17.bit.P17_1)
#define	PORT2_PPER17_P17_0    	(IO_PORT2.IO_PPER17.bit.P17_0)
#define	PORT2_PPER18			(IO_PORT2.IO_PPER18.byte)
#define	PORT2_PPER18_P18_6    	(IO_PORT2.IO_PPER18.bit.P18_6)
#define	PORT2_PPER18_P18_5    	(IO_PORT2.IO_PPER18.bit.P18_5)
#define	PORT2_PPER18_P18_4    	(IO_PORT2.IO_PPER18.bit.P18_4)
#define	PORT2_PPER18_P18_2    	(IO_PORT2.IO_PPER18.bit.P18_2)
#define	PORT2_PPER18_P18_1    	(IO_PORT2.IO_PPER18.bit.P18_1)
#define	PORT2_PPER18_P18_0    	(IO_PORT2.IO_PPER18.bit.P18_0)
#define	PORT2_PPER19			(IO_PORT2.IO_PPER19.byte)
#define	PORT2_PPER19_P19_2    	(IO_PORT2.IO_PPER19.bit.P19_2)
#define	PORT2_PPER19_P19_1    	(IO_PORT2.IO_PPER19.bit.P19_1)
#define	PORT2_PPER19_P19_0    	(IO_PORT2.IO_PPER19.bit.P19_0)
#define	PORT2_PPER22			(IO_PORT2.IO_PPER22.byte)
#define	PORT2_PPER22_P22_5    	(IO_PORT2.IO_PPER22.bit.P22_5)
#define	PORT2_PPER22_P22_4    	(IO_PORT2.IO_PPER22.bit.P22_4)
#define	PORT2_PPER22_P22_1    	(IO_PORT2.IO_PPER22.bit.P22_1)
#define	PORT2_PPER22_P22_0    	(IO_PORT2.IO_PPER22.bit.P22_0)
#define	PORT2_PPER23			(IO_PORT2.IO_PPER23.byte)
#define	PORT2_PPER23_P23_1    	(IO_PORT2.IO_PPER23.bit.P23_1)
#define	PORT2_PPER23_P23_0    	(IO_PORT2.IO_PPER23.bit.P23_0)
#define	PORT2_PPER24			(IO_PORT2.IO_PPER24.byte)
#define	PORT2_PPER24_P24_7    	(IO_PORT2.IO_PPER24.bit.P24_7)
#define	PORT2_PPER24_P24_6    	(IO_PORT2.IO_PPER24.bit.P24_6)
#define	PORT2_PPER24_P24_5    	(IO_PORT2.IO_PPER24.bit.P24_5)
#define	PORT2_PPER24_P24_4    	(IO_PORT2.IO_PPER24.bit.P24_4)
#define	PORT2_PPER24_P24_3    	(IO_PORT2.IO_PPER24.bit.P24_3)
#define	PORT2_PPER24_P24_2    	(IO_PORT2.IO_PPER24.bit.P24_2)
#define	PORT2_PPER24_P24_1    	(IO_PORT2.IO_PPER24.bit.P24_1)
#define	PORT2_PPER24_P24_0    	(IO_PORT2.IO_PPER24.bit.P24_0)
#define	PORT2_PPER27			(IO_PORT2.IO_PPER27.byte)
#define	PORT2_PPER27_P27_3    	(IO_PORT2.IO_PPER27.bit.P27_3)
#define	PORT2_PPER27_P27_2    	(IO_PORT2.IO_PPER27.bit.P27_2)
#define	PORT2_PPER27_P27_1    	(IO_PORT2.IO_PPER27.bit.P27_1)
#define	PORT2_PPER27_P27_0    	(IO_PORT2.IO_PPER27.bit.P27_0)
#define	PORT2_PPER28			(IO_PORT2.IO_PPER28.byte)
#define	PORT2_PPER28_P28_4    	(IO_PORT2.IO_PPER28.bit.P28_4)
#define	PORT2_PPER28_P28_3    	(IO_PORT2.IO_PPER28.bit.P28_3)
#define	PORT2_PPER28_P28_2    	(IO_PORT2.IO_PPER28.bit.P28_2)
#define	PORT2_PPER28_P28_1    	(IO_PORT2.IO_PPER28.bit.P28_1)
#define	PORT2_PPER28_P28_0    	(IO_PORT2.IO_PPER28.bit.P28_0)
#define	PORT2_PPER29			(IO_PORT2.IO_PPER29.byte)
#define	PORT2_PPER29_P29_7    	(IO_PORT2.IO_PPER29.bit.P29_7)
#define	PORT2_PPER29_P29_6    	(IO_PORT2.IO_PPER29.bit.P29_6)
#define	PORT2_PPER29_P29_5    	(IO_PORT2.IO_PPER29.bit.P29_5)
#define	PORT2_PPER29_P29_4    	(IO_PORT2.IO_PPER29.bit.P29_4)
#define	PORT2_PPER29_P29_3    	(IO_PORT2.IO_PPER29.bit.P29_3)
#define	PORT2_PPER29_P29_2    	(IO_PORT2.IO_PPER29.bit.P29_2)
#define	PORT2_PPER29_P29_1    	(IO_PORT2.IO_PPER29.bit.P29_1)
#define	PORT2_PPER29_P29_0    	(IO_PORT2.IO_PPER29.bit.P29_0)
#define	PORT2_PPER31			(IO_PORT2.IO_PPER31.byte)
#define	PORT2_PPER31_P31_6    	(IO_PORT2.IO_PPER31.bit.P31_6)
#define	PORT2_PPER31_P31_5    	(IO_PORT2.IO_PPER31.bit.P31_5)
#define	PORT2_PPER31_P31_4    	(IO_PORT2.IO_PPER31.bit.P31_4)
#define	PORT2_PPER31_P31_2    	(IO_PORT2.IO_PPER31.bit.P31_2)
#define	PORT2_PPER31_P31_1    	(IO_PORT2.IO_PPER31.bit.P31_1)
#define	PORT2_PPER31_P31_0    	(IO_PORT2.IO_PPER31.bit.P31_0)
#define	PORT2_RESV480_0  	(IO_PORT2.RESV480[CONSTANT_0])
#define	PORT2_RESV480_1  	(IO_PORT2.RESV480[CONSTANT_1])
#define	PORT2_RESV480_2  	(IO_PORT2.RESV480[CONSTANT_2])
#define	PORT2_RESV480_3  	(IO_PORT2.RESV480[CONSTANT_3])
#define	PORT2_RESV480_4  	(IO_PORT2.RESV480[CONSTANT_4])
#define	PORT2_RESV480_5  	(IO_PORT2.RESV480[CONSTANT_5])
#define	PORT2_RESV480_6  	(IO_PORT2.RESV480[CONSTANT_6])
#define	PORT2_RESV480_7  	(IO_PORT2.RESV480[CONSTANT_7])
#define	PORT2_RESV480_8  	(IO_PORT2.RESV480[CONSTANT_8])
#define	PORT2_RESV480_9  	(IO_PORT2.RESV480[CONSTANT_9])
#define	PORT2_RESV480_10  	(IO_PORT2.RESV480[CONSTANT_10])
#define	PORT2_RESV480_11  	(IO_PORT2.RESV480[CONSTANT_11])
#define	PORT2_RESV480_12  	(IO_PORT2.RESV480[CONSTANT_12])
#define	PORT2_RESV480_13  	(IO_PORT2.RESV480[CONSTANT_13])
#define	PORT2_RESV480_14  	(IO_PORT2.RESV480[CONSTANT_14])
#define	PORT2_RESV480_15  	(IO_PORT2.RESV480[CONSTANT_15])
#define	PORT2_RESV480_16  	(IO_PORT2.RESV480[CONSTANT_16])
#define	PORT2_RESV480_17  	(IO_PORT2.RESV480[CONSTANT_17])
#define	PORT2_RESV480_18  	(IO_PORT2.RESV480[CONSTANT_18])
#define	PORT2_RESV480_19  	(IO_PORT2.RESV480[CONSTANT_19])
#define	PORT2_RESV480_20  	(IO_PORT2.RESV480[CONSTANT_20])
#define	PORT2_RESV480_21  	(IO_PORT2.RESV480[CONSTANT_21])
#define	PORT2_RESV480_22  	(IO_PORT2.RESV480[CONSTANT_22])
#define	PORT2_RESV480_23  	(IO_PORT2.RESV480[CONSTANT_23])
#define	PORT2_RESV480_24  	(IO_PORT2.RESV480[CONSTANT_24])
#define	PORT2_RESV480_25  	(IO_PORT2.RESV480[CONSTANT_25])
#define	PORT2_RESV480_26  	(IO_PORT2.RESV480[CONSTANT_26])
#define	PORT2_RESV480_27  	(IO_PORT2.RESV480[CONSTANT_27])
#define	PORT2_RESV480_28  	(IO_PORT2.RESV480[CONSTANT_28])
#define	PORT2_RESV480_29  	(IO_PORT2.RESV480[CONSTANT_29])
#define	PORT2_RESV480_30  	(IO_PORT2.RESV480[CONSTANT_30])
#define	PORT2_RESV480_31  	(IO_PORT2.RESV480[CONSTANT_31])
#define	PORT2_RESV480_32  	(IO_PORT2.RESV480[CONSTANT_32])
#define	PORT2_RESV480_33  	(IO_PORT2.RESV480[CONSTANT_33])
#define	PORT2_RESV480_34  	(IO_PORT2.RESV480[CONSTANT_34])
#define	PORT2_RESV480_35  	(IO_PORT2.RESV480[CONSTANT_35])
#define	PORT2_RESV480_36  	(IO_PORT2.RESV480[CONSTANT_36])
#define	PORT2_RESV480_37  	(IO_PORT2.RESV480[CONSTANT_37])
#define	PORT2_RESV480_38  	(IO_PORT2.RESV480[CONSTANT_38])
#define	PORT2_RESV480_39  	(IO_PORT2.RESV480[CONSTANT_39])
#define	PORT2_RESV480_40  	(IO_PORT2.RESV480[CONSTANT_40])
#define	PORT2_RESV480_41  	(IO_PORT2.RESV480[CONSTANT_41])
#define	PORT2_RESV480_42  	(IO_PORT2.RESV480[CONSTANT_42])
#define	PORT2_RESV480_43  	(IO_PORT2.RESV480[CONSTANT_43])
#define	PORT2_RESV480_44  	(IO_PORT2.RESV480[CONSTANT_44])
#define	PORT2_RESV480_45  	(IO_PORT2.RESV480[CONSTANT_45])
#define	PORT2_PPCR14			(IO_PORT2.IO_PPCR14.byte)
#define	PORT2_PPCR14_P14_7    	(IO_PORT2.IO_PPCR14.bit.P14_7)
#define	PORT2_PPCR14_P14_6    	(IO_PORT2.IO_PPCR14.bit.P14_6)
#define	PORT2_PPCR14_P14_5    	(IO_PORT2.IO_PPCR14.bit.P14_5)
#define	PORT2_PPCR14_P14_4    	(IO_PORT2.IO_PPCR14.bit.P14_4)
#define	PORT2_PPCR14_P14_3    	(IO_PORT2.IO_PPCR14.bit.P14_3)
#define	PORT2_PPCR14_P14_2    	(IO_PORT2.IO_PPCR14.bit.P14_2)
#define	PORT2_PPCR14_P14_1    	(IO_PORT2.IO_PPCR14.bit.P14_1)
#define	PORT2_PPCR14_P14_0    	(IO_PORT2.IO_PPCR14.bit.P14_0)
#define	PORT2_PPCR15			(IO_PORT2.IO_PPCR15.byte)
#define	PORT2_PPCR15_P15_5    	(IO_PORT2.IO_PPCR15.bit.P15_5)
#define	PORT2_PPCR15_P15_4    	(IO_PORT2.IO_PPCR15.bit.P15_4)
#define	PORT2_PPCR15_P15_3    	(IO_PORT2.IO_PPCR15.bit.P15_3)
#define	PORT2_PPCR15_P15_2    	(IO_PORT2.IO_PPCR15.bit.P15_2)
#define	PORT2_PPCR15_P15_1    	(IO_PORT2.IO_PPCR15.bit.P15_1)
#define	PORT2_PPCR15_P15_0    	(IO_PORT2.IO_PPCR15.bit.P15_0)
#define	PORT2_PPCR16			(IO_PORT2.IO_PPCR16.byte)
#define	PORT2_PPCR16_P16_7    	(IO_PORT2.IO_PPCR16.bit.P16_7)
#define	PORT2_PPCR16_P16_3    	(IO_PORT2.IO_PPCR16.bit.P16_3)
#define	PORT2_PPCR16_P16_2    	(IO_PORT2.IO_PPCR16.bit.P16_2)
#define	PORT2_PPCR16_P16_1    	(IO_PORT2.IO_PPCR16.bit.P16_1)
#define	PORT2_PPCR16_P16_0    	(IO_PORT2.IO_PPCR16.bit.P16_0)
#define	PORT2_PPCR17			(IO_PORT2.IO_PPCR17.byte)
#define	PORT2_PPCR17_P17_7    	(IO_PORT2.IO_PPCR17.bit.P17_7)
#define	PORT2_PPCR17_P17_6    	(IO_PORT2.IO_PPCR17.bit.P17_6)
#define	PORT2_PPCR17_P17_5    	(IO_PORT2.IO_PPCR17.bit.P17_5)
#define	PORT2_PPCR17_P17_4    	(IO_PORT2.IO_PPCR17.bit.P17_4)
#define	PORT2_PPCR17_P17_3    	(IO_PORT2.IO_PPCR17.bit.P17_3)
#define	PORT2_PPCR17_P17_2    	(IO_PORT2.IO_PPCR17.bit.P17_2)
#define	PORT2_PPCR17_P17_1    	(IO_PORT2.IO_PPCR17.bit.P17_1)
#define	PORT2_PPCR17_P17_0    	(IO_PORT2.IO_PPCR17.bit.P17_0)
#define	PORT2_PPCR18			(IO_PORT2.IO_PPCR18.byte)
#define	PORT2_PPCR18_P18_6    	(IO_PORT2.IO_PPCR18.bit.P18_6)
#define	PORT2_PPCR18_P18_5    	(IO_PORT2.IO_PPCR18.bit.P18_5)
#define	PORT2_PPCR18_P18_4    	(IO_PORT2.IO_PPCR18.bit.P18_4)
#define	PORT2_PPCR18_P18_2    	(IO_PORT2.IO_PPCR18.bit.P18_2)
#define	PORT2_PPCR18_P18_1    	(IO_PORT2.IO_PPCR18.bit.P18_1)
#define	PORT2_PPCR18_P18_0    	(IO_PORT2.IO_PPCR18.bit.P18_0)
#define	PORT2_PPCR19			(IO_PORT2.IO_PPCR19.byte)
#define	PORT2_PPCR19_P19_2    	(IO_PORT2.IO_PPCR19.bit.P19_2)
#define	PORT2_PPCR19_P19_1    	(IO_PORT2.IO_PPCR19.bit.P19_1)
#define	PORT2_PPCR19_P19_0    	(IO_PORT2.IO_PPCR19.bit.P19_0)
#define	PORT2_PPCR22			(IO_PORT2.IO_PPCR22.byte)
#define	PORT2_PPCR22_P22_5    	(IO_PORT2.IO_PPCR22.bit.P22_5)
#define	PORT2_PPCR22_P22_4    	(IO_PORT2.IO_PPCR22.bit.P22_4)
#define	PORT2_PPCR22_P22_1    	(IO_PORT2.IO_PPCR22.bit.P22_1)
#define	PORT2_PPCR22_P22_0    	(IO_PORT2.IO_PPCR22.bit.P22_0)
#define	PORT2_PPCR23			(IO_PORT2.IO_PPCR23.byte)
#define	PORT2_PPCR23_P23_1    	(IO_PORT2.IO_PPCR23.bit.P23_1)
#define	PORT2_PPCR23_P23_0    	(IO_PORT2.IO_PPCR23.bit.P23_0)
#define	PORT2_PPCR24			(IO_PORT2.IO_PPCR24.byte)
#define	PORT2_PPCR24_P24_7    	(IO_PORT2.IO_PPCR24.bit.P24_7)
#define	PORT2_PPCR24_P24_6    	(IO_PORT2.IO_PPCR24.bit.P24_6)
#define	PORT2_PPCR24_P24_5    	(IO_PORT2.IO_PPCR24.bit.P24_5)
#define	PORT2_PPCR24_P24_4    	(IO_PORT2.IO_PPCR24.bit.P24_4)
#define	PORT2_PPCR24_P24_3    	(IO_PORT2.IO_PPCR24.bit.P24_3)
#define	PORT2_PPCR24_P24_2    	(IO_PORT2.IO_PPCR24.bit.P24_2)
#define	PORT2_PPCR24_P24_1    	(IO_PORT2.IO_PPCR24.bit.P24_1)
#define	PORT2_PPCR24_P24_0    	(IO_PORT2.IO_PPCR24.bit.P24_0)
#define	PORT2_PPCR27			(IO_PORT2.IO_PPCR27.byte)
#define	PORT2_PPCR27_P27_3    	(IO_PORT2.IO_PPCR27.bit.P27_3)
#define	PORT2_PPCR27_P27_2    	(IO_PORT2.IO_PPCR27.bit.P27_2)
#define	PORT2_PPCR27_P27_1    	(IO_PORT2.IO_PPCR27.bit.P27_1)
#define	PORT2_PPCR27_P27_0    	(IO_PORT2.IO_PPCR27.bit.P27_0)
#define	PORT2_PPCR28			(IO_PORT2.IO_PPCR28.byte)
#define	PORT2_PPCR28_P28_4    	(IO_PORT2.IO_PPCR28.bit.P28_4)
#define	PORT2_PPCR28_P28_3    	(IO_PORT2.IO_PPCR28.bit.P28_3)
#define	PORT2_PPCR28_P28_2    	(IO_PORT2.IO_PPCR28.bit.P28_2)
#define	PORT2_PPCR28_P28_1    	(IO_PORT2.IO_PPCR28.bit.P28_1)
#define	PORT2_PPCR28_P28_0    	(IO_PORT2.IO_PPCR28.bit.P28_0)
#define	PORT2_PPCR29			(IO_PORT2.IO_PPCR29.byte)
#define	PORT2_PPCR29_P29_7    	(IO_PORT2.IO_PPCR29.bit.P29_7)
#define	PORT2_PPCR29_P29_6    	(IO_PORT2.IO_PPCR29.bit.P29_6)
#define	PORT2_PPCR29_P29_5    	(IO_PORT2.IO_PPCR29.bit.P29_5)
#define	PORT2_PPCR29_P29_4    	(IO_PORT2.IO_PPCR29.bit.P29_4)
#define	PORT2_PPCR29_P29_3    	(IO_PORT2.IO_PPCR29.bit.P29_3)
#define	PORT2_PPCR29_P29_2    	(IO_PORT2.IO_PPCR29.bit.P29_2)
#define	PORT2_PPCR29_P29_1    	(IO_PORT2.IO_PPCR29.bit.P29_1)
#define	PORT2_PPCR29_P29_0    	(IO_PORT2.IO_PPCR29.bit.P29_0)
#define	PORT2_PPCR31			(IO_PORT2.IO_PPCR31.byte)
#define	PORT2_PPCR31_P31_6    	(IO_PORT2.IO_PPCR31.bit.P31_6)
#define	PORT2_PPCR31_P31_5    	(IO_PORT2.IO_PPCR31.bit.P31_5)
#define	PORT2_PPCR31_P31_4    	(IO_PORT2.IO_PPCR31.bit.P31_4)
#define	PORT2_PPCR31_P31_2    	(IO_PORT2.IO_PPCR31.bit.P31_2)
#define	PORT2_PPCR31_P31_1    	(IO_PORT2.IO_PPCR31.bit.P31_1)
#define	PORT2_PPCR31_P31_0    	(IO_PORT2.IO_PPCR31.bit.P31_0)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_DMAD,attr=IO,locate=0x1000
#endif

__IO_EXTENDED	struct {
	__WORD	IO_DMASA0;
	__WORD	IO_DMADA0;
	__WORD	IO_DMASA1;
	__WORD	IO_DMADA1;
	__WORD	IO_DMASA2;
	__WORD	IO_DMADA2;
	__WORD	IO_DMASA3;
	__WORD	IO_DMADA3;
	__WORD	IO_DMASA4;
	__WORD	IO_DMADA4;
} IO_DMAD;

#define	DMAD_DMASA0	(IO_DMAD.IO_DMASA0)
#define	DMAD_DMADA0	(IO_DMAD.IO_DMADA0)
#define	DMAD_DMASA1	(IO_DMAD.IO_DMASA1)
#define	DMAD_DMADA1	(IO_DMAD.IO_DMADA1)
#define	DMAD_DMASA2	(IO_DMAD.IO_DMASA2)
#define	DMAD_DMADA2	(IO_DMAD.IO_DMADA2)
#define	DMAD_DMASA3	(IO_DMAD.IO_DMASA3)
#define	DMAD_DMADA3	(IO_DMAD.IO_DMADA3)
#define	DMAD_DMASA4	(IO_DMAD.IO_DMASA4)
#define	DMAD_DMADA4	(IO_DMAD.IO_DMADA4)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_FMCS,attr=IO,locate=0x7000
#endif

typedef union {
	__BYTE	byte;
	struct {
			__BYTE	ASYNC:1;
			__BYTE	FIXE:1;
			__BYTE	RESV2:1;
			__BYTE	RDYEG:1;
			__BYTE	RDY:1;
			__BYTE	RDYI:1;
			__BYTE	RW16:1;
			__BYTE	LPM:1;
	} bit;
	struct {
			__BYTE	ASYNC:1;
			__BYTE	FIXE:1;
			__BYTE	RESV2:1;
			__BYTE	RDYEG:1;
			__BYTE	RDY:1;
			__BYTE	RDYI:1;
			__BYTE	RW16:1;
			__BYTE	LPM:1;
	} bitc;
} FMCSSTR;

__IO_EXTENDED	  FMCSSTR	IO_FMCS;
#define	_fmcs		(IO_FMCS)
#define	FMCS		(IO_FMCS.byte)
#define	FMCS_ASYNC  	(IO_FMCS.bit.ASYNC)
#define	FMCS_FIXE  	(IO_FMCS.bit.FIXE)
#define	FMCS_RDYEG  	(IO_FMCS.bit.RDYEG)
#define	FMCS_RDY  	(IO_FMCS.bit.RDY)
#define	FMCS_RDYI  	(IO_FMCS.bit.RDYI)
#define	FMCS_RW16  	(IO_FMCS.bit.RW16)
#define	FMCS_LPM  	(IO_FMCS.bit.LPM)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_FMCR,attr=IO,locate=0x7001
#endif

typedef union {
	__BYTE	byte;
	struct {
			__BYTE	RESV0:1;
			__BYTE	RESV1:1;
			__BYTE	RESV2:1;
			__BYTE	RESV3:1;
			__BYTE	LOCK:1;
			__BYTE	PHASE:1;
			__BYTE	PF2I:1;
			__BYTE	RD64:1;
	} bit;
	struct {
			__BYTE	RESV0:1;
			__BYTE	RESV1:1;
			__BYTE	RESV2:1;
			__BYTE	RESV3:1;
			__BYTE	LOCK:1;
			__BYTE	PHASE:1;
			__BYTE	PF2I:1;
			__BYTE	RD64:1;
	} bitc;
} FMCRSTR;

__IO_EXTENDED	  FMCRSTR	IO_FMCR;
#define	_fmcr		(IO_FMCR)
#define	FMCR		(IO_FMCR.byte)
#define	FMCR_LOCK  	(IO_FMCR.bit.LOCK)
#define	FMCR_PHASE  	(IO_FMCR.bit.PHASE)
#define	FMCR_PF2I  	(IO_FMCR.bit.PF2I)
#define	FMCR_RD64  	(IO_FMCR.bit.RD64)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_FCHCR,attr=IO,locate=0x7002
#endif

typedef union {
	__HWORD	hword;
	struct {
			__BYTE	RESV0:1;
			__BYTE	RESV1:1;
			__BYTE	RESV2:1;
			__BYTE	RESV3:1;
			__BYTE	RESV4:1;
			__BYTE	RESV5:1;
			__BYTE	REN:1;
			__BYTE	RESV7:1;
			__BYTE	FLSH:1;
			__BYTE	DBEN:1;
			__BYTE	PFEN:1;
			__BYTE	PFMC:1;
			__BYTE	LOCK:1;
			__BYTE	ENAB:1;
			__BYTE	SIZE:2;
	} bit;
	struct {
			__BYTE	RESV0:1;
			__BYTE	RESV1:1;
			__BYTE	RESV2:1;
			__BYTE	RESV3:1;
			__BYTE	RESV4:1;
			__BYTE	RESV5:1;
			__BYTE	REN:1;
			__BYTE	RESV7:1;
			__BYTE	FLSH:1;
			__BYTE	DBEN:1;
			__BYTE	PFEN:1;
			__BYTE	PFMC:1;
			__BYTE	LOCK:1;
			__BYTE	ENAB:1;
			__BYTE	SIZE1:1;
			__BYTE	SIZE0:1;
	} bitc;
} FCHCRSTR;

__IO_EXTENDED	  FCHCRSTR	IO_FCHCR;
#define	_fchcr		(IO_FCHCR)
#define	FCHCR		(IO_FCHCR.hword)
#define	FCHCR_REN  	(IO_FCHCR.bit.REN)
#define	FCHCR_FLSH  	(IO_FCHCR.bit.FLSH)
#define	FCHCR_DBEN  	(IO_FCHCR.bit.DBEN)
#define	FCHCR_PFEN  	(IO_FCHCR.bit.PFEN)
#define	FCHCR_PFMC  	(IO_FCHCR.bit.PFMC)
#define	FCHCR_LOCK  	(IO_FCHCR.bit.LOCK)
#define	FCHCR_ENAB  	(IO_FCHCR.bit.ENAB)
#define	FCHCR_SIZE  	(IO_FCHCR.bit.SIZE)
#define	FCHCR_SIZE0  	(IO_FCHCR.bitc.SIZE0)
#define	FCHCR_SIZE1  	(IO_FCHCR.bitc.SIZE1)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_FMWT,attr=IO,locate=0x7004
#endif

typedef union {
	__HWORD	hword;
	struct {
			__BYTE	WTP:2;
			__BYTE	WEXH:2;
			__BYTE	WTC:4;
			__BYTE	RESV3:1;
			__BYTE	ATD:3;
			__BYTE	EQ:4;
	} bit;
	struct {
			__BYTE	WTP1:1;
			__BYTE	WTP0:1;
			__BYTE	WEXH1:1;
			__BYTE	WEXH0:1;
			__BYTE	WTC3:1;
			__BYTE	WTC2:1;
			__BYTE	WTC1:1;
			__BYTE	WTC0:1;
			__BYTE	RESV8:1;
			__BYTE	ATD2:1;
			__BYTE	ATD1:1;
			__BYTE	ATD0:1;
			__BYTE	EQ3:1;
			__BYTE	EQ2:1;
			__BYTE	EQ1:1;
			__BYTE	EQ0:1;
	} bitc;
} FMWTSTR;

__IO_EXTENDED	  FMWTSTR	IO_FMWT;
#define	_fmwt		(IO_FMWT)
#define	FMWT		(IO_FMWT.hword)
#define	FMWT_WTP  	(IO_FMWT.bit.WTP)
#define	FMWT_WTP0  	(IO_FMWT.bitc.WTP0)
#define	FMWT_WTP1  	(IO_FMWT.bitc.WTP1)
#define	FMWT_WEXH  	(IO_FMWT.bit.WEXH)
#define	FMWT_WEXH0  	(IO_FMWT.bitc.WEXH0)
#define	FMWT_WEXH1  	(IO_FMWT.bitc.WEXH1)
#define	FMWT_WTC  	(IO_FMWT.bit.WTC)
#define	FMWT_WTC0  	(IO_FMWT.bitc.WTC0)
#define	FMWT_WTC1  	(IO_FMWT.bitc.WTC1)
#define	FMWT_WTC2  	(IO_FMWT.bitc.WTC2)
#define	FMWT_WTC3  	(IO_FMWT.bitc.WTC3)
#define	FMWT_ATD  	(IO_FMWT.bit.ATD)
#define	FMWT_ATD0  	(IO_FMWT.bitc.ATD0)
#define	FMWT_ATD1  	(IO_FMWT.bitc.ATD1)
#define	FMWT_ATD2  	(IO_FMWT.bitc.ATD2)
#define	FMWT_EQ  	(IO_FMWT.bit.EQ)
#define	FMWT_EQ0  	(IO_FMWT.bitc.EQ0)
#define	FMWT_EQ1  	(IO_FMWT.bitc.EQ1)
#define	FMWT_EQ2  	(IO_FMWT.bitc.EQ2)
#define	FMWT_EQ3  	(IO_FMWT.bitc.EQ3)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_FMWT2,attr=IO,locate=0x7006
#endif

typedef union {
	__BYTE	byte;
	struct {
			__BYTE	RESV0:1;
			__BYTE	ALEH:3;
			__BYTE	RESV2:1;
			__BYTE	RESV3:1;
			__BYTE	RESV4:1;
			__BYTE	RESV5:1;
	} bit;
	struct {
			__BYTE	RESV0:1;
			__BYTE	ALEH2:1;
			__BYTE	ALEH1:1;
			__BYTE	ALEH0:1;
			__BYTE	RESV4:1;
			__BYTE	RESV5:1;
			__BYTE	RESV6:1;
			__BYTE	RESV7:1;
	} bitc;
} FMWT2STR;

__IO_EXTENDED	  FMWT2STR	IO_FMWT2;
#define	_fmwt2		(IO_FMWT2)
#define	FMWT2		(IO_FMWT2.byte)
#define	FMWT2_ALEH  	(IO_FMWT2.bit.ALEH)
#define	FMWT2_ALEH0  	(IO_FMWT2.bitc.ALEH0)
#define	FMWT2_ALEH1  	(IO_FMWT2.bitc.ALEH1)
#define	FMWT2_ALEH2  	(IO_FMWT2.bitc.ALEH2)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_FMPS,attr=IO,locate=0x7007
#endif

typedef union {
	__BYTE	byte;
	struct {
			__BYTE	RESV0:1;
			__BYTE	RESV1:1;
			__BYTE	RESV2:1;
			__BYTE	RESV3:1;
			__BYTE	RESV4:1;
			__BYTE	PS:3;
	} bit;
	struct {
			__BYTE	RESV0:1;
			__BYTE	RESV1:1;
			__BYTE	RESV2:1;
			__BYTE	RESV3:1;
			__BYTE	RESV4:1;
			__BYTE	PS2:1;
			__BYTE	PS1:1;
			__BYTE	PS0:1;
	} bitc;
} FMPSSTR;

__IO_EXTENDED	  FMPSSTR	IO_FMPS;
#define	_fmps		(IO_FMPS)
#define	FMPS		(IO_FMPS.byte)
#define	FMPS_PS  	(IO_FMPS.bit.PS)
#define	FMPS_PS0  	(IO_FMPS.bitc.PS0)
#define	FMPS_PS1  	(IO_FMPS.bitc.PS1)
#define	FMPS_PS2  	(IO_FMPS.bitc.PS2)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_FMAC,attr=IO,locate=0x7008
#endif

__IO_EXTENDED	const __WORD	IO_FMAC;
#define	_fmac		(IO_FMAC)
#define	FMAC	(_fmac)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_CAN0,attr=IO,locate=0xC000
#endif

__IO_EXTENDED	struct {
	union {
		__HWORD	hword;
		struct {
			__BYTE	RESV00:1;
			__BYTE	RESV01:1;
			__BYTE	RESV02:1;
			__BYTE	RESV03:1;
			__BYTE	RESV04:1;
			__BYTE	RESV05:1;
			__BYTE	RESV06:1;
			__BYTE	RESV07:1;
			__BYTE	Test:1;
			__BYTE	CCE:1;
			__BYTE	DAR:1;
			__BYTE	RESV011:1;
			__BYTE	EIE:1;
			__BYTE	SIE:1;
			__BYTE	IE:1;
			__BYTE	Init:1;
		} bit;
		struct {
			__BYTE	RESV00:1;
			__BYTE	RESV01:1;
			__BYTE	RESV02:1;
			__BYTE	RESV03:1;
			__BYTE	RESV04:1;
			__BYTE	RESV05:1;
			__BYTE	RESV06:1;
			__BYTE	RESV07:1;
			__BYTE	Test:1;
			__BYTE	CCE:1;
			__BYTE	DAR:1;
			__BYTE	RESV011:1;
			__BYTE	EIE:1;
			__BYTE	SIE:1;
			__BYTE	IE:1;
			__BYTE	Init:1;
		} bitc;
	} IO_CTRLR0;
	union {
		__HWORD	hword;
		struct {
			__BYTE	RESV20:1;
			__BYTE	RESV21:1;
			__BYTE	RESV22:1;
			__BYTE	RESV23:1;
			__BYTE	RESV24:1;
			__BYTE	RESV25:1;
			__BYTE	RESV26:1;
			__BYTE	RESV27:1;
			__BYTE	BOff:1;
			__BYTE	EWarn:1;
			__BYTE	EPass:1;
			__BYTE	RxOK:1;
			__BYTE	TxOK:1;
			__BYTE	LEC:3;
		} bit;
		struct {
			__BYTE	RESV20:1;
			__BYTE	RESV21:1;
			__BYTE	RESV22:1;
			__BYTE	RESV23:1;
			__BYTE	RESV24:1;
			__BYTE	RESV25:1;
			__BYTE	RESV26:1;
			__BYTE	RESV27:1;
			__BYTE	BOff:1;
			__BYTE	EWarn:1;
			__BYTE	EPass:1;
			__BYTE	RxOK:1;
			__BYTE	TxOK:1;
			__BYTE	LEC2:1;
			__BYTE	LEC1:1;
			__BYTE	LEC0:1;
		} bitc;
	} IO_STATR0;
	const union {
		__HWORD	hword;
		struct {
			__BYTE	RP:1;
			__BYTE	REC:7;
			__BYTE	TEC:8;
		} bit;
		struct {
			__BYTE	RP:1;
			__BYTE	REC6:1;
			__BYTE	REC5:1;
			__BYTE	REC4:1;
			__BYTE	REC3:1;
			__BYTE	REC2:1;
			__BYTE	REC1:1;
			__BYTE	REC0:1;
			__BYTE	TEC7:1;
			__BYTE	TEC6:1;
			__BYTE	TEC5:1;
			__BYTE	TEC4:1;
			__BYTE	TEC3:1;
			__BYTE	TEC2:1;
			__BYTE	TEC1:1;
			__BYTE	TEC0:1;
		} bitc;
	} IO_ERRCNT0;
	union {
		__HWORD	hword;
		struct {
			__BYTE	RESV60:1;
			__BYTE	TSeg2:3;
			__BYTE	TSeg1:4;
			__BYTE	SJW:2;
			__BYTE	BRP:6;
		} bit;
		struct {
			__BYTE	RESV60:1;
			__BYTE	TSeg22:1;
			__BYTE	TSeg21:1;
			__BYTE	TSeg20:1;
			__BYTE	TSeg13:1;
			__BYTE	TSeg12:1;
			__BYTE	TSeg11:1;
			__BYTE	TSeg10:1;
			__BYTE	SJW1:1;
			__BYTE	SJW0:1;
			__BYTE	BRP5:1;
			__BYTE	BRP4:1;
			__BYTE	BRP3:1;
			__BYTE	BRP2:1;
			__BYTE	BRP1:1;
			__BYTE	BRP0:1;
		} bitc;
	} IO_BTR0;
	const __HWORD	IO_INTR0;
	union {
		__HWORD	hword;
		struct {
			__BYTE	RESV100:1;
			__BYTE	RESV101:1;
			__BYTE	RESV102:1;
			__BYTE	RESV103:1;
			__BYTE	RESV104:1;
			__BYTE	RESV105:1;
			__BYTE	RESV106:1;
			__BYTE	RESV107:1;
			__BYTE	Rx:1;
			__BYTE	Tx:2;
			__BYTE	LBack:1;
			__BYTE	Silent:1;
			__BYTE	Basic:1;
			__BYTE	RESV1013:1;
			__BYTE	RESV1014:1;
		} bit;
		struct {
			__BYTE	RESV100:1;
			__BYTE	RESV101:1;
			__BYTE	RESV102:1;
			__BYTE	RESV103:1;
			__BYTE	RESV104:1;
			__BYTE	RESV105:1;
			__BYTE	RESV106:1;
			__BYTE	RESV107:1;
			__BYTE	Rx:1;
			__BYTE	Tx1:1;
			__BYTE	Tx0:1;
			__BYTE	LBack:1;
			__BYTE	Silent:1;
			__BYTE	Basic:1;
			__BYTE	RESV1014:1;
			__BYTE	RESV1015:1;
		} bitc;
	} IO_TESTR0;
	union {
		__HWORD	hword;
		struct {
			__BYTE	RESV120:1;
			__BYTE	RESV121:1;
			__BYTE	RESV122:1;
			__BYTE	RESV123:1;
			__BYTE	RESV124:1;
			__BYTE	RESV125:1;
			__BYTE	RESV126:1;
			__BYTE	RESV127:1;
			__BYTE	RESV128:1;
			__BYTE	RESV129:1;
			__BYTE	RESV1210:1;
			__BYTE	RESV1211:1;
			__BYTE	BRPE:4;
		} bit;
		struct {
			__BYTE	RESV120:1;
			__BYTE	RESV121:1;
			__BYTE	RESV122:1;
			__BYTE	RESV123:1;
			__BYTE	RESV124:1;
			__BYTE	RESV125:1;
			__BYTE	RESV126:1;
			__BYTE	RESV127:1;
			__BYTE	RESV128:1;
			__BYTE	RESV129:1;
			__BYTE	RESV1210:1;
			__BYTE	RESV1211:1;
			__BYTE	BRPE3:1;
			__BYTE	BRPE2:1;
			__BYTE	BRPE1:1;
			__BYTE	BRPE0:1;
		} bitc;
	} IO_BRPER0;
	__HWORD	IO_RESV1;
	union {
		__HWORD	hword;
		struct {
			__BYTE	BUSY:1;
			__BYTE	RESV161:1;
			__BYTE	RESV162:1;
			__BYTE	RESV163:1;
			__BYTE	RESV164:1;
			__BYTE	RESV165:1;
			__BYTE	RESV166:1;
			__BYTE	RESV167:1;
			__BYTE	MN:8;
		} bit;
		struct {
			__BYTE	BUSY:1;
			__BYTE	RESV161:1;
			__BYTE	RESV162:1;
			__BYTE	RESV163:1;
			__BYTE	RESV164:1;
			__BYTE	RESV165:1;
			__BYTE	RESV166:1;
			__BYTE	RESV167:1;
			__BYTE	MN7:1;
			__BYTE	MN6:1;
			__BYTE	MN5:1;
			__BYTE	MN4:1;
			__BYTE	MN3:1;
			__BYTE	MN2:1;
			__BYTE	MN1:1;
			__BYTE	MN0:1;
		} bitc;
	} IO_IF1CREQ0;
	union {
		__HWORD	hword;
		struct {
			__BYTE	RESV180:1;
			__BYTE	RESV181:1;
			__BYTE	RESV182:1;
			__BYTE	RESV183:1;
			__BYTE	RESV184:1;
			__BYTE	RESV185:1;
			__BYTE	RESV186:1;
			__BYTE	RESV187:1;
			__BYTE	WR_RD:1;
			__BYTE	Mask:1;
			__BYTE	Arb:1;
			__BYTE	Control:1;
			__BYTE	CIP:1;
			__BYTE	TxReq:1;
			__BYTE	DataA:1;
			__BYTE	DataB:1;
		} bit;
		struct {
			__BYTE	RESV180:1;
			__BYTE	RESV181:1;
			__BYTE	RESV182:1;
			__BYTE	RESV183:1;
			__BYTE	RESV184:1;
			__BYTE	RESV185:1;
			__BYTE	RESV186:1;
			__BYTE	RESV187:1;
			__BYTE	WR_RD:1;
			__BYTE	Mask:1;
			__BYTE	Arb:1;
			__BYTE	Control:1;
			__BYTE	CIP:1;
			__BYTE	TxReq:1;
			__BYTE	DataA:1;
			__BYTE	DataB:1;
		} bitc;
	} IO_IF1CMSK0;
	union {
		__WORD	word;
		struct {
			__BYTE	MXtd:1;
			__BYTE	MDir:1;
			__BYTE	RESV202:1;
			__WORD	Msk:29;
		} bit;
		struct {
			__BYTE	MXtd:1;
			__BYTE	MDir:1;
			__BYTE	RESV202:1;
			__BYTE	Msk28:1;
			__BYTE	Msk27:1;
			__BYTE	Msk26:1;
			__BYTE	Msk25:1;
			__BYTE	Msk24:1;
			__BYTE	Msk23:1;
			__BYTE	Msk22:1;
			__BYTE	Msk21:1;
			__BYTE	Msk20:1;
			__BYTE	Msk19:1;
			__BYTE	Msk18:1;
			__BYTE	Msk17:1;
			__BYTE	Msk16:1;
			__BYTE	Msk15:1;
			__BYTE	Msk14:1;
			__BYTE	Msk13:1;
			__BYTE	Msk12:1;
			__BYTE	Msk11:1;
			__BYTE	Msk10:1;
			__BYTE	Msk9:1;
			__BYTE	Msk8:1;
			__BYTE	Msk7:1;
			__BYTE	Msk6:1;
			__BYTE	Msk5:1;
			__BYTE	Msk4:1;
			__BYTE	Msk3:1;
			__BYTE	Msk2:1;
			__BYTE	Msk1:1;
			__BYTE	Msk0:1;
		} bitc;
	} IO_IF1MSK0;
	union {
		__WORD	word;
		struct {
			__BYTE	MsgVal:1;
			__BYTE	Xtd:1;
			__BYTE	Dir:1;
			__WORD	ID:29;
		} bit;
		struct {
			__BYTE	MsgVal:1;
			__BYTE	Xtd:1;
			__BYTE	Dir:1;
			__BYTE	ID28:1;
			__BYTE	ID27:1;
			__BYTE	ID26:1;
			__BYTE	ID25:1;
			__BYTE	ID24:1;
			__BYTE	ID23:1;
			__BYTE	ID22:1;
			__BYTE	ID21:1;
			__BYTE	ID20:1;
			__BYTE	ID19:1;
			__BYTE	ID18:1;
			__BYTE	ID17:1;
			__BYTE	ID16:1;
			__BYTE	ID15:1;
			__BYTE	ID14:1;
			__BYTE	ID13:1;
			__BYTE	ID12:1;
			__BYTE	ID11:1;
			__BYTE	ID10:1;
			__BYTE	ID9:1;
			__BYTE	ID8:1;
			__BYTE	ID7:1;
			__BYTE	ID6:1;
			__BYTE	ID5:1;
			__BYTE	ID4:1;
			__BYTE	ID3:1;
			__BYTE	ID2:1;
			__BYTE	ID1:1;
			__BYTE	ID0:1;
		} bitc;
	} IO_IF1ARB0;
	union {
		__HWORD	hword;
		struct {
			__BYTE	NewDat:1;
			__BYTE	MsgLst:1;
			__BYTE	IntPnd:1;
			__BYTE	UMask:1;
			__BYTE	TxIE:1;
			__BYTE	RxIE:1;
			__BYTE	RmtEn:1;
			__BYTE	TxRqst:1;
			__BYTE	EoB:1;
			__BYTE	RESV289:1;
			__BYTE	RESV2810:1;
			__BYTE	RESV2811:1;
			__BYTE	DLC:4;
		} bit;
		struct {
			__BYTE	NewDat:1;
			__BYTE	MsgLst:1;
			__BYTE	IntPnd:1;
			__BYTE	UMask:1;
			__BYTE	TxIE:1;
			__BYTE	RxIE:1;
			__BYTE	RmtEn:1;
			__BYTE	TxRqst:1;
			__BYTE	EoB:1;
			__BYTE	RESV289:1;
			__BYTE	RESV2810:1;
			__BYTE	RESV2811:1;
			__BYTE	DLC3:1;
			__BYTE	DLC2:1;
			__BYTE	DLC1:1;
			__BYTE	DLC0:1;
		} bitc;
	} IO_IF1MCTR0;
	__HWORD	IO_RESV2;
	__HWORD	IO_IF1DTA10;
	__HWORD	IO_IF1DTA20;
	__HWORD	IO_IF1DTB10;
	__HWORD	IO_IF1DTB20;
	__WORD	IO_RESV3[CONSTANT_6];
	union {
		__HWORD	hword;
		struct {
			__BYTE	BUSY:1;
			__BYTE	RESV641:1;
			__BYTE	RESV642:1;
			__BYTE	RESV643:1;
			__BYTE	RESV644:1;
			__BYTE	RESV645:1;
			__BYTE	RESV646:1;
			__BYTE	RESV647:1;
			__BYTE	MN:8;
		} bit;
		struct {
			__BYTE	BUSY:1;
			__BYTE	RESV641:1;
			__BYTE	RESV642:1;
			__BYTE	RESV643:1;
			__BYTE	RESV644:1;
			__BYTE	RESV645:1;
			__BYTE	RESV646:1;
			__BYTE	RESV647:1;
			__BYTE	MN7:1;
			__BYTE	MN6:1;
			__BYTE	MN5:1;
			__BYTE	MN4:1;
			__BYTE	MN3:1;
			__BYTE	MN2:1;
			__BYTE	MN1:1;
			__BYTE	MN0:1;
		} bitc;
	} IO_IF2CREQ0;
	union {
		__HWORD	hword;
		struct {
			__BYTE	RESV660:1;
			__BYTE	RESV661:1;
			__BYTE	RESV662:1;
			__BYTE	RESV663:1;
			__BYTE	RESV664:1;
			__BYTE	RESV665:1;
			__BYTE	RESV666:1;
			__BYTE	RESV667:1;
			__BYTE	WR_RD:1;
			__BYTE	Mask:1;
			__BYTE	Arb:1;
			__BYTE	Control:1;
			__BYTE	CIP:1;
			__BYTE	TxReq:1;
			__BYTE	DataA:1;
			__BYTE	DataB:1;
		} bit;
		struct {
			__BYTE	RESV660:1;
			__BYTE	RESV661:1;
			__BYTE	RESV662:1;
			__BYTE	RESV663:1;
			__BYTE	RESV664:1;
			__BYTE	RESV665:1;
			__BYTE	RESV666:1;
			__BYTE	RESV667:1;
			__BYTE	WR_RD:1;
			__BYTE	Mask:1;
			__BYTE	Arb:1;
			__BYTE	Control:1;
			__BYTE	CIP:1;
			__BYTE	TxReq:1;
			__BYTE	DataA:1;
			__BYTE	DataB:1;
		} bitc;
	} IO_IF2CMSK0;
	union {
		__WORD	word;
		struct {
			__BYTE	MXtd:1;
			__BYTE	MDir:1;
			__BYTE	RESV682:1;
			__WORD	Msk:29;
		} bit;
		struct {
			__BYTE	MXtd:1;
			__BYTE	MDir:1;
			__BYTE	RESV682:1;
			__BYTE	Msk28:1;
			__BYTE	Msk27:1;
			__BYTE	Msk26:1;
			__BYTE	Msk25:1;
			__BYTE	Msk24:1;
			__BYTE	Msk23:1;
			__BYTE	Msk22:1;
			__BYTE	Msk21:1;
			__BYTE	Msk20:1;
			__BYTE	Msk19:1;
			__BYTE	Msk18:1;
			__BYTE	Msk17:1;
			__BYTE	Msk16:1;
			__BYTE	Msk15:1;
			__BYTE	Msk14:1;
			__BYTE	Msk13:1;
			__BYTE	Msk12:1;
			__BYTE	Msk11:1;
			__BYTE	Msk10:1;
			__BYTE	Msk9:1;
			__BYTE	Msk8:1;
			__BYTE	Msk7:1;
			__BYTE	Msk6:1;
			__BYTE	Msk5:1;
			__BYTE	Msk4:1;
			__BYTE	Msk3:1;
			__BYTE	Msk2:1;
			__BYTE	Msk1:1;
			__BYTE	Msk0:1;
		} bitc;
	} IO_IF2MSK0;
	union {
		__WORD	word;
		struct {
			__BYTE	MsgVal:1;
			__BYTE	Xtd:1;
			__BYTE	Dir:1;
			__WORD	ID:29;
		} bit;
		struct {
			__BYTE	MsgVal:1;
			__BYTE	Xtd:1;
			__BYTE	Dir:1;
			__BYTE	ID28:1;
			__BYTE	ID27:1;
			__BYTE	ID26:1;
			__BYTE	ID25:1;
			__BYTE	ID24:1;
			__BYTE	ID23:1;
			__BYTE	ID22:1;
			__BYTE	ID21:1;
			__BYTE	ID20:1;
			__BYTE	ID19:1;
			__BYTE	ID18:1;
			__BYTE	ID17:1;
			__BYTE	ID16:1;
			__BYTE	ID15:1;
			__BYTE	ID14:1;
			__BYTE	ID13:1;
			__BYTE	ID12:1;
			__BYTE	ID11:1;
			__BYTE	ID10:1;
			__BYTE	ID9:1;
			__BYTE	ID8:1;
			__BYTE	ID7:1;
			__BYTE	ID6:1;
			__BYTE	ID5:1;
			__BYTE	ID4:1;
			__BYTE	ID3:1;
			__BYTE	ID2:1;
			__BYTE	ID1:1;
			__BYTE	ID0:1;
		} bitc;
	} IO_IF2ARB0;
	union {
		__HWORD	hword;
		struct {
			__BYTE	NewDat:1;
			__BYTE	MsgLst:1;
			__BYTE	IntPnd:1;
			__BYTE	UMask:1;
			__BYTE	TxIE:1;
			__BYTE	RxIE:1;
			__BYTE	RmtEn:1;
			__BYTE	TxRqst:1;
			__BYTE	EoB:1;
			__BYTE	RESV769:1;
			__BYTE	RESV7610:1;
			__BYTE	RESV7611:1;
			__BYTE	DLC:4;
		} bit;
		struct {
			__BYTE	NewDat:1;
			__BYTE	MsgLst:1;
			__BYTE	IntPnd:1;
			__BYTE	UMask:1;
			__BYTE	TxIE:1;
			__BYTE	RxIE:1;
			__BYTE	RmtEn:1;
			__BYTE	TxRqst:1;
			__BYTE	EoB:1;
			__BYTE	RESV769:1;
			__BYTE	RESV7610:1;
			__BYTE	RESV7611:1;
			__BYTE	DLC3:1;
			__BYTE	DLC2:1;
			__BYTE	DLC1:1;
			__BYTE	DLC0:1;
		} bitc;
	} IO_IF2MCTR0;
	__HWORD	IO_RESV4;
	__HWORD	IO_IF2DTA10;
	__HWORD	IO_IF2DTA20;
	__HWORD	IO_IF2DTB10;
	__HWORD	IO_IF2DTB20;
	__WORD	IO_RESV5[CONSTANT_10];
	const __WORD	IO_TREQR0_12;
	__WORD	IO_RESV6;
	__WORD	IO_RESV7;
	__WORD	IO_RESV8;
	const __WORD	IO_NEWDT0_12;
	__WORD	IO_RESV9;
	__WORD	IO_RESV10;
	__WORD	IO_RESV11;
	const __WORD	IO_INTPND0_12;
	__WORD	IO_RESV12;
	__WORD	IO_RESV13;
	__WORD	IO_RESV14;
	const __WORD	IO_MSGVAL0_12;
	__WORD	IO_RESV15;
	__WORD	IO_RESV16;
	__WORD	IO_RESV17;
} IO_CAN0;

#define	CAN0_CTRLR0			(IO_CAN0.IO_CTRLR0.hword)
#define	CAN0_CTRLR0_Test    	(IO_CAN0.IO_CTRLR0.bit.Test)
#define	CAN0_CTRLR0_CCE    	(IO_CAN0.IO_CTRLR0.bit.CCE)
#define	CAN0_CTRLR0_DAR    	(IO_CAN0.IO_CTRLR0.bit.DAR)
#define	CAN0_CTRLR0_EIE    	(IO_CAN0.IO_CTRLR0.bit.EIE)
#define	CAN0_CTRLR0_SIE    	(IO_CAN0.IO_CTRLR0.bit.SIE)
#define	CAN0_CTRLR0_IE    	(IO_CAN0.IO_CTRLR0.bit.IE)
#define	CAN0_CTRLR0_Init    	(IO_CAN0.IO_CTRLR0.bit.Init)
#define	CAN0_STATR0			(IO_CAN0.IO_STATR0.hword)
#define	CAN0_STATR0_BOff    	(IO_CAN0.IO_STATR0.bit.BOff)
#define	CAN0_STATR0_EWarn    	(IO_CAN0.IO_STATR0.bit.EWarn)
#define	CAN0_STATR0_EPass    	(IO_CAN0.IO_STATR0.bit.EPass)
#define	CAN0_STATR0_RxOK    	(IO_CAN0.IO_STATR0.bit.RxOK)
#define	CAN0_STATR0_TxOK    	(IO_CAN0.IO_STATR0.bit.TxOK)
#define	CAN0_STATR0_LEC    	(IO_CAN0.IO_STATR0.bit.LEC)
#define	CAN0_STATR0_LEC0    	(IO_CAN0.IO_STATR0.bitc.LEC0)
#define	CAN0_STATR0_LEC1    	(IO_CAN0.IO_STATR0.bitc.LEC1)
#define	CAN0_STATR0_LEC2    	(IO_CAN0.IO_STATR0.bitc.LEC2)
#define	CAN0_ERRCNT0			(IO_CAN0.IO_ERRCNT0.hword)
#define	CAN0_ERRCNT0_RP    	(IO_CAN0.IO_ERRCNT0.bit.RP)
#define	CAN0_ERRCNT0_REC    	(IO_CAN0.IO_ERRCNT0.bit.REC)
#define	CAN0_ERRCNT0_REC0    	(IO_CAN0.IO_ERRCNT0.bitc.REC0)
#define	CAN0_ERRCNT0_REC1    	(IO_CAN0.IO_ERRCNT0.bitc.REC1)
#define	CAN0_ERRCNT0_REC2    	(IO_CAN0.IO_ERRCNT0.bitc.REC2)
#define	CAN0_ERRCNT0_REC3    	(IO_CAN0.IO_ERRCNT0.bitc.REC3)
#define	CAN0_ERRCNT0_REC4    	(IO_CAN0.IO_ERRCNT0.bitc.REC4)
#define	CAN0_ERRCNT0_REC5    	(IO_CAN0.IO_ERRCNT0.bitc.REC5)
#define	CAN0_ERRCNT0_REC6    	(IO_CAN0.IO_ERRCNT0.bitc.REC6)
#define	CAN0_ERRCNT0_TEC    	(IO_CAN0.IO_ERRCNT0.bit.TEC)
#define	CAN0_ERRCNT0_TEC0    	(IO_CAN0.IO_ERRCNT0.bitc.TEC0)
#define	CAN0_ERRCNT0_TEC1    	(IO_CAN0.IO_ERRCNT0.bitc.TEC1)
#define	CAN0_ERRCNT0_TEC2    	(IO_CAN0.IO_ERRCNT0.bitc.TEC2)
#define	CAN0_ERRCNT0_TEC3    	(IO_CAN0.IO_ERRCNT0.bitc.TEC3)
#define	CAN0_ERRCNT0_TEC4    	(IO_CAN0.IO_ERRCNT0.bitc.TEC4)
#define	CAN0_ERRCNT0_TEC5    	(IO_CAN0.IO_ERRCNT0.bitc.TEC5)
#define	CAN0_ERRCNT0_TEC6    	(IO_CAN0.IO_ERRCNT0.bitc.TEC6)
#define	CAN0_ERRCNT0_TEC7    	(IO_CAN0.IO_ERRCNT0.bitc.TEC7)
#define	CAN0_BTR0			(IO_CAN0.IO_BTR0.hword)
#define	CAN0_BTR0_TSeg2    	(IO_CAN0.IO_BTR0.bit.TSeg2)
#define	CAN0_BTR0_TSeg20    	(IO_CAN0.IO_BTR0.bitc.TSeg20)
#define	CAN0_BTR0_TSeg21    	(IO_CAN0.IO_BTR0.bitc.TSeg21)
#define	CAN0_BTR0_TSeg22    	(IO_CAN0.IO_BTR0.bitc.TSeg22)
#define	CAN0_BTR0_TSeg1    	(IO_CAN0.IO_BTR0.bit.TSeg1)
#define	CAN0_BTR0_TSeg10    	(IO_CAN0.IO_BTR0.bitc.TSeg10)
#define	CAN0_BTR0_TSeg11    	(IO_CAN0.IO_BTR0.bitc.TSeg11)
#define	CAN0_BTR0_TSeg12    	(IO_CAN0.IO_BTR0.bitc.TSeg12)
#define	CAN0_BTR0_TSeg13    	(IO_CAN0.IO_BTR0.bitc.TSeg13)
#define	CAN0_BTR0_SJW    	(IO_CAN0.IO_BTR0.bit.SJW)
#define	CAN0_BTR0_SJW0    	(IO_CAN0.IO_BTR0.bitc.SJW0)
#define	CAN0_BTR0_SJW1    	(IO_CAN0.IO_BTR0.bitc.SJW1)
#define	CAN0_BTR0_BRP    	(IO_CAN0.IO_BTR0.bit.BRP)
#define	CAN0_BTR0_BRP0    	(IO_CAN0.IO_BTR0.bitc.BRP0)
#define	CAN0_BTR0_BRP1    	(IO_CAN0.IO_BTR0.bitc.BRP1)
#define	CAN0_BTR0_BRP2    	(IO_CAN0.IO_BTR0.bitc.BRP2)
#define	CAN0_BTR0_BRP3    	(IO_CAN0.IO_BTR0.bitc.BRP3)
#define	CAN0_BTR0_BRP4    	(IO_CAN0.IO_BTR0.bitc.BRP4)
#define	CAN0_BTR0_BRP5    	(IO_CAN0.IO_BTR0.bitc.BRP5)
#define	CAN0_INTR0	(IO_CAN0.IO_INTR0)
#define	CAN0_TESTR0			(IO_CAN0.IO_TESTR0.hword)
#define	CAN0_TESTR0_Rx    	(IO_CAN0.IO_TESTR0.bit.Rx)
#define	CAN0_TESTR0_Tx    	(IO_CAN0.IO_TESTR0.bit.Tx)
#define	CAN0_TESTR0_Tx0    	(IO_CAN0.IO_TESTR0.bitc.Tx0)
#define	CAN0_TESTR0_Tx1    	(IO_CAN0.IO_TESTR0.bitc.Tx1)
#define	CAN0_TESTR0_LBack    	(IO_CAN0.IO_TESTR0.bit.LBack)
#define	CAN0_TESTR0_Silent    	(IO_CAN0.IO_TESTR0.bit.Silent)
#define	CAN0_TESTR0_Basic    	(IO_CAN0.IO_TESTR0.bit.Basic)
#define	CAN0_BRPER0			(IO_CAN0.IO_BRPER0.hword)
#define	CAN0_BRPER0_BRPE    	(IO_CAN0.IO_BRPER0.bit.BRPE)
#define	CAN0_BRPER0_BRPE0    	(IO_CAN0.IO_BRPER0.bitc.BRPE0)
#define	CAN0_BRPER0_BRPE1    	(IO_CAN0.IO_BRPER0.bitc.BRPE1)
#define	CAN0_BRPER0_BRPE2    	(IO_CAN0.IO_BRPER0.bitc.BRPE2)
#define	CAN0_BRPER0_BRPE3    	(IO_CAN0.IO_BRPER0.bitc.BRPE3)
#define	CAN0_IF1CREQ0			(IO_CAN0.IO_IF1CREQ0.hword)
#define	CAN0_IF1CREQ0_BUSY    	(IO_CAN0.IO_IF1CREQ0.bit.BUSY)
#define	CAN0_IF1CREQ0_MN    	(IO_CAN0.IO_IF1CREQ0.bit.MN)
#define	CAN0_IF1CREQ0_MN0    	(IO_CAN0.IO_IF1CREQ0.bitc.MN0)
#define	CAN0_IF1CREQ0_MN1    	(IO_CAN0.IO_IF1CREQ0.bitc.MN1)
#define	CAN0_IF1CREQ0_MN2    	(IO_CAN0.IO_IF1CREQ0.bitc.MN2)
#define	CAN0_IF1CREQ0_MN3    	(IO_CAN0.IO_IF1CREQ0.bitc.MN3)
#define	CAN0_IF1CREQ0_MN4    	(IO_CAN0.IO_IF1CREQ0.bitc.MN4)
#define	CAN0_IF1CREQ0_MN5    	(IO_CAN0.IO_IF1CREQ0.bitc.MN5)
#define	CAN0_IF1CREQ0_MN6    	(IO_CAN0.IO_IF1CREQ0.bitc.MN6)
#define	CAN0_IF1CREQ0_MN7    	(IO_CAN0.IO_IF1CREQ0.bitc.MN7)
#define	CAN0_IF1CMSK0			(IO_CAN0.IO_IF1CMSK0.hword)
#define	CAN0_IF1CMSK0_WR_RD    	(IO_CAN0.IO_IF1CMSK0.bit.WR_RD)
#define	CAN0_IF1CMSK0_Mask    	(IO_CAN0.IO_IF1CMSK0.bit.Mask)
#define	CAN0_IF1CMSK0_Arb    	(IO_CAN0.IO_IF1CMSK0.bit.Arb)
#define	CAN0_IF1CMSK0_Control    	(IO_CAN0.IO_IF1CMSK0.bit.Control)
#define	CAN0_IF1CMSK0_CIP    	(IO_CAN0.IO_IF1CMSK0.bit.CIP)
#define	CAN0_IF1CMSK0_TxReq    	(IO_CAN0.IO_IF1CMSK0.bit.TxReq)
#define	CAN0_IF1CMSK0_DataA    	(IO_CAN0.IO_IF1CMSK0.bit.DataA)
#define	CAN0_IF1CMSK0_DataB    	(IO_CAN0.IO_IF1CMSK0.bit.DataB)
#define	CAN0_IF1MSK0			(IO_CAN0.IO_IF1MSK0.word)
#define	CAN0_IF1MSK0_MXtd    	(IO_CAN0.IO_IF1MSK0.bit.MXtd)
#define	CAN0_IF1MSK0_MDir    	(IO_CAN0.IO_IF1MSK0.bit.MDir)
#define	CAN0_IF1MSK0_Msk    	(IO_CAN0.IO_IF1MSK0.bit.Msk)
#define	CAN0_IF1MSK0_Msk0    	(IO_CAN0.IO_IF1MSK0.bitc.Msk0)
#define	CAN0_IF1MSK0_Msk1    	(IO_CAN0.IO_IF1MSK0.bitc.Msk1)
#define	CAN0_IF1MSK0_Msk2    	(IO_CAN0.IO_IF1MSK0.bitc.Msk2)
#define	CAN0_IF1MSK0_Msk3    	(IO_CAN0.IO_IF1MSK0.bitc.Msk3)
#define	CAN0_IF1MSK0_Msk4    	(IO_CAN0.IO_IF1MSK0.bitc.Msk4)
#define	CAN0_IF1MSK0_Msk5    	(IO_CAN0.IO_IF1MSK0.bitc.Msk5)
#define	CAN0_IF1MSK0_Msk6    	(IO_CAN0.IO_IF1MSK0.bitc.Msk6)
#define	CAN0_IF1MSK0_Msk7    	(IO_CAN0.IO_IF1MSK0.bitc.Msk7)
#define	CAN0_IF1MSK0_Msk8    	(IO_CAN0.IO_IF1MSK0.bitc.Msk8)
#define	CAN0_IF1MSK0_Msk9    	(IO_CAN0.IO_IF1MSK0.bitc.Msk9)
#define	CAN0_IF1MSK0_Msk10    	(IO_CAN0.IO_IF1MSK0.bitc.Msk10)
#define	CAN0_IF1MSK0_Msk11    	(IO_CAN0.IO_IF1MSK0.bitc.Msk11)
#define	CAN0_IF1MSK0_Msk12    	(IO_CAN0.IO_IF1MSK0.bitc.Msk12)
#define	CAN0_IF1MSK0_Msk13    	(IO_CAN0.IO_IF1MSK0.bitc.Msk13)
#define	CAN0_IF1MSK0_Msk14    	(IO_CAN0.IO_IF1MSK0.bitc.Msk14)
#define	CAN0_IF1MSK0_Msk15    	(IO_CAN0.IO_IF1MSK0.bitc.Msk15)
#define	CAN0_IF1MSK0_Msk16    	(IO_CAN0.IO_IF1MSK0.bitc.Msk16)
#define	CAN0_IF1MSK0_Msk17    	(IO_CAN0.IO_IF1MSK0.bitc.Msk17)
#define	CAN0_IF1MSK0_Msk18    	(IO_CAN0.IO_IF1MSK0.bitc.Msk18)
#define	CAN0_IF1MSK0_Msk19    	(IO_CAN0.IO_IF1MSK0.bitc.Msk19)
#define	CAN0_IF1MSK0_Msk20    	(IO_CAN0.IO_IF1MSK0.bitc.Msk20)
#define	CAN0_IF1MSK0_Msk21    	(IO_CAN0.IO_IF1MSK0.bitc.Msk21)
#define	CAN0_IF1MSK0_Msk22    	(IO_CAN0.IO_IF1MSK0.bitc.Msk22)
#define	CAN0_IF1MSK0_Msk23    	(IO_CAN0.IO_IF1MSK0.bitc.Msk23)
#define	CAN0_IF1MSK0_Msk24    	(IO_CAN0.IO_IF1MSK0.bitc.Msk24)
#define	CAN0_IF1MSK0_Msk25    	(IO_CAN0.IO_IF1MSK0.bitc.Msk25)
#define	CAN0_IF1MSK0_Msk26    	(IO_CAN0.IO_IF1MSK0.bitc.Msk26)
#define	CAN0_IF1MSK0_Msk27    	(IO_CAN0.IO_IF1MSK0.bitc.Msk27)
#define	CAN0_IF1MSK0_Msk28    	(IO_CAN0.IO_IF1MSK0.bitc.Msk28)
#define	CAN0_IF1ARB0			(IO_CAN0.IO_IF1ARB0.word)
#define	CAN0_IF1ARB0_MsgVal    	(IO_CAN0.IO_IF1ARB0.bit.MsgVal)
#define	CAN0_IF1ARB0_Xtd    	(IO_CAN0.IO_IF1ARB0.bit.Xtd)
#define	CAN0_IF1ARB0_Dir    	(IO_CAN0.IO_IF1ARB0.bit.Dir)
#define	CAN0_IF1ARB0_ID    	(IO_CAN0.IO_IF1ARB0.bit.ID)
#define	CAN0_IF1ARB0_ID0    	(IO_CAN0.IO_IF1ARB0.bitc.ID0)
#define	CAN0_IF1ARB0_ID1    	(IO_CAN0.IO_IF1ARB0.bitc.ID1)
#define	CAN0_IF1ARB0_ID2    	(IO_CAN0.IO_IF1ARB0.bitc.ID2)
#define	CAN0_IF1ARB0_ID3    	(IO_CAN0.IO_IF1ARB0.bitc.ID3)
#define	CAN0_IF1ARB0_ID4    	(IO_CAN0.IO_IF1ARB0.bitc.ID4)
#define	CAN0_IF1ARB0_ID5    	(IO_CAN0.IO_IF1ARB0.bitc.ID5)
#define	CAN0_IF1ARB0_ID6    	(IO_CAN0.IO_IF1ARB0.bitc.ID6)
#define	CAN0_IF1ARB0_ID7    	(IO_CAN0.IO_IF1ARB0.bitc.ID7)
#define	CAN0_IF1ARB0_ID8    	(IO_CAN0.IO_IF1ARB0.bitc.ID8)
#define	CAN0_IF1ARB0_ID9    	(IO_CAN0.IO_IF1ARB0.bitc.ID9)
#define	CAN0_IF1ARB0_ID10    	(IO_CAN0.IO_IF1ARB0.bitc.ID10)
#define	CAN0_IF1ARB0_ID11    	(IO_CAN0.IO_IF1ARB0.bitc.ID11)
#define	CAN0_IF1ARB0_ID12    	(IO_CAN0.IO_IF1ARB0.bitc.ID12)
#define	CAN0_IF1ARB0_ID13    	(IO_CAN0.IO_IF1ARB0.bitc.ID13)
#define	CAN0_IF1ARB0_ID14    	(IO_CAN0.IO_IF1ARB0.bitc.ID14)
#define	CAN0_IF1ARB0_ID15    	(IO_CAN0.IO_IF1ARB0.bitc.ID15)
#define	CAN0_IF1ARB0_ID16    	(IO_CAN0.IO_IF1ARB0.bitc.ID16)
#define	CAN0_IF1ARB0_ID17    	(IO_CAN0.IO_IF1ARB0.bitc.ID17)
#define	CAN0_IF1ARB0_ID18    	(IO_CAN0.IO_IF1ARB0.bitc.ID18)
#define	CAN0_IF1ARB0_ID19    	(IO_CAN0.IO_IF1ARB0.bitc.ID19)
#define	CAN0_IF1ARB0_ID20    	(IO_CAN0.IO_IF1ARB0.bitc.ID20)
#define	CAN0_IF1ARB0_ID21    	(IO_CAN0.IO_IF1ARB0.bitc.ID21)
#define	CAN0_IF1ARB0_ID22    	(IO_CAN0.IO_IF1ARB0.bitc.ID22)
#define	CAN0_IF1ARB0_ID23    	(IO_CAN0.IO_IF1ARB0.bitc.ID23)
#define	CAN0_IF1ARB0_ID24    	(IO_CAN0.IO_IF1ARB0.bitc.ID24)
#define	CAN0_IF1ARB0_ID25    	(IO_CAN0.IO_IF1ARB0.bitc.ID25)
#define	CAN0_IF1ARB0_ID26    	(IO_CAN0.IO_IF1ARB0.bitc.ID26)
#define	CAN0_IF1ARB0_ID27    	(IO_CAN0.IO_IF1ARB0.bitc.ID27)
#define	CAN0_IF1ARB0_ID28    	(IO_CAN0.IO_IF1ARB0.bitc.ID28)
#define	CAN0_IF1MCTR0			(IO_CAN0.IO_IF1MCTR0.hword)
#define	CAN0_IF1MCTR0_NewDat    	(IO_CAN0.IO_IF1MCTR0.bit.NewDat)
#define	CAN0_IF1MCTR0_MsgLst    	(IO_CAN0.IO_IF1MCTR0.bit.MsgLst)
#define	CAN0_IF1MCTR0_IntPnd    	(IO_CAN0.IO_IF1MCTR0.bit.IntPnd)
#define	CAN0_IF1MCTR0_UMask    	(IO_CAN0.IO_IF1MCTR0.bit.UMask)
#define	CAN0_IF1MCTR0_TxIE    	(IO_CAN0.IO_IF1MCTR0.bit.TxIE)
#define	CAN0_IF1MCTR0_RxIE    	(IO_CAN0.IO_IF1MCTR0.bit.RxIE)
#define	CAN0_IF1MCTR0_RmtEn    	(IO_CAN0.IO_IF1MCTR0.bit.RmtEn)
#define	CAN0_IF1MCTR0_TxRqst    	(IO_CAN0.IO_IF1MCTR0.bit.TxRqst)
#define	CAN0_IF1MCTR0_EoB    	(IO_CAN0.IO_IF1MCTR0.bit.EoB)
#define	CAN0_IF1MCTR0_DLC    	(IO_CAN0.IO_IF1MCTR0.bit.DLC)
#define	CAN0_IF1MCTR0_DLC0    	(IO_CAN0.IO_IF1MCTR0.bitc.DLC0)
#define	CAN0_IF1MCTR0_DLC1    	(IO_CAN0.IO_IF1MCTR0.bitc.DLC1)
#define	CAN0_IF1MCTR0_DLC2    	(IO_CAN0.IO_IF1MCTR0.bitc.DLC2)
#define	CAN0_IF1MCTR0_DLC3    	(IO_CAN0.IO_IF1MCTR0.bitc.DLC3)
#define	CAN0_IF1DTA10	(IO_CAN0.IO_IF1DTA10)
#define	CAN0_IF1DTA20	(IO_CAN0.IO_IF1DTA20)
#define	CAN0_IF1DTB10	(IO_CAN0.IO_IF1DTB10)
#define	CAN0_IF1DTB20	(IO_CAN0.IO_IF1DTB20)
#define	CAN0_RESV3_0  	(IO_CAN0.RESV3[CONSTANT_0])
#define	CAN0_RESV3_1  	(IO_CAN0.RESV3[CONSTANT_1])
#define	CAN0_RESV3_2  	(IO_CAN0.RESV3[CONSTANT_2])
#define	CAN0_RESV3_3  	(IO_CAN0.RESV3[CONSTANT_3])
#define	CAN0_RESV3_4  	(IO_CAN0.RESV3[CONSTANT_4])
#define	CAN0_RESV3_5  	(IO_CAN0.RESV3[CONSTANT_5])
#define	CAN0_RESV3_6  	(IO_CAN0.RESV3[CONSTANT_6])
#define	CAN0_RESV3_7  	(IO_CAN0.RESV3[CONSTANT_7])
#define	CAN0_RESV3_8  	(IO_CAN0.RESV3[CONSTANT_8])
#define	CAN0_RESV3_9  	(IO_CAN0.RESV3[CONSTANT_9])
#define	CAN0_RESV3_10  	(IO_CAN0.RESV3[CONSTANT_10])
#define	CAN0_RESV3_11  	(IO_CAN0.RESV3[CONSTANT_11])
#define	CAN0_RESV3_12  	(IO_CAN0.RESV3[CONSTANT_12])
#define	CAN0_RESV3_13  	(IO_CAN0.RESV3[CONSTANT_13])
#define	CAN0_RESV3_14  	(IO_CAN0.RESV3[CONSTANT_14])
#define	CAN0_RESV3_15  	(IO_CAN0.RESV3[CONSTANT_15])
#define	CAN0_RESV3_16  	(IO_CAN0.RESV3[CONSTANT_16])
#define	CAN0_RESV3_17  	(IO_CAN0.RESV3[CONSTANT_17])
#define	CAN0_RESV3_18  	(IO_CAN0.RESV3[CONSTANT_18])
#define	CAN0_RESV3_19  	(IO_CAN0.RESV3[CONSTANT_19])
#define	CAN0_RESV3_20  	(IO_CAN0.RESV3[CONSTANT_20])
#define	CAN0_RESV3_21  	(IO_CAN0.RESV3[CONSTANT_21])
#define	CAN0_RESV3_22  	(IO_CAN0.RESV3[CONSTANT_22])
#define	CAN0_RESV3_23  	(IO_CAN0.RESV3[CONSTANT_23])
#define	CAN0_IF2CREQ0			(IO_CAN0.IO_IF2CREQ0.hword)
#define	CAN0_IF2CREQ0_BUSY    	(IO_CAN0.IO_IF2CREQ0.bit.BUSY)
#define	CAN0_IF2CREQ0_MN    	(IO_CAN0.IO_IF2CREQ0.bit.MN)
#define	CAN0_IF2CREQ0_MN0    	(IO_CAN0.IO_IF2CREQ0.bitc.MN0)
#define	CAN0_IF2CREQ0_MN1    	(IO_CAN0.IO_IF2CREQ0.bitc.MN1)
#define	CAN0_IF2CREQ0_MN2    	(IO_CAN0.IO_IF2CREQ0.bitc.MN2)
#define	CAN0_IF2CREQ0_MN3    	(IO_CAN0.IO_IF2CREQ0.bitc.MN3)
#define	CAN0_IF2CREQ0_MN4    	(IO_CAN0.IO_IF2CREQ0.bitc.MN4)
#define	CAN0_IF2CREQ0_MN5    	(IO_CAN0.IO_IF2CREQ0.bitc.MN5)
#define	CAN0_IF2CREQ0_MN6    	(IO_CAN0.IO_IF2CREQ0.bitc.MN6)
#define	CAN0_IF2CREQ0_MN7    	(IO_CAN0.IO_IF2CREQ0.bitc.MN7)
#define	CAN0_IF2CMSK0			(IO_CAN0.IO_IF2CMSK0.hword)
#define	CAN0_IF2CMSK0_WR_RD    	(IO_CAN0.IO_IF2CMSK0.bit.WR_RD)
#define	CAN0_IF2CMSK0_Mask    	(IO_CAN0.IO_IF2CMSK0.bit.Mask)
#define	CAN0_IF2CMSK0_Arb    	(IO_CAN0.IO_IF2CMSK0.bit.Arb)
#define	CAN0_IF2CMSK0_Control    	(IO_CAN0.IO_IF2CMSK0.bit.Control)
#define	CAN0_IF2CMSK0_CIP    	(IO_CAN0.IO_IF2CMSK0.bit.CIP)
#define	CAN0_IF2CMSK0_TxReq    	(IO_CAN0.IO_IF2CMSK0.bit.TxReq)
#define	CAN0_IF2CMSK0_DataA    	(IO_CAN0.IO_IF2CMSK0.bit.DataA)
#define	CAN0_IF2CMSK0_DataB    	(IO_CAN0.IO_IF2CMSK0.bit.DataB)
#define	CAN0_IF2MSK0			(IO_CAN0.IO_IF2MSK0.word)
#define	CAN0_IF2MSK0_MXtd    	(IO_CAN0.IO_IF2MSK0.bit.MXtd)
#define	CAN0_IF2MSK0_MDir    	(IO_CAN0.IO_IF2MSK0.bit.MDir)
#define	CAN0_IF2MSK0_Msk    	(IO_CAN0.IO_IF2MSK0.bit.Msk)
#define	CAN0_IF2MSK0_Msk0    	(IO_CAN0.IO_IF2MSK0.bitc.Msk0)
#define	CAN0_IF2MSK0_Msk1    	(IO_CAN0.IO_IF2MSK0.bitc.Msk1)
#define	CAN0_IF2MSK0_Msk2    	(IO_CAN0.IO_IF2MSK0.bitc.Msk2)
#define	CAN0_IF2MSK0_Msk3    	(IO_CAN0.IO_IF2MSK0.bitc.Msk3)
#define	CAN0_IF2MSK0_Msk4    	(IO_CAN0.IO_IF2MSK0.bitc.Msk4)
#define	CAN0_IF2MSK0_Msk5    	(IO_CAN0.IO_IF2MSK0.bitc.Msk5)
#define	CAN0_IF2MSK0_Msk6    	(IO_CAN0.IO_IF2MSK0.bitc.Msk6)
#define	CAN0_IF2MSK0_Msk7    	(IO_CAN0.IO_IF2MSK0.bitc.Msk7)
#define	CAN0_IF2MSK0_Msk8    	(IO_CAN0.IO_IF2MSK0.bitc.Msk8)
#define	CAN0_IF2MSK0_Msk9    	(IO_CAN0.IO_IF2MSK0.bitc.Msk9)
#define	CAN0_IF2MSK0_Msk10    	(IO_CAN0.IO_IF2MSK0.bitc.Msk10)
#define	CAN0_IF2MSK0_Msk11    	(IO_CAN0.IO_IF2MSK0.bitc.Msk11)
#define	CAN0_IF2MSK0_Msk12    	(IO_CAN0.IO_IF2MSK0.bitc.Msk12)
#define	CAN0_IF2MSK0_Msk13    	(IO_CAN0.IO_IF2MSK0.bitc.Msk13)
#define	CAN0_IF2MSK0_Msk14    	(IO_CAN0.IO_IF2MSK0.bitc.Msk14)
#define	CAN0_IF2MSK0_Msk15    	(IO_CAN0.IO_IF2MSK0.bitc.Msk15)
#define	CAN0_IF2MSK0_Msk16    	(IO_CAN0.IO_IF2MSK0.bitc.Msk16)
#define	CAN0_IF2MSK0_Msk17    	(IO_CAN0.IO_IF2MSK0.bitc.Msk17)
#define	CAN0_IF2MSK0_Msk18    	(IO_CAN0.IO_IF2MSK0.bitc.Msk18)
#define	CAN0_IF2MSK0_Msk19    	(IO_CAN0.IO_IF2MSK0.bitc.Msk19)
#define	CAN0_IF2MSK0_Msk20    	(IO_CAN0.IO_IF2MSK0.bitc.Msk20)
#define	CAN0_IF2MSK0_Msk21    	(IO_CAN0.IO_IF2MSK0.bitc.Msk21)
#define	CAN0_IF2MSK0_Msk22    	(IO_CAN0.IO_IF2MSK0.bitc.Msk22)
#define	CAN0_IF2MSK0_Msk23    	(IO_CAN0.IO_IF2MSK0.bitc.Msk23)
#define	CAN0_IF2MSK0_Msk24    	(IO_CAN0.IO_IF2MSK0.bitc.Msk24)
#define	CAN0_IF2MSK0_Msk25    	(IO_CAN0.IO_IF2MSK0.bitc.Msk25)
#define	CAN0_IF2MSK0_Msk26    	(IO_CAN0.IO_IF2MSK0.bitc.Msk26)
#define	CAN0_IF2MSK0_Msk27    	(IO_CAN0.IO_IF2MSK0.bitc.Msk27)
#define	CAN0_IF2MSK0_Msk28    	(IO_CAN0.IO_IF2MSK0.bitc.Msk28)
#define	CAN0_IF2ARB0			(IO_CAN0.IO_IF2ARB0.word)
#define	CAN0_IF2ARB0_MsgVal    	(IO_CAN0.IO_IF2ARB0.bit.MsgVal)
#define	CAN0_IF2ARB0_Xtd    	(IO_CAN0.IO_IF2ARB0.bit.Xtd)
#define	CAN0_IF2ARB0_Dir    	(IO_CAN0.IO_IF2ARB0.bit.Dir)
#define	CAN0_IF2ARB0_ID    	(IO_CAN0.IO_IF2ARB0.bit.ID)
#define	CAN0_IF2ARB0_ID0    	(IO_CAN0.IO_IF2ARB0.bitc.ID0)
#define	CAN0_IF2ARB0_ID1    	(IO_CAN0.IO_IF2ARB0.bitc.ID1)
#define	CAN0_IF2ARB0_ID2    	(IO_CAN0.IO_IF2ARB0.bitc.ID2)
#define	CAN0_IF2ARB0_ID3    	(IO_CAN0.IO_IF2ARB0.bitc.ID3)
#define	CAN0_IF2ARB0_ID4    	(IO_CAN0.IO_IF2ARB0.bitc.ID4)
#define	CAN0_IF2ARB0_ID5    	(IO_CAN0.IO_IF2ARB0.bitc.ID5)
#define	CAN0_IF2ARB0_ID6    	(IO_CAN0.IO_IF2ARB0.bitc.ID6)
#define	CAN0_IF2ARB0_ID7    	(IO_CAN0.IO_IF2ARB0.bitc.ID7)
#define	CAN0_IF2ARB0_ID8    	(IO_CAN0.IO_IF2ARB0.bitc.ID8)
#define	CAN0_IF2ARB0_ID9    	(IO_CAN0.IO_IF2ARB0.bitc.ID9)
#define	CAN0_IF2ARB0_ID10    	(IO_CAN0.IO_IF2ARB0.bitc.ID10)
#define	CAN0_IF2ARB0_ID11    	(IO_CAN0.IO_IF2ARB0.bitc.ID11)
#define	CAN0_IF2ARB0_ID12    	(IO_CAN0.IO_IF2ARB0.bitc.ID12)
#define	CAN0_IF2ARB0_ID13    	(IO_CAN0.IO_IF2ARB0.bitc.ID13)
#define	CAN0_IF2ARB0_ID14    	(IO_CAN0.IO_IF2ARB0.bitc.ID14)
#define	CAN0_IF2ARB0_ID15    	(IO_CAN0.IO_IF2ARB0.bitc.ID15)
#define	CAN0_IF2ARB0_ID16    	(IO_CAN0.IO_IF2ARB0.bitc.ID16)
#define	CAN0_IF2ARB0_ID17    	(IO_CAN0.IO_IF2ARB0.bitc.ID17)
#define	CAN0_IF2ARB0_ID18    	(IO_CAN0.IO_IF2ARB0.bitc.ID18)
#define	CAN0_IF2ARB0_ID19    	(IO_CAN0.IO_IF2ARB0.bitc.ID19)
#define	CAN0_IF2ARB0_ID20    	(IO_CAN0.IO_IF2ARB0.bitc.ID20)
#define	CAN0_IF2ARB0_ID21    	(IO_CAN0.IO_IF2ARB0.bitc.ID21)
#define	CAN0_IF2ARB0_ID22    	(IO_CAN0.IO_IF2ARB0.bitc.ID22)
#define	CAN0_IF2ARB0_ID23    	(IO_CAN0.IO_IF2ARB0.bitc.ID23)
#define	CAN0_IF2ARB0_ID24    	(IO_CAN0.IO_IF2ARB0.bitc.ID24)
#define	CAN0_IF2ARB0_ID25    	(IO_CAN0.IO_IF2ARB0.bitc.ID25)
#define	CAN0_IF2ARB0_ID26    	(IO_CAN0.IO_IF2ARB0.bitc.ID26)
#define	CAN0_IF2ARB0_ID27    	(IO_CAN0.IO_IF2ARB0.bitc.ID27)
#define	CAN0_IF2ARB0_ID28    	(IO_CAN0.IO_IF2ARB0.bitc.ID28)
#define	CAN0_IF2MCTR0			(IO_CAN0.IO_IF2MCTR0.hword)
#define	CAN0_IF2MCTR0_NewDat    	(IO_CAN0.IO_IF2MCTR0.bit.NewDat)
#define	CAN0_IF2MCTR0_MsgLst    	(IO_CAN0.IO_IF2MCTR0.bit.MsgLst)
#define	CAN0_IF2MCTR0_IntPnd    	(IO_CAN0.IO_IF2MCTR0.bit.IntPnd)
#define	CAN0_IF2MCTR0_UMask    	(IO_CAN0.IO_IF2MCTR0.bit.UMask)
#define	CAN0_IF2MCTR0_TxIE    	(IO_CAN0.IO_IF2MCTR0.bit.TxIE)
#define	CAN0_IF2MCTR0_RxIE    	(IO_CAN0.IO_IF2MCTR0.bit.RxIE)
#define	CAN0_IF2MCTR0_RmtEn    	(IO_CAN0.IO_IF2MCTR0.bit.RmtEn)
#define	CAN0_IF2MCTR0_TxRqst    	(IO_CAN0.IO_IF2MCTR0.bit.TxRqst)
#define	CAN0_IF2MCTR0_EoB    	(IO_CAN0.IO_IF2MCTR0.bit.EoB)
#define	CAN0_IF2MCTR0_DLC    	(IO_CAN0.IO_IF2MCTR0.bit.DLC)
#define	CAN0_IF2MCTR0_DLC0    	(IO_CAN0.IO_IF2MCTR0.bitc.DLC0)
#define	CAN0_IF2MCTR0_DLC1    	(IO_CAN0.IO_IF2MCTR0.bitc.DLC1)
#define	CAN0_IF2MCTR0_DLC2    	(IO_CAN0.IO_IF2MCTR0.bitc.DLC2)
#define	CAN0_IF2MCTR0_DLC3    	(IO_CAN0.IO_IF2MCTR0.bitc.DLC3)
#define	CAN0_IF2DTA10	(IO_CAN0.IO_IF2DTA10)
#define	CAN0_IF2DTA20	(IO_CAN0.IO_IF2DTA20)
#define	CAN0_IF2DTB10	(IO_CAN0.IO_IF2DTB10)
#define	CAN0_IF2DTB20	(IO_CAN0.IO_IF2DTB20)
#define	CAN0_RESV5_0  	(IO_CAN0.RESV5[CONSTANT_0])
#define	CAN0_RESV5_1  	(IO_CAN0.RESV5[CONSTANT_1])
#define	CAN0_RESV5_2  	(IO_CAN0.RESV5[CONSTANT_2])
#define	CAN0_RESV5_3  	(IO_CAN0.RESV5[CONSTANT_3])
#define	CAN0_RESV5_4  	(IO_CAN0.RESV5[CONSTANT_4])
#define	CAN0_RESV5_5  	(IO_CAN0.RESV5[CONSTANT_5])
#define	CAN0_RESV5_6  	(IO_CAN0.RESV5[CONSTANT_6])
#define	CAN0_RESV5_7  	(IO_CAN0.RESV5[CONSTANT_7])
#define	CAN0_RESV5_8  	(IO_CAN0.RESV5[CONSTANT_8])
#define	CAN0_RESV5_9  	(IO_CAN0.RESV5[CONSTANT_9])
#define	CAN0_RESV5_10  	(IO_CAN0.RESV5[CONSTANT_10])
#define	CAN0_RESV5_11  	(IO_CAN0.RESV5[CONSTANT_11])
#define	CAN0_RESV5_12  	(IO_CAN0.RESV5[CONSTANT_12])
#define	CAN0_RESV5_13  	(IO_CAN0.RESV5[CONSTANT_13])
#define	CAN0_RESV5_14  	(IO_CAN0.RESV5[CONSTANT_14])
#define	CAN0_RESV5_15  	(IO_CAN0.RESV5[CONSTANT_15])
#define	CAN0_RESV5_16  	(IO_CAN0.RESV5[CONSTANT_16])
#define	CAN0_RESV5_17  	(IO_CAN0.RESV5[CONSTANT_17])
#define	CAN0_RESV5_18  	(IO_CAN0.RESV5[CONSTANT_18])
#define	CAN0_RESV5_19  	(IO_CAN0.RESV5[CONSTANT_19])
#define	CAN0_RESV5_20  	(IO_CAN0.RESV5[CONSTANT_20])
#define	CAN0_RESV5_21  	(IO_CAN0.RESV5[CONSTANT_21])
#define	CAN0_RESV5_22  	(IO_CAN0.RESV5[CONSTANT_22])
#define	CAN0_RESV5_23  	(IO_CAN0.RESV5[CONSTANT_23])
#define	CAN0_RESV5_24  	(IO_CAN0.RESV5[CONSTANT_24])
#define	CAN0_RESV5_25  	(IO_CAN0.RESV5[CONSTANT_25])
#define	CAN0_RESV5_26  	(IO_CAN0.RESV5[CONSTANT_26])
#define	CAN0_RESV5_27  	(IO_CAN0.RESV5[CONSTANT_27])
#define	CAN0_RESV5_28  	(IO_CAN0.RESV5[CONSTANT_28])
#define	CAN0_RESV5_29  	(IO_CAN0.RESV5[CONSTANT_29])
#define	CAN0_RESV5_30  	(IO_CAN0.RESV5[CONSTANT_30])
#define	CAN0_RESV5_31  	(IO_CAN0.RESV5[CONSTANT_31])
#define	CAN0_RESV5_32  	(IO_CAN0.RESV5[CONSTANT_32])
#define	CAN0_RESV5_33  	(IO_CAN0.RESV5[CONSTANT_33])
#define	CAN0_RESV5_34  	(IO_CAN0.RESV5[CONSTANT_34])
#define	CAN0_RESV5_35  	(IO_CAN0.RESV5[CONSTANT_35])
#define	CAN0_RESV5_36  	(IO_CAN0.RESV5[CONSTANT_36])
#define	CAN0_RESV5_37  	(IO_CAN0.RESV5[CONSTANT_37])
#define	CAN0_RESV5_38  	(IO_CAN0.RESV5[CONSTANT_38])
#define	CAN0_RESV5_39  	(IO_CAN0.RESV5[CONSTANT_39])
#define	CAN0_TREQR0_12	(IO_CAN0.IO_TREQR0_12)
#define	CAN0_NEWDT0_12	(IO_CAN0.IO_NEWDT0_12)
#define	CAN0_INTPND0_12	(IO_CAN0.IO_INTPND0_12)
#define	CAN0_MSGVAL0_12	(IO_CAN0.IO_MSGVAL0_12)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_CAN4,attr=IO,locate=0xC400
#endif

__IO_EXTENDED	struct {
	union {
		__HWORD	hword;
		struct {
			__BYTE	RESV00:1;
			__BYTE	RESV01:1;
			__BYTE	RESV02:1;
			__BYTE	RESV03:1;
			__BYTE	RESV04:1;
			__BYTE	RESV05:1;
			__BYTE	RESV06:1;
			__BYTE	RESV07:1;
			__BYTE	Test:1;
			__BYTE	CCE:1;
			__BYTE	DAR:1;
			__BYTE	RESV011:1;
			__BYTE	EIE:1;
			__BYTE	SIE:1;
			__BYTE	IE:1;
			__BYTE	Init:1;
		} bit;
		struct {
			__BYTE	RESV00:1;
			__BYTE	RESV01:1;
			__BYTE	RESV02:1;
			__BYTE	RESV03:1;
			__BYTE	RESV04:1;
			__BYTE	RESV05:1;
			__BYTE	RESV06:1;
			__BYTE	RESV07:1;
			__BYTE	Test:1;
			__BYTE	CCE:1;
			__BYTE	DAR:1;
			__BYTE	RESV011:1;
			__BYTE	EIE:1;
			__BYTE	SIE:1;
			__BYTE	IE:1;
			__BYTE	Init:1;
		} bitc;
	} IO_CTRLR4;
	union {
		__HWORD	hword;
		struct {
			__BYTE	RESV20:1;
			__BYTE	RESV21:1;
			__BYTE	RESV22:1;
			__BYTE	RESV23:1;
			__BYTE	RESV24:1;
			__BYTE	RESV25:1;
			__BYTE	RESV26:1;
			__BYTE	RESV27:1;
			__BYTE	BOff:1;
			__BYTE	EWarn:1;
			__BYTE	EPass:1;
			__BYTE	RxOK:1;
			__BYTE	TxOK:1;
			__BYTE	LEC:3;
		} bit;
		struct {
			__BYTE	RESV20:1;
			__BYTE	RESV21:1;
			__BYTE	RESV22:1;
			__BYTE	RESV23:1;
			__BYTE	RESV24:1;
			__BYTE	RESV25:1;
			__BYTE	RESV26:1;
			__BYTE	RESV27:1;
			__BYTE	BOff:1;
			__BYTE	EWarn:1;
			__BYTE	EPass:1;
			__BYTE	RxOK:1;
			__BYTE	TxOK:1;
			__BYTE	LEC2:1;
			__BYTE	LEC1:1;
			__BYTE	LEC0:1;
		} bitc;
	} IO_STATR4;
	const union {
		__HWORD	hword;
		struct {
			__BYTE	RP:1;
			__BYTE	REC:7;
			__BYTE	TEC:8;
		} bit;
		struct {
			__BYTE	RP:1;
			__BYTE	REC6:1;
			__BYTE	REC5:1;
			__BYTE	REC4:1;
			__BYTE	REC3:1;
			__BYTE	REC2:1;
			__BYTE	REC1:1;
			__BYTE	REC0:1;
			__BYTE	TEC7:1;
			__BYTE	TEC6:1;
			__BYTE	TEC5:1;
			__BYTE	TEC4:1;
			__BYTE	TEC3:1;
			__BYTE	TEC2:1;
			__BYTE	TEC1:1;
			__BYTE	TEC0:1;
		} bitc;
	} IO_ERRCNT4;
	union {
		__HWORD	hword;
		struct {
			__BYTE	RESV60:1;
			__BYTE	TSeg2:3;
			__BYTE	TSeg1:4;
			__BYTE	SJW:2;
			__BYTE	BRP:6;
		} bit;
		struct {
			__BYTE	RESV60:1;
			__BYTE	TSeg22:1;
			__BYTE	TSeg21:1;
			__BYTE	TSeg20:1;
			__BYTE	TSeg13:1;
			__BYTE	TSeg12:1;
			__BYTE	TSeg11:1;
			__BYTE	TSeg10:1;
			__BYTE	SJW1:1;
			__BYTE	SJW0:1;
			__BYTE	BRP5:1;
			__BYTE	BRP4:1;
			__BYTE	BRP3:1;
			__BYTE	BRP2:1;
			__BYTE	BRP1:1;
			__BYTE	BRP0:1;
		} bitc;
	} IO_BTR4;
	const __HWORD	IO_INTR4;
	union {
		__HWORD	hword;
		struct {
			__BYTE	RESV100:1;
			__BYTE	RESV101:1;
			__BYTE	RESV102:1;
			__BYTE	RESV103:1;
			__BYTE	RESV104:1;
			__BYTE	RESV105:1;
			__BYTE	RESV106:1;
			__BYTE	RESV107:1;
			__BYTE	Rx:1;
			__BYTE	Tx:2;
			__BYTE	LBack:1;
			__BYTE	Silent:1;
			__BYTE	Basic:1;
			__BYTE	RESV1013:1;
			__BYTE	RESV1014:1;
		} bit;
		struct {
			__BYTE	RESV100:1;
			__BYTE	RESV101:1;
			__BYTE	RESV102:1;
			__BYTE	RESV103:1;
			__BYTE	RESV104:1;
			__BYTE	RESV105:1;
			__BYTE	RESV106:1;
			__BYTE	RESV107:1;
			__BYTE	Rx:1;
			__BYTE	Tx1:1;
			__BYTE	Tx0:1;
			__BYTE	LBack:1;
			__BYTE	Silent:1;
			__BYTE	Basic:1;
			__BYTE	RESV1014:1;
			__BYTE	RESV1015:1;
		} bitc;
	} IO_TESTR4;
	union {
		__HWORD	hword;
		struct {
			__BYTE	RESV120:1;
			__BYTE	RESV121:1;
			__BYTE	RESV122:1;
			__BYTE	RESV123:1;
			__BYTE	RESV124:1;
			__BYTE	RESV125:1;
			__BYTE	RESV126:1;
			__BYTE	RESV127:1;
			__BYTE	RESV128:1;
			__BYTE	RESV129:1;
			__BYTE	RESV1210:1;
			__BYTE	RESV1211:1;
			__BYTE	BRPE:4;
		} bit;
		struct {
			__BYTE	RESV120:1;
			__BYTE	RESV121:1;
			__BYTE	RESV122:1;
			__BYTE	RESV123:1;
			__BYTE	RESV124:1;
			__BYTE	RESV125:1;
			__BYTE	RESV126:1;
			__BYTE	RESV127:1;
			__BYTE	RESV128:1;
			__BYTE	RESV129:1;
			__BYTE	RESV1210:1;
			__BYTE	RESV1211:1;
			__BYTE	BRPE3:1;
			__BYTE	BRPE2:1;
			__BYTE	BRPE1:1;
			__BYTE	BRPE0:1;
		} bitc;
	} IO_BRPER4;
	__HWORD	IO_RESV1;
	union {
		__HWORD	hword;
		struct {
			__BYTE	BUSY:1;
			__BYTE	RESV161:1;
			__BYTE	RESV162:1;
			__BYTE	RESV163:1;
			__BYTE	RESV164:1;
			__BYTE	RESV165:1;
			__BYTE	RESV166:1;
			__BYTE	RESV167:1;
			__BYTE	MN:8;
		} bit;
		struct {
			__BYTE	BUSY:1;
			__BYTE	RESV161:1;
			__BYTE	RESV162:1;
			__BYTE	RESV163:1;
			__BYTE	RESV164:1;
			__BYTE	RESV165:1;
			__BYTE	RESV166:1;
			__BYTE	RESV167:1;
			__BYTE	MN7:1;
			__BYTE	MN6:1;
			__BYTE	MN5:1;
			__BYTE	MN4:1;
			__BYTE	MN3:1;
			__BYTE	MN2:1;
			__BYTE	MN1:1;
			__BYTE	MN0:1;
		} bitc;
	} IO_IF1CREQ4;
	union {
		__HWORD	hword;
		struct {
			__BYTE	RESV180:1;
			__BYTE	RESV181:1;
			__BYTE	RESV182:1;
			__BYTE	RESV183:1;
			__BYTE	RESV184:1;
			__BYTE	RESV185:1;
			__BYTE	RESV186:1;
			__BYTE	RESV187:1;
			__BYTE	WR_RD:1;
			__BYTE	Mask:1;
			__BYTE	Arb:1;
			__BYTE	Control:1;
			__BYTE	CIP:1;
			__BYTE	TxReq:1;
			__BYTE	DataA:1;
			__BYTE	DataB:1;
		} bit;
		struct {
			__BYTE	RESV180:1;
			__BYTE	RESV181:1;
			__BYTE	RESV182:1;
			__BYTE	RESV183:1;
			__BYTE	RESV184:1;
			__BYTE	RESV185:1;
			__BYTE	RESV186:1;
			__BYTE	RESV187:1;
			__BYTE	WR_RD:1;
			__BYTE	Mask:1;
			__BYTE	Arb:1;
			__BYTE	Control:1;
			__BYTE	CIP:1;
			__BYTE	TxReq:1;
			__BYTE	DataA:1;
			__BYTE	DataB:1;
		} bitc;
	} IO_IF1CMSK4;
	union {
		__WORD	word;
		struct {
			__BYTE	MXtd:1;
			__BYTE	MDir:1;
			__BYTE	RESV202:1;
			__WORD	Msk:29;
		} bit;
		struct {
			__BYTE	MXtd:1;
			__BYTE	MDir:1;
			__BYTE	RESV202:1;
			__BYTE	Msk28:1;
			__BYTE	Msk27:1;
			__BYTE	Msk26:1;
			__BYTE	Msk25:1;
			__BYTE	Msk24:1;
			__BYTE	Msk23:1;
			__BYTE	Msk22:1;
			__BYTE	Msk21:1;
			__BYTE	Msk20:1;
			__BYTE	Msk19:1;
			__BYTE	Msk18:1;
			__BYTE	Msk17:1;
			__BYTE	Msk16:1;
			__BYTE	Msk15:1;
			__BYTE	Msk14:1;
			__BYTE	Msk13:1;
			__BYTE	Msk12:1;
			__BYTE	Msk11:1;
			__BYTE	Msk10:1;
			__BYTE	Msk9:1;
			__BYTE	Msk8:1;
			__BYTE	Msk7:1;
			__BYTE	Msk6:1;
			__BYTE	Msk5:1;
			__BYTE	Msk4:1;
			__BYTE	Msk3:1;
			__BYTE	Msk2:1;
			__BYTE	Msk1:1;
			__BYTE	Msk0:1;
		} bitc;
	} IO_IF1MSK4;
	union {
		__WORD	word;
		struct {
			__BYTE	MsgVal:1;
			__BYTE	Xtd:1;
			__BYTE	Dir:1;
			__WORD	ID:29;
		} bit;
		struct {
			__BYTE	MsgVal:1;
			__BYTE	Xtd:1;
			__BYTE	Dir:1;
			__BYTE	ID28:1;
			__BYTE	ID27:1;
			__BYTE	ID26:1;
			__BYTE	ID25:1;
			__BYTE	ID24:1;
			__BYTE	ID23:1;
			__BYTE	ID22:1;
			__BYTE	ID21:1;
			__BYTE	ID20:1;
			__BYTE	ID19:1;
			__BYTE	ID18:1;
			__BYTE	ID17:1;
			__BYTE	ID16:1;
			__BYTE	ID15:1;
			__BYTE	ID14:1;
			__BYTE	ID13:1;
			__BYTE	ID12:1;
			__BYTE	ID11:1;
			__BYTE	ID10:1;
			__BYTE	ID9:1;
			__BYTE	ID8:1;
			__BYTE	ID7:1;
			__BYTE	ID6:1;
			__BYTE	ID5:1;
			__BYTE	ID4:1;
			__BYTE	ID3:1;
			__BYTE	ID2:1;
			__BYTE	ID1:1;
			__BYTE	ID0:1;
		} bitc;
	} IO_IF1ARB4;
	union {
		__HWORD	hword;
		struct {
			__BYTE	NewDat:1;
			__BYTE	MsgLst:1;
			__BYTE	IntPnd:1;
			__BYTE	UMask:1;
			__BYTE	TxIE:1;
			__BYTE	RxIE:1;
			__BYTE	RmtEn:1;
			__BYTE	TxRqst:1;
			__BYTE	EoB:1;
			__BYTE	RESV289:1;
			__BYTE	RESV2810:1;
			__BYTE	RESV2811:1;
			__BYTE	DLC:4;
		} bit;
		struct {
			__BYTE	NewDat:1;
			__BYTE	MsgLst:1;
			__BYTE	IntPnd:1;
			__BYTE	UMask:1;
			__BYTE	TxIE:1;
			__BYTE	RxIE:1;
			__BYTE	RmtEn:1;
			__BYTE	TxRqst:1;
			__BYTE	EoB:1;
			__BYTE	RESV289:1;
			__BYTE	RESV2810:1;
			__BYTE	RESV2811:1;
			__BYTE	DLC3:1;
			__BYTE	DLC2:1;
			__BYTE	DLC1:1;
			__BYTE	DLC0:1;
		} bitc;
	} IO_IF1MCTR4;
	__HWORD	IO_RESV2;
	__HWORD	IO_IF1DTA14;
	__HWORD	IO_IF1DTA24;
	__HWORD	IO_IF1DTB14;
	__HWORD	IO_IF1DTB24;
	__WORD	IO_RESV3[CONSTANT_6];
	union {
		__HWORD	hword;
		struct {
			__BYTE	BUSY:1;
			__BYTE	RESV641:1;
			__BYTE	RESV642:1;
			__BYTE	RESV643:1;
			__BYTE	RESV644:1;
			__BYTE	RESV645:1;
			__BYTE	RESV646:1;
			__BYTE	RESV647:1;
			__BYTE	MN:8;
		} bit;
		struct {
			__BYTE	BUSY:1;
			__BYTE	RESV641:1;
			__BYTE	RESV642:1;
			__BYTE	RESV643:1;
			__BYTE	RESV644:1;
			__BYTE	RESV645:1;
			__BYTE	RESV646:1;
			__BYTE	RESV647:1;
			__BYTE	MN7:1;
			__BYTE	MN6:1;
			__BYTE	MN5:1;
			__BYTE	MN4:1;
			__BYTE	MN3:1;
			__BYTE	MN2:1;
			__BYTE	MN1:1;
			__BYTE	MN0:1;
		} bitc;
	} IO_IF2CREQ4;
	union {
		__HWORD	hword;
		struct {
			__BYTE	RESV660:1;
			__BYTE	RESV661:1;
			__BYTE	RESV662:1;
			__BYTE	RESV663:1;
			__BYTE	RESV664:1;
			__BYTE	RESV665:1;
			__BYTE	RESV666:1;
			__BYTE	RESV667:1;
			__BYTE	WR_RD:1;
			__BYTE	Mask:1;
			__BYTE	Arb:1;
			__BYTE	Control:1;
			__BYTE	CIP:1;
			__BYTE	TxReq:1;
			__BYTE	DataA:1;
			__BYTE	DataB:1;
		} bit;
		struct {
			__BYTE	RESV660:1;
			__BYTE	RESV661:1;
			__BYTE	RESV662:1;
			__BYTE	RESV663:1;
			__BYTE	RESV664:1;
			__BYTE	RESV665:1;
			__BYTE	RESV666:1;
			__BYTE	RESV667:1;
			__BYTE	WR_RD:1;
			__BYTE	Mask:1;
			__BYTE	Arb:1;
			__BYTE	Control:1;
			__BYTE	CIP:1;
			__BYTE	TxReq:1;
			__BYTE	DataA:1;
			__BYTE	DataB:1;
		} bitc;
	} IO_IF2CMSK4;
	union {
		__WORD	word;
		struct {
			__BYTE	MXtd:1;
			__BYTE	MDir:1;
			__BYTE	RESV682:1;
			__WORD	Msk:29;
		} bit;
		struct {
			__BYTE	MXtd:1;
			__BYTE	MDir:1;
			__BYTE	RESV682:1;
			__BYTE	Msk28:1;
			__BYTE	Msk27:1;
			__BYTE	Msk26:1;
			__BYTE	Msk25:1;
			__BYTE	Msk24:1;
			__BYTE	Msk23:1;
			__BYTE	Msk22:1;
			__BYTE	Msk21:1;
			__BYTE	Msk20:1;
			__BYTE	Msk19:1;
			__BYTE	Msk18:1;
			__BYTE	Msk17:1;
			__BYTE	Msk16:1;
			__BYTE	Msk15:1;
			__BYTE	Msk14:1;
			__BYTE	Msk13:1;
			__BYTE	Msk12:1;
			__BYTE	Msk11:1;
			__BYTE	Msk10:1;
			__BYTE	Msk9:1;
			__BYTE	Msk8:1;
			__BYTE	Msk7:1;
			__BYTE	Msk6:1;
			__BYTE	Msk5:1;
			__BYTE	Msk4:1;
			__BYTE	Msk3:1;
			__BYTE	Msk2:1;
			__BYTE	Msk1:1;
			__BYTE	Msk0:1;
		} bitc;
	} IO_IF2MSK4;
	union {
		__WORD	word;
		struct {
			__BYTE	MsgVal:1;
			__BYTE	Xtd:1;
			__BYTE	Dir:1;
			__WORD	ID:29;
		} bit;
		struct {
			__BYTE	MsgVal:1;
			__BYTE	Xtd:1;
			__BYTE	Dir:1;
			__BYTE	ID28:1;
			__BYTE	ID27:1;
			__BYTE	ID26:1;
			__BYTE	ID25:1;
			__BYTE	ID24:1;
			__BYTE	ID23:1;
			__BYTE	ID22:1;
			__BYTE	ID21:1;
			__BYTE	ID20:1;
			__BYTE	ID19:1;
			__BYTE	ID18:1;
			__BYTE	ID17:1;
			__BYTE	ID16:1;
			__BYTE	ID15:1;
			__BYTE	ID14:1;
			__BYTE	ID13:1;
			__BYTE	ID12:1;
			__BYTE	ID11:1;
			__BYTE	ID10:1;
			__BYTE	ID9:1;
			__BYTE	ID8:1;
			__BYTE	ID7:1;
			__BYTE	ID6:1;
			__BYTE	ID5:1;
			__BYTE	ID4:1;
			__BYTE	ID3:1;
			__BYTE	ID2:1;
			__BYTE	ID1:1;
			__BYTE	ID0:1;
		} bitc;
	} IO_IF2ARB4;
	union {
		__HWORD	hword;
		struct {
			__BYTE	NewDat:1;
			__BYTE	MsgLst:1;
			__BYTE	IntPnd:1;
			__BYTE	UMask:1;
			__BYTE	TxIE:1;
			__BYTE	RxIE:1;
			__BYTE	RmtEn:1;
			__BYTE	TxRqst:1;
			__BYTE	EoB:1;
			__BYTE	RESV769:1;
			__BYTE	RESV7610:1;
			__BYTE	RESV7611:1;
			__BYTE	DLC:4;
		} bit;
		struct {
			__BYTE	NewDat:1;
			__BYTE	MsgLst:1;
			__BYTE	IntPnd:1;
			__BYTE	UMask:1;
			__BYTE	TxIE:1;
			__BYTE	RxIE:1;
			__BYTE	RmtEn:1;
			__BYTE	TxRqst:1;
			__BYTE	EoB:1;
			__BYTE	RESV769:1;
			__BYTE	RESV7610:1;
			__BYTE	RESV7611:1;
			__BYTE	DLC3:1;
			__BYTE	DLC2:1;
			__BYTE	DLC1:1;
			__BYTE	DLC0:1;
		} bitc;
	} IO_IF2MCTR4;
	__HWORD	IO_RESV4;
	__HWORD	IO_IF2DTA14;
	__HWORD	IO_IF2DTA24;
	__HWORD	IO_IF2DTB14;
	__HWORD	IO_IF2DTB24;
	__WORD	IO_RESV5[CONSTANT_10];
	const __WORD	IO_TREQR4_12;
	__WORD	IO_RESV6;
	__WORD	IO_RESV7;
	__WORD	IO_RESV8;
	const __WORD	IO_NEWDT4_12;
	__WORD	IO_RESV9;
	__WORD	IO_RESV10;
	__WORD	IO_RESV11;
	const __WORD	IO_INTPND4_12;
	__WORD	IO_RESV12;
	__WORD	IO_RESV13;
	__WORD	IO_RESV14;
	const __WORD	IO_MSGVAL4_12;
	__WORD	IO_RESV15;
	__WORD	IO_RESV16;
	__WORD	IO_RESV17;
} IO_CAN4;

#define	CAN4_CTRLR4			(IO_CAN4.IO_CTRLR4.hword)
#define	CAN4_CTRLR4_Test    	(IO_CAN4.IO_CTRLR4.bit.Test)
#define	CAN4_CTRLR4_CCE    	(IO_CAN4.IO_CTRLR4.bit.CCE)
#define	CAN4_CTRLR4_DAR    	(IO_CAN4.IO_CTRLR4.bit.DAR)
#define	CAN4_CTRLR4_EIE    	(IO_CAN4.IO_CTRLR4.bit.EIE)
#define	CAN4_CTRLR4_SIE    	(IO_CAN4.IO_CTRLR4.bit.SIE)
#define	CAN4_CTRLR4_IE    	(IO_CAN4.IO_CTRLR4.bit.IE)
#define	CAN4_CTRLR4_Init    	(IO_CAN4.IO_CTRLR4.bit.Init)
#define	CAN4_STATR4			(IO_CAN4.IO_STATR4.hword)
#define	CAN4_STATR4_BOff    	(IO_CAN4.IO_STATR4.bit.BOff)
#define	CAN4_STATR4_EWarn    	(IO_CAN4.IO_STATR4.bit.EWarn)
#define	CAN4_STATR4_EPass    	(IO_CAN4.IO_STATR4.bit.EPass)
#define	CAN4_STATR4_RxOK    	(IO_CAN4.IO_STATR4.bit.RxOK)
#define	CAN4_STATR4_TxOK    	(IO_CAN4.IO_STATR4.bit.TxOK)
#define	CAN4_STATR4_LEC    	(IO_CAN4.IO_STATR4.bit.LEC)
#define	CAN4_STATR4_LEC0    	(IO_CAN4.IO_STATR4.bitc.LEC0)
#define	CAN4_STATR4_LEC1    	(IO_CAN4.IO_STATR4.bitc.LEC1)
#define	CAN4_STATR4_LEC2    	(IO_CAN4.IO_STATR4.bitc.LEC2)
#define	CAN4_ERRCNT4			(IO_CAN4.IO_ERRCNT4.hword)
#define	CAN4_ERRCNT4_RP    	(IO_CAN4.IO_ERRCNT4.bit.RP)
#define	CAN4_ERRCNT4_REC    	(IO_CAN4.IO_ERRCNT4.bit.REC)
#define	CAN4_ERRCNT4_REC0    	(IO_CAN4.IO_ERRCNT4.bitc.REC0)
#define	CAN4_ERRCNT4_REC1    	(IO_CAN4.IO_ERRCNT4.bitc.REC1)
#define	CAN4_ERRCNT4_REC2    	(IO_CAN4.IO_ERRCNT4.bitc.REC2)
#define	CAN4_ERRCNT4_REC3    	(IO_CAN4.IO_ERRCNT4.bitc.REC3)
#define	CAN4_ERRCNT4_REC4    	(IO_CAN4.IO_ERRCNT4.bitc.REC4)
#define	CAN4_ERRCNT4_REC5    	(IO_CAN4.IO_ERRCNT4.bitc.REC5)
#define	CAN4_ERRCNT4_REC6    	(IO_CAN4.IO_ERRCNT4.bitc.REC6)
#define	CAN4_ERRCNT4_TEC    	(IO_CAN4.IO_ERRCNT4.bit.TEC)
#define	CAN4_ERRCNT4_TEC0    	(IO_CAN4.IO_ERRCNT4.bitc.TEC0)
#define	CAN4_ERRCNT4_TEC1    	(IO_CAN4.IO_ERRCNT4.bitc.TEC1)
#define	CAN4_ERRCNT4_TEC2    	(IO_CAN4.IO_ERRCNT4.bitc.TEC2)
#define	CAN4_ERRCNT4_TEC3    	(IO_CAN4.IO_ERRCNT4.bitc.TEC3)
#define	CAN4_ERRCNT4_TEC4    	(IO_CAN4.IO_ERRCNT4.bitc.TEC4)
#define	CAN4_ERRCNT4_TEC5    	(IO_CAN4.IO_ERRCNT4.bitc.TEC5)
#define	CAN4_ERRCNT4_TEC6    	(IO_CAN4.IO_ERRCNT4.bitc.TEC6)
#define	CAN4_ERRCNT4_TEC7    	(IO_CAN4.IO_ERRCNT4.bitc.TEC7)
#define	CAN4_BTR4			(IO_CAN4.IO_BTR4.hword)
#define	CAN4_BTR4_TSeg2    	(IO_CAN4.IO_BTR4.bit.TSeg2)
#define	CAN4_BTR4_TSeg20    	(IO_CAN4.IO_BTR4.bitc.TSeg20)
#define	CAN4_BTR4_TSeg21    	(IO_CAN4.IO_BTR4.bitc.TSeg21)
#define	CAN4_BTR4_TSeg22    	(IO_CAN4.IO_BTR4.bitc.TSeg22)
#define	CAN4_BTR4_TSeg1    	(IO_CAN4.IO_BTR4.bit.TSeg1)
#define	CAN4_BTR4_TSeg10    	(IO_CAN4.IO_BTR4.bitc.TSeg10)
#define	CAN4_BTR4_TSeg11    	(IO_CAN4.IO_BTR4.bitc.TSeg11)
#define	CAN4_BTR4_TSeg12    	(IO_CAN4.IO_BTR4.bitc.TSeg12)
#define	CAN4_BTR4_TSeg13    	(IO_CAN4.IO_BTR4.bitc.TSeg13)
#define	CAN4_BTR4_SJW    	(IO_CAN4.IO_BTR4.bit.SJW)
#define	CAN4_BTR4_SJW0    	(IO_CAN4.IO_BTR4.bitc.SJW0)
#define	CAN4_BTR4_SJW1    	(IO_CAN4.IO_BTR4.bitc.SJW1)
#define	CAN4_BTR4_BRP    	(IO_CAN4.IO_BTR4.bit.BRP)
#define	CAN4_BTR4_BRP0    	(IO_CAN4.IO_BTR4.bitc.BRP0)
#define	CAN4_BTR4_BRP1    	(IO_CAN4.IO_BTR4.bitc.BRP1)
#define	CAN4_BTR4_BRP2    	(IO_CAN4.IO_BTR4.bitc.BRP2)
#define	CAN4_BTR4_BRP3    	(IO_CAN4.IO_BTR4.bitc.BRP3)
#define	CAN4_BTR4_BRP4    	(IO_CAN4.IO_BTR4.bitc.BRP4)
#define	CAN4_BTR4_BRP5    	(IO_CAN4.IO_BTR4.bitc.BRP5)
#define	CAN4_INTR4	(IO_CAN4.IO_INTR4)
#define	CAN4_TESTR4			(IO_CAN4.IO_TESTR4.hword)
#define	CAN4_TESTR4_Rx    	(IO_CAN4.IO_TESTR4.bit.Rx)
#define	CAN4_TESTR4_Tx    	(IO_CAN4.IO_TESTR4.bit.Tx)
#define	CAN4_TESTR4_Tx0    	(IO_CAN4.IO_TESTR4.bitc.Tx0)
#define	CAN4_TESTR4_Tx1    	(IO_CAN4.IO_TESTR4.bitc.Tx1)
#define	CAN4_TESTR4_LBack    	(IO_CAN4.IO_TESTR4.bit.LBack)
#define	CAN4_TESTR4_Silent    	(IO_CAN4.IO_TESTR4.bit.Silent)
#define	CAN4_TESTR4_Basic    	(IO_CAN4.IO_TESTR4.bit.Basic)
#define	CAN4_BRPER4			(IO_CAN4.IO_BRPER4.hword)
#define	CAN4_BRPER4_BRPE    	(IO_CAN4.IO_BRPER4.bit.BRPE)
#define	CAN4_BRPER4_BRPE0    	(IO_CAN4.IO_BRPER4.bitc.BRPE0)
#define	CAN4_BRPER4_BRPE1    	(IO_CAN4.IO_BRPER4.bitc.BRPE1)
#define	CAN4_BRPER4_BRPE2    	(IO_CAN4.IO_BRPER4.bitc.BRPE2)
#define	CAN4_BRPER4_BRPE3    	(IO_CAN4.IO_BRPER4.bitc.BRPE3)
#define	CAN4_IF1CREQ4			(IO_CAN4.IO_IF1CREQ4.hword)
#define	CAN4_IF1CREQ4_BUSY    	(IO_CAN4.IO_IF1CREQ4.bit.BUSY)
#define	CAN4_IF1CREQ4_MN    	(IO_CAN4.IO_IF1CREQ4.bit.MN)
#define	CAN4_IF1CREQ4_MN0    	(IO_CAN4.IO_IF1CREQ4.bitc.MN0)
#define	CAN4_IF1CREQ4_MN1    	(IO_CAN4.IO_IF1CREQ4.bitc.MN1)
#define	CAN4_IF1CREQ4_MN2    	(IO_CAN4.IO_IF1CREQ4.bitc.MN2)
#define	CAN4_IF1CREQ4_MN3    	(IO_CAN4.IO_IF1CREQ4.bitc.MN3)
#define	CAN4_IF1CREQ4_MN4    	(IO_CAN4.IO_IF1CREQ4.bitc.MN4)
#define	CAN4_IF1CREQ4_MN5    	(IO_CAN4.IO_IF1CREQ4.bitc.MN5)
#define	CAN4_IF1CREQ4_MN6    	(IO_CAN4.IO_IF1CREQ4.bitc.MN6)
#define	CAN4_IF1CREQ4_MN7    	(IO_CAN4.IO_IF1CREQ4.bitc.MN7)
#define	CAN4_IF1CMSK4			(IO_CAN4.IO_IF1CMSK4.hword)
#define	CAN4_IF1CMSK4_WR_RD    	(IO_CAN4.IO_IF1CMSK4.bit.WR_RD)
#define	CAN4_IF1CMSK4_Mask    	(IO_CAN4.IO_IF1CMSK4.bit.Mask)
#define	CAN4_IF1CMSK4_Arb    	(IO_CAN4.IO_IF1CMSK4.bit.Arb)
#define	CAN4_IF1CMSK4_Control    	(IO_CAN4.IO_IF1CMSK4.bit.Control)
#define	CAN4_IF1CMSK4_CIP    	(IO_CAN4.IO_IF1CMSK4.bit.CIP)
#define	CAN4_IF1CMSK4_TxReq    	(IO_CAN4.IO_IF1CMSK4.bit.TxReq)
#define	CAN4_IF1CMSK4_DataA    	(IO_CAN4.IO_IF1CMSK4.bit.DataA)
#define	CAN4_IF1CMSK4_DataB    	(IO_CAN4.IO_IF1CMSK4.bit.DataB)
#define	CAN4_IF1MSK4			(IO_CAN4.IO_IF1MSK4.word)
#define	CAN4_IF1MSK4_MXtd    	(IO_CAN4.IO_IF1MSK4.bit.MXtd)
#define	CAN4_IF1MSK4_MDir    	(IO_CAN4.IO_IF1MSK4.bit.MDir)
#define	CAN4_IF1MSK4_Msk    	(IO_CAN4.IO_IF1MSK4.bit.Msk)
#define	CAN4_IF1MSK4_Msk0    	(IO_CAN4.IO_IF1MSK4.bitc.Msk0)
#define	CAN4_IF1MSK4_Msk1    	(IO_CAN4.IO_IF1MSK4.bitc.Msk1)
#define	CAN4_IF1MSK4_Msk2    	(IO_CAN4.IO_IF1MSK4.bitc.Msk2)
#define	CAN4_IF1MSK4_Msk3    	(IO_CAN4.IO_IF1MSK4.bitc.Msk3)
#define	CAN4_IF1MSK4_Msk4    	(IO_CAN4.IO_IF1MSK4.bitc.Msk4)
#define	CAN4_IF1MSK4_Msk5    	(IO_CAN4.IO_IF1MSK4.bitc.Msk5)
#define	CAN4_IF1MSK4_Msk6    	(IO_CAN4.IO_IF1MSK4.bitc.Msk6)
#define	CAN4_IF1MSK4_Msk7    	(IO_CAN4.IO_IF1MSK4.bitc.Msk7)
#define	CAN4_IF1MSK4_Msk8    	(IO_CAN4.IO_IF1MSK4.bitc.Msk8)
#define	CAN4_IF1MSK4_Msk9    	(IO_CAN4.IO_IF1MSK4.bitc.Msk9)
#define	CAN4_IF1MSK4_Msk10    	(IO_CAN4.IO_IF1MSK4.bitc.Msk10)
#define	CAN4_IF1MSK4_Msk11    	(IO_CAN4.IO_IF1MSK4.bitc.Msk11)
#define	CAN4_IF1MSK4_Msk12    	(IO_CAN4.IO_IF1MSK4.bitc.Msk12)
#define	CAN4_IF1MSK4_Msk13    	(IO_CAN4.IO_IF1MSK4.bitc.Msk13)
#define	CAN4_IF1MSK4_Msk14    	(IO_CAN4.IO_IF1MSK4.bitc.Msk14)
#define	CAN4_IF1MSK4_Msk15    	(IO_CAN4.IO_IF1MSK4.bitc.Msk15)
#define	CAN4_IF1MSK4_Msk16    	(IO_CAN4.IO_IF1MSK4.bitc.Msk16)
#define	CAN4_IF1MSK4_Msk17    	(IO_CAN4.IO_IF1MSK4.bitc.Msk17)
#define	CAN4_IF1MSK4_Msk18    	(IO_CAN4.IO_IF1MSK4.bitc.Msk18)
#define	CAN4_IF1MSK4_Msk19    	(IO_CAN4.IO_IF1MSK4.bitc.Msk19)
#define	CAN4_IF1MSK4_Msk20    	(IO_CAN4.IO_IF1MSK4.bitc.Msk20)
#define	CAN4_IF1MSK4_Msk21    	(IO_CAN4.IO_IF1MSK4.bitc.Msk21)
#define	CAN4_IF1MSK4_Msk22    	(IO_CAN4.IO_IF1MSK4.bitc.Msk22)
#define	CAN4_IF1MSK4_Msk23    	(IO_CAN4.IO_IF1MSK4.bitc.Msk23)
#define	CAN4_IF1MSK4_Msk24    	(IO_CAN4.IO_IF1MSK4.bitc.Msk24)
#define	CAN4_IF1MSK4_Msk25    	(IO_CAN4.IO_IF1MSK4.bitc.Msk25)
#define	CAN4_IF1MSK4_Msk26    	(IO_CAN4.IO_IF1MSK4.bitc.Msk26)
#define	CAN4_IF1MSK4_Msk27    	(IO_CAN4.IO_IF1MSK4.bitc.Msk27)
#define	CAN4_IF1MSK4_Msk28    	(IO_CAN4.IO_IF1MSK4.bitc.Msk28)
#define	CAN4_IF1ARB4			(IO_CAN4.IO_IF1ARB4.word)
#define	CAN4_IF1ARB4_MsgVal    	(IO_CAN4.IO_IF1ARB4.bit.MsgVal)
#define	CAN4_IF1ARB4_Xtd    	(IO_CAN4.IO_IF1ARB4.bit.Xtd)
#define	CAN4_IF1ARB4_Dir    	(IO_CAN4.IO_IF1ARB4.bit.Dir)
#define	CAN4_IF1ARB4_ID    	(IO_CAN4.IO_IF1ARB4.bit.ID)
#define	CAN4_IF1ARB4_ID0    	(IO_CAN4.IO_IF1ARB4.bitc.ID0)
#define	CAN4_IF1ARB4_ID1    	(IO_CAN4.IO_IF1ARB4.bitc.ID1)
#define	CAN4_IF1ARB4_ID2    	(IO_CAN4.IO_IF1ARB4.bitc.ID2)
#define	CAN4_IF1ARB4_ID3    	(IO_CAN4.IO_IF1ARB4.bitc.ID3)
#define	CAN4_IF1ARB4_ID4    	(IO_CAN4.IO_IF1ARB4.bitc.ID4)
#define	CAN4_IF1ARB4_ID5    	(IO_CAN4.IO_IF1ARB4.bitc.ID5)
#define	CAN4_IF1ARB4_ID6    	(IO_CAN4.IO_IF1ARB4.bitc.ID6)
#define	CAN4_IF1ARB4_ID7    	(IO_CAN4.IO_IF1ARB4.bitc.ID7)
#define	CAN4_IF1ARB4_ID8    	(IO_CAN4.IO_IF1ARB4.bitc.ID8)
#define	CAN4_IF1ARB4_ID9    	(IO_CAN4.IO_IF1ARB4.bitc.ID9)
#define	CAN4_IF1ARB4_ID10    	(IO_CAN4.IO_IF1ARB4.bitc.ID10)
#define	CAN4_IF1ARB4_ID11    	(IO_CAN4.IO_IF1ARB4.bitc.ID11)
#define	CAN4_IF1ARB4_ID12    	(IO_CAN4.IO_IF1ARB4.bitc.ID12)
#define	CAN4_IF1ARB4_ID13    	(IO_CAN4.IO_IF1ARB4.bitc.ID13)
#define	CAN4_IF1ARB4_ID14    	(IO_CAN4.IO_IF1ARB4.bitc.ID14)
#define	CAN4_IF1ARB4_ID15    	(IO_CAN4.IO_IF1ARB4.bitc.ID15)
#define	CAN4_IF1ARB4_ID16    	(IO_CAN4.IO_IF1ARB4.bitc.ID16)
#define	CAN4_IF1ARB4_ID17    	(IO_CAN4.IO_IF1ARB4.bitc.ID17)
#define	CAN4_IF1ARB4_ID18    	(IO_CAN4.IO_IF1ARB4.bitc.ID18)
#define	CAN4_IF1ARB4_ID19    	(IO_CAN4.IO_IF1ARB4.bitc.ID19)
#define	CAN4_IF1ARB4_ID20    	(IO_CAN4.IO_IF1ARB4.bitc.ID20)
#define	CAN4_IF1ARB4_ID21    	(IO_CAN4.IO_IF1ARB4.bitc.ID21)
#define	CAN4_IF1ARB4_ID22    	(IO_CAN4.IO_IF1ARB4.bitc.ID22)
#define	CAN4_IF1ARB4_ID23    	(IO_CAN4.IO_IF1ARB4.bitc.ID23)
#define	CAN4_IF1ARB4_ID24    	(IO_CAN4.IO_IF1ARB4.bitc.ID24)
#define	CAN4_IF1ARB4_ID25    	(IO_CAN4.IO_IF1ARB4.bitc.ID25)
#define	CAN4_IF1ARB4_ID26    	(IO_CAN4.IO_IF1ARB4.bitc.ID26)
#define	CAN4_IF1ARB4_ID27    	(IO_CAN4.IO_IF1ARB4.bitc.ID27)
#define	CAN4_IF1ARB4_ID28    	(IO_CAN4.IO_IF1ARB4.bitc.ID28)
#define	CAN4_IF1MCTR4			(IO_CAN4.IO_IF1MCTR4.hword)
#define	CAN4_IF1MCTR4_NewDat    	(IO_CAN4.IO_IF1MCTR4.bit.NewDat)
#define	CAN4_IF1MCTR4_MsgLst    	(IO_CAN4.IO_IF1MCTR4.bit.MsgLst)
#define	CAN4_IF1MCTR4_IntPnd    	(IO_CAN4.IO_IF1MCTR4.bit.IntPnd)
#define	CAN4_IF1MCTR4_UMask    	(IO_CAN4.IO_IF1MCTR4.bit.UMask)
#define	CAN4_IF1MCTR4_TxIE    	(IO_CAN4.IO_IF1MCTR4.bit.TxIE)
#define	CAN4_IF1MCTR4_RxIE    	(IO_CAN4.IO_IF1MCTR4.bit.RxIE)
#define	CAN4_IF1MCTR4_RmtEn    	(IO_CAN4.IO_IF1MCTR4.bit.RmtEn)
#define	CAN4_IF1MCTR4_TxRqst    	(IO_CAN4.IO_IF1MCTR4.bit.TxRqst)
#define	CAN4_IF1MCTR4_EoB    	(IO_CAN4.IO_IF1MCTR4.bit.EoB)
#define	CAN4_IF1MCTR4_DLC    	(IO_CAN4.IO_IF1MCTR4.bit.DLC)
#define	CAN4_IF1MCTR4_DLC0    	(IO_CAN4.IO_IF1MCTR4.bitc.DLC0)
#define	CAN4_IF1MCTR4_DLC1    	(IO_CAN4.IO_IF1MCTR4.bitc.DLC1)
#define	CAN4_IF1MCTR4_DLC2    	(IO_CAN4.IO_IF1MCTR4.bitc.DLC2)
#define	CAN4_IF1MCTR4_DLC3    	(IO_CAN4.IO_IF1MCTR4.bitc.DLC3)
#define	CAN4_IF1DTA14	(IO_CAN4.IO_IF1DTA14)
#define	CAN4_IF1DTA24	(IO_CAN4.IO_IF1DTA24)
#define	CAN4_IF1DTB14	(IO_CAN4.IO_IF1DTB14)
#define	CAN4_IF1DTB24	(IO_CAN4.IO_IF1DTB24)
#define	CAN4_RESV3_0  	(IO_CAN4.RESV3[CONSTANT_0])
#define	CAN4_RESV3_1  	(IO_CAN4.RESV3[CONSTANT_1])
#define	CAN4_RESV3_2  	(IO_CAN4.RESV3[CONSTANT_2])
#define	CAN4_RESV3_3  	(IO_CAN4.RESV3[CONSTANT_3])
#define	CAN4_RESV3_4  	(IO_CAN4.RESV3[CONSTANT_4])
#define	CAN4_RESV3_5  	(IO_CAN4.RESV3[CONSTANT_5])
#define	CAN4_RESV3_6  	(IO_CAN4.RESV3[CONSTANT_6])
#define	CAN4_RESV3_7  	(IO_CAN4.RESV3[CONSTANT_7])
#define	CAN4_RESV3_8  	(IO_CAN4.RESV3[CONSTANT_8])
#define	CAN4_RESV3_9  	(IO_CAN4.RESV3[CONSTANT_9])
#define	CAN4_RESV3_10  	(IO_CAN4.RESV3[CONSTANT_10])
#define	CAN4_RESV3_11  	(IO_CAN4.RESV3[CONSTANT_11])
#define	CAN4_RESV3_12  	(IO_CAN4.RESV3[CONSTANT_12])
#define	CAN4_RESV3_13  	(IO_CAN4.RESV3[CONSTANT_13])
#define	CAN4_RESV3_14  	(IO_CAN4.RESV3[CONSTANT_14])
#define	CAN4_RESV3_15  	(IO_CAN4.RESV3[CONSTANT_15])
#define	CAN4_RESV3_16  	(IO_CAN4.RESV3[CONSTANT_16])
#define	CAN4_RESV3_17  	(IO_CAN4.RESV3[CONSTANT_17])
#define	CAN4_RESV3_18  	(IO_CAN4.RESV3[CONSTANT_18])
#define	CAN4_RESV3_19  	(IO_CAN4.RESV3[CONSTANT_19])
#define	CAN4_RESV3_20  	(IO_CAN4.RESV3[CONSTANT_20])
#define	CAN4_RESV3_21  	(IO_CAN4.RESV3[CONSTANT_21])
#define	CAN4_RESV3_22  	(IO_CAN4.RESV3[CONSTANT_22])
#define	CAN4_RESV3_23  	(IO_CAN4.RESV3[CONSTANT_23])
#define	CAN4_IF2CREQ4			(IO_CAN4.IO_IF2CREQ4.hword)
#define	CAN4_IF2CREQ4_BUSY    	(IO_CAN4.IO_IF2CREQ4.bit.BUSY)
#define	CAN4_IF2CREQ4_MN    	(IO_CAN4.IO_IF2CREQ4.bit.MN)
#define	CAN4_IF2CREQ4_MN0    	(IO_CAN4.IO_IF2CREQ4.bitc.MN0)
#define	CAN4_IF2CREQ4_MN1    	(IO_CAN4.IO_IF2CREQ4.bitc.MN1)
#define	CAN4_IF2CREQ4_MN2    	(IO_CAN4.IO_IF2CREQ4.bitc.MN2)
#define	CAN4_IF2CREQ4_MN3    	(IO_CAN4.IO_IF2CREQ4.bitc.MN3)
#define	CAN4_IF2CREQ4_MN4    	(IO_CAN4.IO_IF2CREQ4.bitc.MN4)
#define	CAN4_IF2CREQ4_MN5    	(IO_CAN4.IO_IF2CREQ4.bitc.MN5)
#define	CAN4_IF2CREQ4_MN6    	(IO_CAN4.IO_IF2CREQ4.bitc.MN6)
#define	CAN4_IF2CREQ4_MN7    	(IO_CAN4.IO_IF2CREQ4.bitc.MN7)
#define	CAN4_IF2CMSK4			(IO_CAN4.IO_IF2CMSK4.hword)
#define	CAN4_IF2CMSK4_WR_RD    	(IO_CAN4.IO_IF2CMSK4.bit.WR_RD)
#define	CAN4_IF2CMSK4_Mask    	(IO_CAN4.IO_IF2CMSK4.bit.Mask)
#define	CAN4_IF2CMSK4_Arb    	(IO_CAN4.IO_IF2CMSK4.bit.Arb)
#define	CAN4_IF2CMSK4_Control    	(IO_CAN4.IO_IF2CMSK4.bit.Control)
#define	CAN4_IF2CMSK4_CIP    	(IO_CAN4.IO_IF2CMSK4.bit.CIP)
#define	CAN4_IF2CMSK4_TxReq    	(IO_CAN4.IO_IF2CMSK4.bit.TxReq)
#define	CAN4_IF2CMSK4_DataA    	(IO_CAN4.IO_IF2CMSK4.bit.DataA)
#define	CAN4_IF2CMSK4_DataB    	(IO_CAN4.IO_IF2CMSK4.bit.DataB)
#define	CAN4_IF2MSK4			(IO_CAN4.IO_IF2MSK4.word)
#define	CAN4_IF2MSK4_MXtd    	(IO_CAN4.IO_IF2MSK4.bit.MXtd)
#define	CAN4_IF2MSK4_MDir    	(IO_CAN4.IO_IF2MSK4.bit.MDir)
#define	CAN4_IF2MSK4_Msk    	(IO_CAN4.IO_IF2MSK4.bit.Msk)
#define	CAN4_IF2MSK4_Msk0    	(IO_CAN4.IO_IF2MSK4.bitc.Msk0)
#define	CAN4_IF2MSK4_Msk1    	(IO_CAN4.IO_IF2MSK4.bitc.Msk1)
#define	CAN4_IF2MSK4_Msk2    	(IO_CAN4.IO_IF2MSK4.bitc.Msk2)
#define	CAN4_IF2MSK4_Msk3    	(IO_CAN4.IO_IF2MSK4.bitc.Msk3)
#define	CAN4_IF2MSK4_Msk4    	(IO_CAN4.IO_IF2MSK4.bitc.Msk4)
#define	CAN4_IF2MSK4_Msk5    	(IO_CAN4.IO_IF2MSK4.bitc.Msk5)
#define	CAN4_IF2MSK4_Msk6    	(IO_CAN4.IO_IF2MSK4.bitc.Msk6)
#define	CAN4_IF2MSK4_Msk7    	(IO_CAN4.IO_IF2MSK4.bitc.Msk7)
#define	CAN4_IF2MSK4_Msk8    	(IO_CAN4.IO_IF2MSK4.bitc.Msk8)
#define	CAN4_IF2MSK4_Msk9    	(IO_CAN4.IO_IF2MSK4.bitc.Msk9)
#define	CAN4_IF2MSK4_Msk10    	(IO_CAN4.IO_IF2MSK4.bitc.Msk10)
#define	CAN4_IF2MSK4_Msk11    	(IO_CAN4.IO_IF2MSK4.bitc.Msk11)
#define	CAN4_IF2MSK4_Msk12    	(IO_CAN4.IO_IF2MSK4.bitc.Msk12)
#define	CAN4_IF2MSK4_Msk13    	(IO_CAN4.IO_IF2MSK4.bitc.Msk13)
#define	CAN4_IF2MSK4_Msk14    	(IO_CAN4.IO_IF2MSK4.bitc.Msk14)
#define	CAN4_IF2MSK4_Msk15    	(IO_CAN4.IO_IF2MSK4.bitc.Msk15)
#define	CAN4_IF2MSK4_Msk16    	(IO_CAN4.IO_IF2MSK4.bitc.Msk16)
#define	CAN4_IF2MSK4_Msk17    	(IO_CAN4.IO_IF2MSK4.bitc.Msk17)
#define	CAN4_IF2MSK4_Msk18    	(IO_CAN4.IO_IF2MSK4.bitc.Msk18)
#define	CAN4_IF2MSK4_Msk19    	(IO_CAN4.IO_IF2MSK4.bitc.Msk19)
#define	CAN4_IF2MSK4_Msk20    	(IO_CAN4.IO_IF2MSK4.bitc.Msk20)
#define	CAN4_IF2MSK4_Msk21    	(IO_CAN4.IO_IF2MSK4.bitc.Msk21)
#define	CAN4_IF2MSK4_Msk22    	(IO_CAN4.IO_IF2MSK4.bitc.Msk22)
#define	CAN4_IF2MSK4_Msk23    	(IO_CAN4.IO_IF2MSK4.bitc.Msk23)
#define	CAN4_IF2MSK4_Msk24    	(IO_CAN4.IO_IF2MSK4.bitc.Msk24)
#define	CAN4_IF2MSK4_Msk25    	(IO_CAN4.IO_IF2MSK4.bitc.Msk25)
#define	CAN4_IF2MSK4_Msk26    	(IO_CAN4.IO_IF2MSK4.bitc.Msk26)
#define	CAN4_IF2MSK4_Msk27    	(IO_CAN4.IO_IF2MSK4.bitc.Msk27)
#define	CAN4_IF2MSK4_Msk28    	(IO_CAN4.IO_IF2MSK4.bitc.Msk28)
#define	CAN4_IF2ARB4			(IO_CAN4.IO_IF2ARB4.word)
#define	CAN4_IF2ARB4_MsgVal    	(IO_CAN4.IO_IF2ARB4.bit.MsgVal)
#define	CAN4_IF2ARB4_Xtd    	(IO_CAN4.IO_IF2ARB4.bit.Xtd)
#define	CAN4_IF2ARB4_Dir    	(IO_CAN4.IO_IF2ARB4.bit.Dir)
#define	CAN4_IF2ARB4_ID    	(IO_CAN4.IO_IF2ARB4.bit.ID)
#define	CAN4_IF2ARB4_ID0    	(IO_CAN4.IO_IF2ARB4.bitc.ID0)
#define	CAN4_IF2ARB4_ID1    	(IO_CAN4.IO_IF2ARB4.bitc.ID1)
#define	CAN4_IF2ARB4_ID2    	(IO_CAN4.IO_IF2ARB4.bitc.ID2)
#define	CAN4_IF2ARB4_ID3    	(IO_CAN4.IO_IF2ARB4.bitc.ID3)
#define	CAN4_IF2ARB4_ID4    	(IO_CAN4.IO_IF2ARB4.bitc.ID4)
#define	CAN4_IF2ARB4_ID5    	(IO_CAN4.IO_IF2ARB4.bitc.ID5)
#define	CAN4_IF2ARB4_ID6    	(IO_CAN4.IO_IF2ARB4.bitc.ID6)
#define	CAN4_IF2ARB4_ID7    	(IO_CAN4.IO_IF2ARB4.bitc.ID7)
#define	CAN4_IF2ARB4_ID8    	(IO_CAN4.IO_IF2ARB4.bitc.ID8)
#define	CAN4_IF2ARB4_ID9    	(IO_CAN4.IO_IF2ARB4.bitc.ID9)
#define	CAN4_IF2ARB4_ID10    	(IO_CAN4.IO_IF2ARB4.bitc.ID10)
#define	CAN4_IF2ARB4_ID11    	(IO_CAN4.IO_IF2ARB4.bitc.ID11)
#define	CAN4_IF2ARB4_ID12    	(IO_CAN4.IO_IF2ARB4.bitc.ID12)
#define	CAN4_IF2ARB4_ID13    	(IO_CAN4.IO_IF2ARB4.bitc.ID13)
#define	CAN4_IF2ARB4_ID14    	(IO_CAN4.IO_IF2ARB4.bitc.ID14)
#define	CAN4_IF2ARB4_ID15    	(IO_CAN4.IO_IF2ARB4.bitc.ID15)
#define	CAN4_IF2ARB4_ID16    	(IO_CAN4.IO_IF2ARB4.bitc.ID16)
#define	CAN4_IF2ARB4_ID17    	(IO_CAN4.IO_IF2ARB4.bitc.ID17)
#define	CAN4_IF2ARB4_ID18    	(IO_CAN4.IO_IF2ARB4.bitc.ID18)
#define	CAN4_IF2ARB4_ID19    	(IO_CAN4.IO_IF2ARB4.bitc.ID19)
#define	CAN4_IF2ARB4_ID20    	(IO_CAN4.IO_IF2ARB4.bitc.ID20)
#define	CAN4_IF2ARB4_ID21    	(IO_CAN4.IO_IF2ARB4.bitc.ID21)
#define	CAN4_IF2ARB4_ID22    	(IO_CAN4.IO_IF2ARB4.bitc.ID22)
#define	CAN4_IF2ARB4_ID23    	(IO_CAN4.IO_IF2ARB4.bitc.ID23)
#define	CAN4_IF2ARB4_ID24    	(IO_CAN4.IO_IF2ARB4.bitc.ID24)
#define	CAN4_IF2ARB4_ID25    	(IO_CAN4.IO_IF2ARB4.bitc.ID25)
#define	CAN4_IF2ARB4_ID26    	(IO_CAN4.IO_IF2ARB4.bitc.ID26)
#define	CAN4_IF2ARB4_ID27    	(IO_CAN4.IO_IF2ARB4.bitc.ID27)
#define	CAN4_IF2ARB4_ID28    	(IO_CAN4.IO_IF2ARB4.bitc.ID28)
#define	CAN4_IF2MCTR4			(IO_CAN4.IO_IF2MCTR4.hword)
#define	CAN4_IF2MCTR4_NewDat    	(IO_CAN4.IO_IF2MCTR4.bit.NewDat)
#define	CAN4_IF2MCTR4_MsgLst    	(IO_CAN4.IO_IF2MCTR4.bit.MsgLst)
#define	CAN4_IF2MCTR4_IntPnd    	(IO_CAN4.IO_IF2MCTR4.bit.IntPnd)
#define	CAN4_IF2MCTR4_UMask    	(IO_CAN4.IO_IF2MCTR4.bit.UMask)
#define	CAN4_IF2MCTR4_TxIE    	(IO_CAN4.IO_IF2MCTR4.bit.TxIE)
#define	CAN4_IF2MCTR4_RxIE    	(IO_CAN4.IO_IF2MCTR4.bit.RxIE)
#define	CAN4_IF2MCTR4_RmtEn    	(IO_CAN4.IO_IF2MCTR4.bit.RmtEn)
#define	CAN4_IF2MCTR4_TxRqst    	(IO_CAN4.IO_IF2MCTR4.bit.TxRqst)
#define	CAN4_IF2MCTR4_EoB    	(IO_CAN4.IO_IF2MCTR4.bit.EoB)
#define	CAN4_IF2MCTR4_DLC    	(IO_CAN4.IO_IF2MCTR4.bit.DLC)
#define	CAN4_IF2MCTR4_DLC0    	(IO_CAN4.IO_IF2MCTR4.bitc.DLC0)
#define	CAN4_IF2MCTR4_DLC1    	(IO_CAN4.IO_IF2MCTR4.bitc.DLC1)
#define	CAN4_IF2MCTR4_DLC2    	(IO_CAN4.IO_IF2MCTR4.bitc.DLC2)
#define	CAN4_IF2MCTR4_DLC3    	(IO_CAN4.IO_IF2MCTR4.bitc.DLC3)
#define	CAN4_IF2DTA14	(IO_CAN4.IO_IF2DTA14)
#define	CAN4_IF2DTA24	(IO_CAN4.IO_IF2DTA24)
#define	CAN4_IF2DTB14	(IO_CAN4.IO_IF2DTB14)
#define	CAN4_IF2DTB24	(IO_CAN4.IO_IF2DTB24)
#define	CAN4_RESV5_0  	(IO_CAN4.RESV5[CONSTANT_0])
#define	CAN4_RESV5_1  	(IO_CAN4.RESV5[CONSTANT_1])
#define	CAN4_RESV5_2  	(IO_CAN4.RESV5[CONSTANT_2])
#define	CAN4_RESV5_3  	(IO_CAN4.RESV5[CONSTANT_3])
#define	CAN4_RESV5_4  	(IO_CAN4.RESV5[CONSTANT_4])
#define	CAN4_RESV5_5  	(IO_CAN4.RESV5[CONSTANT_5])
#define	CAN4_RESV5_6  	(IO_CAN4.RESV5[CONSTANT_6])
#define	CAN4_RESV5_7  	(IO_CAN4.RESV5[CONSTANT_7])
#define	CAN4_RESV5_8  	(IO_CAN4.RESV5[CONSTANT_8])
#define	CAN4_RESV5_9  	(IO_CAN4.RESV5[CONSTANT_9])
#define	CAN4_RESV5_10  	(IO_CAN4.RESV5[CONSTANT_10])
#define	CAN4_RESV5_11  	(IO_CAN4.RESV5[CONSTANT_11])
#define	CAN4_RESV5_12  	(IO_CAN4.RESV5[CONSTANT_12])
#define	CAN4_RESV5_13  	(IO_CAN4.RESV5[CONSTANT_13])
#define	CAN4_RESV5_14  	(IO_CAN4.RESV5[CONSTANT_14])
#define	CAN4_RESV5_15  	(IO_CAN4.RESV5[CONSTANT_15])
#define	CAN4_RESV5_16  	(IO_CAN4.RESV5[CONSTANT_16])
#define	CAN4_RESV5_17  	(IO_CAN4.RESV5[CONSTANT_17])
#define	CAN4_RESV5_18  	(IO_CAN4.RESV5[CONSTANT_18])
#define	CAN4_RESV5_19  	(IO_CAN4.RESV5[CONSTANT_19])
#define	CAN4_RESV5_20  	(IO_CAN4.RESV5[CONSTANT_20])
#define	CAN4_RESV5_21  	(IO_CAN4.RESV5[CONSTANT_21])
#define	CAN4_RESV5_22  	(IO_CAN4.RESV5[CONSTANT_22])
#define	CAN4_RESV5_23  	(IO_CAN4.RESV5[CONSTANT_23])
#define	CAN4_RESV5_24  	(IO_CAN4.RESV5[CONSTANT_24])
#define	CAN4_RESV5_25  	(IO_CAN4.RESV5[CONSTANT_25])
#define	CAN4_RESV5_26  	(IO_CAN4.RESV5[CONSTANT_26])
#define	CAN4_RESV5_27  	(IO_CAN4.RESV5[CONSTANT_27])
#define	CAN4_RESV5_28  	(IO_CAN4.RESV5[CONSTANT_28])
#define	CAN4_RESV5_29  	(IO_CAN4.RESV5[CONSTANT_29])
#define	CAN4_RESV5_30  	(IO_CAN4.RESV5[CONSTANT_30])
#define	CAN4_RESV5_31  	(IO_CAN4.RESV5[CONSTANT_31])
#define	CAN4_RESV5_32  	(IO_CAN4.RESV5[CONSTANT_32])
#define	CAN4_RESV5_33  	(IO_CAN4.RESV5[CONSTANT_33])
#define	CAN4_RESV5_34  	(IO_CAN4.RESV5[CONSTANT_34])
#define	CAN4_RESV5_35  	(IO_CAN4.RESV5[CONSTANT_35])
#define	CAN4_RESV5_36  	(IO_CAN4.RESV5[CONSTANT_36])
#define	CAN4_RESV5_37  	(IO_CAN4.RESV5[CONSTANT_37])
#define	CAN4_RESV5_38  	(IO_CAN4.RESV5[CONSTANT_38])
#define	CAN4_RESV5_39  	(IO_CAN4.RESV5[CONSTANT_39])
#define	CAN4_TREQR4_12	(IO_CAN4.IO_TREQR4_12)
#define	CAN4_NEWDT4_12	(IO_CAN4.IO_NEWDT4_12)
#define	CAN4_INTPND4_12	(IO_CAN4.IO_INTPND4_12)
#define	CAN4_MSGVAL4_12	(IO_CAN4.IO_MSGVAL4_12)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_FxR_CIF,attr=IO,locate=0xD000
#endif

__IO_EXTENDED	struct {
	const __WORD	IO_CIF0;
	union {
		__WORD	word;
		struct {
			__BYTE	DREQO:1;
			__BYTE	DLVLO:1;
			__BYTE	DMODO:1;
			__BYTE	DENBO:1;
			__BYTE	DREQI:1;
			__BYTE	DLVLI:1;
			__BYTE	DMODI:1;
			__BYTE	DENBI:1;
			__BYTE	RESV48:1;
			__BYTE	RESV49:1;
			__BYTE	RESV410:1;
			__BYTE	MASK:5;
			__BYTE	RTEST:1;
			__BYTE	RESV413:1;
			__BYTE	RESV414:1;
			__BYTE	SWAP:1;
			__BYTE	TREQ1:1;
			__BYTE	TENB1:1;
			__BYTE	TREQ0:1;
			__BYTE	TENB0:1;
			__BYTE	RESV420:1;
			__BYTE	RESV421:1;
			__BYTE	RESV422:1;
			__BYTE	RESV423:1;
			__BYTE	RESV424:1;
			__BYTE	RESV425:1;
			__BYTE	RESV426:1;
			__BYTE	RESV427:1;
		} bit;
		struct {
			__BYTE	DREQO:1;
			__BYTE	DLVLO:1;
			__BYTE	DMODO:1;
			__BYTE	DENBO:1;
			__BYTE	DREQI:1;
			__BYTE	DLVLI:1;
			__BYTE	DMODI:1;
			__BYTE	DENBI:1;
			__BYTE	RESV48:1;
			__BYTE	RESV49:1;
			__BYTE	RESV410:1;
			__BYTE	MASK4:1;
			__BYTE	MASK3:1;
			__BYTE	MASK2:1;
			__BYTE	MASK1:1;
			__BYTE	MASK0:1;
			__BYTE	RTEST:1;
			__BYTE	RESV417:1;
			__BYTE	RESV418:1;
			__BYTE	SWAP:1;
			__BYTE	TREQ1:1;
			__BYTE	TENB1:1;
			__BYTE	TREQ0:1;
			__BYTE	TENB0:1;
			__BYTE	RESV424:1;
			__BYTE	RESV425:1;
			__BYTE	RESV426:1;
			__BYTE	RESV427:1;
			__BYTE	RESV428:1;
			__BYTE	RESV429:1;
			__BYTE	RESV430:1;
			__BYTE	RESV431:1;
		} bitc;
	} IO_CIF1;
} IO_FxR_CIF;

#define	FxR_CIF_CIF0	(IO_FxR_CIF.IO_CIF0)
#define	FxR_CIF_CIF1			(IO_FxR_CIF.IO_CIF1.word)
#define	FxR_CIF_CIF1_DREQO    	(IO_FxR_CIF.IO_CIF1.bit.DREQO)
#define	FxR_CIF_CIF1_DLVLO    	(IO_FxR_CIF.IO_CIF1.bit.DLVLO)
#define	FxR_CIF_CIF1_DMODO    	(IO_FxR_CIF.IO_CIF1.bit.DMODO)
#define	FxR_CIF_CIF1_DENBO    	(IO_FxR_CIF.IO_CIF1.bit.DENBO)
#define	FxR_CIF_CIF1_DREQI    	(IO_FxR_CIF.IO_CIF1.bit.DREQI)
#define	FxR_CIF_CIF1_DLVLI    	(IO_FxR_CIF.IO_CIF1.bit.DLVLI)
#define	FxR_CIF_CIF1_DMODI    	(IO_FxR_CIF.IO_CIF1.bit.DMODI)
#define	FxR_CIF_CIF1_DENBI    	(IO_FxR_CIF.IO_CIF1.bit.DENBI)
#define	FxR_CIF_CIF1_MASK    	(IO_FxR_CIF.IO_CIF1.bit.MASK)
#define	FxR_CIF_CIF1_MASK0    	(IO_FxR_CIF.IO_CIF1.bitc.MASK0)
#define	FxR_CIF_CIF1_MASK1    	(IO_FxR_CIF.IO_CIF1.bitc.MASK1)
#define	FxR_CIF_CIF1_MASK2    	(IO_FxR_CIF.IO_CIF1.bitc.MASK2)
#define	FxR_CIF_CIF1_MASK3    	(IO_FxR_CIF.IO_CIF1.bitc.MASK3)
#define	FxR_CIF_CIF1_MASK4    	(IO_FxR_CIF.IO_CIF1.bitc.MASK4)
#define	FxR_CIF_CIF1_RTEST    	(IO_FxR_CIF.IO_CIF1.bit.RTEST)
#define	FxR_CIF_CIF1_SWAP    	(IO_FxR_CIF.IO_CIF1.bit.SWAP)
#define	FxR_CIF_CIF1_TREQ1    	(IO_FxR_CIF.IO_CIF1.bit.TREQ1)
#define	FxR_CIF_CIF1_TENB1    	(IO_FxR_CIF.IO_CIF1.bit.TENB1)
#define	FxR_CIF_CIF1_TREQ0    	(IO_FxR_CIF.IO_CIF1.bit.TREQ0)
#define	FxR_CIF_CIF1_TENB0    	(IO_FxR_CIF.IO_CIF1.bit.TENB0)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_FxR_GIF1,attr=IO,locate=0xD010
#endif

__IO_EXTENDED	struct {
	union {
		__WORD	word;
		struct {
			__BYTE	CERB:4;
			__BYTE	CERA:4;
			__BYTE	RESV02:1;
			__BYTE	RESV03:1;
			__BYTE	TXENB:1;
			__BYTE	TXENA:1;
			__BYTE	TXB:1;
			__BYTE	TXA:1;
			__BYTE	RXB:1;
			__BYTE	RXA:1;
			__BYTE	RESV010:1;
			__BYTE	RESV011:1;
			__BYTE	RESV012:1;
			__BYTE	RESV013:1;
			__BYTE	RESV014:1;
			__BYTE	RESV015:1;
			__BYTE	AOB:1;
			__BYTE	AOA:1;
			__BYTE	RESV018:1;
			__BYTE	RESV019:1;
			__BYTE	TMC:2;
			__BYTE	RESV021:1;
			__BYTE	RESV022:1;
			__BYTE	ELBE:1;
			__BYTE	WRTEN:1;
		} bit;
		struct {
			__BYTE	CERB3:1;
			__BYTE	CERB2:1;
			__BYTE	CERB1:1;
			__BYTE	CERB0:1;
			__BYTE	CERA3:1;
			__BYTE	CERA2:1;
			__BYTE	CERA1:1;
			__BYTE	CERA0:1;
			__BYTE	RESV08:1;
			__BYTE	RESV09:1;
			__BYTE	TXENB:1;
			__BYTE	TXENA:1;
			__BYTE	TXB:1;
			__BYTE	TXA:1;
			__BYTE	RXB:1;
			__BYTE	RXA:1;
			__BYTE	RESV016:1;
			__BYTE	RESV017:1;
			__BYTE	RESV018:1;
			__BYTE	RESV019:1;
			__BYTE	RESV020:1;
			__BYTE	RESV021:1;
			__BYTE	AOB:1;
			__BYTE	AOA:1;
			__BYTE	RESV024:1;
			__BYTE	RESV025:1;
			__BYTE	TMC1:1;
			__BYTE	TMC0:1;
			__BYTE	RESV028:1;
			__BYTE	RESV029:1;
			__BYTE	ELBE:1;
			__BYTE	WRTEN:1;
		} bitc;
	} IO_TEST1;
	union {
		__WORD	word;
		struct {
			__BYTE	RESV40:1;
			__BYTE	RESV41:1;
			__BYTE	RESV42:1;
			__BYTE	RESV43:1;
			__BYTE	RESV44:1;
			__BYTE	RESV45:1;
			__BYTE	RESV46:1;
			__BYTE	RESV47:1;
			__BYTE	RESV48:1;
			__BYTE	RESV49:1;
			__BYTE	RESV410:1;
			__BYTE	RESV411:1;
			__BYTE	RESV412:1;
			__BYTE	RESV413:1;
			__BYTE	RESV414:1;
			__BYTE	RESV415:1;
			__BYTE	RDPB:1;
			__BYTE	WRPB:1;
			__BYTE	RESV418:1;
			__BYTE	RESV419:1;
			__BYTE	RESV420:1;
			__BYTE	RESV421:1;
			__BYTE	RESV422:1;
			__BYTE	RESV423:1;
			__BYTE	RESV424:1;
			__BYTE	SSEL:3;
			__BYTE	RESV426:1;
			__BYTE	RS:3;
		} bit;
		struct {
			__BYTE	RESV40:1;
			__BYTE	RESV41:1;
			__BYTE	RESV42:1;
			__BYTE	RESV43:1;
			__BYTE	RESV44:1;
			__BYTE	RESV45:1;
			__BYTE	RESV46:1;
			__BYTE	RESV47:1;
			__BYTE	RESV48:1;
			__BYTE	RESV49:1;
			__BYTE	RESV410:1;
			__BYTE	RESV411:1;
			__BYTE	RESV412:1;
			__BYTE	RESV413:1;
			__BYTE	RESV414:1;
			__BYTE	RESV415:1;
			__BYTE	RDPB:1;
			__BYTE	WRPB:1;
			__BYTE	RESV418:1;
			__BYTE	RESV419:1;
			__BYTE	RESV420:1;
			__BYTE	RESV421:1;
			__BYTE	RESV422:1;
			__BYTE	RESV423:1;
			__BYTE	RESV424:1;
			__BYTE	SSEL2:1;
			__BYTE	SSEL1:1;
			__BYTE	SSEL0:1;
			__BYTE	RESV428:1;
			__BYTE	RS2:1;
			__BYTE	RS1:1;
			__BYTE	RS0:1;
		} bitc;
	} IO_TEST2;
	__WORD	IO_RESV1;
	union {
		__WORD	word;
		struct {
			__BYTE	RESV120:1;
			__BYTE	RESV121:1;
			__BYTE	RESV122:1;
			__BYTE	RESV123:1;
			__BYTE	RESV124:1;
			__BYTE	RESV125:1;
			__BYTE	RESV126:1;
			__BYTE	RESV127:1;
			__BYTE	RESV128:1;
			__BYTE	RESV129:1;
			__BYTE	RESV1210:1;
			__BYTE	RESV1211:1;
			__BYTE	RESV1212:1;
			__BYTE	RESV1213:1;
			__BYTE	RESV1214:1;
			__BYTE	RESV1215:1;
			__BYTE	TMK:8;
			__BYTE	CLK:8;
		} bit;
		struct {
			__BYTE	RESV120:1;
			__BYTE	RESV121:1;
			__BYTE	RESV122:1;
			__BYTE	RESV123:1;
			__BYTE	RESV124:1;
			__BYTE	RESV125:1;
			__BYTE	RESV126:1;
			__BYTE	RESV127:1;
			__BYTE	RESV128:1;
			__BYTE	RESV129:1;
			__BYTE	RESV1210:1;
			__BYTE	RESV1211:1;
			__BYTE	RESV1212:1;
			__BYTE	RESV1213:1;
			__BYTE	RESV1214:1;
			__BYTE	RESV1215:1;
			__BYTE	TMK7:1;
			__BYTE	TMK6:1;
			__BYTE	TMK5:1;
			__BYTE	TMK4:1;
			__BYTE	TMK3:1;
			__BYTE	TMK2:1;
			__BYTE	TMK1:1;
			__BYTE	TMK0:1;
			__BYTE	CLK7:1;
			__BYTE	CLK6:1;
			__BYTE	CLK5:1;
			__BYTE	CLK4:1;
			__BYTE	CLK3:1;
			__BYTE	CLK2:1;
			__BYTE	CLK1:1;
			__BYTE	CLK0:1;
		} bitc;
	} IO_LCK;
} IO_FxR_GIF1;

#define	FxR_GIF1_TEST1			(IO_FxR_GIF1.IO_TEST1.word)
#define	FxR_GIF1_TEST1_CERB    	(IO_FxR_GIF1.IO_TEST1.bit.CERB)
#define	FxR_GIF1_TEST1_CERB0    	(IO_FxR_GIF1.IO_TEST1.bitc.CERB0)
#define	FxR_GIF1_TEST1_CERB1    	(IO_FxR_GIF1.IO_TEST1.bitc.CERB1)
#define	FxR_GIF1_TEST1_CERB2    	(IO_FxR_GIF1.IO_TEST1.bitc.CERB2)
#define	FxR_GIF1_TEST1_CERB3    	(IO_FxR_GIF1.IO_TEST1.bitc.CERB3)
#define	FxR_GIF1_TEST1_CERA    	(IO_FxR_GIF1.IO_TEST1.bit.CERA)
#define	FxR_GIF1_TEST1_CERA0    	(IO_FxR_GIF1.IO_TEST1.bitc.CERA0)
#define	FxR_GIF1_TEST1_CERA1    	(IO_FxR_GIF1.IO_TEST1.bitc.CERA1)
#define	FxR_GIF1_TEST1_CERA2    	(IO_FxR_GIF1.IO_TEST1.bitc.CERA2)
#define	FxR_GIF1_TEST1_CERA3    	(IO_FxR_GIF1.IO_TEST1.bitc.CERA3)
#define	FxR_GIF1_TEST1_TXENB    	(IO_FxR_GIF1.IO_TEST1.bit.TXENB)
#define	FxR_GIF1_TEST1_TXENA    	(IO_FxR_GIF1.IO_TEST1.bit.TXENA)
#define	FxR_GIF1_TEST1_TXB    	(IO_FxR_GIF1.IO_TEST1.bit.TXB)
#define	FxR_GIF1_TEST1_TXA    	(IO_FxR_GIF1.IO_TEST1.bit.TXA)
#define	FxR_GIF1_TEST1_RXB    	(IO_FxR_GIF1.IO_TEST1.bit.RXB)
#define	FxR_GIF1_TEST1_RXA    	(IO_FxR_GIF1.IO_TEST1.bit.RXA)
#define	FxR_GIF1_TEST1_AOB    	(IO_FxR_GIF1.IO_TEST1.bit.AOB)
#define	FxR_GIF1_TEST1_AOA    	(IO_FxR_GIF1.IO_TEST1.bit.AOA)
#define	FxR_GIF1_TEST1_TMC    	(IO_FxR_GIF1.IO_TEST1.bit.TMC)
#define	FxR_GIF1_TEST1_TMC0    	(IO_FxR_GIF1.IO_TEST1.bitc.TMC0)
#define	FxR_GIF1_TEST1_TMC1    	(IO_FxR_GIF1.IO_TEST1.bitc.TMC1)
#define	FxR_GIF1_TEST1_ELBE    	(IO_FxR_GIF1.IO_TEST1.bit.ELBE)
#define	FxR_GIF1_TEST1_WRTEN    	(IO_FxR_GIF1.IO_TEST1.bit.WRTEN)
#define	FxR_GIF1_TEST2			(IO_FxR_GIF1.IO_TEST2.word)
#define	FxR_GIF1_TEST2_RDPB    	(IO_FxR_GIF1.IO_TEST2.bit.RDPB)
#define	FxR_GIF1_TEST2_WRPB    	(IO_FxR_GIF1.IO_TEST2.bit.WRPB)
#define	FxR_GIF1_TEST2_SSEL    	(IO_FxR_GIF1.IO_TEST2.bit.SSEL)
#define	FxR_GIF1_TEST2_SSEL0    	(IO_FxR_GIF1.IO_TEST2.bitc.SSEL0)
#define	FxR_GIF1_TEST2_SSEL1    	(IO_FxR_GIF1.IO_TEST2.bitc.SSEL1)
#define	FxR_GIF1_TEST2_SSEL2    	(IO_FxR_GIF1.IO_TEST2.bitc.SSEL2)
#define	FxR_GIF1_TEST2_RS    	(IO_FxR_GIF1.IO_TEST2.bit.RS)
#define	FxR_GIF1_TEST2_RS0    	(IO_FxR_GIF1.IO_TEST2.bitc.RS0)
#define	FxR_GIF1_TEST2_RS1    	(IO_FxR_GIF1.IO_TEST2.bitc.RS1)
#define	FxR_GIF1_TEST2_RS2    	(IO_FxR_GIF1.IO_TEST2.bitc.RS2)
#define	FxR_GIF1_LCK			(IO_FxR_GIF1.IO_LCK.word)
#define	FxR_GIF1_LCK_TMK    	(IO_FxR_GIF1.IO_LCK.bit.TMK)
#define	FxR_GIF1_LCK_TMK0    	(IO_FxR_GIF1.IO_LCK.bitc.TMK0)
#define	FxR_GIF1_LCK_TMK1    	(IO_FxR_GIF1.IO_LCK.bitc.TMK1)
#define	FxR_GIF1_LCK_TMK2    	(IO_FxR_GIF1.IO_LCK.bitc.TMK2)
#define	FxR_GIF1_LCK_TMK3    	(IO_FxR_GIF1.IO_LCK.bitc.TMK3)
#define	FxR_GIF1_LCK_TMK4    	(IO_FxR_GIF1.IO_LCK.bitc.TMK4)
#define	FxR_GIF1_LCK_TMK5    	(IO_FxR_GIF1.IO_LCK.bitc.TMK5)
#define	FxR_GIF1_LCK_TMK6    	(IO_FxR_GIF1.IO_LCK.bitc.TMK6)
#define	FxR_GIF1_LCK_TMK7    	(IO_FxR_GIF1.IO_LCK.bitc.TMK7)
#define	FxR_GIF1_LCK_CLK    	(IO_FxR_GIF1.IO_LCK.bit.CLK)
#define	FxR_GIF1_LCK_CLK0    	(IO_FxR_GIF1.IO_LCK.bitc.CLK0)
#define	FxR_GIF1_LCK_CLK1    	(IO_FxR_GIF1.IO_LCK.bitc.CLK1)
#define	FxR_GIF1_LCK_CLK2    	(IO_FxR_GIF1.IO_LCK.bitc.CLK2)
#define	FxR_GIF1_LCK_CLK3    	(IO_FxR_GIF1.IO_LCK.bitc.CLK3)
#define	FxR_GIF1_LCK_CLK4    	(IO_FxR_GIF1.IO_LCK.bitc.CLK4)
#define	FxR_GIF1_LCK_CLK5    	(IO_FxR_GIF1.IO_LCK.bitc.CLK5)
#define	FxR_GIF1_LCK_CLK6    	(IO_FxR_GIF1.IO_LCK.bitc.CLK6)
#define	FxR_GIF1_LCK_CLK7    	(IO_FxR_GIF1.IO_LCK.bitc.CLK7)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_FxR_INT,attr=IO,locate=0xD020
#endif

__IO_EXTENDED	struct {
	union {
		__WORD	word;
		struct {
			__BYTE	RESV00:1;
			__BYTE	RESV01:1;
			__BYTE	RESV02:1;
			__BYTE	RESV03:1;
			__BYTE	RESV04:1;
			__BYTE	TABB:1;
			__BYTE	LTVB:1;
			__BYTE	EDB:1;
			__BYTE	RESV08:1;
			__BYTE	RESV09:1;
			__BYTE	RESV010:1;
			__BYTE	RESV011:1;
			__BYTE	RESV012:1;
			__BYTE	TABA:1;
			__BYTE	LTVA:1;
			__BYTE	EDA:1;
			__BYTE	RESV016:1;
			__BYTE	RESV017:1;
			__BYTE	RESV018:1;
			__BYTE	RESV019:1;
			__BYTE	MHF:1;
			__BYTE	IOBA:1;
			__BYTE	IIBA:1;
			__BYTE	EFA:1;
			__BYTE	RFO:1;
			__BYTE	PERR:1;
			__BYTE	CCL:1;
			__BYTE	CCF:1;
			__BYTE	SFO:1;
			__BYTE	SFBM:1;
			__BYTE	CNA:1;
			__BYTE	PEMC:1;
		} bit;
		struct {
			__BYTE	RESV00:1;
			__BYTE	RESV01:1;
			__BYTE	RESV02:1;
			__BYTE	RESV03:1;
			__BYTE	RESV04:1;
			__BYTE	TABB:1;
			__BYTE	LTVB:1;
			__BYTE	EDB:1;
			__BYTE	RESV08:1;
			__BYTE	RESV09:1;
			__BYTE	RESV010:1;
			__BYTE	RESV011:1;
			__BYTE	RESV012:1;
			__BYTE	TABA:1;
			__BYTE	LTVA:1;
			__BYTE	EDA:1;
			__BYTE	RESV016:1;
			__BYTE	RESV017:1;
			__BYTE	RESV018:1;
			__BYTE	RESV019:1;
			__BYTE	MHF:1;
			__BYTE	IOBA:1;
			__BYTE	IIBA:1;
			__BYTE	EFA:1;
			__BYTE	RFO:1;
			__BYTE	PERR:1;
			__BYTE	CCL:1;
			__BYTE	CCF:1;
			__BYTE	SFO:1;
			__BYTE	SFBM:1;
			__BYTE	CNA:1;
			__BYTE	PEMC:1;
		} bitc;
	} IO_EIR;
	union {
		__WORD	word;
		struct {
			__BYTE	RESV40:1;
			__BYTE	RESV41:1;
			__BYTE	RESV42:1;
			__BYTE	RESV43:1;
			__BYTE	RESV44:1;
			__BYTE	RESV45:1;
			__BYTE	MTSB:1;
			__BYTE	WUPB:1;
			__BYTE	RESV48:1;
			__BYTE	RESV49:1;
			__BYTE	RESV410:1;
			__BYTE	RESV411:1;
			__BYTE	RESV412:1;
			__BYTE	RESV413:1;
			__BYTE	MTSA:1;
			__BYTE	WUPA:1;
			__BYTE	SDS:1;
			__BYTE	MBSI:1;
			__BYTE	SUCS:1;
			__BYTE	SWE:1;
			__BYTE	TOBC:1;
			__BYTE	TIBC:1;
			__BYTE	TI:2;
			__BYTE	NMVC:1;
			__BYTE	RFCL:1;
			__BYTE	RFNE:1;
			__BYTE	RXI:1;
			__BYTE	TXI:1;
			__BYTE	CYCS:1;
			__BYTE	CAS:1;
			__BYTE	WST:1;
		} bit;
		struct {
			__BYTE	RESV40:1;
			__BYTE	RESV41:1;
			__BYTE	RESV42:1;
			__BYTE	RESV43:1;
			__BYTE	RESV44:1;
			__BYTE	RESV45:1;
			__BYTE	MTSB:1;
			__BYTE	WUPB:1;
			__BYTE	RESV48:1;
			__BYTE	RESV49:1;
			__BYTE	RESV410:1;
			__BYTE	RESV411:1;
			__BYTE	RESV412:1;
			__BYTE	RESV413:1;
			__BYTE	MTSA:1;
			__BYTE	WUPA:1;
			__BYTE	SDS:1;
			__BYTE	MBSI:1;
			__BYTE	SUCS:1;
			__BYTE	SWE:1;
			__BYTE	TOBC:1;
			__BYTE	TIBC:1;
			__BYTE	TI1:1;
			__BYTE	TI0:1;
			__BYTE	NMVC:1;
			__BYTE	RFCL:1;
			__BYTE	RFNE:1;
			__BYTE	RXI:1;
			__BYTE	TXI:1;
			__BYTE	CYCS:1;
			__BYTE	CAS:1;
			__BYTE	WST:1;
		} bitc;
	} IO_SIR;
	union {
		__WORD	word;
		struct {
			__BYTE	RESV80:1;
			__BYTE	RESV81:1;
			__BYTE	RESV82:1;
			__BYTE	RESV83:1;
			__BYTE	RESV84:1;
			__BYTE	TABBL:1;
			__BYTE	LTVBL:1;
			__BYTE	EDBL:1;
			__BYTE	RESV88:1;
			__BYTE	RESV89:1;
			__BYTE	RESV810:1;
			__BYTE	RESV811:1;
			__BYTE	RESV812:1;
			__BYTE	TABAL:1;
			__BYTE	LTVAL:1;
			__BYTE	EDAL:1;
			__BYTE	RESV816:1;
			__BYTE	RESV817:1;
			__BYTE	RESV818:1;
			__BYTE	RESV819:1;
			__BYTE	MHFL:1;
			__BYTE	IOBAL:1;
			__BYTE	IIBAL:1;
			__BYTE	EFAL:1;
			__BYTE	RFOL:1;
			__BYTE	PERRL:1;
			__BYTE	CCLL:1;
			__BYTE	CCFL:1;
			__BYTE	SFOL:1;
			__BYTE	SFBML:1;
			__BYTE	CNAL:1;
			__BYTE	PEMCL:1;
		} bit;
		struct {
			__BYTE	RESV80:1;
			__BYTE	RESV81:1;
			__BYTE	RESV82:1;
			__BYTE	RESV83:1;
			__BYTE	RESV84:1;
			__BYTE	TABBL:1;
			__BYTE	LTVBL:1;
			__BYTE	EDBL:1;
			__BYTE	RESV88:1;
			__BYTE	RESV89:1;
			__BYTE	RESV810:1;
			__BYTE	RESV811:1;
			__BYTE	RESV812:1;
			__BYTE	TABAL:1;
			__BYTE	LTVAL:1;
			__BYTE	EDAL:1;
			__BYTE	RESV816:1;
			__BYTE	RESV817:1;
			__BYTE	RESV818:1;
			__BYTE	RESV819:1;
			__BYTE	MHFL:1;
			__BYTE	IOBAL:1;
			__BYTE	IIBAL:1;
			__BYTE	EFAL:1;
			__BYTE	RFOL:1;
			__BYTE	PERRL:1;
			__BYTE	CCLL:1;
			__BYTE	CCFL:1;
			__BYTE	SFOL:1;
			__BYTE	SFBML:1;
			__BYTE	CNAL:1;
			__BYTE	PEMCL:1;
		} bitc;
	} IO_EILS;
	union {
		__WORD	word;
		struct {
			__BYTE	RESV120:1;
			__BYTE	RESV121:1;
			__BYTE	RESV122:1;
			__BYTE	RESV123:1;
			__BYTE	RESV124:1;
			__BYTE	RESV125:1;
			__BYTE	MTSBL:1;
			__BYTE	WUPBL:1;
			__BYTE	RESV128:1;
			__BYTE	RESV129:1;
			__BYTE	RESV1210:1;
			__BYTE	RESV1211:1;
			__BYTE	RESV1212:1;
			__BYTE	RESV1213:1;
			__BYTE	MTSAL:1;
			__BYTE	WUPAL:1;
			__BYTE	SDSL:1;
			__BYTE	MBSIL:1;
			__BYTE	SUCSL:1;
			__BYTE	SWEL:1;
			__BYTE	TOBCL:1;
			__BYTE	TIBCL:1;
			__BYTE	TIL:2;
			__BYTE	NMVCL:1;
			__BYTE	RFCLL:1;
			__BYTE	RFNEL:1;
			__BYTE	RXIL:1;
			__BYTE	TXIL:1;
			__BYTE	CYCSL:1;
			__BYTE	CASL:1;
			__BYTE	WSTL:1;
		} bit;
		struct {
			__BYTE	RESV120:1;
			__BYTE	RESV121:1;
			__BYTE	RESV122:1;
			__BYTE	RESV123:1;
			__BYTE	RESV124:1;
			__BYTE	RESV125:1;
			__BYTE	MTSBL:1;
			__BYTE	WUPBL:1;
			__BYTE	RESV128:1;
			__BYTE	RESV129:1;
			__BYTE	RESV1210:1;
			__BYTE	RESV1211:1;
			__BYTE	RESV1212:1;
			__BYTE	RESV1213:1;
			__BYTE	MTSAL:1;
			__BYTE	WUPAL:1;
			__BYTE	SDSL:1;
			__BYTE	MBSIL:1;
			__BYTE	SUCSL:1;
			__BYTE	SWEL:1;
			__BYTE	TOBCL:1;
			__BYTE	TIBCL:1;
			__BYTE	TIL1:1;
			__BYTE	TIL0:1;
			__BYTE	NMVCL:1;
			__BYTE	RFCLL:1;
			__BYTE	RFNEL:1;
			__BYTE	RXIL:1;
			__BYTE	TXIL:1;
			__BYTE	CYCSL:1;
			__BYTE	CASL:1;
			__BYTE	WSTL:1;
		} bitc;
	} IO_SILS;
	union {
		__WORD	word;
		struct {
			__BYTE	RESV160:1;
			__BYTE	RESV161:1;
			__BYTE	RESV162:1;
			__BYTE	RESV163:1;
			__BYTE	RESV164:1;
			__BYTE	TABBE:1;
			__BYTE	LTVBE:1;
			__BYTE	EDBE:1;
			__BYTE	RESV168:1;
			__BYTE	RESV169:1;
			__BYTE	RESV1610:1;
			__BYTE	RESV1611:1;
			__BYTE	RESV1612:1;
			__BYTE	TABAE:1;
			__BYTE	LTVAE:1;
			__BYTE	EDAE:1;
			__BYTE	RESV1616:1;
			__BYTE	RESV1617:1;
			__BYTE	RESV1618:1;
			__BYTE	RESV1619:1;
			__BYTE	MHFE:1;
			__BYTE	IOBAE:1;
			__BYTE	IIBAE:1;
			__BYTE	EFAE:1;
			__BYTE	RFOE:1;
			__BYTE	PERRE:1;
			__BYTE	CCLE:1;
			__BYTE	CCFE:1;
			__BYTE	SFOE:1;
			__BYTE	SFBME:1;
			__BYTE	CNAE:1;
			__BYTE	PEMCE:1;
		} bit;
		struct {
			__BYTE	RESV160:1;
			__BYTE	RESV161:1;
			__BYTE	RESV162:1;
			__BYTE	RESV163:1;
			__BYTE	RESV164:1;
			__BYTE	TABBE:1;
			__BYTE	LTVBE:1;
			__BYTE	EDBE:1;
			__BYTE	RESV168:1;
			__BYTE	RESV169:1;
			__BYTE	RESV1610:1;
			__BYTE	RESV1611:1;
			__BYTE	RESV1612:1;
			__BYTE	TABAE:1;
			__BYTE	LTVAE:1;
			__BYTE	EDAE:1;
			__BYTE	RESV1616:1;
			__BYTE	RESV1617:1;
			__BYTE	RESV1618:1;
			__BYTE	RESV1619:1;
			__BYTE	MHFE:1;
			__BYTE	IOBAE:1;
			__BYTE	IIBAE:1;
			__BYTE	EFAE:1;
			__BYTE	RFOE:1;
			__BYTE	PERRE:1;
			__BYTE	CCLE:1;
			__BYTE	CCFE:1;
			__BYTE	SFOE:1;
			__BYTE	SFBME:1;
			__BYTE	CNAE:1;
			__BYTE	PEMCE:1;
		} bitc;
	} IO_EIES;
	union {
		__WORD	word;
		struct {
			__BYTE	RESV200:1;
			__BYTE	RESV201:1;
			__BYTE	RESV202:1;
			__BYTE	RESV203:1;
			__BYTE	RESV204:1;
			__BYTE	TABBE:1;
			__BYTE	LTVBE:1;
			__BYTE	EDBE:1;
			__BYTE	RESV208:1;
			__BYTE	RESV209:1;
			__BYTE	RESV2010:1;
			__BYTE	RESV2011:1;
			__BYTE	RESV2012:1;
			__BYTE	TABAE:1;
			__BYTE	LTVAE:1;
			__BYTE	EDAE:1;
			__BYTE	RESV2016:1;
			__BYTE	RESV2017:1;
			__BYTE	RESV2018:1;
			__BYTE	RESV2019:1;
			__BYTE	MHFE:1;
			__BYTE	IOBAE:1;
			__BYTE	IIBAE:1;
			__BYTE	EFAE:1;
			__BYTE	RFOE:1;
			__BYTE	PERRE:1;
			__BYTE	CCLE:1;
			__BYTE	CCFE:1;
			__BYTE	SFOE:1;
			__BYTE	SFBME:1;
			__BYTE	CNAE:1;
			__BYTE	PEMCE:1;
		} bit;
		struct {
			__BYTE	RESV200:1;
			__BYTE	RESV201:1;
			__BYTE	RESV202:1;
			__BYTE	RESV203:1;
			__BYTE	RESV204:1;
			__BYTE	TABBE:1;
			__BYTE	LTVBE:1;
			__BYTE	EDBE:1;
			__BYTE	RESV208:1;
			__BYTE	RESV209:1;
			__BYTE	RESV2010:1;
			__BYTE	RESV2011:1;
			__BYTE	RESV2012:1;
			__BYTE	TABAE:1;
			__BYTE	LTVAE:1;
			__BYTE	EDAE:1;
			__BYTE	RESV2016:1;
			__BYTE	RESV2017:1;
			__BYTE	RESV2018:1;
			__BYTE	RESV2019:1;
			__BYTE	MHFE:1;
			__BYTE	IOBAE:1;
			__BYTE	IIBAE:1;
			__BYTE	EFAE:1;
			__BYTE	RFOE:1;
			__BYTE	PERRE:1;
			__BYTE	CCLE:1;
			__BYTE	CCFE:1;
			__BYTE	SFOE:1;
			__BYTE	SFBME:1;
			__BYTE	CNAE:1;
			__BYTE	PEMCE:1;
		} bitc;
	} IO_EIER;
	union {
		__WORD	word;
		struct {
			__BYTE	RESV240:1;
			__BYTE	RESV241:1;
			__BYTE	RESV242:1;
			__BYTE	RESV243:1;
			__BYTE	RESV244:1;
			__BYTE	RESV245:1;
			__BYTE	MTSBE:1;
			__BYTE	WUPBE:1;
			__BYTE	RESV248:1;
			__BYTE	RESV249:1;
			__BYTE	RESV2410:1;
			__BYTE	RESV2411:1;
			__BYTE	RESV2412:1;
			__BYTE	RESV2413:1;
			__BYTE	MTSAE:1;
			__BYTE	WUPAE:1;
			__BYTE	SDSE:1;
			__BYTE	MBSIE:1;
			__BYTE	SUCSE:1;
			__BYTE	SWEE:1;
			__BYTE	TOBCE:1;
			__BYTE	TIBCE:1;
			__BYTE	TIE:2;
			__BYTE	NMVCE:1;
			__BYTE	RFCLE:1;
			__BYTE	RFNEE:1;
			__BYTE	RXIE:1;
			__BYTE	TXIE:1;
			__BYTE	CYCSE:1;
			__BYTE	CASE:1;
			__BYTE	WSTE:1;
		} bit;
		struct {
			__BYTE	RESV240:1;
			__BYTE	RESV241:1;
			__BYTE	RESV242:1;
			__BYTE	RESV243:1;
			__BYTE	RESV244:1;
			__BYTE	RESV245:1;
			__BYTE	MTSBE:1;
			__BYTE	WUPBE:1;
			__BYTE	RESV248:1;
			__BYTE	RESV249:1;
			__BYTE	RESV2410:1;
			__BYTE	RESV2411:1;
			__BYTE	RESV2412:1;
			__BYTE	RESV2413:1;
			__BYTE	MTSAE:1;
			__BYTE	WUPAE:1;
			__BYTE	SDSE:1;
			__BYTE	MBSIE:1;
			__BYTE	SUCSE:1;
			__BYTE	SWEE:1;
			__BYTE	TOBCE:1;
			__BYTE	TIBCE:1;
			__BYTE	TIE1:1;
			__BYTE	TIE0:1;
			__BYTE	NMVCE:1;
			__BYTE	RFCLE:1;
			__BYTE	RFNEE:1;
			__BYTE	RXIE:1;
			__BYTE	TXIE:1;
			__BYTE	CYCSE:1;
			__BYTE	CASE:1;
			__BYTE	WSTE:1;
		} bitc;
	} IO_SIES;
	union {
		__WORD	word;
		struct {
			__BYTE	RESV280:1;
			__BYTE	RESV281:1;
			__BYTE	RESV282:1;
			__BYTE	RESV283:1;
			__BYTE	RESV284:1;
			__BYTE	RESV285:1;
			__BYTE	MTSBE:1;
			__BYTE	WUPBE:1;
			__BYTE	RESV288:1;
			__BYTE	RESV289:1;
			__BYTE	RESV2810:1;
			__BYTE	RESV2811:1;
			__BYTE	RESV2812:1;
			__BYTE	RESV2813:1;
			__BYTE	MTSAE:1;
			__BYTE	WUPAE:1;
			__BYTE	SDSE:1;
			__BYTE	MBSIE:1;
			__BYTE	SUCSE:1;
			__BYTE	SWEE:1;
			__BYTE	TOBCE:1;
			__BYTE	TIBCE:1;
			__BYTE	TIE:2;
			__BYTE	NMVCE:1;
			__BYTE	RFCLE:1;
			__BYTE	RFNEE:1;
			__BYTE	RXIE:1;
			__BYTE	TXIE:1;
			__BYTE	CYCSE:1;
			__BYTE	CASE:1;
			__BYTE	WSTE:1;
		} bit;
		struct {
			__BYTE	RESV280:1;
			__BYTE	RESV281:1;
			__BYTE	RESV282:1;
			__BYTE	RESV283:1;
			__BYTE	RESV284:1;
			__BYTE	RESV285:1;
			__BYTE	MTSBE:1;
			__BYTE	WUPBE:1;
			__BYTE	RESV288:1;
			__BYTE	RESV289:1;
			__BYTE	RESV2810:1;
			__BYTE	RESV2811:1;
			__BYTE	RESV2812:1;
			__BYTE	RESV2813:1;
			__BYTE	MTSAE:1;
			__BYTE	WUPAE:1;
			__BYTE	SDSE:1;
			__BYTE	MBSIE:1;
			__BYTE	SUCSE:1;
			__BYTE	SWEE:1;
			__BYTE	TOBCE:1;
			__BYTE	TIBCE:1;
			__BYTE	TIE1:1;
			__BYTE	TIE0:1;
			__BYTE	NMVCE:1;
			__BYTE	RFCLE:1;
			__BYTE	RFNEE:1;
			__BYTE	RXIE:1;
			__BYTE	TXIE:1;
			__BYTE	CYCSE:1;
			__BYTE	CASE:1;
			__BYTE	WSTE:1;
		} bitc;
	} IO_SIER;
	union {
		__WORD	word;
		struct {
			__BYTE	RESV320:1;
			__BYTE	RESV321:1;
			__BYTE	RESV322:1;
			__BYTE	RESV323:1;
			__BYTE	RESV324:1;
			__BYTE	RESV325:1;
			__BYTE	RESV326:1;
			__BYTE	RESV327:1;
			__BYTE	RESV328:1;
			__BYTE	RESV329:1;
			__BYTE	RESV3210:1;
			__BYTE	RESV3211:1;
			__BYTE	RESV3212:1;
			__BYTE	RESV3213:1;
			__BYTE	RESV3214:1;
			__BYTE	RESV3215:1;
			__BYTE	RESV3216:1;
			__BYTE	RESV3217:1;
			__BYTE	RESV3218:1;
			__BYTE	RESV3219:1;
			__BYTE	RESV3220:1;
			__BYTE	RESV3221:1;
			__BYTE	RESV3222:1;
			__BYTE	RESV3223:1;
			__BYTE	RESV3224:1;
			__BYTE	RESV3225:1;
			__BYTE	RESV3226:1;
			__BYTE	RESV3227:1;
			__BYTE	RESV3228:1;
			__BYTE	RESV3229:1;
			__BYTE	EINT:2;
		} bit;
		struct {
			__BYTE	RESV320:1;
			__BYTE	RESV321:1;
			__BYTE	RESV322:1;
			__BYTE	RESV323:1;
			__BYTE	RESV324:1;
			__BYTE	RESV325:1;
			__BYTE	RESV326:1;
			__BYTE	RESV327:1;
			__BYTE	RESV328:1;
			__BYTE	RESV329:1;
			__BYTE	RESV3210:1;
			__BYTE	RESV3211:1;
			__BYTE	RESV3212:1;
			__BYTE	RESV3213:1;
			__BYTE	RESV3214:1;
			__BYTE	RESV3215:1;
			__BYTE	RESV3216:1;
			__BYTE	RESV3217:1;
			__BYTE	RESV3218:1;
			__BYTE	RESV3219:1;
			__BYTE	RESV3220:1;
			__BYTE	RESV3221:1;
			__BYTE	RESV3222:1;
			__BYTE	RESV3223:1;
			__BYTE	RESV3224:1;
			__BYTE	RESV3225:1;
			__BYTE	RESV3226:1;
			__BYTE	RESV3227:1;
			__BYTE	RESV3228:1;
			__BYTE	RESV3229:1;
			__BYTE	EINT1:1;
			__BYTE	EINT0:1;
		} bitc;
	} IO_ILE;
	union {
		__WORD	word;
		struct {
			__BYTE	RESV360:1;
			__BYTE	RESV361:1;
			__WORD	T0MO:14;
			__BYTE	RESV363:1;
			__BYTE	T0CC:7;
			__BYTE	RESV365:1;
			__BYTE	RESV366:1;
			__BYTE	RESV367:1;
			__BYTE	RESV368:1;
			__BYTE	RESV369:1;
			__BYTE	RESV3610:1;
			__BYTE	T0MS:1;
			__BYTE	T0RC:1;
		} bit;
		struct {
			__BYTE	RESV360:1;
			__BYTE	RESV361:1;
			__BYTE	T0MO13:1;
			__BYTE	T0MO12:1;
			__BYTE	T0MO11:1;
			__BYTE	T0MO10:1;
			__BYTE	T0MO9:1;
			__BYTE	T0MO8:1;
			__BYTE	T0MO7:1;
			__BYTE	T0MO6:1;
			__BYTE	T0MO5:1;
			__BYTE	T0MO4:1;
			__BYTE	T0MO3:1;
			__BYTE	T0MO2:1;
			__BYTE	T0MO1:1;
			__BYTE	T0MO0:1;
			__BYTE	RESV3616:1;
			__BYTE	T0CC6:1;
			__BYTE	T0CC5:1;
			__BYTE	T0CC4:1;
			__BYTE	T0CC3:1;
			__BYTE	T0CC2:1;
			__BYTE	T0CC1:1;
			__BYTE	T0CC0:1;
			__BYTE	RESV3624:1;
			__BYTE	RESV3625:1;
			__BYTE	RESV3626:1;
			__BYTE	RESV3627:1;
			__BYTE	RESV3628:1;
			__BYTE	RESV3629:1;
			__BYTE	T0MS:1;
			__BYTE	T0RC:1;
		} bitc;
	} IO_T0C;
	union {
		__WORD	word;
		struct {
			__BYTE	RESV400:1;
			__BYTE	RESV401:1;
			__WORD	T1MC:14;
			__BYTE	RESV403:1;
			__BYTE	RESV404:1;
			__BYTE	RESV405:1;
			__BYTE	RESV406:1;
			__BYTE	RESV407:1;
			__BYTE	RESV408:1;
			__BYTE	RESV409:1;
			__BYTE	RESV4010:1;
			__BYTE	RESV4011:1;
			__BYTE	RESV4012:1;
			__BYTE	RESV4013:1;
			__BYTE	RESV4014:1;
			__BYTE	RESV4015:1;
			__BYTE	RESV4016:1;
			__BYTE	T1MS:1;
			__BYTE	T1RC:1;
		} bit;
		struct {
			__BYTE	RESV400:1;
			__BYTE	RESV401:1;
			__BYTE	T1MC13:1;
			__BYTE	T1MC12:1;
			__BYTE	T1MC11:1;
			__BYTE	T1MC10:1;
			__BYTE	T1MC9:1;
			__BYTE	T1MC8:1;
			__BYTE	T1MC7:1;
			__BYTE	T1MC6:1;
			__BYTE	T1MC5:1;
			__BYTE	T1MC4:1;
			__BYTE	T1MC3:1;
			__BYTE	T1MC2:1;
			__BYTE	T1MC1:1;
			__BYTE	T1MC0:1;
			__BYTE	RESV4016:1;
			__BYTE	RESV4017:1;
			__BYTE	RESV4018:1;
			__BYTE	RESV4019:1;
			__BYTE	RESV4020:1;
			__BYTE	RESV4021:1;
			__BYTE	RESV4022:1;
			__BYTE	RESV4023:1;
			__BYTE	RESV4024:1;
			__BYTE	RESV4025:1;
			__BYTE	RESV4026:1;
			__BYTE	RESV4027:1;
			__BYTE	RESV4028:1;
			__BYTE	RESV4029:1;
			__BYTE	T1MS:1;
			__BYTE	T1RC:1;
		} bitc;
	} IO_T1C;
	union {
		__WORD	word;
		struct {
			__BYTE	RESV440:1;
			__BYTE	RESV441:1;
			__WORD	SMTV:14;
			__BYTE	RESV443:1;
			__BYTE	RESV444:1;
			__BYTE	SCCV:6;
			__BYTE	RESV446:1;
			__BYTE	ENT:2;
			__BYTE	EETP:1;
			__BYTE	SSWT:1;
			__BYTE	EDGE:1;
			__BYTE	SWMS:1;
			__BYTE	ESWT:1;
		} bit;
		struct {
			__BYTE	RESV440:1;
			__BYTE	RESV441:1;
			__BYTE	SMTV13:1;
			__BYTE	SMTV12:1;
			__BYTE	SMTV11:1;
			__BYTE	SMTV10:1;
			__BYTE	SMTV9:1;
			__BYTE	SMTV8:1;
			__BYTE	SMTV7:1;
			__BYTE	SMTV6:1;
			__BYTE	SMTV5:1;
			__BYTE	SMTV4:1;
			__BYTE	SMTV3:1;
			__BYTE	SMTV2:1;
			__BYTE	SMTV1:1;
			__BYTE	SMTV0:1;
			__BYTE	RESV4416:1;
			__BYTE	RESV4417:1;
			__BYTE	SCCV5:1;
			__BYTE	SCCV4:1;
			__BYTE	SCCV3:1;
			__BYTE	SCCV2:1;
			__BYTE	SCCV1:1;
			__BYTE	SCCV0:1;
			__BYTE	RESV4424:1;
			__BYTE	ENT1:1;
			__BYTE	ENT0:1;
			__BYTE	EETP:1;
			__BYTE	SSWT:1;
			__BYTE	EDGE:1;
			__BYTE	SWMS:1;
			__BYTE	ESWT:1;
		} bitc;
	} IO_STPW1;
	union {
		__WORD	word;
		struct {
			__BYTE	RESV480:1;
			__BYTE	RESV481:1;
			__BYTE	RESV482:1;
			__BYTE	RESV483:1;
			__BYTE	RESV484:1;
			__WORD	SSCVB:11;
			__BYTE	RESV486:1;
			__BYTE	RESV487:1;
			__BYTE	RESV488:1;
			__BYTE	RESV489:1;
			__BYTE	RESV4810:1;
			__WORD	SSCVA:11;
		} bit;
		struct {
			__BYTE	RESV480:1;
			__BYTE	RESV481:1;
			__BYTE	RESV482:1;
			__BYTE	RESV483:1;
			__BYTE	RESV484:1;
			__BYTE	SSCVB10:1;
			__BYTE	SSCVB9:1;
			__BYTE	SSCVB8:1;
			__BYTE	SSCVB7:1;
			__BYTE	SSCVB6:1;
			__BYTE	SSCVB5:1;
			__BYTE	SSCVB4:1;
			__BYTE	SSCVB3:1;
			__BYTE	SSCVB2:1;
			__BYTE	SSCVB1:1;
			__BYTE	SSCVB0:1;
			__BYTE	RESV4816:1;
			__BYTE	RESV4817:1;
			__BYTE	RESV4818:1;
			__BYTE	RESV4819:1;
			__BYTE	RESV4820:1;
			__BYTE	SSCVA10:1;
			__BYTE	SSCVA9:1;
			__BYTE	SSCVA8:1;
			__BYTE	SSCVA7:1;
			__BYTE	SSCVA6:1;
			__BYTE	SSCVA5:1;
			__BYTE	SSCVA4:1;
			__BYTE	SSCVA3:1;
			__BYTE	SSCVA2:1;
			__BYTE	SSCVA1:1;
			__BYTE	SSCVA0:1;
		} bitc;
	} IO_STPW2;
} IO_FxR_INT;

#define	FxR_INT_EIR			(IO_FxR_INT.IO_EIR.word)
#define	FxR_INT_EIR_TABB    	(IO_FxR_INT.IO_EIR.bit.TABB)
#define	FxR_INT_EIR_LTVB    	(IO_FxR_INT.IO_EIR.bit.LTVB)
#define	FxR_INT_EIR_EDB    	(IO_FxR_INT.IO_EIR.bit.EDB)
#define	FxR_INT_EIR_TABA    	(IO_FxR_INT.IO_EIR.bit.TABA)
#define	FxR_INT_EIR_LTVA    	(IO_FxR_INT.IO_EIR.bit.LTVA)
#define	FxR_INT_EIR_EDA    	(IO_FxR_INT.IO_EIR.bit.EDA)
#define	FxR_INT_EIR_MHF    	(IO_FxR_INT.IO_EIR.bit.MHF)
#define	FxR_INT_EIR_IOBA    	(IO_FxR_INT.IO_EIR.bit.IOBA)
#define	FxR_INT_EIR_IIBA    	(IO_FxR_INT.IO_EIR.bit.IIBA)
#define	FxR_INT_EIR_EFA    	(IO_FxR_INT.IO_EIR.bit.EFA)
#define	FxR_INT_EIR_RFO    	(IO_FxR_INT.IO_EIR.bit.RFO)
#define	FxR_INT_EIR_PERR    	(IO_FxR_INT.IO_EIR.bit.PERR)
#define	FxR_INT_EIR_CCL    	(IO_FxR_INT.IO_EIR.bit.CCL)
#define	FxR_INT_EIR_CCF    	(IO_FxR_INT.IO_EIR.bit.CCF)
#define	FxR_INT_EIR_SFO    	(IO_FxR_INT.IO_EIR.bit.SFO)
#define	FxR_INT_EIR_SFBM    	(IO_FxR_INT.IO_EIR.bit.SFBM)
#define	FxR_INT_EIR_CNA    	(IO_FxR_INT.IO_EIR.bit.CNA)
#define	FxR_INT_EIR_PEMC    	(IO_FxR_INT.IO_EIR.bit.PEMC)
#define	FxR_INT_SIR			(IO_FxR_INT.IO_SIR.word)
#define	FxR_INT_SIR_MTSB    	(IO_FxR_INT.IO_SIR.bit.MTSB)
#define	FxR_INT_SIR_WUPB    	(IO_FxR_INT.IO_SIR.bit.WUPB)
#define	FxR_INT_SIR_MTSA    	(IO_FxR_INT.IO_SIR.bit.MTSA)
#define	FxR_INT_SIR_WUPA    	(IO_FxR_INT.IO_SIR.bit.WUPA)
#define	FxR_INT_SIR_SDS    	(IO_FxR_INT.IO_SIR.bit.SDS)
#define	FxR_INT_SIR_MBSI    	(IO_FxR_INT.IO_SIR.bit.MBSI)
#define	FxR_INT_SIR_SUCS    	(IO_FxR_INT.IO_SIR.bit.SUCS)
#define	FxR_INT_SIR_SWE    	(IO_FxR_INT.IO_SIR.bit.SWE)
#define	FxR_INT_SIR_TOBC    	(IO_FxR_INT.IO_SIR.bit.TOBC)
#define	FxR_INT_SIR_TIBC    	(IO_FxR_INT.IO_SIR.bit.TIBC)
#define	FxR_INT_SIR_TI    	(IO_FxR_INT.IO_SIR.bit.TI)
#define	FxR_INT_SIR_TI0    	(IO_FxR_INT.IO_SIR.bitc.TI0)
#define	FxR_INT_SIR_TI1    	(IO_FxR_INT.IO_SIR.bitc.TI1)
#define	FxR_INT_SIR_NMVC    	(IO_FxR_INT.IO_SIR.bit.NMVC)
#define	FxR_INT_SIR_RFCL    	(IO_FxR_INT.IO_SIR.bit.RFCL)
#define	FxR_INT_SIR_RFNE    	(IO_FxR_INT.IO_SIR.bit.RFNE)
#define	FxR_INT_SIR_RXI    	(IO_FxR_INT.IO_SIR.bit.RXI)
#define	FxR_INT_SIR_TXI    	(IO_FxR_INT.IO_SIR.bit.TXI)
#define	FxR_INT_SIR_CYCS    	(IO_FxR_INT.IO_SIR.bit.CYCS)
#define	FxR_INT_SIR_CAS    	(IO_FxR_INT.IO_SIR.bit.CAS)
#define	FxR_INT_SIR_WST    	(IO_FxR_INT.IO_SIR.bit.WST)
#define	FxR_INT_EILS			(IO_FxR_INT.IO_EILS.word)
#define	FxR_INT_EILS_TABBL    	(IO_FxR_INT.IO_EILS.bit.TABBL)
#define	FxR_INT_EILS_LTVBL    	(IO_FxR_INT.IO_EILS.bit.LTVBL)
#define	FxR_INT_EILS_EDBL    	(IO_FxR_INT.IO_EILS.bit.EDBL)
#define	FxR_INT_EILS_TABAL    	(IO_FxR_INT.IO_EILS.bit.TABAL)
#define	FxR_INT_EILS_LTVAL    	(IO_FxR_INT.IO_EILS.bit.LTVAL)
#define	FxR_INT_EILS_EDAL    	(IO_FxR_INT.IO_EILS.bit.EDAL)
#define	FxR_INT_EILS_MHFL    	(IO_FxR_INT.IO_EILS.bit.MHFL)
#define	FxR_INT_EILS_IOBAL    	(IO_FxR_INT.IO_EILS.bit.IOBAL)
#define	FxR_INT_EILS_IIBAL    	(IO_FxR_INT.IO_EILS.bit.IIBAL)
#define	FxR_INT_EILS_EFAL    	(IO_FxR_INT.IO_EILS.bit.EFAL)
#define	FxR_INT_EILS_RFOL    	(IO_FxR_INT.IO_EILS.bit.RFOL)
#define	FxR_INT_EILS_PERRL    	(IO_FxR_INT.IO_EILS.bit.PERRL)
#define	FxR_INT_EILS_CCLL    	(IO_FxR_INT.IO_EILS.bit.CCLL)
#define	FxR_INT_EILS_CCFL    	(IO_FxR_INT.IO_EILS.bit.CCFL)
#define	FxR_INT_EILS_SFOL    	(IO_FxR_INT.IO_EILS.bit.SFOL)
#define	FxR_INT_EILS_SFBML    	(IO_FxR_INT.IO_EILS.bit.SFBML)
#define	FxR_INT_EILS_CNAL    	(IO_FxR_INT.IO_EILS.bit.CNAL)
#define	FxR_INT_EILS_PEMCL    	(IO_FxR_INT.IO_EILS.bit.PEMCL)
#define	FxR_INT_SILS			(IO_FxR_INT.IO_SILS.word)
#define	FxR_INT_SILS_MTSBL    	(IO_FxR_INT.IO_SILS.bit.MTSBL)
#define	FxR_INT_SILS_WUPBL    	(IO_FxR_INT.IO_SILS.bit.WUPBL)
#define	FxR_INT_SILS_MTSAL    	(IO_FxR_INT.IO_SILS.bit.MTSAL)
#define	FxR_INT_SILS_WUPAL    	(IO_FxR_INT.IO_SILS.bit.WUPAL)
#define	FxR_INT_SILS_SDSL    	(IO_FxR_INT.IO_SILS.bit.SDSL)
#define	FxR_INT_SILS_MBSIL    	(IO_FxR_INT.IO_SILS.bit.MBSIL)
#define	FxR_INT_SILS_SUCSL    	(IO_FxR_INT.IO_SILS.bit.SUCSL)
#define	FxR_INT_SILS_SWEL    	(IO_FxR_INT.IO_SILS.bit.SWEL)
#define	FxR_INT_SILS_TOBCL    	(IO_FxR_INT.IO_SILS.bit.TOBCL)
#define	FxR_INT_SILS_TIBCL    	(IO_FxR_INT.IO_SILS.bit.TIBCL)
#define	FxR_INT_SILS_TIL    	(IO_FxR_INT.IO_SILS.bit.TIL)
#define	FxR_INT_SILS_TIL0    	(IO_FxR_INT.IO_SILS.bitc.TIL0)
#define	FxR_INT_SILS_TIL1    	(IO_FxR_INT.IO_SILS.bitc.TIL1)
#define	FxR_INT_SILS_NMVCL    	(IO_FxR_INT.IO_SILS.bit.NMVCL)
#define	FxR_INT_SILS_RFCLL    	(IO_FxR_INT.IO_SILS.bit.RFCLL)
#define	FxR_INT_SILS_RFNEL    	(IO_FxR_INT.IO_SILS.bit.RFNEL)
#define	FxR_INT_SILS_RXIL    	(IO_FxR_INT.IO_SILS.bit.RXIL)
#define	FxR_INT_SILS_TXIL    	(IO_FxR_INT.IO_SILS.bit.TXIL)
#define	FxR_INT_SILS_CYCSL    	(IO_FxR_INT.IO_SILS.bit.CYCSL)
#define	FxR_INT_SILS_CASL    	(IO_FxR_INT.IO_SILS.bit.CASL)
#define	FxR_INT_SILS_WSTL    	(IO_FxR_INT.IO_SILS.bit.WSTL)
#define	FxR_INT_EIES			(IO_FxR_INT.IO_EIES.word)
#define	FxR_INT_EIES_TABBE    	(IO_FxR_INT.IO_EIES.bit.TABBE)
#define	FxR_INT_EIES_LTVBE    	(IO_FxR_INT.IO_EIES.bit.LTVBE)
#define	FxR_INT_EIES_EDBE    	(IO_FxR_INT.IO_EIES.bit.EDBE)
#define	FxR_INT_EIES_TABAE    	(IO_FxR_INT.IO_EIES.bit.TABAE)
#define	FxR_INT_EIES_LTVAE    	(IO_FxR_INT.IO_EIES.bit.LTVAE)
#define	FxR_INT_EIES_EDAE    	(IO_FxR_INT.IO_EIES.bit.EDAE)
#define	FxR_INT_EIES_MHFE    	(IO_FxR_INT.IO_EIES.bit.MHFE)
#define	FxR_INT_EIES_IOBAE    	(IO_FxR_INT.IO_EIES.bit.IOBAE)
#define	FxR_INT_EIES_IIBAE    	(IO_FxR_INT.IO_EIES.bit.IIBAE)
#define	FxR_INT_EIES_EFAE    	(IO_FxR_INT.IO_EIES.bit.EFAE)
#define	FxR_INT_EIES_RFOE    	(IO_FxR_INT.IO_EIES.bit.RFOE)
#define	FxR_INT_EIES_PERRE    	(IO_FxR_INT.IO_EIES.bit.PERRE)
#define	FxR_INT_EIES_CCLE    	(IO_FxR_INT.IO_EIES.bit.CCLE)
#define	FxR_INT_EIES_CCFE    	(IO_FxR_INT.IO_EIES.bit.CCFE)
#define	FxR_INT_EIES_SFOE    	(IO_FxR_INT.IO_EIES.bit.SFOE)
#define	FxR_INT_EIES_SFBME    	(IO_FxR_INT.IO_EIES.bit.SFBME)
#define	FxR_INT_EIES_CNAE    	(IO_FxR_INT.IO_EIES.bit.CNAE)
#define	FxR_INT_EIES_PEMCE    	(IO_FxR_INT.IO_EIES.bit.PEMCE)
#define	FxR_INT_EIER			(IO_FxR_INT.IO_EIER.word)
#define	FxR_INT_EIER_TABBE    	(IO_FxR_INT.IO_EIER.bit.TABBE)
#define	FxR_INT_EIER_LTVBE    	(IO_FxR_INT.IO_EIER.bit.LTVBE)
#define	FxR_INT_EIER_EDBE    	(IO_FxR_INT.IO_EIER.bit.EDBE)
#define	FxR_INT_EIER_TABAE    	(IO_FxR_INT.IO_EIER.bit.TABAE)
#define	FxR_INT_EIER_LTVAE    	(IO_FxR_INT.IO_EIER.bit.LTVAE)
#define	FxR_INT_EIER_EDAE    	(IO_FxR_INT.IO_EIER.bit.EDAE)
#define	FxR_INT_EIER_MHFE    	(IO_FxR_INT.IO_EIER.bit.MHFE)
#define	FxR_INT_EIER_IOBAE    	(IO_FxR_INT.IO_EIER.bit.IOBAE)
#define	FxR_INT_EIER_IIBAE    	(IO_FxR_INT.IO_EIER.bit.IIBAE)
#define	FxR_INT_EIER_EFAE    	(IO_FxR_INT.IO_EIER.bit.EFAE)
#define	FxR_INT_EIER_RFOE    	(IO_FxR_INT.IO_EIER.bit.RFOE)
#define	FxR_INT_EIER_PERRE    	(IO_FxR_INT.IO_EIER.bit.PERRE)
#define	FxR_INT_EIER_CCLE    	(IO_FxR_INT.IO_EIER.bit.CCLE)
#define	FxR_INT_EIER_CCFE    	(IO_FxR_INT.IO_EIER.bit.CCFE)
#define	FxR_INT_EIER_SFOE    	(IO_FxR_INT.IO_EIER.bit.SFOE)
#define	FxR_INT_EIER_SFBME    	(IO_FxR_INT.IO_EIER.bit.SFBME)
#define	FxR_INT_EIER_CNAE    	(IO_FxR_INT.IO_EIER.bit.CNAE)
#define	FxR_INT_EIER_PEMCE    	(IO_FxR_INT.IO_EIER.bit.PEMCE)
#define	FxR_INT_SIES			(IO_FxR_INT.IO_SIES.word)
#define	FxR_INT_SIES_MTSBE    	(IO_FxR_INT.IO_SIES.bit.MTSBE)
#define	FxR_INT_SIES_WUPBE    	(IO_FxR_INT.IO_SIES.bit.WUPBE)
#define	FxR_INT_SIES_MTSAE    	(IO_FxR_INT.IO_SIES.bit.MTSAE)
#define	FxR_INT_SIES_WUPAE    	(IO_FxR_INT.IO_SIES.bit.WUPAE)
#define	FxR_INT_SIES_SDSE    	(IO_FxR_INT.IO_SIES.bit.SDSE)
#define	FxR_INT_SIES_MBSIE    	(IO_FxR_INT.IO_SIES.bit.MBSIE)
#define	FxR_INT_SIES_SUCSE    	(IO_FxR_INT.IO_SIES.bit.SUCSE)
#define	FxR_INT_SIES_SWEE    	(IO_FxR_INT.IO_SIES.bit.SWEE)
#define	FxR_INT_SIES_TOBCE    	(IO_FxR_INT.IO_SIES.bit.TOBCE)
#define	FxR_INT_SIES_TIBCE    	(IO_FxR_INT.IO_SIES.bit.TIBCE)
#define	FxR_INT_SIES_TIE    	(IO_FxR_INT.IO_SIES.bit.TIE)
#define	FxR_INT_SIES_TIE0    	(IO_FxR_INT.IO_SIES.bitc.TIE0)
#define	FxR_INT_SIES_TIE1    	(IO_FxR_INT.IO_SIES.bitc.TIE1)
#define	FxR_INT_SIES_NMVCE    	(IO_FxR_INT.IO_SIES.bit.NMVCE)
#define	FxR_INT_SIES_RFCLE    	(IO_FxR_INT.IO_SIES.bit.RFCLE)
#define	FxR_INT_SIES_RFNEE    	(IO_FxR_INT.IO_SIES.bit.RFNEE)
#define	FxR_INT_SIES_RXIE    	(IO_FxR_INT.IO_SIES.bit.RXIE)
#define	FxR_INT_SIES_TXIE    	(IO_FxR_INT.IO_SIES.bit.TXIE)
#define	FxR_INT_SIES_CYCSE    	(IO_FxR_INT.IO_SIES.bit.CYCSE)
#define	FxR_INT_SIES_CASE    	(IO_FxR_INT.IO_SIES.bit.CASE)
#define	FxR_INT_SIES_WSTE    	(IO_FxR_INT.IO_SIES.bit.WSTE)
#define	FxR_INT_SIER			(IO_FxR_INT.IO_SIER.word)
#define	FxR_INT_SIER_MTSBE    	(IO_FxR_INT.IO_SIER.bit.MTSBE)
#define	FxR_INT_SIER_WUPBE    	(IO_FxR_INT.IO_SIER.bit.WUPBE)
#define	FxR_INT_SIER_MTSAE    	(IO_FxR_INT.IO_SIER.bit.MTSAE)
#define	FxR_INT_SIER_WUPAE    	(IO_FxR_INT.IO_SIER.bit.WUPAE)
#define	FxR_INT_SIER_SDSE    	(IO_FxR_INT.IO_SIER.bit.SDSE)
#define	FxR_INT_SIER_MBSIE    	(IO_FxR_INT.IO_SIER.bit.MBSIE)
#define	FxR_INT_SIER_SUCSE    	(IO_FxR_INT.IO_SIER.bit.SUCSE)
#define	FxR_INT_SIER_SWEE    	(IO_FxR_INT.IO_SIER.bit.SWEE)
#define	FxR_INT_SIER_TOBCE    	(IO_FxR_INT.IO_SIER.bit.TOBCE)
#define	FxR_INT_SIER_TIBCE    	(IO_FxR_INT.IO_SIER.bit.TIBCE)
#define	FxR_INT_SIER_TIE    	(IO_FxR_INT.IO_SIER.bit.TIE)
#define	FxR_INT_SIER_TIE0    	(IO_FxR_INT.IO_SIER.bitc.TIE0)
#define	FxR_INT_SIER_TIE1    	(IO_FxR_INT.IO_SIER.bitc.TIE1)
#define	FxR_INT_SIER_NMVCE    	(IO_FxR_INT.IO_SIER.bit.NMVCE)
#define	FxR_INT_SIER_RFCLE    	(IO_FxR_INT.IO_SIER.bit.RFCLE)
#define	FxR_INT_SIER_RFNEE    	(IO_FxR_INT.IO_SIER.bit.RFNEE)
#define	FxR_INT_SIER_RXIE    	(IO_FxR_INT.IO_SIER.bit.RXIE)
#define	FxR_INT_SIER_TXIE    	(IO_FxR_INT.IO_SIER.bit.TXIE)
#define	FxR_INT_SIER_CYCSE    	(IO_FxR_INT.IO_SIER.bit.CYCSE)
#define	FxR_INT_SIER_CASE    	(IO_FxR_INT.IO_SIER.bit.CASE)
#define	FxR_INT_SIER_WSTE    	(IO_FxR_INT.IO_SIER.bit.WSTE)
#define	FxR_INT_ILE			(IO_FxR_INT.IO_ILE.word)
#define	FxR_INT_ILE_EINT    	(IO_FxR_INT.IO_ILE.bit.EINT)
#define	FxR_INT_ILE_EINT0    	(IO_FxR_INT.IO_ILE.bitc.EINT0)
#define	FxR_INT_ILE_EINT1    	(IO_FxR_INT.IO_ILE.bitc.EINT1)
#define	FxR_INT_T0C			(IO_FxR_INT.IO_T0C.word)
#define	FxR_INT_T0C_T0MO    	(IO_FxR_INT.IO_T0C.bit.T0MO)
#define	FxR_INT_T0C_T0MO0    	(IO_FxR_INT.IO_T0C.bitc.T0MO0)
#define	FxR_INT_T0C_T0MO1    	(IO_FxR_INT.IO_T0C.bitc.T0MO1)
#define	FxR_INT_T0C_T0MO2    	(IO_FxR_INT.IO_T0C.bitc.T0MO2)
#define	FxR_INT_T0C_T0MO3    	(IO_FxR_INT.IO_T0C.bitc.T0MO3)
#define	FxR_INT_T0C_T0MO4    	(IO_FxR_INT.IO_T0C.bitc.T0MO4)
#define	FxR_INT_T0C_T0MO5    	(IO_FxR_INT.IO_T0C.bitc.T0MO5)
#define	FxR_INT_T0C_T0MO6    	(IO_FxR_INT.IO_T0C.bitc.T0MO6)
#define	FxR_INT_T0C_T0MO7    	(IO_FxR_INT.IO_T0C.bitc.T0MO7)
#define	FxR_INT_T0C_T0MO8    	(IO_FxR_INT.IO_T0C.bitc.T0MO8)
#define	FxR_INT_T0C_T0MO9    	(IO_FxR_INT.IO_T0C.bitc.T0MO9)
#define	FxR_INT_T0C_T0MO10    	(IO_FxR_INT.IO_T0C.bitc.T0MO10)
#define	FxR_INT_T0C_T0MO11    	(IO_FxR_INT.IO_T0C.bitc.T0MO11)
#define	FxR_INT_T0C_T0MO12    	(IO_FxR_INT.IO_T0C.bitc.T0MO12)
#define	FxR_INT_T0C_T0MO13    	(IO_FxR_INT.IO_T0C.bitc.T0MO13)
#define	FxR_INT_T0C_T0CC    	(IO_FxR_INT.IO_T0C.bit.T0CC)
#define	FxR_INT_T0C_T0CC0    	(IO_FxR_INT.IO_T0C.bitc.T0CC0)
#define	FxR_INT_T0C_T0CC1    	(IO_FxR_INT.IO_T0C.bitc.T0CC1)
#define	FxR_INT_T0C_T0CC2    	(IO_FxR_INT.IO_T0C.bitc.T0CC2)
#define	FxR_INT_T0C_T0CC3    	(IO_FxR_INT.IO_T0C.bitc.T0CC3)
#define	FxR_INT_T0C_T0CC4    	(IO_FxR_INT.IO_T0C.bitc.T0CC4)
#define	FxR_INT_T0C_T0CC5    	(IO_FxR_INT.IO_T0C.bitc.T0CC5)
#define	FxR_INT_T0C_T0CC6    	(IO_FxR_INT.IO_T0C.bitc.T0CC6)
#define	FxR_INT_T0C_T0MS    	(IO_FxR_INT.IO_T0C.bit.T0MS)
#define	FxR_INT_T0C_T0RC    	(IO_FxR_INT.IO_T0C.bit.T0RC)
#define	FxR_INT_T1C			(IO_FxR_INT.IO_T1C.word)
#define	FxR_INT_T1C_T1MC    	(IO_FxR_INT.IO_T1C.bit.T1MC)
#define	FxR_INT_T1C_T1MC0    	(IO_FxR_INT.IO_T1C.bitc.T1MC0)
#define	FxR_INT_T1C_T1MC1    	(IO_FxR_INT.IO_T1C.bitc.T1MC1)
#define	FxR_INT_T1C_T1MC2    	(IO_FxR_INT.IO_T1C.bitc.T1MC2)
#define	FxR_INT_T1C_T1MC3    	(IO_FxR_INT.IO_T1C.bitc.T1MC3)
#define	FxR_INT_T1C_T1MC4    	(IO_FxR_INT.IO_T1C.bitc.T1MC4)
#define	FxR_INT_T1C_T1MC5    	(IO_FxR_INT.IO_T1C.bitc.T1MC5)
#define	FxR_INT_T1C_T1MC6    	(IO_FxR_INT.IO_T1C.bitc.T1MC6)
#define	FxR_INT_T1C_T1MC7    	(IO_FxR_INT.IO_T1C.bitc.T1MC7)
#define	FxR_INT_T1C_T1MC8    	(IO_FxR_INT.IO_T1C.bitc.T1MC8)
#define	FxR_INT_T1C_T1MC9    	(IO_FxR_INT.IO_T1C.bitc.T1MC9)
#define	FxR_INT_T1C_T1MC10    	(IO_FxR_INT.IO_T1C.bitc.T1MC10)
#define	FxR_INT_T1C_T1MC11    	(IO_FxR_INT.IO_T1C.bitc.T1MC11)
#define	FxR_INT_T1C_T1MC12    	(IO_FxR_INT.IO_T1C.bitc.T1MC12)
#define	FxR_INT_T1C_T1MC13    	(IO_FxR_INT.IO_T1C.bitc.T1MC13)
#define	FxR_INT_T1C_T1MS    	(IO_FxR_INT.IO_T1C.bit.T1MS)
#define	FxR_INT_T1C_T1RC    	(IO_FxR_INT.IO_T1C.bit.T1RC)
#define	FxR_INT_STPW1			(IO_FxR_INT.IO_STPW1.word)
#define	FxR_INT_STPW1_SMTV    	(IO_FxR_INT.IO_STPW1.bit.SMTV)
#define	FxR_INT_STPW1_SMTV0    	(IO_FxR_INT.IO_STPW1.bitc.SMTV0)
#define	FxR_INT_STPW1_SMTV1    	(IO_FxR_INT.IO_STPW1.bitc.SMTV1)
#define	FxR_INT_STPW1_SMTV2    	(IO_FxR_INT.IO_STPW1.bitc.SMTV2)
#define	FxR_INT_STPW1_SMTV3    	(IO_FxR_INT.IO_STPW1.bitc.SMTV3)
#define	FxR_INT_STPW1_SMTV4    	(IO_FxR_INT.IO_STPW1.bitc.SMTV4)
#define	FxR_INT_STPW1_SMTV5    	(IO_FxR_INT.IO_STPW1.bitc.SMTV5)
#define	FxR_INT_STPW1_SMTV6    	(IO_FxR_INT.IO_STPW1.bitc.SMTV6)
#define	FxR_INT_STPW1_SMTV7    	(IO_FxR_INT.IO_STPW1.bitc.SMTV7)
#define	FxR_INT_STPW1_SMTV8    	(IO_FxR_INT.IO_STPW1.bitc.SMTV8)
#define	FxR_INT_STPW1_SMTV9    	(IO_FxR_INT.IO_STPW1.bitc.SMTV9)
#define	FxR_INT_STPW1_SMTV10    	(IO_FxR_INT.IO_STPW1.bitc.SMTV10)
#define	FxR_INT_STPW1_SMTV11    	(IO_FxR_INT.IO_STPW1.bitc.SMTV11)
#define	FxR_INT_STPW1_SMTV12    	(IO_FxR_INT.IO_STPW1.bitc.SMTV12)
#define	FxR_INT_STPW1_SMTV13    	(IO_FxR_INT.IO_STPW1.bitc.SMTV13)
#define	FxR_INT_STPW1_SCCV    	(IO_FxR_INT.IO_STPW1.bit.SCCV)
#define	FxR_INT_STPW1_SCCV0    	(IO_FxR_INT.IO_STPW1.bitc.SCCV0)
#define	FxR_INT_STPW1_SCCV1    	(IO_FxR_INT.IO_STPW1.bitc.SCCV1)
#define	FxR_INT_STPW1_SCCV2    	(IO_FxR_INT.IO_STPW1.bitc.SCCV2)
#define	FxR_INT_STPW1_SCCV3    	(IO_FxR_INT.IO_STPW1.bitc.SCCV3)
#define	FxR_INT_STPW1_SCCV4    	(IO_FxR_INT.IO_STPW1.bitc.SCCV4)
#define	FxR_INT_STPW1_SCCV5    	(IO_FxR_INT.IO_STPW1.bitc.SCCV5)
#define	FxR_INT_STPW1_ENT    	(IO_FxR_INT.IO_STPW1.bit.ENT)
#define	FxR_INT_STPW1_ENT0    	(IO_FxR_INT.IO_STPW1.bitc.ENT0)
#define	FxR_INT_STPW1_ENT1    	(IO_FxR_INT.IO_STPW1.bitc.ENT1)
#define	FxR_INT_STPW1_EETP    	(IO_FxR_INT.IO_STPW1.bit.EETP)
#define	FxR_INT_STPW1_SSWT    	(IO_FxR_INT.IO_STPW1.bit.SSWT)
#define	FxR_INT_STPW1_EDGE    	(IO_FxR_INT.IO_STPW1.bit.EDGE)
#define	FxR_INT_STPW1_SWMS    	(IO_FxR_INT.IO_STPW1.bit.SWMS)
#define	FxR_INT_STPW1_ESWT    	(IO_FxR_INT.IO_STPW1.bit.ESWT)
#define	FxR_INT_STPW2			(IO_FxR_INT.IO_STPW2.word)
#define	FxR_INT_STPW2_SSCVB    	(IO_FxR_INT.IO_STPW2.bit.SSCVB)
#define	FxR_INT_STPW2_SSCVB0    	(IO_FxR_INT.IO_STPW2.bitc.SSCVB0)
#define	FxR_INT_STPW2_SSCVB1    	(IO_FxR_INT.IO_STPW2.bitc.SSCVB1)
#define	FxR_INT_STPW2_SSCVB2    	(IO_FxR_INT.IO_STPW2.bitc.SSCVB2)
#define	FxR_INT_STPW2_SSCVB3    	(IO_FxR_INT.IO_STPW2.bitc.SSCVB3)
#define	FxR_INT_STPW2_SSCVB4    	(IO_FxR_INT.IO_STPW2.bitc.SSCVB4)
#define	FxR_INT_STPW2_SSCVB5    	(IO_FxR_INT.IO_STPW2.bitc.SSCVB5)
#define	FxR_INT_STPW2_SSCVB6    	(IO_FxR_INT.IO_STPW2.bitc.SSCVB6)
#define	FxR_INT_STPW2_SSCVB7    	(IO_FxR_INT.IO_STPW2.bitc.SSCVB7)
#define	FxR_INT_STPW2_SSCVB8    	(IO_FxR_INT.IO_STPW2.bitc.SSCVB8)
#define	FxR_INT_STPW2_SSCVB9    	(IO_FxR_INT.IO_STPW2.bitc.SSCVB9)
#define	FxR_INT_STPW2_SSCVB10    	(IO_FxR_INT.IO_STPW2.bitc.SSCVB10)
#define	FxR_INT_STPW2_SSCVA    	(IO_FxR_INT.IO_STPW2.bit.SSCVA)
#define	FxR_INT_STPW2_SSCVA0    	(IO_FxR_INT.IO_STPW2.bitc.SSCVA0)
#define	FxR_INT_STPW2_SSCVA1    	(IO_FxR_INT.IO_STPW2.bitc.SSCVA1)
#define	FxR_INT_STPW2_SSCVA2    	(IO_FxR_INT.IO_STPW2.bitc.SSCVA2)
#define	FxR_INT_STPW2_SSCVA3    	(IO_FxR_INT.IO_STPW2.bitc.SSCVA3)
#define	FxR_INT_STPW2_SSCVA4    	(IO_FxR_INT.IO_STPW2.bitc.SSCVA4)
#define	FxR_INT_STPW2_SSCVA5    	(IO_FxR_INT.IO_STPW2.bitc.SSCVA5)
#define	FxR_INT_STPW2_SSCVA6    	(IO_FxR_INT.IO_STPW2.bitc.SSCVA6)
#define	FxR_INT_STPW2_SSCVA7    	(IO_FxR_INT.IO_STPW2.bitc.SSCVA7)
#define	FxR_INT_STPW2_SSCVA8    	(IO_FxR_INT.IO_STPW2.bitc.SSCVA8)
#define	FxR_INT_STPW2_SSCVA9    	(IO_FxR_INT.IO_STPW2.bitc.SSCVA9)
#define	FxR_INT_STPW2_SSCVA10    	(IO_FxR_INT.IO_STPW2.bitc.SSCVA10)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_FxR_SUC1,attr=IO,locate=0xD080
#endif

__IO_EXTENDED	struct {
	union {
		__WORD	word;
		struct {
			__BYTE	RESV00:1;
			__BYTE	RESV01:1;
			__BYTE	RESV02:1;
			__BYTE	RESV03:1;
			__BYTE	CCHB:1;
			__BYTE	CCHA:1;
			__BYTE	MTSB:1;
			__BYTE	MTSA:1;
			__BYTE	HCSE:1;
			__BYTE	TSM:1;
			__BYTE	WUCS:1;
			__BYTE	PTA:5;
			__BYTE	CSA:5;
			__BYTE	RESV013:1;
			__BYTE	TXSY:1;
			__BYTE	TXST:1;
			__BYTE	PBSY:1;
			__BYTE	RESV017:1;
			__BYTE	RESV018:1;
			__BYTE	RESV019:1;
			__BYTE	CMD:4;
		} bit;
		struct {
			__BYTE	RESV00:1;
			__BYTE	RESV01:1;
			__BYTE	RESV02:1;
			__BYTE	RESV03:1;
			__BYTE	CCHB:1;
			__BYTE	CCHA:1;
			__BYTE	MTSB:1;
			__BYTE	MTSA:1;
			__BYTE	HCSE:1;
			__BYTE	TSM:1;
			__BYTE	WUCS:1;
			__BYTE	PTA4:1;
			__BYTE	PTA3:1;
			__BYTE	PTA2:1;
			__BYTE	PTA1:1;
			__BYTE	PTA0:1;
			__BYTE	CSA4:1;
			__BYTE	CSA3:1;
			__BYTE	CSA2:1;
			__BYTE	CSA1:1;
			__BYTE	CSA0:1;
			__BYTE	RESV021:1;
			__BYTE	TXSY:1;
			__BYTE	TXST:1;
			__BYTE	PBSY:1;
			__BYTE	RESV025:1;
			__BYTE	RESV026:1;
			__BYTE	RESV027:1;
			__BYTE	CMD3:1;
			__BYTE	CMD2:1;
			__BYTE	CMD1:1;
			__BYTE	CMD0:1;
		} bitc;
	} IO_SUCC1;
	union {
		__WORD	word;
		struct {
			__BYTE	RESV40:1;
			__BYTE	RESV41:1;
			__BYTE	RESV42:1;
			__BYTE	RESV43:1;
			__BYTE	LTN:4;
			__BYTE	RESV45:1;
			__BYTE	RESV46:1;
			__BYTE	RESV47:1;
			__WORD	LT:21;
		} bit;
		struct {
			__BYTE	RESV40:1;
			__BYTE	RESV41:1;
			__BYTE	RESV42:1;
			__BYTE	RESV43:1;
			__BYTE	LTN3:1;
			__BYTE	LTN2:1;
			__BYTE	LTN1:1;
			__BYTE	LTN0:1;
			__BYTE	RESV48:1;
			__BYTE	RESV49:1;
			__BYTE	RESV410:1;
			__BYTE	LT20:1;
			__BYTE	LT19:1;
			__BYTE	LT18:1;
			__BYTE	LT17:1;
			__BYTE	LT16:1;
			__BYTE	LT15:1;
			__BYTE	LT14:1;
			__BYTE	LT13:1;
			__BYTE	LT12:1;
			__BYTE	LT11:1;
			__BYTE	LT10:1;
			__BYTE	LT9:1;
			__BYTE	LT8:1;
			__BYTE	LT7:1;
			__BYTE	LT6:1;
			__BYTE	LT5:1;
			__BYTE	LT4:1;
			__BYTE	LT3:1;
			__BYTE	LT2:1;
			__BYTE	LT1:1;
			__BYTE	LT0:1;
		} bitc;
	} IO_SUCC2;
	union {
		__WORD	word;
		struct {
			__BYTE	RESV80:1;
			__BYTE	RESV81:1;
			__BYTE	RESV82:1;
			__BYTE	RESV83:1;
			__BYTE	RESV84:1;
			__BYTE	RESV85:1;
			__BYTE	RESV86:1;
			__BYTE	RESV87:1;
			__BYTE	RESV88:1;
			__BYTE	RESV89:1;
			__BYTE	RESV810:1;
			__BYTE	RESV811:1;
			__BYTE	RESV812:1;
			__BYTE	RESV813:1;
			__BYTE	RESV814:1;
			__BYTE	RESV815:1;
			__BYTE	RESV816:1;
			__BYTE	RESV817:1;
			__BYTE	RESV818:1;
			__BYTE	RESV819:1;
			__BYTE	RESV820:1;
			__BYTE	RESV821:1;
			__BYTE	RESV822:1;
			__BYTE	RESV823:1;
			__BYTE	WCF:4;
			__BYTE	WCP:4;
		} bit;
		struct {
			__BYTE	RESV80:1;
			__BYTE	RESV81:1;
			__BYTE	RESV82:1;
			__BYTE	RESV83:1;
			__BYTE	RESV84:1;
			__BYTE	RESV85:1;
			__BYTE	RESV86:1;
			__BYTE	RESV87:1;
			__BYTE	RESV88:1;
			__BYTE	RESV89:1;
			__BYTE	RESV810:1;
			__BYTE	RESV811:1;
			__BYTE	RESV812:1;
			__BYTE	RESV813:1;
			__BYTE	RESV814:1;
			__BYTE	RESV815:1;
			__BYTE	RESV816:1;
			__BYTE	RESV817:1;
			__BYTE	RESV818:1;
			__BYTE	RESV819:1;
			__BYTE	RESV820:1;
			__BYTE	RESV821:1;
			__BYTE	RESV822:1;
			__BYTE	RESV823:1;
			__BYTE	WCF3:1;
			__BYTE	WCF2:1;
			__BYTE	WCF1:1;
			__BYTE	WCF0:1;
			__BYTE	WCP3:1;
			__BYTE	WCP2:1;
			__BYTE	WCP1:1;
			__BYTE	WCP0:1;
		} bitc;
	} IO_SUCC3;
} IO_FxR_SUC1;

#define	FxR_SUC1_SUCC1			(IO_FxR_SUC1.IO_SUCC1.word)
#define	FxR_SUC1_SUCC1_CCHB    	(IO_FxR_SUC1.IO_SUCC1.bit.CCHB)
#define	FxR_SUC1_SUCC1_CCHA    	(IO_FxR_SUC1.IO_SUCC1.bit.CCHA)
#define	FxR_SUC1_SUCC1_MTSB    	(IO_FxR_SUC1.IO_SUCC1.bit.MTSB)
#define	FxR_SUC1_SUCC1_MTSA    	(IO_FxR_SUC1.IO_SUCC1.bit.MTSA)
#define	FxR_SUC1_SUCC1_HCSE    	(IO_FxR_SUC1.IO_SUCC1.bit.HCSE)
#define	FxR_SUC1_SUCC1_TSM    	(IO_FxR_SUC1.IO_SUCC1.bit.TSM)
#define	FxR_SUC1_SUCC1_WUCS    	(IO_FxR_SUC1.IO_SUCC1.bit.WUCS)
#define	FxR_SUC1_SUCC1_PTA    	(IO_FxR_SUC1.IO_SUCC1.bit.PTA)
#define	FxR_SUC1_SUCC1_PTA0    	(IO_FxR_SUC1.IO_SUCC1.bitc.PTA0)
#define	FxR_SUC1_SUCC1_PTA1    	(IO_FxR_SUC1.IO_SUCC1.bitc.PTA1)
#define	FxR_SUC1_SUCC1_PTA2    	(IO_FxR_SUC1.IO_SUCC1.bitc.PTA2)
#define	FxR_SUC1_SUCC1_PTA3    	(IO_FxR_SUC1.IO_SUCC1.bitc.PTA3)
#define	FxR_SUC1_SUCC1_PTA4    	(IO_FxR_SUC1.IO_SUCC1.bitc.PTA4)
#define	FxR_SUC1_SUCC1_CSA    	(IO_FxR_SUC1.IO_SUCC1.bit.CSA)
#define	FxR_SUC1_SUCC1_CSA0    	(IO_FxR_SUC1.IO_SUCC1.bitc.CSA0)
#define	FxR_SUC1_SUCC1_CSA1    	(IO_FxR_SUC1.IO_SUCC1.bitc.CSA1)
#define	FxR_SUC1_SUCC1_CSA2    	(IO_FxR_SUC1.IO_SUCC1.bitc.CSA2)
#define	FxR_SUC1_SUCC1_CSA3    	(IO_FxR_SUC1.IO_SUCC1.bitc.CSA3)
#define	FxR_SUC1_SUCC1_CSA4    	(IO_FxR_SUC1.IO_SUCC1.bitc.CSA4)
#define	FxR_SUC1_SUCC1_TXSY    	(IO_FxR_SUC1.IO_SUCC1.bit.TXSY)
#define	FxR_SUC1_SUCC1_TXST    	(IO_FxR_SUC1.IO_SUCC1.bit.TXST)
#define	FxR_SUC1_SUCC1_PBSY    	(IO_FxR_SUC1.IO_SUCC1.bit.PBSY)
#define	FxR_SUC1_SUCC1_CMD    	(IO_FxR_SUC1.IO_SUCC1.bit.CMD)
#define	FxR_SUC1_SUCC1_CMD0    	(IO_FxR_SUC1.IO_SUCC1.bitc.CMD0)
#define	FxR_SUC1_SUCC1_CMD1    	(IO_FxR_SUC1.IO_SUCC1.bitc.CMD1)
#define	FxR_SUC1_SUCC1_CMD2    	(IO_FxR_SUC1.IO_SUCC1.bitc.CMD2)
#define	FxR_SUC1_SUCC1_CMD3    	(IO_FxR_SUC1.IO_SUCC1.bitc.CMD3)
#define	FxR_SUC1_SUCC2			(IO_FxR_SUC1.IO_SUCC2.word)
#define	FxR_SUC1_SUCC2_LTN    	(IO_FxR_SUC1.IO_SUCC2.bit.LTN)
#define	FxR_SUC1_SUCC2_LTN0    	(IO_FxR_SUC1.IO_SUCC2.bitc.LTN0)
#define	FxR_SUC1_SUCC2_LTN1    	(IO_FxR_SUC1.IO_SUCC2.bitc.LTN1)
#define	FxR_SUC1_SUCC2_LTN2    	(IO_FxR_SUC1.IO_SUCC2.bitc.LTN2)
#define	FxR_SUC1_SUCC2_LTN3    	(IO_FxR_SUC1.IO_SUCC2.bitc.LTN3)
#define	FxR_SUC1_SUCC2_LT    	(IO_FxR_SUC1.IO_SUCC2.bit.LT)
#define	FxR_SUC1_SUCC2_LT0    	(IO_FxR_SUC1.IO_SUCC2.bitc.LT0)
#define	FxR_SUC1_SUCC2_LT1    	(IO_FxR_SUC1.IO_SUCC2.bitc.LT1)
#define	FxR_SUC1_SUCC2_LT2    	(IO_FxR_SUC1.IO_SUCC2.bitc.LT2)
#define	FxR_SUC1_SUCC2_LT3    	(IO_FxR_SUC1.IO_SUCC2.bitc.LT3)
#define	FxR_SUC1_SUCC2_LT4    	(IO_FxR_SUC1.IO_SUCC2.bitc.LT4)
#define	FxR_SUC1_SUCC2_LT5    	(IO_FxR_SUC1.IO_SUCC2.bitc.LT5)
#define	FxR_SUC1_SUCC2_LT6    	(IO_FxR_SUC1.IO_SUCC2.bitc.LT6)
#define	FxR_SUC1_SUCC2_LT7    	(IO_FxR_SUC1.IO_SUCC2.bitc.LT7)
#define	FxR_SUC1_SUCC2_LT8    	(IO_FxR_SUC1.IO_SUCC2.bitc.LT8)
#define	FxR_SUC1_SUCC2_LT9    	(IO_FxR_SUC1.IO_SUCC2.bitc.LT9)
#define	FxR_SUC1_SUCC2_LT10    	(IO_FxR_SUC1.IO_SUCC2.bitc.LT10)
#define	FxR_SUC1_SUCC2_LT11    	(IO_FxR_SUC1.IO_SUCC2.bitc.LT11)
#define	FxR_SUC1_SUCC2_LT12    	(IO_FxR_SUC1.IO_SUCC2.bitc.LT12)
#define	FxR_SUC1_SUCC2_LT13    	(IO_FxR_SUC1.IO_SUCC2.bitc.LT13)
#define	FxR_SUC1_SUCC2_LT14    	(IO_FxR_SUC1.IO_SUCC2.bitc.LT14)
#define	FxR_SUC1_SUCC2_LT15    	(IO_FxR_SUC1.IO_SUCC2.bitc.LT15)
#define	FxR_SUC1_SUCC2_LT16    	(IO_FxR_SUC1.IO_SUCC2.bitc.LT16)
#define	FxR_SUC1_SUCC2_LT17    	(IO_FxR_SUC1.IO_SUCC2.bitc.LT17)
#define	FxR_SUC1_SUCC2_LT18    	(IO_FxR_SUC1.IO_SUCC2.bitc.LT18)
#define	FxR_SUC1_SUCC2_LT19    	(IO_FxR_SUC1.IO_SUCC2.bitc.LT19)
#define	FxR_SUC1_SUCC2_LT20    	(IO_FxR_SUC1.IO_SUCC2.bitc.LT20)
#define	FxR_SUC1_SUCC3			(IO_FxR_SUC1.IO_SUCC3.word)
#define	FxR_SUC1_SUCC3_WCF    	(IO_FxR_SUC1.IO_SUCC3.bit.WCF)
#define	FxR_SUC1_SUCC3_WCF0    	(IO_FxR_SUC1.IO_SUCC3.bitc.WCF0)
#define	FxR_SUC1_SUCC3_WCF1    	(IO_FxR_SUC1.IO_SUCC3.bitc.WCF1)
#define	FxR_SUC1_SUCC3_WCF2    	(IO_FxR_SUC1.IO_SUCC3.bitc.WCF2)
#define	FxR_SUC1_SUCC3_WCF3    	(IO_FxR_SUC1.IO_SUCC3.bitc.WCF3)
#define	FxR_SUC1_SUCC3_WCP    	(IO_FxR_SUC1.IO_SUCC3.bit.WCP)
#define	FxR_SUC1_SUCC3_WCP0    	(IO_FxR_SUC1.IO_SUCC3.bitc.WCP0)
#define	FxR_SUC1_SUCC3_WCP1    	(IO_FxR_SUC1.IO_SUCC3.bitc.WCP1)
#define	FxR_SUC1_SUCC3_WCP2    	(IO_FxR_SUC1.IO_SUCC3.bitc.WCP2)
#define	FxR_SUC1_SUCC3_WCP3    	(IO_FxR_SUC1.IO_SUCC3.bitc.WCP3)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_FxR_NEMC,attr=IO,locate=0xD08C
#endif

typedef union {
	__WORD	word;
	struct {
			__BYTE	RESV0:1;
			__BYTE	RESV1:1;
			__BYTE	RESV2:1;
			__BYTE	RESV3:1;
			__BYTE	RESV4:1;
			__BYTE	RESV5:1;
			__BYTE	RESV6:1;
			__BYTE	RESV7:1;
			__BYTE	RESV8:1;
			__BYTE	RESV9:1;
			__BYTE	RESV10:1;
			__BYTE	RESV11:1;
			__BYTE	RESV12:1;
			__BYTE	RESV13:1;
			__BYTE	RESV14:1;
			__BYTE	RESV15:1;
			__BYTE	RESV16:1;
			__BYTE	RESV17:1;
			__BYTE	RESV18:1;
			__BYTE	RESV19:1;
			__BYTE	RESV20:1;
			__BYTE	RESV21:1;
			__BYTE	RESV22:1;
			__BYTE	RESV23:1;
			__BYTE	RESV24:1;
			__BYTE	RESV25:1;
			__BYTE	RESV26:1;
			__BYTE	RESV27:1;
			__BYTE	NML:4;
	} bit;
	struct {
			__BYTE	RESV0:1;
			__BYTE	RESV1:1;
			__BYTE	RESV2:1;
			__BYTE	RESV3:1;
			__BYTE	RESV4:1;
			__BYTE	RESV5:1;
			__BYTE	RESV6:1;
			__BYTE	RESV7:1;
			__BYTE	RESV8:1;
			__BYTE	RESV9:1;
			__BYTE	RESV10:1;
			__BYTE	RESV11:1;
			__BYTE	RESV12:1;
			__BYTE	RESV13:1;
			__BYTE	RESV14:1;
			__BYTE	RESV15:1;
			__BYTE	RESV16:1;
			__BYTE	RESV17:1;
			__BYTE	RESV18:1;
			__BYTE	RESV19:1;
			__BYTE	RESV20:1;
			__BYTE	RESV21:1;
			__BYTE	RESV22:1;
			__BYTE	RESV23:1;
			__BYTE	RESV24:1;
			__BYTE	RESV25:1;
			__BYTE	RESV26:1;
			__BYTE	RESV27:1;
			__BYTE	NML3:1;
			__BYTE	NML2:1;
			__BYTE	NML1:1;
			__BYTE	NML0:1;
	} bitc;
} FxR_NEMCSTR;

__IO_EXTENDED	  FxR_NEMCSTR	IO_FxR_NEMC;
#define	_fxr_nemc		(IO_FxR_NEMC)
#define	FxR_NEMC		(IO_FxR_NEMC.word)
#define	FxR_NEMC_NML  	(IO_FxR_NEMC.bit.NML)
#define	FxR_NEMC_NML0  	(IO_FxR_NEMC.bitc.NML0)
#define	FxR_NEMC_NML1  	(IO_FxR_NEMC.bitc.NML1)
#define	FxR_NEMC_NML2  	(IO_FxR_NEMC.bitc.NML2)
#define	FxR_NEMC_NML3  	(IO_FxR_NEMC.bitc.NML3)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_FxR_PRT,attr=IO,locate=0xD090
#endif

__IO_EXTENDED	struct {
	union {
		__WORD	word;
		struct {
			__BYTE	RWP:6;
			__BYTE	RESV01:1;
			__WORD	RXW:9;
			__BYTE	BRP:2;
			__BYTE	SPP:2;
			__BYTE	RESV05:1;
			__WORD	CASM:7;
			__BYTE	TSST:4;
		} bit;
		struct {
			__BYTE	RWP5:1;
			__BYTE	RWP4:1;
			__BYTE	RWP3:1;
			__BYTE	RWP2:1;
			__BYTE	RWP1:1;
			__BYTE	RWP0:1;
			__BYTE	RESV06:1;
			__BYTE	RXW8:1;
			__BYTE	RXW7:1;
			__BYTE	RXW6:1;
			__BYTE	RXW5:1;
			__BYTE	RXW4:1;
			__BYTE	RXW3:1;
			__BYTE	RXW2:1;
			__BYTE	RXW1:1;
			__BYTE	RXW0:1;
			__BYTE	BRP1:1;
			__BYTE	BRP0:1;
			__BYTE	SPP1:1;
			__BYTE	SPP0:1;
			__BYTE	RESV020:1;
			__BYTE	CASM6:1;
			__BYTE	CASM5:1;
			__BYTE	CASM4:1;
			__BYTE	CASM3:1;
			__BYTE	CASM2:1;
			__BYTE	CASM1:1;
			__BYTE	CASM0:1;
			__BYTE	TSST3:1;
			__BYTE	TSST2:1;
			__BYTE	TSST1:1;
			__BYTE	TSST0:1;
		} bitc;
	} IO_PRTC1;
	union {
		__WORD	word;
		struct {
			__BYTE	RESV40:1;
			__BYTE	RESV41:1;
			__BYTE	TXL:6;
			__BYTE	TXI:8;
			__BYTE	RESV44:1;
			__BYTE	RESV45:1;
			__BYTE	RXL:6;
			__BYTE	RESV47:1;
			__BYTE	RESV48:1;
			__BYTE	RXI:6;
		} bit;
		struct {
			__BYTE	RESV40:1;
			__BYTE	RESV41:1;
			__BYTE	TXL5:1;
			__BYTE	TXL4:1;
			__BYTE	TXL3:1;
			__BYTE	TXL2:1;
			__BYTE	TXL1:1;
			__BYTE	TXL0:1;
			__BYTE	TXI7:1;
			__BYTE	TXI6:1;
			__BYTE	TXI5:1;
			__BYTE	TXI4:1;
			__BYTE	TXI3:1;
			__BYTE	TXI2:1;
			__BYTE	TXI1:1;
			__BYTE	TXI0:1;
			__BYTE	RESV416:1;
			__BYTE	RESV417:1;
			__BYTE	RXL5:1;
			__BYTE	RXL4:1;
			__BYTE	RXL3:1;
			__BYTE	RXL2:1;
			__BYTE	RXL1:1;
			__BYTE	RXL0:1;
			__BYTE	RESV424:1;
			__BYTE	RESV425:1;
			__BYTE	RXI5:1;
			__BYTE	RXI4:1;
			__BYTE	RXI3:1;
			__BYTE	RXI2:1;
			__BYTE	RXI1:1;
			__BYTE	RXI0:1;
		} bitc;
	} IO_PRTC2;
} IO_FxR_PRT;

#define	FxR_PRT_PRTC1			(IO_FxR_PRT.IO_PRTC1.word)
#define	FxR_PRT_PRTC1_RWP    	(IO_FxR_PRT.IO_PRTC1.bit.RWP)
#define	FxR_PRT_PRTC1_RWP0    	(IO_FxR_PRT.IO_PRTC1.bitc.RWP0)
#define	FxR_PRT_PRTC1_RWP1    	(IO_FxR_PRT.IO_PRTC1.bitc.RWP1)
#define	FxR_PRT_PRTC1_RWP2    	(IO_FxR_PRT.IO_PRTC1.bitc.RWP2)
#define	FxR_PRT_PRTC1_RWP3    	(IO_FxR_PRT.IO_PRTC1.bitc.RWP3)
#define	FxR_PRT_PRTC1_RWP4    	(IO_FxR_PRT.IO_PRTC1.bitc.RWP4)
#define	FxR_PRT_PRTC1_RWP5    	(IO_FxR_PRT.IO_PRTC1.bitc.RWP5)
#define	FxR_PRT_PRTC1_RXW    	(IO_FxR_PRT.IO_PRTC1.bit.RXW)
#define	FxR_PRT_PRTC1_RXW0    	(IO_FxR_PRT.IO_PRTC1.bitc.RXW0)
#define	FxR_PRT_PRTC1_RXW1    	(IO_FxR_PRT.IO_PRTC1.bitc.RXW1)
#define	FxR_PRT_PRTC1_RXW2    	(IO_FxR_PRT.IO_PRTC1.bitc.RXW2)
#define	FxR_PRT_PRTC1_RXW3    	(IO_FxR_PRT.IO_PRTC1.bitc.RXW3)
#define	FxR_PRT_PRTC1_RXW4    	(IO_FxR_PRT.IO_PRTC1.bitc.RXW4)
#define	FxR_PRT_PRTC1_RXW5    	(IO_FxR_PRT.IO_PRTC1.bitc.RXW5)
#define	FxR_PRT_PRTC1_RXW6    	(IO_FxR_PRT.IO_PRTC1.bitc.RXW6)
#define	FxR_PRT_PRTC1_RXW7    	(IO_FxR_PRT.IO_PRTC1.bitc.RXW7)
#define	FxR_PRT_PRTC1_RXW8    	(IO_FxR_PRT.IO_PRTC1.bitc.RXW8)
#define	FxR_PRT_PRTC1_BRP    	(IO_FxR_PRT.IO_PRTC1.bit.BRP)
#define	FxR_PRT_PRTC1_BRP0    	(IO_FxR_PRT.IO_PRTC1.bitc.BRP0)
#define	FxR_PRT_PRTC1_BRP1    	(IO_FxR_PRT.IO_PRTC1.bitc.BRP1)
#define	FxR_PRT_PRTC1_SPP    	(IO_FxR_PRT.IO_PRTC1.bit.SPP)
#define	FxR_PRT_PRTC1_SPP0    	(IO_FxR_PRT.IO_PRTC1.bitc.SPP0)
#define	FxR_PRT_PRTC1_SPP1    	(IO_FxR_PRT.IO_PRTC1.bitc.SPP1)
#define	FxR_PRT_PRTC1_CASM    	(IO_FxR_PRT.IO_PRTC1.bit.CASM)
#define	FxR_PRT_PRTC1_CASM0    	(IO_FxR_PRT.IO_PRTC1.bitc.CASM0)
#define	FxR_PRT_PRTC1_CASM1    	(IO_FxR_PRT.IO_PRTC1.bitc.CASM1)
#define	FxR_PRT_PRTC1_CASM2    	(IO_FxR_PRT.IO_PRTC1.bitc.CASM2)
#define	FxR_PRT_PRTC1_CASM3    	(IO_FxR_PRT.IO_PRTC1.bitc.CASM3)
#define	FxR_PRT_PRTC1_CASM4    	(IO_FxR_PRT.IO_PRTC1.bitc.CASM4)
#define	FxR_PRT_PRTC1_CASM5    	(IO_FxR_PRT.IO_PRTC1.bitc.CASM5)
#define	FxR_PRT_PRTC1_CASM6    	(IO_FxR_PRT.IO_PRTC1.bitc.CASM6)
#define	FxR_PRT_PRTC1_TSST    	(IO_FxR_PRT.IO_PRTC1.bit.TSST)
#define	FxR_PRT_PRTC1_TSST0    	(IO_FxR_PRT.IO_PRTC1.bitc.TSST0)
#define	FxR_PRT_PRTC1_TSST1    	(IO_FxR_PRT.IO_PRTC1.bitc.TSST1)
#define	FxR_PRT_PRTC1_TSST2    	(IO_FxR_PRT.IO_PRTC1.bitc.TSST2)
#define	FxR_PRT_PRTC1_TSST3    	(IO_FxR_PRT.IO_PRTC1.bitc.TSST3)
#define	FxR_PRT_PRTC2			(IO_FxR_PRT.IO_PRTC2.word)
#define	FxR_PRT_PRTC2_TXL    	(IO_FxR_PRT.IO_PRTC2.bit.TXL)
#define	FxR_PRT_PRTC2_TXL0    	(IO_FxR_PRT.IO_PRTC2.bitc.TXL0)
#define	FxR_PRT_PRTC2_TXL1    	(IO_FxR_PRT.IO_PRTC2.bitc.TXL1)
#define	FxR_PRT_PRTC2_TXL2    	(IO_FxR_PRT.IO_PRTC2.bitc.TXL2)
#define	FxR_PRT_PRTC2_TXL3    	(IO_FxR_PRT.IO_PRTC2.bitc.TXL3)
#define	FxR_PRT_PRTC2_TXL4    	(IO_FxR_PRT.IO_PRTC2.bitc.TXL4)
#define	FxR_PRT_PRTC2_TXL5    	(IO_FxR_PRT.IO_PRTC2.bitc.TXL5)
#define	FxR_PRT_PRTC2_TXI    	(IO_FxR_PRT.IO_PRTC2.bit.TXI)
#define	FxR_PRT_PRTC2_TXI0    	(IO_FxR_PRT.IO_PRTC2.bitc.TXI0)
#define	FxR_PRT_PRTC2_TXI1    	(IO_FxR_PRT.IO_PRTC2.bitc.TXI1)
#define	FxR_PRT_PRTC2_TXI2    	(IO_FxR_PRT.IO_PRTC2.bitc.TXI2)
#define	FxR_PRT_PRTC2_TXI3    	(IO_FxR_PRT.IO_PRTC2.bitc.TXI3)
#define	FxR_PRT_PRTC2_TXI4    	(IO_FxR_PRT.IO_PRTC2.bitc.TXI4)
#define	FxR_PRT_PRTC2_TXI5    	(IO_FxR_PRT.IO_PRTC2.bitc.TXI5)
#define	FxR_PRT_PRTC2_TXI6    	(IO_FxR_PRT.IO_PRTC2.bitc.TXI6)
#define	FxR_PRT_PRTC2_TXI7    	(IO_FxR_PRT.IO_PRTC2.bitc.TXI7)
#define	FxR_PRT_PRTC2_RXL    	(IO_FxR_PRT.IO_PRTC2.bit.RXL)
#define	FxR_PRT_PRTC2_RXL0    	(IO_FxR_PRT.IO_PRTC2.bitc.RXL0)
#define	FxR_PRT_PRTC2_RXL1    	(IO_FxR_PRT.IO_PRTC2.bitc.RXL1)
#define	FxR_PRT_PRTC2_RXL2    	(IO_FxR_PRT.IO_PRTC2.bitc.RXL2)
#define	FxR_PRT_PRTC2_RXL3    	(IO_FxR_PRT.IO_PRTC2.bitc.RXL3)
#define	FxR_PRT_PRTC2_RXL4    	(IO_FxR_PRT.IO_PRTC2.bitc.RXL4)
#define	FxR_PRT_PRTC2_RXL5    	(IO_FxR_PRT.IO_PRTC2.bitc.RXL5)
#define	FxR_PRT_PRTC2_RXI    	(IO_FxR_PRT.IO_PRTC2.bit.RXI)
#define	FxR_PRT_PRTC2_RXI0    	(IO_FxR_PRT.IO_PRTC2.bitc.RXI0)
#define	FxR_PRT_PRTC2_RXI1    	(IO_FxR_PRT.IO_PRTC2.bitc.RXI1)
#define	FxR_PRT_PRTC2_RXI2    	(IO_FxR_PRT.IO_PRTC2.bitc.RXI2)
#define	FxR_PRT_PRTC2_RXI3    	(IO_FxR_PRT.IO_PRTC2.bitc.RXI3)
#define	FxR_PRT_PRTC2_RXI4    	(IO_FxR_PRT.IO_PRTC2.bitc.RXI4)
#define	FxR_PRT_PRTC2_RXI5    	(IO_FxR_PRT.IO_PRTC2.bitc.RXI5)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_FxR_MHDC,attr=IO,locate=0xD098
#endif

typedef union {
	__WORD	word;
	struct {
			__BYTE	RESV0:1;
			__BYTE	RESV1:1;
			__BYTE	RESV2:1;
			__WORD	SLT:13;
			__BYTE	RESV4:1;
			__BYTE	RESV5:1;
			__BYTE	RESV6:1;
			__BYTE	RESV7:1;
			__BYTE	RESV8:1;
			__BYTE	RESV9:1;
			__BYTE	RESV10:1;
			__BYTE	RESV11:1;
			__BYTE	RESV12:1;
			__BYTE	SFDL:7;
	} bit;
	struct {
			__BYTE	RESV0:1;
			__BYTE	RESV1:1;
			__BYTE	RESV2:1;
			__BYTE	SLT12:1;
			__BYTE	SLT11:1;
			__BYTE	SLT10:1;
			__BYTE	SLT9:1;
			__BYTE	SLT8:1;
			__BYTE	SLT7:1;
			__BYTE	SLT6:1;
			__BYTE	SLT5:1;
			__BYTE	SLT4:1;
			__BYTE	SLT3:1;
			__BYTE	SLT2:1;
			__BYTE	SLT1:1;
			__BYTE	SLT0:1;
			__BYTE	RESV16:1;
			__BYTE	RESV17:1;
			__BYTE	RESV18:1;
			__BYTE	RESV19:1;
			__BYTE	RESV20:1;
			__BYTE	RESV21:1;
			__BYTE	RESV22:1;
			__BYTE	RESV23:1;
			__BYTE	RESV24:1;
			__BYTE	SFDL6:1;
			__BYTE	SFDL5:1;
			__BYTE	SFDL4:1;
			__BYTE	SFDL3:1;
			__BYTE	SFDL2:1;
			__BYTE	SFDL1:1;
			__BYTE	SFDL0:1;
	} bitc;
} FxR_MHDCSTR;

__IO_EXTENDED	  FxR_MHDCSTR	IO_FxR_MHDC;
#define	_fxr_mhdc		(IO_FxR_MHDC)
#define	FxR_MHDC		(IO_FxR_MHDC.word)
#define	FxR_MHDC_SLT  	(IO_FxR_MHDC.bit.SLT)
#define	FxR_MHDC_SLT0  	(IO_FxR_MHDC.bitc.SLT0)
#define	FxR_MHDC_SLT1  	(IO_FxR_MHDC.bitc.SLT1)
#define	FxR_MHDC_SLT2  	(IO_FxR_MHDC.bitc.SLT2)
#define	FxR_MHDC_SLT3  	(IO_FxR_MHDC.bitc.SLT3)
#define	FxR_MHDC_SLT4  	(IO_FxR_MHDC.bitc.SLT4)
#define	FxR_MHDC_SLT5  	(IO_FxR_MHDC.bitc.SLT5)
#define	FxR_MHDC_SLT6  	(IO_FxR_MHDC.bitc.SLT6)
#define	FxR_MHDC_SLT7  	(IO_FxR_MHDC.bitc.SLT7)
#define	FxR_MHDC_SLT8  	(IO_FxR_MHDC.bitc.SLT8)
#define	FxR_MHDC_SLT9  	(IO_FxR_MHDC.bitc.SLT9)
#define	FxR_MHDC_SLT10  	(IO_FxR_MHDC.bitc.SLT10)
#define	FxR_MHDC_SLT11  	(IO_FxR_MHDC.bitc.SLT11)
#define	FxR_MHDC_SLT12  	(IO_FxR_MHDC.bitc.SLT12)
#define	FxR_MHDC_SFDL  	(IO_FxR_MHDC.bit.SFDL)
#define	FxR_MHDC_SFDL0  	(IO_FxR_MHDC.bitc.SFDL0)
#define	FxR_MHDC_SFDL1  	(IO_FxR_MHDC.bitc.SFDL1)
#define	FxR_MHDC_SFDL2  	(IO_FxR_MHDC.bitc.SFDL2)
#define	FxR_MHDC_SFDL3  	(IO_FxR_MHDC.bitc.SFDL3)
#define	FxR_MHDC_SFDL4  	(IO_FxR_MHDC.bitc.SFDL4)
#define	FxR_MHDC_SFDL5  	(IO_FxR_MHDC.bitc.SFDL5)
#define	FxR_MHDC_SFDL6  	(IO_FxR_MHDC.bitc.SFDL6)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_FxR_GTU1,attr=IO,locate=0xD0A0
#endif

__IO_EXTENDED	struct {
	union {
		__WORD	word;
		struct {
			__BYTE	RESV00:1;
			__BYTE	RESV01:1;
			__BYTE	RESV02:1;
			__BYTE	RESV03:1;
			__BYTE	RESV04:1;
			__BYTE	RESV05:1;
			__BYTE	RESV06:1;
			__BYTE	RESV07:1;
			__BYTE	RESV08:1;
			__BYTE	RESV09:1;
			__BYTE	RESV010:1;
			__BYTE	RESV011:1;
			__WORD	UT:20;
		} bit;
		struct {
			__BYTE	RESV00:1;
			__BYTE	RESV01:1;
			__BYTE	RESV02:1;
			__BYTE	RESV03:1;
			__BYTE	RESV04:1;
			__BYTE	RESV05:1;
			__BYTE	RESV06:1;
			__BYTE	RESV07:1;
			__BYTE	RESV08:1;
			__BYTE	RESV09:1;
			__BYTE	RESV010:1;
			__BYTE	RESV011:1;
			__BYTE	UT19:1;
			__BYTE	UT18:1;
			__BYTE	UT17:1;
			__BYTE	UT16:1;
			__BYTE	UT15:1;
			__BYTE	UT14:1;
			__BYTE	UT13:1;
			__BYTE	UT12:1;
			__BYTE	UT11:1;
			__BYTE	UT10:1;
			__BYTE	UT9:1;
			__BYTE	UT8:1;
			__BYTE	UT7:1;
			__BYTE	UT6:1;
			__BYTE	UT5:1;
			__BYTE	UT4:1;
			__BYTE	UT3:1;
			__BYTE	UT2:1;
			__BYTE	UT1:1;
			__BYTE	UT0:1;
		} bitc;
	} IO_GTUC1;
	union {
		__WORD	word;
		struct {
			__BYTE	RESV40:1;
			__BYTE	RESV41:1;
			__BYTE	RESV42:1;
			__BYTE	RESV43:1;
			__BYTE	RESV44:1;
			__BYTE	RESV45:1;
			__BYTE	RESV46:1;
			__BYTE	RESV47:1;
			__BYTE	RESV48:1;
			__BYTE	RESV49:1;
			__BYTE	RESV410:1;
			__BYTE	RESV411:1;
			__BYTE	SNM:4;
			__BYTE	RESV413:1;
			__BYTE	RESV414:1;
			__WORD	MPC:14;
		} bit;
		struct {
			__BYTE	RESV40:1;
			__BYTE	RESV41:1;
			__BYTE	RESV42:1;
			__BYTE	RESV43:1;
			__BYTE	RESV44:1;
			__BYTE	RESV45:1;
			__BYTE	RESV46:1;
			__BYTE	RESV47:1;
			__BYTE	RESV48:1;
			__BYTE	RESV49:1;
			__BYTE	RESV410:1;
			__BYTE	RESV411:1;
			__BYTE	SNM3:1;
			__BYTE	SNM2:1;
			__BYTE	SNM1:1;
			__BYTE	SNM0:1;
			__BYTE	RESV416:1;
			__BYTE	RESV417:1;
			__BYTE	MPC13:1;
			__BYTE	MPC12:1;
			__BYTE	MPC11:1;
			__BYTE	MPC10:1;
			__BYTE	MPC9:1;
			__BYTE	MPC8:1;
			__BYTE	MPC7:1;
			__BYTE	MPC6:1;
			__BYTE	MPC5:1;
			__BYTE	MPC4:1;
			__BYTE	MPC3:1;
			__BYTE	MPC2:1;
			__BYTE	MPC1:1;
			__BYTE	MPC0:1;
		} bitc;
	} IO_GTUC2;
	union {
		__WORD	word;
		struct {
			__BYTE	RESV80:1;
			__BYTE	MIOB:7;
			__BYTE	RESV82:1;
			__BYTE	MIOA:7;
			__BYTE	UIOB:8;
			__BYTE	UIOA:8;
		} bit;
		struct {
			__BYTE	RESV80:1;
			__BYTE	MIOB6:1;
			__BYTE	MIOB5:1;
			__BYTE	MIOB4:1;
			__BYTE	MIOB3:1;
			__BYTE	MIOB2:1;
			__BYTE	MIOB1:1;
			__BYTE	MIOB0:1;
			__BYTE	RESV88:1;
			__BYTE	MIOA6:1;
			__BYTE	MIOA5:1;
			__BYTE	MIOA4:1;
			__BYTE	MIOA3:1;
			__BYTE	MIOA2:1;
			__BYTE	MIOA1:1;
			__BYTE	MIOA0:1;
			__BYTE	UIOB7:1;
			__BYTE	UIOB6:1;
			__BYTE	UIOB5:1;
			__BYTE	UIOB4:1;
			__BYTE	UIOB3:1;
			__BYTE	UIOB2:1;
			__BYTE	UIOB1:1;
			__BYTE	UIOB0:1;
			__BYTE	UIOA7:1;
			__BYTE	UIOA6:1;
			__BYTE	UIOA5:1;
			__BYTE	UIOA4:1;
			__BYTE	UIOA3:1;
			__BYTE	UIOA2:1;
			__BYTE	UIOA1:1;
			__BYTE	UIOA0:1;
		} bitc;
	} IO_GTUC3;
	union {
		__WORD	word;
		struct {
			__BYTE	RESV120:1;
			__BYTE	RESV121:1;
			__WORD	OCS:14;
			__BYTE	RESV123:1;
			__BYTE	RESV124:1;
			__WORD	NIT:14;
		} bit;
		struct {
			__BYTE	RESV120:1;
			__BYTE	RESV121:1;
			__BYTE	OCS13:1;
			__BYTE	OCS12:1;
			__BYTE	OCS11:1;
			__BYTE	OWC10:1;
			__BYTE	OCS9:1;
			__BYTE	OCS8:1;
			__BYTE	OCS7:1;
			__BYTE	OCS6:1;
			__BYTE	OCS5:1;
			__BYTE	OCS4:1;
			__BYTE	OCS3:1;
			__BYTE	OCS2:1;
			__BYTE	OCS1:1;
			__BYTE	OCS0:1;
			__BYTE	RESV1216:1;
			__BYTE	RESV1217:1;
			__BYTE	NIT13:1;
			__BYTE	NIT12:1;
			__BYTE	NIT11:1;
			__BYTE	NIT10:1;
			__BYTE	NIT9:1;
			__BYTE	NIT8:1;
			__BYTE	NIT7:1;
			__BYTE	NIT6:1;
			__BYTE	NIT5:1;
			__BYTE	NIT4:1;
			__BYTE	NIT3:1;
			__BYTE	NIT2:1;
			__BYTE	NIT1:1;
			__BYTE	NIT0:1;
		} bitc;
	} IO_GTUC4;
	union {
		__WORD	word;
		struct {
			__BYTE	DEC:8;
			__BYTE	RESV161:1;
			__BYTE	RESV162:1;
			__BYTE	RESV163:1;
			__BYTE	CDD:5;
			__BYTE	DCB:8;
			__BYTE	DCA:8;
		} bit;
		struct {
			__BYTE	DEC7:1;
			__BYTE	DEC6:1;
			__BYTE	DEC5:1;
			__BYTE	DEC4:1;
			__BYTE	DEC3:1;
			__BYTE	DEC2:1;
			__BYTE	DEC1:1;
			__BYTE	DEC0:1;
			__BYTE	RESV168:1;
			__BYTE	RESV169:1;
			__BYTE	RESV1610:1;
			__BYTE	CDD4:1;
			__BYTE	CDD3:1;
			__BYTE	CDD2:1;
			__BYTE	CDD1:1;
			__BYTE	CDD0:1;
			__BYTE	DCB7:1;
			__BYTE	DCB6:1;
			__BYTE	DCB5:1;
			__BYTE	DCB4:1;
			__BYTE	DCB3:1;
			__BYTE	DCB2:1;
			__BYTE	DCB1:1;
			__BYTE	DCB0:1;
			__BYTE	DCA7:1;
			__BYTE	DCA6:1;
			__BYTE	DCA5:1;
			__BYTE	DCA4:1;
			__BYTE	DCA3:1;
			__BYTE	DCA2:1;
			__BYTE	DCA1:1;
			__BYTE	DCA0:1;
		} bitc;
	} IO_GTUC5;
	union {
		__WORD	word;
		struct {
			__BYTE	RESV200:1;
			__BYTE	RESV201:1;
			__BYTE	RESV202:1;
			__BYTE	RESV203:1;
			__BYTE	RESV204:1;
			__WORD	MOD:11;
			__BYTE	RESV206:1;
			__BYTE	RESV207:1;
			__BYTE	RESV208:1;
			__BYTE	RESV209:1;
			__BYTE	RESV2010:1;
			__WORD	ASR:11;
		} bit;
		struct {
			__BYTE	RESV200:1;
			__BYTE	RESV201:1;
			__BYTE	RESV202:1;
			__BYTE	RESV203:1;
			__BYTE	RESV204:1;
			__BYTE	MOD10:1;
			__BYTE	MOD9:1;
			__BYTE	MOD8:1;
			__BYTE	MOD7:1;
			__BYTE	MOD6:1;
			__BYTE	MOD5:1;
			__BYTE	MOD4:1;
			__BYTE	MOD3:1;
			__BYTE	MOD2:1;
			__BYTE	MOD1:1;
			__BYTE	MOD0:1;
			__BYTE	RESV2016:1;
			__BYTE	RESV2017:1;
			__BYTE	RESV2018:1;
			__BYTE	RESV2019:1;
			__BYTE	RESV2020:1;
			__BYTE	ASR10:1;
			__BYTE	ASR9:1;
			__BYTE	ASR8:1;
			__BYTE	ASR7:1;
			__BYTE	ASR6:1;
			__BYTE	ASR5:1;
			__BYTE	ASR4:1;
			__BYTE	ASR3:1;
			__BYTE	ASR2:1;
			__BYTE	ASR1:1;
			__BYTE	ASR0:1;
		} bitc;
	} IO_GTUC6;
	union {
		__WORD	word;
		struct {
			__BYTE	RESV240:1;
			__BYTE	RESV241:1;
			__BYTE	RESV242:1;
			__BYTE	RESV243:1;
			__BYTE	RESV244:1;
			__BYTE	RESV245:1;
			__WORD	NSS:10;
			__BYTE	RESV247:1;
			__BYTE	RESV248:1;
			__BYTE	RESV249:1;
			__BYTE	RESV2410:1;
			__BYTE	RESV2411:1;
			__BYTE	RESV2412:1;
			__WORD	SSL:10;
		} bit;
		struct {
			__BYTE	RESV240:1;
			__BYTE	RESV241:1;
			__BYTE	RESV242:1;
			__BYTE	RESV243:1;
			__BYTE	RESV244:1;
			__BYTE	RESV245:1;
			__BYTE	NSS9:1;
			__BYTE	NSS8:1;
			__BYTE	NSS7:1;
			__BYTE	NSS6:1;
			__BYTE	NSS5:1;
			__BYTE	NSS4:1;
			__BYTE	NSS3:1;
			__BYTE	NSS2:1;
			__BYTE	NSS1:1;
			__BYTE	NSS0:1;
			__BYTE	RESV2416:1;
			__BYTE	RESV2417:1;
			__BYTE	RESV2418:1;
			__BYTE	RESV2419:1;
			__BYTE	RESV2420:1;
			__BYTE	RESV2421:1;
			__BYTE	SSL9:1;
			__BYTE	SSL8:1;
			__BYTE	SSL7:1;
			__BYTE	SSL6:1;
			__BYTE	SSL5:1;
			__BYTE	SSL4:1;
			__BYTE	SSL3:1;
			__BYTE	SSL2:1;
			__BYTE	SSL1:1;
			__BYTE	SSL0:1;
		} bitc;
	} IO_GTUC7;
	union {
		__WORD	word;
		struct {
			__BYTE	RESV280:1;
			__BYTE	RESV281:1;
			__BYTE	RESV282:1;
			__WORD	NMS:13;
			__BYTE	RESV284:1;
			__BYTE	RESV285:1;
			__BYTE	RESV286:1;
			__BYTE	RESV287:1;
			__BYTE	RESV288:1;
			__BYTE	RESV289:1;
			__BYTE	RESV2810:1;
			__BYTE	RESV2811:1;
			__BYTE	RESV2812:1;
			__BYTE	RESV2813:1;
			__BYTE	MSL:6;
		} bit;
		struct {
			__BYTE	RESV280:1;
			__BYTE	RESV281:1;
			__BYTE	RESV282:1;
			__BYTE	NMS12:1;
			__BYTE	NMS11:1;
			__BYTE	NMS10:1;
			__BYTE	NMS9:1;
			__BYTE	NMS8:1;
			__BYTE	NMS7:1;
			__BYTE	NMS6:1;
			__BYTE	NMS5:1;
			__BYTE	NMS4:1;
			__BYTE	NMS3:1;
			__BYTE	NMS2:1;
			__BYTE	NMS1:1;
			__BYTE	NMS0:1;
			__BYTE	RESV2816:1;
			__BYTE	RESV2817:1;
			__BYTE	RESV2818:1;
			__BYTE	RESV2819:1;
			__BYTE	RESV2820:1;
			__BYTE	RESV2821:1;
			__BYTE	RESV2822:1;
			__BYTE	RESV2823:1;
			__BYTE	RESV2824:1;
			__BYTE	RESV2825:1;
			__BYTE	MSL5:1;
			__BYTE	MSL4:1;
			__BYTE	MSL3:1;
			__BYTE	MSL2:1;
			__BYTE	MSL1:1;
			__BYTE	MSL0:1;
		} bitc;
	} IO_GTUC8;
	union {
		__WORD	word;
		struct {
			__BYTE	RESV320:1;
			__BYTE	RESV321:1;
			__BYTE	RESV322:1;
			__BYTE	RESV323:1;
			__BYTE	RESV324:1;
			__BYTE	RESV325:1;
			__BYTE	RESV326:1;
			__BYTE	RESV327:1;
			__BYTE	RESV328:1;
			__BYTE	RESV329:1;
			__BYTE	RESV3210:1;
			__BYTE	RESV3211:1;
			__BYTE	RESV3212:1;
			__BYTE	RESV3213:1;
			__BYTE	DSI:2;
			__BYTE	RESV3215:1;
			__BYTE	RESV3216:1;
			__BYTE	RESV3217:1;
			__BYTE	MAPO:5;
			__BYTE	RESV3219:1;
			__BYTE	RESV3220:1;
			__BYTE	APO:6;
		} bit;
		struct {
			__BYTE	RESV320:1;
			__BYTE	RESV321:1;
			__BYTE	RESV322:1;
			__BYTE	RESV323:1;
			__BYTE	RESV324:1;
			__BYTE	RESV325:1;
			__BYTE	RESV326:1;
			__BYTE	RESV327:1;
			__BYTE	RESV328:1;
			__BYTE	RESV329:1;
			__BYTE	RESV3210:1;
			__BYTE	RESV3211:1;
			__BYTE	RESV3212:1;
			__BYTE	RESV3213:1;
			__BYTE	DSI1:1;
			__BYTE	DSI0:1;
			__BYTE	RESV3216:1;
			__BYTE	RESV3217:1;
			__BYTE	RESV3218:1;
			__BYTE	MAPO4:1;
			__BYTE	MAPO3:1;
			__BYTE	MAPO2:1;
			__BYTE	MAPO1:1;
			__BYTE	MAPO0:1;
			__BYTE	RESV3224:1;
			__BYTE	RESV3225:1;
			__BYTE	APO5:1;
			__BYTE	APO4:1;
			__BYTE	APO3:1;
			__BYTE	APO2:1;
			__BYTE	APO1:1;
			__BYTE	APO0:1;
		} bitc;
	} IO_GTUC9;
	union {
		__WORD	word;
		struct {
			__BYTE	RESV360:1;
			__BYTE	RESV361:1;
			__BYTE	RESV362:1;
			__BYTE	RESV363:1;
			__BYTE	RESV364:1;
			__WORD	MRC:11;
			__BYTE	RESV366:1;
			__BYTE	RESV367:1;
			__WORD	MOC:14;
		} bit;
		struct {
			__BYTE	RESV360:1;
			__BYTE	RESV361:1;
			__BYTE	RESV362:1;
			__BYTE	RESV363:1;
			__BYTE	RESV364:1;
			__BYTE	MRC10:1;
			__BYTE	MRC9:1;
			__BYTE	MRC8:1;
			__BYTE	MRC7:1;
			__BYTE	MRC6:1;
			__BYTE	MRC5:1;
			__BYTE	MRC4:1;
			__BYTE	MRC3:1;
			__BYTE	MRC2:1;
			__BYTE	MRC1:1;
			__BYTE	MRC0:1;
			__BYTE	RESV3616:1;
			__BYTE	RESV3617:1;
			__BYTE	MOC13:1;
			__BYTE	MOC12:1;
			__BYTE	MOC11:1;
			__BYTE	MOC10:1;
			__BYTE	MOC9:1;
			__BYTE	MOC8:1;
			__BYTE	MOC7:1;
			__BYTE	MOC6:1;
			__BYTE	MOC5:1;
			__BYTE	MOC4:1;
			__BYTE	MOC3:1;
			__BYTE	MOC2:1;
			__BYTE	MOC1:1;
			__BYTE	MOC0:1;
		} bitc;
	} IO_GTUC10;
	union {
		__WORD	word;
		struct {
			__BYTE	RESV400:1;
			__BYTE	RESV401:1;
			__BYTE	RESV402:1;
			__BYTE	RESV403:1;
			__BYTE	RESV404:1;
			__BYTE	ERC:3;
			__BYTE	RESV406:1;
			__BYTE	RESV407:1;
			__BYTE	RESV408:1;
			__BYTE	RESV409:1;
			__BYTE	RESV4010:1;
			__BYTE	EOC:3;
			__BYTE	RESV4012:1;
			__BYTE	RESV4013:1;
			__BYTE	RESV4014:1;
			__BYTE	RESV4015:1;
			__BYTE	RESV4016:1;
			__BYTE	RESV4017:1;
			__BYTE	ERCC:2;
			__BYTE	RESV4019:1;
			__BYTE	RESV4020:1;
			__BYTE	RESV4021:1;
			__BYTE	RESV4022:1;
			__BYTE	RESV4023:1;
			__BYTE	RESV4024:1;
			__BYTE	EOCC:2;
		} bit;
		struct {
			__BYTE	RESV400:1;
			__BYTE	RESV401:1;
			__BYTE	RESV402:1;
			__BYTE	RESV403:1;
			__BYTE	RESV404:1;
			__BYTE	ERC2:1;
			__BYTE	ERC1:1;
			__BYTE	ERC0:1;
			__BYTE	RESV408:1;
			__BYTE	RESV409:1;
			__BYTE	RESV4010:1;
			__BYTE	RESV4011:1;
			__BYTE	RESV4012:1;
			__BYTE	EOC2:1;
			__BYTE	EOC1:1;
			__BYTE	EOC0:1;
			__BYTE	RESV4016:1;
			__BYTE	RESV4017:1;
			__BYTE	RESV4018:1;
			__BYTE	RESV4019:1;
			__BYTE	RESV4020:1;
			__BYTE	RESV4021:1;
			__BYTE	ERCC1:1;
			__BYTE	ERCC0:1;
			__BYTE	RESV4024:1;
			__BYTE	RESV4025:1;
			__BYTE	RESV4026:1;
			__BYTE	RESV4027:1;
			__BYTE	RESV4028:1;
			__BYTE	RESV4029:1;
			__BYTE	EOCC1:1;
			__BYTE	EOCC0:1;
		} bitc;
	} IO_GTUC11;
} IO_FxR_GTU1;

#define	FxR_GTU1_GTUC1			(IO_FxR_GTU1.IO_GTUC1.word)
#define	FxR_GTU1_GTUC1_UT    	(IO_FxR_GTU1.IO_GTUC1.bit.UT)
#define	FxR_GTU1_GTUC1_UT0    	(IO_FxR_GTU1.IO_GTUC1.bitc.UT0)
#define	FxR_GTU1_GTUC1_UT1    	(IO_FxR_GTU1.IO_GTUC1.bitc.UT1)
#define	FxR_GTU1_GTUC1_UT2    	(IO_FxR_GTU1.IO_GTUC1.bitc.UT2)
#define	FxR_GTU1_GTUC1_UT3    	(IO_FxR_GTU1.IO_GTUC1.bitc.UT3)
#define	FxR_GTU1_GTUC1_UT4    	(IO_FxR_GTU1.IO_GTUC1.bitc.UT4)
#define	FxR_GTU1_GTUC1_UT5    	(IO_FxR_GTU1.IO_GTUC1.bitc.UT5)
#define	FxR_GTU1_GTUC1_UT6    	(IO_FxR_GTU1.IO_GTUC1.bitc.UT6)
#define	FxR_GTU1_GTUC1_UT7    	(IO_FxR_GTU1.IO_GTUC1.bitc.UT7)
#define	FxR_GTU1_GTUC1_UT8    	(IO_FxR_GTU1.IO_GTUC1.bitc.UT8)
#define	FxR_GTU1_GTUC1_UT9    	(IO_FxR_GTU1.IO_GTUC1.bitc.UT9)
#define	FxR_GTU1_GTUC1_UT10    	(IO_FxR_GTU1.IO_GTUC1.bitc.UT10)
#define	FxR_GTU1_GTUC1_UT11    	(IO_FxR_GTU1.IO_GTUC1.bitc.UT11)
#define	FxR_GTU1_GTUC1_UT12    	(IO_FxR_GTU1.IO_GTUC1.bitc.UT12)
#define	FxR_GTU1_GTUC1_UT13    	(IO_FxR_GTU1.IO_GTUC1.bitc.UT13)
#define	FxR_GTU1_GTUC1_UT14    	(IO_FxR_GTU1.IO_GTUC1.bitc.UT14)
#define	FxR_GTU1_GTUC1_UT15    	(IO_FxR_GTU1.IO_GTUC1.bitc.UT15)
#define	FxR_GTU1_GTUC1_UT16    	(IO_FxR_GTU1.IO_GTUC1.bitc.UT16)
#define	FxR_GTU1_GTUC1_UT17    	(IO_FxR_GTU1.IO_GTUC1.bitc.UT17)
#define	FxR_GTU1_GTUC1_UT18    	(IO_FxR_GTU1.IO_GTUC1.bitc.UT18)
#define	FxR_GTU1_GTUC1_UT19    	(IO_FxR_GTU1.IO_GTUC1.bitc.UT19)
#define	FxR_GTU1_GTUC2			(IO_FxR_GTU1.IO_GTUC2.word)
#define	FxR_GTU1_GTUC2_SNM    	(IO_FxR_GTU1.IO_GTUC2.bit.SNM)
#define	FxR_GTU1_GTUC2_SNM0    	(IO_FxR_GTU1.IO_GTUC2.bitc.SNM0)
#define	FxR_GTU1_GTUC2_SNM1    	(IO_FxR_GTU1.IO_GTUC2.bitc.SNM1)
#define	FxR_GTU1_GTUC2_SNM2    	(IO_FxR_GTU1.IO_GTUC2.bitc.SNM2)
#define	FxR_GTU1_GTUC2_SNM3    	(IO_FxR_GTU1.IO_GTUC2.bitc.SNM3)
#define	FxR_GTU1_GTUC2_MPC    	(IO_FxR_GTU1.IO_GTUC2.bit.MPC)
#define	FxR_GTU1_GTUC2_MPC0    	(IO_FxR_GTU1.IO_GTUC2.bitc.MPC0)
#define	FxR_GTU1_GTUC2_MPC1    	(IO_FxR_GTU1.IO_GTUC2.bitc.MPC1)
#define	FxR_GTU1_GTUC2_MPC2    	(IO_FxR_GTU1.IO_GTUC2.bitc.MPC2)
#define	FxR_GTU1_GTUC2_MPC3    	(IO_FxR_GTU1.IO_GTUC2.bitc.MPC3)
#define	FxR_GTU1_GTUC2_MPC4    	(IO_FxR_GTU1.IO_GTUC2.bitc.MPC4)
#define	FxR_GTU1_GTUC2_MPC5    	(IO_FxR_GTU1.IO_GTUC2.bitc.MPC5)
#define	FxR_GTU1_GTUC2_MPC6    	(IO_FxR_GTU1.IO_GTUC2.bitc.MPC6)
#define	FxR_GTU1_GTUC2_MPC7    	(IO_FxR_GTU1.IO_GTUC2.bitc.MPC7)
#define	FxR_GTU1_GTUC2_MPC8    	(IO_FxR_GTU1.IO_GTUC2.bitc.MPC8)
#define	FxR_GTU1_GTUC2_MPC9    	(IO_FxR_GTU1.IO_GTUC2.bitc.MPC9)
#define	FxR_GTU1_GTUC2_MPC10    	(IO_FxR_GTU1.IO_GTUC2.bitc.MPC10)
#define	FxR_GTU1_GTUC2_MPC11    	(IO_FxR_GTU1.IO_GTUC2.bitc.MPC11)
#define	FxR_GTU1_GTUC2_MPC12    	(IO_FxR_GTU1.IO_GTUC2.bitc.MPC12)
#define	FxR_GTU1_GTUC2_MPC13    	(IO_FxR_GTU1.IO_GTUC2.bitc.MPC13)
#define	FxR_GTU1_GTUC3			(IO_FxR_GTU1.IO_GTUC3.word)
#define	FxR_GTU1_GTUC3_MIOB    	(IO_FxR_GTU1.IO_GTUC3.bit.MIOB)
#define	FxR_GTU1_GTUC3_MIOB0    	(IO_FxR_GTU1.IO_GTUC3.bitc.MIOB0)
#define	FxR_GTU1_GTUC3_MIOB1    	(IO_FxR_GTU1.IO_GTUC3.bitc.MIOB1)
#define	FxR_GTU1_GTUC3_MIOB2    	(IO_FxR_GTU1.IO_GTUC3.bitc.MIOB2)
#define	FxR_GTU1_GTUC3_MIOB3    	(IO_FxR_GTU1.IO_GTUC3.bitc.MIOB3)
#define	FxR_GTU1_GTUC3_MIOB4    	(IO_FxR_GTU1.IO_GTUC3.bitc.MIOB4)
#define	FxR_GTU1_GTUC3_MIOB5    	(IO_FxR_GTU1.IO_GTUC3.bitc.MIOB5)
#define	FxR_GTU1_GTUC3_MIOB6    	(IO_FxR_GTU1.IO_GTUC3.bitc.MIOB6)
#define	FxR_GTU1_GTUC3_MIOA    	(IO_FxR_GTU1.IO_GTUC3.bit.MIOA)
#define	FxR_GTU1_GTUC3_MIOA0    	(IO_FxR_GTU1.IO_GTUC3.bitc.MIOA0)
#define	FxR_GTU1_GTUC3_MIOA1    	(IO_FxR_GTU1.IO_GTUC3.bitc.MIOA1)
#define	FxR_GTU1_GTUC3_MIOA2    	(IO_FxR_GTU1.IO_GTUC3.bitc.MIOA2)
#define	FxR_GTU1_GTUC3_MIOA3    	(IO_FxR_GTU1.IO_GTUC3.bitc.MIOA3)
#define	FxR_GTU1_GTUC3_MIOA4    	(IO_FxR_GTU1.IO_GTUC3.bitc.MIOA4)
#define	FxR_GTU1_GTUC3_MIOA5    	(IO_FxR_GTU1.IO_GTUC3.bitc.MIOA5)
#define	FxR_GTU1_GTUC3_MIOA6    	(IO_FxR_GTU1.IO_GTUC3.bitc.MIOA6)
#define	FxR_GTU1_GTUC3_UIOB    	(IO_FxR_GTU1.IO_GTUC3.bit.UIOB)
#define	FxR_GTU1_GTUC3_UIOB0    	(IO_FxR_GTU1.IO_GTUC3.bitc.UIOB0)
#define	FxR_GTU1_GTUC3_UIOB1    	(IO_FxR_GTU1.IO_GTUC3.bitc.UIOB1)
#define	FxR_GTU1_GTUC3_UIOB2    	(IO_FxR_GTU1.IO_GTUC3.bitc.UIOB2)
#define	FxR_GTU1_GTUC3_UIOB3    	(IO_FxR_GTU1.IO_GTUC3.bitc.UIOB3)
#define	FxR_GTU1_GTUC3_UIOB4    	(IO_FxR_GTU1.IO_GTUC3.bitc.UIOB4)
#define	FxR_GTU1_GTUC3_UIOB5    	(IO_FxR_GTU1.IO_GTUC3.bitc.UIOB5)
#define	FxR_GTU1_GTUC3_UIOB6    	(IO_FxR_GTU1.IO_GTUC3.bitc.UIOB6)
#define	FxR_GTU1_GTUC3_UIOB7    	(IO_FxR_GTU1.IO_GTUC3.bitc.UIOB7)
#define	FxR_GTU1_GTUC3_UIOA    	(IO_FxR_GTU1.IO_GTUC3.bit.UIOA)
#define	FxR_GTU1_GTUC3_UIOA0    	(IO_FxR_GTU1.IO_GTUC3.bitc.UIOA0)
#define	FxR_GTU1_GTUC3_UIOA1    	(IO_FxR_GTU1.IO_GTUC3.bitc.UIOA1)
#define	FxR_GTU1_GTUC3_UIOA2    	(IO_FxR_GTU1.IO_GTUC3.bitc.UIOA2)
#define	FxR_GTU1_GTUC3_UIOA3    	(IO_FxR_GTU1.IO_GTUC3.bitc.UIOA3)
#define	FxR_GTU1_GTUC3_UIOA4    	(IO_FxR_GTU1.IO_GTUC3.bitc.UIOA4)
#define	FxR_GTU1_GTUC3_UIOA5    	(IO_FxR_GTU1.IO_GTUC3.bitc.UIOA5)
#define	FxR_GTU1_GTUC3_UIOA6    	(IO_FxR_GTU1.IO_GTUC3.bitc.UIOA6)
#define	FxR_GTU1_GTUC3_UIOA7    	(IO_FxR_GTU1.IO_GTUC3.bitc.UIOA7)
#define	FxR_GTU1_GTUC4			(IO_FxR_GTU1.IO_GTUC4.word)
#define	FxR_GTU1_GTUC4_OCS    	(IO_FxR_GTU1.IO_GTUC4.bit.OCS)
#define	FxR_GTU1_GTUC4_OCS0    	(IO_FxR_GTU1.IO_GTUC4.bitc.OCS0)
#define	FxR_GTU1_GTUC4_OCS1    	(IO_FxR_GTU1.IO_GTUC4.bitc.OCS1)
#define	FxR_GTU1_GTUC4_OCS2    	(IO_FxR_GTU1.IO_GTUC4.bitc.OCS2)
#define	FxR_GTU1_GTUC4_OCS3    	(IO_FxR_GTU1.IO_GTUC4.bitc.OCS3)
#define	FxR_GTU1_GTUC4_OCS4    	(IO_FxR_GTU1.IO_GTUC4.bitc.OCS4)
#define	FxR_GTU1_GTUC4_OCS5    	(IO_FxR_GTU1.IO_GTUC4.bitc.OCS5)
#define	FxR_GTU1_GTUC4_OCS6    	(IO_FxR_GTU1.IO_GTUC4.bitc.OCS6)
#define	FxR_GTU1_GTUC4_OCS7    	(IO_FxR_GTU1.IO_GTUC4.bitc.OCS7)
#define	FxR_GTU1_GTUC4_OCS8    	(IO_FxR_GTU1.IO_GTUC4.bitc.OCS8)
#define	FxR_GTU1_GTUC4_OCS9    	(IO_FxR_GTU1.IO_GTUC4.bitc.OCS9)
#define	FxR_GTU1_GTUC4_OWC10    	(IO_FxR_GTU1.IO_GTUC4.bitc.OWC10)
#define	FxR_GTU1_GTUC4_OCS11    	(IO_FxR_GTU1.IO_GTUC4.bitc.OCS11)
#define	FxR_GTU1_GTUC4_OCS12    	(IO_FxR_GTU1.IO_GTUC4.bitc.OCS12)
#define	FxR_GTU1_GTUC4_OCS13    	(IO_FxR_GTU1.IO_GTUC4.bitc.OCS13)
#define	FxR_GTU1_GTUC4_NIT    	(IO_FxR_GTU1.IO_GTUC4.bit.NIT)
#define	FxR_GTU1_GTUC4_NIT0    	(IO_FxR_GTU1.IO_GTUC4.bitc.NIT0)
#define	FxR_GTU1_GTUC4_NIT1    	(IO_FxR_GTU1.IO_GTUC4.bitc.NIT1)
#define	FxR_GTU1_GTUC4_NIT2    	(IO_FxR_GTU1.IO_GTUC4.bitc.NIT2)
#define	FxR_GTU1_GTUC4_NIT3    	(IO_FxR_GTU1.IO_GTUC4.bitc.NIT3)
#define	FxR_GTU1_GTUC4_NIT4    	(IO_FxR_GTU1.IO_GTUC4.bitc.NIT4)
#define	FxR_GTU1_GTUC4_NIT5    	(IO_FxR_GTU1.IO_GTUC4.bitc.NIT5)
#define	FxR_GTU1_GTUC4_NIT6    	(IO_FxR_GTU1.IO_GTUC4.bitc.NIT6)
#define	FxR_GTU1_GTUC4_NIT7    	(IO_FxR_GTU1.IO_GTUC4.bitc.NIT7)
#define	FxR_GTU1_GTUC4_NIT8    	(IO_FxR_GTU1.IO_GTUC4.bitc.NIT8)
#define	FxR_GTU1_GTUC4_NIT9    	(IO_FxR_GTU1.IO_GTUC4.bitc.NIT9)
#define	FxR_GTU1_GTUC4_NIT10    	(IO_FxR_GTU1.IO_GTUC4.bitc.NIT10)
#define	FxR_GTU1_GTUC4_NIT11    	(IO_FxR_GTU1.IO_GTUC4.bitc.NIT11)
#define	FxR_GTU1_GTUC4_NIT12    	(IO_FxR_GTU1.IO_GTUC4.bitc.NIT12)
#define	FxR_GTU1_GTUC4_NIT13    	(IO_FxR_GTU1.IO_GTUC4.bitc.NIT13)
#define	FxR_GTU1_GTUC5			(IO_FxR_GTU1.IO_GTUC5.word)
#define	FxR_GTU1_GTUC5_DEC    	(IO_FxR_GTU1.IO_GTUC5.bit.DEC)
#define	FxR_GTU1_GTUC5_DEC0    	(IO_FxR_GTU1.IO_GTUC5.bitc.DEC0)
#define	FxR_GTU1_GTUC5_DEC1    	(IO_FxR_GTU1.IO_GTUC5.bitc.DEC1)
#define	FxR_GTU1_GTUC5_DEC2    	(IO_FxR_GTU1.IO_GTUC5.bitc.DEC2)
#define	FxR_GTU1_GTUC5_DEC3    	(IO_FxR_GTU1.IO_GTUC5.bitc.DEC3)
#define	FxR_GTU1_GTUC5_DEC4    	(IO_FxR_GTU1.IO_GTUC5.bitc.DEC4)
#define	FxR_GTU1_GTUC5_DEC5    	(IO_FxR_GTU1.IO_GTUC5.bitc.DEC5)
#define	FxR_GTU1_GTUC5_DEC6    	(IO_FxR_GTU1.IO_GTUC5.bitc.DEC6)
#define	FxR_GTU1_GTUC5_DEC7    	(IO_FxR_GTU1.IO_GTUC5.bitc.DEC7)
#define	FxR_GTU1_GTUC5_CDD    	(IO_FxR_GTU1.IO_GTUC5.bit.CDD)
#define	FxR_GTU1_GTUC5_CDD0    	(IO_FxR_GTU1.IO_GTUC5.bitc.CDD0)
#define	FxR_GTU1_GTUC5_CDD1    	(IO_FxR_GTU1.IO_GTUC5.bitc.CDD1)
#define	FxR_GTU1_GTUC5_CDD2    	(IO_FxR_GTU1.IO_GTUC5.bitc.CDD2)
#define	FxR_GTU1_GTUC5_CDD3    	(IO_FxR_GTU1.IO_GTUC5.bitc.CDD3)
#define	FxR_GTU1_GTUC5_CDD4    	(IO_FxR_GTU1.IO_GTUC5.bitc.CDD4)
#define	FxR_GTU1_GTUC5_DCB    	(IO_FxR_GTU1.IO_GTUC5.bit.DCB)
#define	FxR_GTU1_GTUC5_DCB0    	(IO_FxR_GTU1.IO_GTUC5.bitc.DCB0)
#define	FxR_GTU1_GTUC5_DCB1    	(IO_FxR_GTU1.IO_GTUC5.bitc.DCB1)
#define	FxR_GTU1_GTUC5_DCB2    	(IO_FxR_GTU1.IO_GTUC5.bitc.DCB2)
#define	FxR_GTU1_GTUC5_DCB3    	(IO_FxR_GTU1.IO_GTUC5.bitc.DCB3)
#define	FxR_GTU1_GTUC5_DCB4    	(IO_FxR_GTU1.IO_GTUC5.bitc.DCB4)
#define	FxR_GTU1_GTUC5_DCB5    	(IO_FxR_GTU1.IO_GTUC5.bitc.DCB5)
#define	FxR_GTU1_GTUC5_DCB6    	(IO_FxR_GTU1.IO_GTUC5.bitc.DCB6)
#define	FxR_GTU1_GTUC5_DCB7    	(IO_FxR_GTU1.IO_GTUC5.bitc.DCB7)
#define	FxR_GTU1_GTUC5_DCA    	(IO_FxR_GTU1.IO_GTUC5.bit.DCA)
#define	FxR_GTU1_GTUC5_DCA0    	(IO_FxR_GTU1.IO_GTUC5.bitc.DCA0)
#define	FxR_GTU1_GTUC5_DCA1    	(IO_FxR_GTU1.IO_GTUC5.bitc.DCA1)
#define	FxR_GTU1_GTUC5_DCA2    	(IO_FxR_GTU1.IO_GTUC5.bitc.DCA2)
#define	FxR_GTU1_GTUC5_DCA3    	(IO_FxR_GTU1.IO_GTUC5.bitc.DCA3)
#define	FxR_GTU1_GTUC5_DCA4    	(IO_FxR_GTU1.IO_GTUC5.bitc.DCA4)
#define	FxR_GTU1_GTUC5_DCA5    	(IO_FxR_GTU1.IO_GTUC5.bitc.DCA5)
#define	FxR_GTU1_GTUC5_DCA6    	(IO_FxR_GTU1.IO_GTUC5.bitc.DCA6)
#define	FxR_GTU1_GTUC5_DCA7    	(IO_FxR_GTU1.IO_GTUC5.bitc.DCA7)
#define	FxR_GTU1_GTUC6			(IO_FxR_GTU1.IO_GTUC6.word)
#define	FxR_GTU1_GTUC6_MOD    	(IO_FxR_GTU1.IO_GTUC6.bit.MOD)
#define	FxR_GTU1_GTUC6_MOD0    	(IO_FxR_GTU1.IO_GTUC6.bitc.MOD0)
#define	FxR_GTU1_GTUC6_MOD1    	(IO_FxR_GTU1.IO_GTUC6.bitc.MOD1)
#define	FxR_GTU1_GTUC6_MOD2    	(IO_FxR_GTU1.IO_GTUC6.bitc.MOD2)
#define	FxR_GTU1_GTUC6_MOD3    	(IO_FxR_GTU1.IO_GTUC6.bitc.MOD3)
#define	FxR_GTU1_GTUC6_MOD4    	(IO_FxR_GTU1.IO_GTUC6.bitc.MOD4)
#define	FxR_GTU1_GTUC6_MOD5    	(IO_FxR_GTU1.IO_GTUC6.bitc.MOD5)
#define	FxR_GTU1_GTUC6_MOD6    	(IO_FxR_GTU1.IO_GTUC6.bitc.MOD6)
#define	FxR_GTU1_GTUC6_MOD7    	(IO_FxR_GTU1.IO_GTUC6.bitc.MOD7)
#define	FxR_GTU1_GTUC6_MOD8    	(IO_FxR_GTU1.IO_GTUC6.bitc.MOD8)
#define	FxR_GTU1_GTUC6_MOD9    	(IO_FxR_GTU1.IO_GTUC6.bitc.MOD9)
#define	FxR_GTU1_GTUC6_MOD10    	(IO_FxR_GTU1.IO_GTUC6.bitc.MOD10)
#define	FxR_GTU1_GTUC6_ASR    	(IO_FxR_GTU1.IO_GTUC6.bit.ASR)
#define	FxR_GTU1_GTUC6_ASR0    	(IO_FxR_GTU1.IO_GTUC6.bitc.ASR0)
#define	FxR_GTU1_GTUC6_ASR1    	(IO_FxR_GTU1.IO_GTUC6.bitc.ASR1)
#define	FxR_GTU1_GTUC6_ASR2    	(IO_FxR_GTU1.IO_GTUC6.bitc.ASR2)
#define	FxR_GTU1_GTUC6_ASR3    	(IO_FxR_GTU1.IO_GTUC6.bitc.ASR3)
#define	FxR_GTU1_GTUC6_ASR4    	(IO_FxR_GTU1.IO_GTUC6.bitc.ASR4)
#define	FxR_GTU1_GTUC6_ASR5    	(IO_FxR_GTU1.IO_GTUC6.bitc.ASR5)
#define	FxR_GTU1_GTUC6_ASR6    	(IO_FxR_GTU1.IO_GTUC6.bitc.ASR6)
#define	FxR_GTU1_GTUC6_ASR7    	(IO_FxR_GTU1.IO_GTUC6.bitc.ASR7)
#define	FxR_GTU1_GTUC6_ASR8    	(IO_FxR_GTU1.IO_GTUC6.bitc.ASR8)
#define	FxR_GTU1_GTUC6_ASR9    	(IO_FxR_GTU1.IO_GTUC6.bitc.ASR9)
#define	FxR_GTU1_GTUC6_ASR10    	(IO_FxR_GTU1.IO_GTUC6.bitc.ASR10)
#define	FxR_GTU1_GTUC7			(IO_FxR_GTU1.IO_GTUC7.word)
#define	FxR_GTU1_GTUC7_NSS    	(IO_FxR_GTU1.IO_GTUC7.bit.NSS)
#define	FxR_GTU1_GTUC7_NSS0    	(IO_FxR_GTU1.IO_GTUC7.bitc.NSS0)
#define	FxR_GTU1_GTUC7_NSS1    	(IO_FxR_GTU1.IO_GTUC7.bitc.NSS1)
#define	FxR_GTU1_GTUC7_NSS2    	(IO_FxR_GTU1.IO_GTUC7.bitc.NSS2)
#define	FxR_GTU1_GTUC7_NSS3    	(IO_FxR_GTU1.IO_GTUC7.bitc.NSS3)
#define	FxR_GTU1_GTUC7_NSS4    	(IO_FxR_GTU1.IO_GTUC7.bitc.NSS4)
#define	FxR_GTU1_GTUC7_NSS5    	(IO_FxR_GTU1.IO_GTUC7.bitc.NSS5)
#define	FxR_GTU1_GTUC7_NSS6    	(IO_FxR_GTU1.IO_GTUC7.bitc.NSS6)
#define	FxR_GTU1_GTUC7_NSS7    	(IO_FxR_GTU1.IO_GTUC7.bitc.NSS7)
#define	FxR_GTU1_GTUC7_NSS8    	(IO_FxR_GTU1.IO_GTUC7.bitc.NSS8)
#define	FxR_GTU1_GTUC7_NSS9    	(IO_FxR_GTU1.IO_GTUC7.bitc.NSS9)
#define	FxR_GTU1_GTUC7_SSL    	(IO_FxR_GTU1.IO_GTUC7.bit.SSL)
#define	FxR_GTU1_GTUC7_SSL0    	(IO_FxR_GTU1.IO_GTUC7.bitc.SSL0)
#define	FxR_GTU1_GTUC7_SSL1    	(IO_FxR_GTU1.IO_GTUC7.bitc.SSL1)
#define	FxR_GTU1_GTUC7_SSL2    	(IO_FxR_GTU1.IO_GTUC7.bitc.SSL2)
#define	FxR_GTU1_GTUC7_SSL3    	(IO_FxR_GTU1.IO_GTUC7.bitc.SSL3)
#define	FxR_GTU1_GTUC7_SSL4    	(IO_FxR_GTU1.IO_GTUC7.bitc.SSL4)
#define	FxR_GTU1_GTUC7_SSL5    	(IO_FxR_GTU1.IO_GTUC7.bitc.SSL5)
#define	FxR_GTU1_GTUC7_SSL6    	(IO_FxR_GTU1.IO_GTUC7.bitc.SSL6)
#define	FxR_GTU1_GTUC7_SSL7    	(IO_FxR_GTU1.IO_GTUC7.bitc.SSL7)
#define	FxR_GTU1_GTUC7_SSL8    	(IO_FxR_GTU1.IO_GTUC7.bitc.SSL8)
#define	FxR_GTU1_GTUC7_SSL9    	(IO_FxR_GTU1.IO_GTUC7.bitc.SSL9)
#define	FxR_GTU1_GTUC8			(IO_FxR_GTU1.IO_GTUC8.word)
#define	FxR_GTU1_GTUC8_NMS    	(IO_FxR_GTU1.IO_GTUC8.bit.NMS)
#define	FxR_GTU1_GTUC8_NMS0    	(IO_FxR_GTU1.IO_GTUC8.bitc.NMS0)
#define	FxR_GTU1_GTUC8_NMS1    	(IO_FxR_GTU1.IO_GTUC8.bitc.NMS1)
#define	FxR_GTU1_GTUC8_NMS2    	(IO_FxR_GTU1.IO_GTUC8.bitc.NMS2)
#define	FxR_GTU1_GTUC8_NMS3    	(IO_FxR_GTU1.IO_GTUC8.bitc.NMS3)
#define	FxR_GTU1_GTUC8_NMS4    	(IO_FxR_GTU1.IO_GTUC8.bitc.NMS4)
#define	FxR_GTU1_GTUC8_NMS5    	(IO_FxR_GTU1.IO_GTUC8.bitc.NMS5)
#define	FxR_GTU1_GTUC8_NMS6    	(IO_FxR_GTU1.IO_GTUC8.bitc.NMS6)
#define	FxR_GTU1_GTUC8_NMS7    	(IO_FxR_GTU1.IO_GTUC8.bitc.NMS7)
#define	FxR_GTU1_GTUC8_NMS8    	(IO_FxR_GTU1.IO_GTUC8.bitc.NMS8)
#define	FxR_GTU1_GTUC8_NMS9    	(IO_FxR_GTU1.IO_GTUC8.bitc.NMS9)
#define	FxR_GTU1_GTUC8_NMS10    	(IO_FxR_GTU1.IO_GTUC8.bitc.NMS10)
#define	FxR_GTU1_GTUC8_NMS11    	(IO_FxR_GTU1.IO_GTUC8.bitc.NMS11)
#define	FxR_GTU1_GTUC8_NMS12    	(IO_FxR_GTU1.IO_GTUC8.bitc.NMS12)
#define	FxR_GTU1_GTUC8_MSL    	(IO_FxR_GTU1.IO_GTUC8.bit.MSL)
#define	FxR_GTU1_GTUC8_MSL0    	(IO_FxR_GTU1.IO_GTUC8.bitc.MSL0)
#define	FxR_GTU1_GTUC8_MSL1    	(IO_FxR_GTU1.IO_GTUC8.bitc.MSL1)
#define	FxR_GTU1_GTUC8_MSL2    	(IO_FxR_GTU1.IO_GTUC8.bitc.MSL2)
#define	FxR_GTU1_GTUC8_MSL3    	(IO_FxR_GTU1.IO_GTUC8.bitc.MSL3)
#define	FxR_GTU1_GTUC8_MSL4    	(IO_FxR_GTU1.IO_GTUC8.bitc.MSL4)
#define	FxR_GTU1_GTUC8_MSL5    	(IO_FxR_GTU1.IO_GTUC8.bitc.MSL5)
#define	FxR_GTU1_GTUC9			(IO_FxR_GTU1.IO_GTUC9.word)
#define	FxR_GTU1_GTUC9_DSI    	(IO_FxR_GTU1.IO_GTUC9.bit.DSI)
#define	FxR_GTU1_GTUC9_DSI0    	(IO_FxR_GTU1.IO_GTUC9.bitc.DSI0)
#define	FxR_GTU1_GTUC9_DSI1    	(IO_FxR_GTU1.IO_GTUC9.bitc.DSI1)
#define	FxR_GTU1_GTUC9_MAPO    	(IO_FxR_GTU1.IO_GTUC9.bit.MAPO)
#define	FxR_GTU1_GTUC9_MAPO0    	(IO_FxR_GTU1.IO_GTUC9.bitc.MAPO0)
#define	FxR_GTU1_GTUC9_MAPO1    	(IO_FxR_GTU1.IO_GTUC9.bitc.MAPO1)
#define	FxR_GTU1_GTUC9_MAPO2    	(IO_FxR_GTU1.IO_GTUC9.bitc.MAPO2)
#define	FxR_GTU1_GTUC9_MAPO3    	(IO_FxR_GTU1.IO_GTUC9.bitc.MAPO3)
#define	FxR_GTU1_GTUC9_MAPO4    	(IO_FxR_GTU1.IO_GTUC9.bitc.MAPO4)
#define	FxR_GTU1_GTUC9_APO    	(IO_FxR_GTU1.IO_GTUC9.bit.APO)
#define	FxR_GTU1_GTUC9_APO0    	(IO_FxR_GTU1.IO_GTUC9.bitc.APO0)
#define	FxR_GTU1_GTUC9_APO1    	(IO_FxR_GTU1.IO_GTUC9.bitc.APO1)
#define	FxR_GTU1_GTUC9_APO2    	(IO_FxR_GTU1.IO_GTUC9.bitc.APO2)
#define	FxR_GTU1_GTUC9_APO3    	(IO_FxR_GTU1.IO_GTUC9.bitc.APO3)
#define	FxR_GTU1_GTUC9_APO4    	(IO_FxR_GTU1.IO_GTUC9.bitc.APO4)
#define	FxR_GTU1_GTUC9_APO5    	(IO_FxR_GTU1.IO_GTUC9.bitc.APO5)
#define	FxR_GTU1_GTUC10			(IO_FxR_GTU1.IO_GTUC10.word)
#define	FxR_GTU1_GTUC10_MRC    	(IO_FxR_GTU1.IO_GTUC10.bit.MRC)
#define	FxR_GTU1_GTUC10_MRC0    	(IO_FxR_GTU1.IO_GTUC10.bitc.MRC0)
#define	FxR_GTU1_GTUC10_MRC1    	(IO_FxR_GTU1.IO_GTUC10.bitc.MRC1)
#define	FxR_GTU1_GTUC10_MRC2    	(IO_FxR_GTU1.IO_GTUC10.bitc.MRC2)
#define	FxR_GTU1_GTUC10_MRC3    	(IO_FxR_GTU1.IO_GTUC10.bitc.MRC3)
#define	FxR_GTU1_GTUC10_MRC4    	(IO_FxR_GTU1.IO_GTUC10.bitc.MRC4)
#define	FxR_GTU1_GTUC10_MRC5    	(IO_FxR_GTU1.IO_GTUC10.bitc.MRC5)
#define	FxR_GTU1_GTUC10_MRC6    	(IO_FxR_GTU1.IO_GTUC10.bitc.MRC6)
#define	FxR_GTU1_GTUC10_MRC7    	(IO_FxR_GTU1.IO_GTUC10.bitc.MRC7)
#define	FxR_GTU1_GTUC10_MRC8    	(IO_FxR_GTU1.IO_GTUC10.bitc.MRC8)
#define	FxR_GTU1_GTUC10_MRC9    	(IO_FxR_GTU1.IO_GTUC10.bitc.MRC9)
#define	FxR_GTU1_GTUC10_MRC10    	(IO_FxR_GTU1.IO_GTUC10.bitc.MRC10)
#define	FxR_GTU1_GTUC10_MOC    	(IO_FxR_GTU1.IO_GTUC10.bit.MOC)
#define	FxR_GTU1_GTUC10_MOC0    	(IO_FxR_GTU1.IO_GTUC10.bitc.MOC0)
#define	FxR_GTU1_GTUC10_MOC1    	(IO_FxR_GTU1.IO_GTUC10.bitc.MOC1)
#define	FxR_GTU1_GTUC10_MOC2    	(IO_FxR_GTU1.IO_GTUC10.bitc.MOC2)
#define	FxR_GTU1_GTUC10_MOC3    	(IO_FxR_GTU1.IO_GTUC10.bitc.MOC3)
#define	FxR_GTU1_GTUC10_MOC4    	(IO_FxR_GTU1.IO_GTUC10.bitc.MOC4)
#define	FxR_GTU1_GTUC10_MOC5    	(IO_FxR_GTU1.IO_GTUC10.bitc.MOC5)
#define	FxR_GTU1_GTUC10_MOC6    	(IO_FxR_GTU1.IO_GTUC10.bitc.MOC6)
#define	FxR_GTU1_GTUC10_MOC7    	(IO_FxR_GTU1.IO_GTUC10.bitc.MOC7)
#define	FxR_GTU1_GTUC10_MOC8    	(IO_FxR_GTU1.IO_GTUC10.bitc.MOC8)
#define	FxR_GTU1_GTUC10_MOC9    	(IO_FxR_GTU1.IO_GTUC10.bitc.MOC9)
#define	FxR_GTU1_GTUC10_MOC10    	(IO_FxR_GTU1.IO_GTUC10.bitc.MOC10)
#define	FxR_GTU1_GTUC10_MOC11    	(IO_FxR_GTU1.IO_GTUC10.bitc.MOC11)
#define	FxR_GTU1_GTUC10_MOC12    	(IO_FxR_GTU1.IO_GTUC10.bitc.MOC12)
#define	FxR_GTU1_GTUC10_MOC13    	(IO_FxR_GTU1.IO_GTUC10.bitc.MOC13)
#define	FxR_GTU1_GTUC11			(IO_FxR_GTU1.IO_GTUC11.word)
#define	FxR_GTU1_GTUC11_ERC    	(IO_FxR_GTU1.IO_GTUC11.bit.ERC)
#define	FxR_GTU1_GTUC11_ERC0    	(IO_FxR_GTU1.IO_GTUC11.bitc.ERC0)
#define	FxR_GTU1_GTUC11_ERC1    	(IO_FxR_GTU1.IO_GTUC11.bitc.ERC1)
#define	FxR_GTU1_GTUC11_ERC2    	(IO_FxR_GTU1.IO_GTUC11.bitc.ERC2)
#define	FxR_GTU1_GTUC11_EOC    	(IO_FxR_GTU1.IO_GTUC11.bit.EOC)
#define	FxR_GTU1_GTUC11_EOC0    	(IO_FxR_GTU1.IO_GTUC11.bitc.EOC0)
#define	FxR_GTU1_GTUC11_EOC1    	(IO_FxR_GTU1.IO_GTUC11.bitc.EOC1)
#define	FxR_GTU1_GTUC11_EOC2    	(IO_FxR_GTU1.IO_GTUC11.bitc.EOC2)
#define	FxR_GTU1_GTUC11_ERCC    	(IO_FxR_GTU1.IO_GTUC11.bit.ERCC)
#define	FxR_GTU1_GTUC11_ERCC0    	(IO_FxR_GTU1.IO_GTUC11.bitc.ERCC0)
#define	FxR_GTU1_GTUC11_ERCC1    	(IO_FxR_GTU1.IO_GTUC11.bitc.ERCC1)
#define	FxR_GTU1_GTUC11_EOCC    	(IO_FxR_GTU1.IO_GTUC11.bit.EOCC)
#define	FxR_GTU1_GTUC11_EOCC0    	(IO_FxR_GTU1.IO_GTUC11.bitc.EOCC0)
#define	FxR_GTU1_GTUC11_EOCC1    	(IO_FxR_GTU1.IO_GTUC11.bitc.EOCC1)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_FxR_SUC2,attr=IO,locate=0xD100
#endif

__IO_EXTENDED	struct {
	const union {
		__WORD	word;
		struct {
			__BYTE	RESV00:1;
			__BYTE	RESV01:1;
			__BYTE	PSL:6;
			__BYTE	RCA:5;
			__BYTE	WSV:3;
			__BYTE	RESV05:1;
			__BYTE	CSI:1;
			__BYTE	CSAI:1;
			__BYTE	CSNI:1;
			__BYTE	RESV09:1;
			__BYTE	RESV010:1;
			__BYTE	SLM:2;
			__BYTE	HRQ:1;
			__BYTE	FSI:1;
			__BYTE	POCS:6;
		} bit;
		struct {
			__BYTE	RESV00:1;
			__BYTE	RESV01:1;
			__BYTE	PSL5:1;
			__BYTE	PSL4:1;
			__BYTE	PSL3:1;
			__BYTE	PSL2:1;
			__BYTE	PSL1:1;
			__BYTE	PSL0:1;
			__BYTE	RCA4:1;
			__BYTE	RCA3:1;
			__BYTE	RCA2:1;
			__BYTE	RCA1:1;
			__BYTE	RCA0:1;
			__BYTE	WSV2:1;
			__BYTE	WSV1:1;
			__BYTE	WSV0:1;
			__BYTE	RESV016:1;
			__BYTE	CSI:1;
			__BYTE	CSAI:1;
			__BYTE	CSNI:1;
			__BYTE	RESV020:1;
			__BYTE	RESV021:1;
			__BYTE	SLM1:1;
			__BYTE	SLM0:1;
			__BYTE	HRQ:1;
			__BYTE	FSI:1;
			__BYTE	POCS5:1;
			__BYTE	POCS4:1;
			__BYTE	POCS3:1;
			__BYTE	POCS2:1;
			__BYTE	POCS1:1;
			__BYTE	POCS0:1;
		} bitc;
	} IO_CCSV;
	const union {
		__WORD	word;
		struct {
			__BYTE	RESV40:1;
			__BYTE	RESV41:1;
			__BYTE	RESV42:1;
			__BYTE	RESV43:1;
			__BYTE	RESV44:1;
			__BYTE	RESV45:1;
			__BYTE	RESV46:1;
			__BYTE	RESV47:1;
			__BYTE	RESV48:1;
			__BYTE	RESV49:1;
			__BYTE	RESV410:1;
			__BYTE	RESV411:1;
			__BYTE	RESV412:1;
			__BYTE	RESV413:1;
			__BYTE	RESV414:1;
			__BYTE	RESV415:1;
			__BYTE	RESV416:1;
			__BYTE	RESV417:1;
			__BYTE	RESV418:1;
			__BYTE	PTAC:5;
			__BYTE	ERRM:2;
			__BYTE	RESV421:1;
			__BYTE	RESV422:1;
			__BYTE	CCFC:4;
		} bit;
		struct {
			__BYTE	RESV40:1;
			__BYTE	RESV41:1;
			__BYTE	RESV42:1;
			__BYTE	RESV43:1;
			__BYTE	RESV44:1;
			__BYTE	RESV45:1;
			__BYTE	RESV46:1;
			__BYTE	RESV47:1;
			__BYTE	RESV48:1;
			__BYTE	RESV49:1;
			__BYTE	RESV410:1;
			__BYTE	RESV411:1;
			__BYTE	RESV412:1;
			__BYTE	RESV413:1;
			__BYTE	RESV414:1;
			__BYTE	RESV415:1;
			__BYTE	RESV416:1;
			__BYTE	RESV417:1;
			__BYTE	RESV418:1;
			__BYTE	PTAC4:1;
			__BYTE	PTAC3:1;
			__BYTE	PTAC2:1;
			__BYTE	PTAC1:1;
			__BYTE	PTAC0:1;
			__BYTE	ERRM1:1;
			__BYTE	ERRM0:1;
			__BYTE	RESV426:1;
			__BYTE	RESV427:1;
			__BYTE	CCFC3:1;
			__BYTE	CCFC2:1;
			__BYTE	CCFC1:1;
			__BYTE	CCFC0:1;
		} bitc;
	} IO_CCEV;
} IO_FxR_SUC2;

#define	FxR_SUC2_CCSV			(IO_FxR_SUC2.IO_CCSV.word)
#define	FxR_SUC2_CCSV_PSL    	(IO_FxR_SUC2.IO_CCSV.bit.PSL)
#define	FxR_SUC2_CCSV_PSL0    	(IO_FxR_SUC2.IO_CCSV.bitc.PSL0)
#define	FxR_SUC2_CCSV_PSL1    	(IO_FxR_SUC2.IO_CCSV.bitc.PSL1)
#define	FxR_SUC2_CCSV_PSL2    	(IO_FxR_SUC2.IO_CCSV.bitc.PSL2)
#define	FxR_SUC2_CCSV_PSL3    	(IO_FxR_SUC2.IO_CCSV.bitc.PSL3)
#define	FxR_SUC2_CCSV_PSL4    	(IO_FxR_SUC2.IO_CCSV.bitc.PSL4)
#define	FxR_SUC2_CCSV_PSL5    	(IO_FxR_SUC2.IO_CCSV.bitc.PSL5)
#define	FxR_SUC2_CCSV_RCA    	(IO_FxR_SUC2.IO_CCSV.bit.RCA)
#define	FxR_SUC2_CCSV_RCA0    	(IO_FxR_SUC2.IO_CCSV.bitc.RCA0)
#define	FxR_SUC2_CCSV_RCA1    	(IO_FxR_SUC2.IO_CCSV.bitc.RCA1)
#define	FxR_SUC2_CCSV_RCA2    	(IO_FxR_SUC2.IO_CCSV.bitc.RCA2)
#define	FxR_SUC2_CCSV_RCA3    	(IO_FxR_SUC2.IO_CCSV.bitc.RCA3)
#define	FxR_SUC2_CCSV_RCA4    	(IO_FxR_SUC2.IO_CCSV.bitc.RCA4)
#define	FxR_SUC2_CCSV_WSV    	(IO_FxR_SUC2.IO_CCSV.bit.WSV)
#define	FxR_SUC2_CCSV_WSV0    	(IO_FxR_SUC2.IO_CCSV.bitc.WSV0)
#define	FxR_SUC2_CCSV_WSV1    	(IO_FxR_SUC2.IO_CCSV.bitc.WSV1)
#define	FxR_SUC2_CCSV_WSV2    	(IO_FxR_SUC2.IO_CCSV.bitc.WSV2)
#define	FxR_SUC2_CCSV_CSI    	(IO_FxR_SUC2.IO_CCSV.bit.CSI)
#define	FxR_SUC2_CCSV_CSAI    	(IO_FxR_SUC2.IO_CCSV.bit.CSAI)
#define	FxR_SUC2_CCSV_CSNI    	(IO_FxR_SUC2.IO_CCSV.bit.CSNI)
#define	FxR_SUC2_CCSV_SLM    	(IO_FxR_SUC2.IO_CCSV.bit.SLM)
#define	FxR_SUC2_CCSV_SLM0    	(IO_FxR_SUC2.IO_CCSV.bitc.SLM0)
#define	FxR_SUC2_CCSV_SLM1    	(IO_FxR_SUC2.IO_CCSV.bitc.SLM1)
#define	FxR_SUC2_CCSV_HRQ    	(IO_FxR_SUC2.IO_CCSV.bit.HRQ)
#define	FxR_SUC2_CCSV_FSI    	(IO_FxR_SUC2.IO_CCSV.bit.FSI)
#define	FxR_SUC2_CCSV_POCS    	(IO_FxR_SUC2.IO_CCSV.bit.POCS)
#define	FxR_SUC2_CCSV_POCS0    	(IO_FxR_SUC2.IO_CCSV.bitc.POCS0)
#define	FxR_SUC2_CCSV_POCS1    	(IO_FxR_SUC2.IO_CCSV.bitc.POCS1)
#define	FxR_SUC2_CCSV_POCS2    	(IO_FxR_SUC2.IO_CCSV.bitc.POCS2)
#define	FxR_SUC2_CCSV_POCS3    	(IO_FxR_SUC2.IO_CCSV.bitc.POCS3)
#define	FxR_SUC2_CCSV_POCS4    	(IO_FxR_SUC2.IO_CCSV.bitc.POCS4)
#define	FxR_SUC2_CCSV_POCS5    	(IO_FxR_SUC2.IO_CCSV.bitc.POCS5)
#define	FxR_SUC2_CCEV			(IO_FxR_SUC2.IO_CCEV.word)
#define	FxR_SUC2_CCEV_PTAC    	(IO_FxR_SUC2.IO_CCEV.bit.PTAC)
#define	FxR_SUC2_CCEV_PTAC0    	(IO_FxR_SUC2.IO_CCEV.bitc.PTAC0)
#define	FxR_SUC2_CCEV_PTAC1    	(IO_FxR_SUC2.IO_CCEV.bitc.PTAC1)
#define	FxR_SUC2_CCEV_PTAC2    	(IO_FxR_SUC2.IO_CCEV.bitc.PTAC2)
#define	FxR_SUC2_CCEV_PTAC3    	(IO_FxR_SUC2.IO_CCEV.bitc.PTAC3)
#define	FxR_SUC2_CCEV_PTAC4    	(IO_FxR_SUC2.IO_CCEV.bitc.PTAC4)
#define	FxR_SUC2_CCEV_ERRM    	(IO_FxR_SUC2.IO_CCEV.bit.ERRM)
#define	FxR_SUC2_CCEV_ERRM0    	(IO_FxR_SUC2.IO_CCEV.bitc.ERRM0)
#define	FxR_SUC2_CCEV_ERRM1    	(IO_FxR_SUC2.IO_CCEV.bitc.ERRM1)
#define	FxR_SUC2_CCEV_CCFC    	(IO_FxR_SUC2.IO_CCEV.bit.CCFC)
#define	FxR_SUC2_CCEV_CCFC0    	(IO_FxR_SUC2.IO_CCEV.bitc.CCFC0)
#define	FxR_SUC2_CCEV_CCFC1    	(IO_FxR_SUC2.IO_CCEV.bitc.CCFC1)
#define	FxR_SUC2_CCEV_CCFC2    	(IO_FxR_SUC2.IO_CCEV.bitc.CCFC2)
#define	FxR_SUC2_CCEV_CCFC3    	(IO_FxR_SUC2.IO_CCEV.bitc.CCFC3)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_FxR_GTU2,attr=IO,locate=0xD110
#endif

__IO_EXTENDED	struct {
	const union {
		__WORD	word;
		struct {
			__BYTE	RESV00:1;
			__BYTE	RESV01:1;
			__BYTE	RESV02:1;
			__BYTE	RESV03:1;
			__BYTE	RESV04:1;
			__WORD	SCCB:11;
			__BYTE	RESV06:1;
			__BYTE	RESV07:1;
			__BYTE	RESV08:1;
			__BYTE	RESV09:1;
			__BYTE	RESV010:1;
			__WORD	SCCA:11;
		} bit;
		struct {
			__BYTE	RESV00:1;
			__BYTE	RESV01:1;
			__BYTE	RESV02:1;
			__BYTE	RESV03:1;
			__BYTE	RESV04:1;
			__BYTE	SCCB10:1;
			__BYTE	SCCB9:1;
			__BYTE	SCCB8:1;
			__BYTE	SCCB7:1;
			__BYTE	SCCB6:1;
			__BYTE	SCCB5:1;
			__BYTE	SCCB4:1;
			__BYTE	SCCB3:1;
			__BYTE	SCCB2:1;
			__BYTE	SCCB1:1;
			__BYTE	SCCB0:1;
			__BYTE	RESV016:1;
			__BYTE	RESV017:1;
			__BYTE	RESV018:1;
			__BYTE	RESV019:1;
			__BYTE	RESV020:1;
			__BYTE	SCCA10:1;
			__BYTE	SCCA9:1;
			__BYTE	SCCA8:1;
			__BYTE	SCCA7:1;
			__BYTE	SCCA6:1;
			__BYTE	SCCA5:1;
			__BYTE	SCCA4:1;
			__BYTE	SCCA3:1;
			__BYTE	SCCA2:1;
			__BYTE	SCCA1:1;
			__BYTE	SCCA0:1;
		} bitc;
	} IO_SCV;
	const union {
		__WORD	word;
		struct {
			__BYTE	RESV40:1;
			__BYTE	RESV41:1;
			__BYTE	RESV42:1;
			__BYTE	RESV43:1;
			__BYTE	RESV44:1;
			__BYTE	RESV45:1;
			__BYTE	RESV46:1;
			__BYTE	RESV47:1;
			__BYTE	RESV48:1;
			__BYTE	RESV49:1;
			__BYTE	CCV:6;
			__BYTE	RESV411:1;
			__BYTE	RESV412:1;
			__WORD	MTV:14;
		} bit;
		struct {
			__BYTE	RESV40:1;
			__BYTE	RESV41:1;
			__BYTE	RESV42:1;
			__BYTE	RESV43:1;
			__BYTE	RESV44:1;
			__BYTE	RESV45:1;
			__BYTE	RESV46:1;
			__BYTE	RESV47:1;
			__BYTE	RESV48:1;
			__BYTE	RESV49:1;
			__BYTE	CCV5:1;
			__BYTE	CCV4:1;
			__BYTE	CCV3:1;
			__BYTE	CCV2:1;
			__BYTE	CCV1:1;
			__BYTE	CCV0:1;
			__BYTE	RESV416:1;
			__BYTE	RESV417:1;
			__BYTE	MTV13:1;
			__BYTE	MTV12:1;
			__BYTE	MTV11:1;
			__BYTE	MTV10:1;
			__BYTE	MTV9:1;
			__BYTE	MTV8:1;
			__BYTE	MTV7:1;
			__BYTE	MTV6:1;
			__BYTE	MTV5:1;
			__BYTE	MTV4:1;
			__BYTE	MTV3:1;
			__BYTE	MTV2:1;
			__BYTE	MTV1:1;
			__BYTE	MTV0:1;
		} bitc;
	} IO_MTCCV;
	const union {
		__WORD	word;
		struct {
			__BYTE	RESV80:1;
			__BYTE	RESV81:1;
			__BYTE	RESV82:1;
			__BYTE	RESV83:1;
			__BYTE	RESV84:1;
			__BYTE	RESV85:1;
			__BYTE	RESV86:1;
			__BYTE	RESV87:1;
			__BYTE	RESV88:1;
			__BYTE	RESV89:1;
			__BYTE	RESV810:1;
			__BYTE	RESV811:1;
			__BYTE	RESV812:1;
			__BYTE	RESV813:1;
			__BYTE	RESV814:1;
			__BYTE	RESV815:1;
			__BYTE	RESV816:1;
			__BYTE	RESV817:1;
			__BYTE	RESV818:1;
			__BYTE	RESV819:1;
			__WORD	RCV:12;
		} bit;
		struct {
			__BYTE	RESV80:1;
			__BYTE	RESV81:1;
			__BYTE	RESV82:1;
			__BYTE	RESV83:1;
			__BYTE	RESV84:1;
			__BYTE	RESV85:1;
			__BYTE	RESV86:1;
			__BYTE	RESV87:1;
			__BYTE	RESV88:1;
			__BYTE	RESV89:1;
			__BYTE	RESV810:1;
			__BYTE	RESV811:1;
			__BYTE	RESV812:1;
			__BYTE	RESV813:1;
			__BYTE	RESV814:1;
			__BYTE	RESV815:1;
			__BYTE	RESV816:1;
			__BYTE	RESV817:1;
			__BYTE	RESV818:1;
			__BYTE	RESV819:1;
			__BYTE	RCV11:1;
			__BYTE	RCV10:1;
			__BYTE	RCV9:1;
			__BYTE	RCV8:1;
			__BYTE	RCV7:1;
			__BYTE	RCV6:1;
			__BYTE	RCV5:1;
			__BYTE	RCV4:1;
			__BYTE	RCV3:1;
			__BYTE	RCV2:1;
			__BYTE	RCV1:1;
			__BYTE	RCV0:1;
		} bitc;
	} IO_RCV;
	const union {
		__WORD	word;
		struct {
			__BYTE	RESV120:1;
			__BYTE	RESV121:1;
			__BYTE	RESV122:1;
			__BYTE	RESV123:1;
			__BYTE	RESV124:1;
			__BYTE	RESV125:1;
			__BYTE	RESV126:1;
			__BYTE	RESV127:1;
			__BYTE	RESV128:1;
			__BYTE	RESV129:1;
			__BYTE	RESV1210:1;
			__BYTE	RESV1211:1;
			__BYTE	RESV1212:1;
			__WORD	OCV:19;
		} bit;
		struct {
			__BYTE	RESV120:1;
			__BYTE	RESV121:1;
			__BYTE	RESV122:1;
			__BYTE	RESV123:1;
			__BYTE	RESV124:1;
			__BYTE	RESV125:1;
			__BYTE	RESV126:1;
			__BYTE	RESV127:1;
			__BYTE	RESV128:1;
			__BYTE	RESV129:1;
			__BYTE	RESV1210:1;
			__BYTE	RESV1211:1;
			__BYTE	RESV1212:1;
			__BYTE	OCV18:1;
			__BYTE	OCV17:1;
			__BYTE	OCV16:1;
			__BYTE	OCV15:1;
			__BYTE	OCV14:1;
			__BYTE	OCV13:1;
			__BYTE	OCV12:1;
			__BYTE	OCV11:1;
			__BYTE	OCV10:1;
			__BYTE	OCV9:1;
			__BYTE	OCV8:1;
			__BYTE	OCV7:1;
			__BYTE	OCV6:1;
			__BYTE	OCV5:1;
			__BYTE	OCV4:1;
			__BYTE	OCV3:1;
			__BYTE	OCV2:1;
			__BYTE	OCV1:1;
			__BYTE	OCV0:1;
		} bitc;
	} IO_OCV;
	const union {
		__WORD	word;
		struct {
			__BYTE	RESV160:1;
			__BYTE	RESV161:1;
			__BYTE	RESV162:1;
			__BYTE	RESV163:1;
			__BYTE	RESV164:1;
			__BYTE	RESV165:1;
			__BYTE	RESV166:1;
			__BYTE	RESV167:1;
			__BYTE	RESV168:1;
			__BYTE	RESV169:1;
			__BYTE	RESV1610:1;
			__BYTE	RESV1611:1;
			__BYTE	RCLR:1;
			__BYTE	MRCS:1;
			__BYTE	OCLR:1;
			__BYTE	MOCS:1;
			__BYTE	VSBO:4;
			__BYTE	VSBE:4;
			__BYTE	VSAO:4;
			__BYTE	VSAE:4;
		} bit;
		struct {
			__BYTE	RESV160:1;
			__BYTE	RESV161:1;
			__BYTE	RESV162:1;
			__BYTE	RESV163:1;
			__BYTE	RESV164:1;
			__BYTE	RESV165:1;
			__BYTE	RESV166:1;
			__BYTE	RESV167:1;
			__BYTE	RESV168:1;
			__BYTE	RESV169:1;
			__BYTE	RESV1610:1;
			__BYTE	RESV1611:1;
			__BYTE	RCLR:1;
			__BYTE	MRCS:1;
			__BYTE	OCLR:1;
			__BYTE	MOCS:1;
			__BYTE	VSBO3:1;
			__BYTE	VSBO2:1;
			__BYTE	VSBO1:1;
			__BYTE	VSBO0:1;
			__BYTE	VSBE3:1;
			__BYTE	VSBE2:1;
			__BYTE	VSBE1:1;
			__BYTE	VSBE0:1;
			__BYTE	VSAO3:1;
			__BYTE	VSAO2:1;
			__BYTE	VSAO1:1;
			__BYTE	VSAO0:1;
			__BYTE	VSAE3:1;
			__BYTE	VSAE2:1;
			__BYTE	VSAE1:1;
			__BYTE	VSAE0:1;
		} bitc;
	} IO_SFS;
	const union {
		__WORD	word;
		struct {
			__BYTE	RESV200:1;
			__BYTE	RESV201:1;
			__BYTE	RESV202:1;
			__BYTE	RESV203:1;
			__BYTE	RESV204:1;
			__BYTE	RESV205:1;
			__BYTE	RESV206:1;
			__BYTE	RESV207:1;
			__BYTE	RESV208:1;
			__BYTE	RESV209:1;
			__BYTE	RESV2010:1;
			__BYTE	RESV2011:1;
			__BYTE	RESV2012:1;
			__BYTE	RESV2013:1;
			__BYTE	RESV2014:1;
			__BYTE	RESV2015:1;
			__BYTE	RESV2016:1;
			__BYTE	RESV2017:1;
			__BYTE	RESV2018:1;
			__BYTE	RESV2019:1;
			__BYTE	SBNB:1;
			__BYTE	SENB:1;
			__BYTE	SBNA:1;
			__BYTE	SENA:1;
			__BYTE	MTSB:1;
			__BYTE	MTSA:1;
			__BYTE	TCSB:1;
			__BYTE	SBSB:1;
			__BYTE	SESB:1;
			__BYTE	TCSA:1;
			__BYTE	SBSA:1;
			__BYTE	SESA:1;
		} bit;
		struct {
			__BYTE	RESV200:1;
			__BYTE	RESV201:1;
			__BYTE	RESV202:1;
			__BYTE	RESV203:1;
			__BYTE	RESV204:1;
			__BYTE	RESV205:1;
			__BYTE	RESV206:1;
			__BYTE	RESV207:1;
			__BYTE	RESV208:1;
			__BYTE	RESV209:1;
			__BYTE	RESV2010:1;
			__BYTE	RESV2011:1;
			__BYTE	RESV2012:1;
			__BYTE	RESV2013:1;
			__BYTE	RESV2014:1;
			__BYTE	RESV2015:1;
			__BYTE	RESV2016:1;
			__BYTE	RESV2017:1;
			__BYTE	RESV2018:1;
			__BYTE	RESV2019:1;
			__BYTE	SBNB:1;
			__BYTE	SENB:1;
			__BYTE	SBNA:1;
			__BYTE	SENA:1;
			__BYTE	MTSB:1;
			__BYTE	MTSA:1;
			__BYTE	TCSB:1;
			__BYTE	SBSB:1;
			__BYTE	SESB:1;
			__BYTE	TCSA:1;
			__BYTE	SBSA:1;
			__BYTE	SESA:1;
		} bitc;
	} IO_SWNIT;
	union {
		__WORD	word;
		struct {
			__BYTE	RESV240:1;
			__BYTE	RESV241:1;
			__BYTE	RESV242:1;
			__BYTE	RESV243:1;
			__BYTE	RESV244:1;
			__BYTE	RESV245:1;
			__BYTE	RESV246:1;
			__BYTE	RESV247:1;
			__BYTE	RESV248:1;
			__BYTE	RESV249:1;
			__BYTE	RESV2410:1;
			__BYTE	RESV2411:1;
			__BYTE	RESV2412:1;
			__BYTE	RESV2413:1;
			__BYTE	RESV2414:1;
			__BYTE	RESV2415:1;
			__BYTE	RESV2416:1;
			__BYTE	RESV2417:1;
			__BYTE	RESV2418:1;
			__BYTE	SBVB:1;
			__BYTE	CIB:1;
			__BYTE	CEDB:1;
			__BYTE	SEDB:1;
			__BYTE	VFRB:1;
			__BYTE	RESV2424:1;
			__BYTE	RESV2425:1;
			__BYTE	RESV2426:1;
			__BYTE	SBVA:1;
			__BYTE	CIA:1;
			__BYTE	CEDA:1;
			__BYTE	SEDA:1;
			__BYTE	VFRA:1;
		} bit;
		struct {
			__BYTE	RESV240:1;
			__BYTE	RESV241:1;
			__BYTE	RESV242:1;
			__BYTE	RESV243:1;
			__BYTE	RESV244:1;
			__BYTE	RESV245:1;
			__BYTE	RESV246:1;
			__BYTE	RESV247:1;
			__BYTE	RESV248:1;
			__BYTE	RESV249:1;
			__BYTE	RESV2410:1;
			__BYTE	RESV2411:1;
			__BYTE	RESV2412:1;
			__BYTE	RESV2413:1;
			__BYTE	RESV2414:1;
			__BYTE	RESV2415:1;
			__BYTE	RESV2416:1;
			__BYTE	RESV2417:1;
			__BYTE	RESV2418:1;
			__BYTE	SBVB:1;
			__BYTE	CIB:1;
			__BYTE	CEDB:1;
			__BYTE	SEDB:1;
			__BYTE	VFRB:1;
			__BYTE	RESV2424:1;
			__BYTE	RESV2425:1;
			__BYTE	RESV2426:1;
			__BYTE	SBVA:1;
			__BYTE	CIA:1;
			__BYTE	CEDA:1;
			__BYTE	SEDA:1;
			__BYTE	VFRA:1;
		} bitc;
	} IO_ACS;
	__WORD	IO_RESV1;
	union {
		__WORD	word;
		struct {
			__BYTE	RESV320:1;
			__BYTE	RESV321:1;
			__BYTE	RESV322:1;
			__BYTE	RESV323:1;
			__BYTE	RESV324:1;
			__BYTE	RESV325:1;
			__BYTE	RESV326:1;
			__BYTE	RESV327:1;
			__BYTE	RESV328:1;
			__BYTE	RESV329:1;
			__BYTE	RESV3210:1;
			__BYTE	RESV3211:1;
			__BYTE	RESV3212:1;
			__BYTE	RESV3213:1;
			__BYTE	RESV3214:1;
			__BYTE	RESV3215:1;
			__BYTE	RXEB:1;
			__BYTE	RXEA:1;
			__BYTE	RESV3218:1;
			__BYTE	RESV3219:1;
			__BYTE	RESV3220:1;
			__BYTE	RESV3221:1;
			__WORD	EID:10;
		} bit;
		struct {
			__BYTE	RESV320:1;
			__BYTE	RESV321:1;
			__BYTE	RESV322:1;
			__BYTE	RESV323:1;
			__BYTE	RESV324:1;
			__BYTE	RESV325:1;
			__BYTE	RESV326:1;
			__BYTE	RESV327:1;
			__BYTE	RESV328:1;
			__BYTE	RESV329:1;
			__BYTE	RESV3210:1;
			__BYTE	RESV3211:1;
			__BYTE	RESV3212:1;
			__BYTE	RESV3213:1;
			__BYTE	RESV3214:1;
			__BYTE	RESV3215:1;
			__BYTE	RXEB:1;
			__BYTE	RXEA:1;
			__BYTE	RESV3218:1;
			__BYTE	RESV3219:1;
			__BYTE	RESV3220:1;
			__BYTE	RESV3221:1;
			__BYTE	EID9:1;
			__BYTE	EID8:1;
			__BYTE	EID7:1;
			__BYTE	EID6:1;
			__BYTE	EID5:1;
			__BYTE	EID4:1;
			__BYTE	EID3:1;
			__BYTE	EID2:1;
			__BYTE	EID1:1;
			__BYTE	EID0:1;
		} bitc;
	} IO_ESID[CONSTANT_15];
	__WORD	IO_RESV2;
	union {
		__WORD	word;
		struct {
			__BYTE	RESV960:1;
			__BYTE	RESV961:1;
			__BYTE	RESV962:1;
			__BYTE	RESV963:1;
			__BYTE	RESV964:1;
			__BYTE	RESV965:1;
			__BYTE	RESV966:1;
			__BYTE	RESV967:1;
			__BYTE	RESV968:1;
			__BYTE	RESV969:1;
			__BYTE	RESV9610:1;
			__BYTE	RESV9611:1;
			__BYTE	RESV9612:1;
			__BYTE	RESV9613:1;
			__BYTE	RESV9614:1;
			__BYTE	RESV9615:1;
			__BYTE	RXOB:1;
			__BYTE	RXOA:1;
			__BYTE	RESV9618:1;
			__BYTE	RESV9619:1;
			__BYTE	RESV9620:1;
			__BYTE	RESV9621:1;
			__WORD	OID:10;
		} bit;
		struct {
			__BYTE	RESV960:1;
			__BYTE	RESV961:1;
			__BYTE	RESV962:1;
			__BYTE	RESV963:1;
			__BYTE	RESV964:1;
			__BYTE	RESV965:1;
			__BYTE	RESV966:1;
			__BYTE	RESV967:1;
			__BYTE	RESV968:1;
			__BYTE	RESV969:1;
			__BYTE	RESV9610:1;
			__BYTE	RESV9611:1;
			__BYTE	RESV9612:1;
			__BYTE	RESV9613:1;
			__BYTE	RESV9614:1;
			__BYTE	RESV9615:1;
			__BYTE	RXOB:1;
			__BYTE	RXOA:1;
			__BYTE	RESV9618:1;
			__BYTE	RESV9619:1;
			__BYTE	RESV9620:1;
			__BYTE	RESV9621:1;
			__BYTE	OID9:1;
			__BYTE	OID8:1;
			__BYTE	OID7:1;
			__BYTE	OID6:1;
			__BYTE	OID5:1;
			__BYTE	OID4:1;
			__BYTE	OID3:1;
			__BYTE	OID2:1;
			__BYTE	OID1:1;
			__BYTE	OID0:1;
		} bitc;
	} IO_OSID[CONSTANT_15];
} IO_FxR_GTU2;

#define	FxR_GTU2_SCV			(IO_FxR_GTU2.IO_SCV.word)
#define	FxR_GTU2_SCV_SCCB    	(IO_FxR_GTU2.IO_SCV.bit.SCCB)
#define	FxR_GTU2_SCV_SCCB0    	(IO_FxR_GTU2.IO_SCV.bitc.SCCB0)
#define	FxR_GTU2_SCV_SCCB1    	(IO_FxR_GTU2.IO_SCV.bitc.SCCB1)
#define	FxR_GTU2_SCV_SCCB2    	(IO_FxR_GTU2.IO_SCV.bitc.SCCB2)
#define	FxR_GTU2_SCV_SCCB3    	(IO_FxR_GTU2.IO_SCV.bitc.SCCB3)
#define	FxR_GTU2_SCV_SCCB4    	(IO_FxR_GTU2.IO_SCV.bitc.SCCB4)
#define	FxR_GTU2_SCV_SCCB5    	(IO_FxR_GTU2.IO_SCV.bitc.SCCB5)
#define	FxR_GTU2_SCV_SCCB6    	(IO_FxR_GTU2.IO_SCV.bitc.SCCB6)
#define	FxR_GTU2_SCV_SCCB7    	(IO_FxR_GTU2.IO_SCV.bitc.SCCB7)
#define	FxR_GTU2_SCV_SCCB8    	(IO_FxR_GTU2.IO_SCV.bitc.SCCB8)
#define	FxR_GTU2_SCV_SCCB9    	(IO_FxR_GTU2.IO_SCV.bitc.SCCB9)
#define	FxR_GTU2_SCV_SCCB10    	(IO_FxR_GTU2.IO_SCV.bitc.SCCB10)
#define	FxR_GTU2_SCV_SCCA    	(IO_FxR_GTU2.IO_SCV.bit.SCCA)
#define	FxR_GTU2_SCV_SCCA0    	(IO_FxR_GTU2.IO_SCV.bitc.SCCA0)
#define	FxR_GTU2_SCV_SCCA1    	(IO_FxR_GTU2.IO_SCV.bitc.SCCA1)
#define	FxR_GTU2_SCV_SCCA2    	(IO_FxR_GTU2.IO_SCV.bitc.SCCA2)
#define	FxR_GTU2_SCV_SCCA3    	(IO_FxR_GTU2.IO_SCV.bitc.SCCA3)
#define	FxR_GTU2_SCV_SCCA4    	(IO_FxR_GTU2.IO_SCV.bitc.SCCA4)
#define	FxR_GTU2_SCV_SCCA5    	(IO_FxR_GTU2.IO_SCV.bitc.SCCA5)
#define	FxR_GTU2_SCV_SCCA6    	(IO_FxR_GTU2.IO_SCV.bitc.SCCA6)
#define	FxR_GTU2_SCV_SCCA7    	(IO_FxR_GTU2.IO_SCV.bitc.SCCA7)
#define	FxR_GTU2_SCV_SCCA8    	(IO_FxR_GTU2.IO_SCV.bitc.SCCA8)
#define	FxR_GTU2_SCV_SCCA9    	(IO_FxR_GTU2.IO_SCV.bitc.SCCA9)
#define	FxR_GTU2_SCV_SCCA10    	(IO_FxR_GTU2.IO_SCV.bitc.SCCA10)
#define	FxR_GTU2_MTCCV			(IO_FxR_GTU2.IO_MTCCV.word)
#define	FxR_GTU2_MTCCV_CCV    	(IO_FxR_GTU2.IO_MTCCV.bit.CCV)
#define	FxR_GTU2_MTCCV_CCV0    	(IO_FxR_GTU2.IO_MTCCV.bitc.CCV0)
#define	FxR_GTU2_MTCCV_CCV1    	(IO_FxR_GTU2.IO_MTCCV.bitc.CCV1)
#define	FxR_GTU2_MTCCV_CCV2    	(IO_FxR_GTU2.IO_MTCCV.bitc.CCV2)
#define	FxR_GTU2_MTCCV_CCV3    	(IO_FxR_GTU2.IO_MTCCV.bitc.CCV3)
#define	FxR_GTU2_MTCCV_CCV4    	(IO_FxR_GTU2.IO_MTCCV.bitc.CCV4)
#define	FxR_GTU2_MTCCV_CCV5    	(IO_FxR_GTU2.IO_MTCCV.bitc.CCV5)
#define	FxR_GTU2_MTCCV_MTV    	(IO_FxR_GTU2.IO_MTCCV.bit.MTV)
#define	FxR_GTU2_MTCCV_MTV0    	(IO_FxR_GTU2.IO_MTCCV.bitc.MTV0)
#define	FxR_GTU2_MTCCV_MTV1    	(IO_FxR_GTU2.IO_MTCCV.bitc.MTV1)
#define	FxR_GTU2_MTCCV_MTV2    	(IO_FxR_GTU2.IO_MTCCV.bitc.MTV2)
#define	FxR_GTU2_MTCCV_MTV3    	(IO_FxR_GTU2.IO_MTCCV.bitc.MTV3)
#define	FxR_GTU2_MTCCV_MTV4    	(IO_FxR_GTU2.IO_MTCCV.bitc.MTV4)
#define	FxR_GTU2_MTCCV_MTV5    	(IO_FxR_GTU2.IO_MTCCV.bitc.MTV5)
#define	FxR_GTU2_MTCCV_MTV6    	(IO_FxR_GTU2.IO_MTCCV.bitc.MTV6)
#define	FxR_GTU2_MTCCV_MTV7    	(IO_FxR_GTU2.IO_MTCCV.bitc.MTV7)
#define	FxR_GTU2_MTCCV_MTV8    	(IO_FxR_GTU2.IO_MTCCV.bitc.MTV8)
#define	FxR_GTU2_MTCCV_MTV9    	(IO_FxR_GTU2.IO_MTCCV.bitc.MTV9)
#define	FxR_GTU2_MTCCV_MTV10    	(IO_FxR_GTU2.IO_MTCCV.bitc.MTV10)
#define	FxR_GTU2_MTCCV_MTV11    	(IO_FxR_GTU2.IO_MTCCV.bitc.MTV11)
#define	FxR_GTU2_MTCCV_MTV12    	(IO_FxR_GTU2.IO_MTCCV.bitc.MTV12)
#define	FxR_GTU2_MTCCV_MTV13    	(IO_FxR_GTU2.IO_MTCCV.bitc.MTV13)
#define	FxR_GTU2_RCV			(IO_FxR_GTU2.IO_RCV.word)
#define	FxR_GTU2_RCV_RCV    	(IO_FxR_GTU2.IO_RCV.bit.RCV)
#define	FxR_GTU2_RCV_RCV0    	(IO_FxR_GTU2.IO_RCV.bitc.RCV0)
#define	FxR_GTU2_RCV_RCV1    	(IO_FxR_GTU2.IO_RCV.bitc.RCV1)
#define	FxR_GTU2_RCV_RCV2    	(IO_FxR_GTU2.IO_RCV.bitc.RCV2)
#define	FxR_GTU2_RCV_RCV3    	(IO_FxR_GTU2.IO_RCV.bitc.RCV3)
#define	FxR_GTU2_RCV_RCV4    	(IO_FxR_GTU2.IO_RCV.bitc.RCV4)
#define	FxR_GTU2_RCV_RCV5    	(IO_FxR_GTU2.IO_RCV.bitc.RCV5)
#define	FxR_GTU2_RCV_RCV6    	(IO_FxR_GTU2.IO_RCV.bitc.RCV6)
#define	FxR_GTU2_RCV_RCV7    	(IO_FxR_GTU2.IO_RCV.bitc.RCV7)
#define	FxR_GTU2_RCV_RCV8    	(IO_FxR_GTU2.IO_RCV.bitc.RCV8)
#define	FxR_GTU2_RCV_RCV9    	(IO_FxR_GTU2.IO_RCV.bitc.RCV9)
#define	FxR_GTU2_RCV_RCV10    	(IO_FxR_GTU2.IO_RCV.bitc.RCV10)
#define	FxR_GTU2_RCV_RCV11    	(IO_FxR_GTU2.IO_RCV.bitc.RCV11)
#define	FxR_GTU2_OCV			(IO_FxR_GTU2.IO_OCV.word)
#define	FxR_GTU2_OCV_OCV    	(IO_FxR_GTU2.IO_OCV.bit.OCV)
#define	FxR_GTU2_OCV_OCV0    	(IO_FxR_GTU2.IO_OCV.bitc.OCV0)
#define	FxR_GTU2_OCV_OCV1    	(IO_FxR_GTU2.IO_OCV.bitc.OCV1)
#define	FxR_GTU2_OCV_OCV2    	(IO_FxR_GTU2.IO_OCV.bitc.OCV2)
#define	FxR_GTU2_OCV_OCV3    	(IO_FxR_GTU2.IO_OCV.bitc.OCV3)
#define	FxR_GTU2_OCV_OCV4    	(IO_FxR_GTU2.IO_OCV.bitc.OCV4)
#define	FxR_GTU2_OCV_OCV5    	(IO_FxR_GTU2.IO_OCV.bitc.OCV5)
#define	FxR_GTU2_OCV_OCV6    	(IO_FxR_GTU2.IO_OCV.bitc.OCV6)
#define	FxR_GTU2_OCV_OCV7    	(IO_FxR_GTU2.IO_OCV.bitc.OCV7)
#define	FxR_GTU2_OCV_OCV8    	(IO_FxR_GTU2.IO_OCV.bitc.OCV8)
#define	FxR_GTU2_OCV_OCV9    	(IO_FxR_GTU2.IO_OCV.bitc.OCV9)
#define	FxR_GTU2_OCV_OCV10    	(IO_FxR_GTU2.IO_OCV.bitc.OCV10)
#define	FxR_GTU2_OCV_OCV11    	(IO_FxR_GTU2.IO_OCV.bitc.OCV11)
#define	FxR_GTU2_OCV_OCV12    	(IO_FxR_GTU2.IO_OCV.bitc.OCV12)
#define	FxR_GTU2_OCV_OCV13    	(IO_FxR_GTU2.IO_OCV.bitc.OCV13)
#define	FxR_GTU2_OCV_OCV14    	(IO_FxR_GTU2.IO_OCV.bitc.OCV14)
#define	FxR_GTU2_OCV_OCV15    	(IO_FxR_GTU2.IO_OCV.bitc.OCV15)
#define	FxR_GTU2_OCV_OCV16    	(IO_FxR_GTU2.IO_OCV.bitc.OCV16)
#define	FxR_GTU2_OCV_OCV17    	(IO_FxR_GTU2.IO_OCV.bitc.OCV17)
#define	FxR_GTU2_OCV_OCV18    	(IO_FxR_GTU2.IO_OCV.bitc.OCV18)
#define	FxR_GTU2_SFS			(IO_FxR_GTU2.IO_SFS.word)
#define	FxR_GTU2_SFS_RCLR    	(IO_FxR_GTU2.IO_SFS.bit.RCLR)
#define	FxR_GTU2_SFS_MRCS    	(IO_FxR_GTU2.IO_SFS.bit.MRCS)
#define	FxR_GTU2_SFS_OCLR    	(IO_FxR_GTU2.IO_SFS.bit.OCLR)
#define	FxR_GTU2_SFS_MOCS    	(IO_FxR_GTU2.IO_SFS.bit.MOCS)
#define	FxR_GTU2_SFS_VSBO    	(IO_FxR_GTU2.IO_SFS.bit.VSBO)
#define	FxR_GTU2_SFS_VSBO0    	(IO_FxR_GTU2.IO_SFS.bitc.VSBO0)
#define	FxR_GTU2_SFS_VSBO1    	(IO_FxR_GTU2.IO_SFS.bitc.VSBO1)
#define	FxR_GTU2_SFS_VSBO2    	(IO_FxR_GTU2.IO_SFS.bitc.VSBO2)
#define	FxR_GTU2_SFS_VSBO3    	(IO_FxR_GTU2.IO_SFS.bitc.VSBO3)
#define	FxR_GTU2_SFS_VSBE    	(IO_FxR_GTU2.IO_SFS.bit.VSBE)
#define	FxR_GTU2_SFS_VSBE0    	(IO_FxR_GTU2.IO_SFS.bitc.VSBE0)
#define	FxR_GTU2_SFS_VSBE1    	(IO_FxR_GTU2.IO_SFS.bitc.VSBE1)
#define	FxR_GTU2_SFS_VSBE2    	(IO_FxR_GTU2.IO_SFS.bitc.VSBE2)
#define	FxR_GTU2_SFS_VSBE3    	(IO_FxR_GTU2.IO_SFS.bitc.VSBE3)
#define	FxR_GTU2_SFS_VSAO    	(IO_FxR_GTU2.IO_SFS.bit.VSAO)
#define	FxR_GTU2_SFS_VSAO0    	(IO_FxR_GTU2.IO_SFS.bitc.VSAO0)
#define	FxR_GTU2_SFS_VSAO1    	(IO_FxR_GTU2.IO_SFS.bitc.VSAO1)
#define	FxR_GTU2_SFS_VSAO2    	(IO_FxR_GTU2.IO_SFS.bitc.VSAO2)
#define	FxR_GTU2_SFS_VSAO3    	(IO_FxR_GTU2.IO_SFS.bitc.VSAO3)
#define	FxR_GTU2_SFS_VSAE    	(IO_FxR_GTU2.IO_SFS.bit.VSAE)
#define	FxR_GTU2_SFS_VSAE0    	(IO_FxR_GTU2.IO_SFS.bitc.VSAE0)
#define	FxR_GTU2_SFS_VSAE1    	(IO_FxR_GTU2.IO_SFS.bitc.VSAE1)
#define	FxR_GTU2_SFS_VSAE2    	(IO_FxR_GTU2.IO_SFS.bitc.VSAE2)
#define	FxR_GTU2_SFS_VSAE3    	(IO_FxR_GTU2.IO_SFS.bitc.VSAE3)
#define	FxR_GTU2_SWNIT			(IO_FxR_GTU2.IO_SWNIT.word)
#define	FxR_GTU2_SWNIT_SBNB    	(IO_FxR_GTU2.IO_SWNIT.bit.SBNB)
#define	FxR_GTU2_SWNIT_SENB    	(IO_FxR_GTU2.IO_SWNIT.bit.SENB)
#define	FxR_GTU2_SWNIT_SBNA    	(IO_FxR_GTU2.IO_SWNIT.bit.SBNA)
#define	FxR_GTU2_SWNIT_SENA    	(IO_FxR_GTU2.IO_SWNIT.bit.SENA)
#define	FxR_GTU2_SWNIT_MTSB    	(IO_FxR_GTU2.IO_SWNIT.bit.MTSB)
#define	FxR_GTU2_SWNIT_MTSA    	(IO_FxR_GTU2.IO_SWNIT.bit.MTSA)
#define	FxR_GTU2_SWNIT_TCSB    	(IO_FxR_GTU2.IO_SWNIT.bit.TCSB)
#define	FxR_GTU2_SWNIT_SBSB    	(IO_FxR_GTU2.IO_SWNIT.bit.SBSB)
#define	FxR_GTU2_SWNIT_SESB    	(IO_FxR_GTU2.IO_SWNIT.bit.SESB)
#define	FxR_GTU2_SWNIT_TCSA    	(IO_FxR_GTU2.IO_SWNIT.bit.TCSA)
#define	FxR_GTU2_SWNIT_SBSA    	(IO_FxR_GTU2.IO_SWNIT.bit.SBSA)
#define	FxR_GTU2_SWNIT_SESA    	(IO_FxR_GTU2.IO_SWNIT.bit.SESA)
#define	FxR_GTU2_ACS			(IO_FxR_GTU2.IO_ACS.word)
#define	FxR_GTU2_ACS_SBVB    	(IO_FxR_GTU2.IO_ACS.bit.SBVB)
#define	FxR_GTU2_ACS_CIB    	(IO_FxR_GTU2.IO_ACS.bit.CIB)
#define	FxR_GTU2_ACS_CEDB    	(IO_FxR_GTU2.IO_ACS.bit.CEDB)
#define	FxR_GTU2_ACS_SEDB    	(IO_FxR_GTU2.IO_ACS.bit.SEDB)
#define	FxR_GTU2_ACS_VFRB    	(IO_FxR_GTU2.IO_ACS.bit.VFRB)
#define	FxR_GTU2_ACS_SBVA    	(IO_FxR_GTU2.IO_ACS.bit.SBVA)
#define	FxR_GTU2_ACS_CIA    	(IO_FxR_GTU2.IO_ACS.bit.CIA)
#define	FxR_GTU2_ACS_CEDA    	(IO_FxR_GTU2.IO_ACS.bit.CEDA)
#define	FxR_GTU2_ACS_SEDA    	(IO_FxR_GTU2.IO_ACS.bit.SEDA)
#define	FxR_GTU2_ACS_VFRA    	(IO_FxR_GTU2.IO_ACS.bit.VFRA)
#define	FxR_GTU2_ESID_0			(IO_FxR_GTU2.IO_ESID[CONSTANT_0].word)
#define	FxR_GTU2_ESID_0_RXEB    	(IO_FxR_GTU2.IO_ESID[CONSTANT_0].bit.RXEB)
#define	FxR_GTU2_ESID_0_RXEA    	(IO_FxR_GTU2.IO_ESID[CONSTANT_0].bit.RXEA)
#define	FxR_GTU2_ESID_0_EID    	(IO_FxR_GTU2.IO_ESID[CONSTANT_0].bit.EID)
#define	FxR_GTU2_ESID_1			(IO_FxR_GTU2.IO_ESID[CONSTANT_1].word)
#define	FxR_GTU2_ESID_1_RXEB    	(IO_FxR_GTU2.IO_ESID[CONSTANT_1].bit.RXEB)
#define	FxR_GTU2_ESID_1_RXEA    	(IO_FxR_GTU2.IO_ESID[CONSTANT_1].bit.RXEA)
#define	FxR_GTU2_ESID_1_EID    	(IO_FxR_GTU2.IO_ESID[CONSTANT_1].bit.EID)
#define	FxR_GTU2_ESID_2			(IO_FxR_GTU2.IO_ESID[CONSTANT_2].word)
#define	FxR_GTU2_ESID_2_RXEB    	(IO_FxR_GTU2.IO_ESID[CONSTANT_2].bit.RXEB)
#define	FxR_GTU2_ESID_2_RXEA    	(IO_FxR_GTU2.IO_ESID[CONSTANT_2].bit.RXEA)
#define	FxR_GTU2_ESID_2_EID    	(IO_FxR_GTU2.IO_ESID[CONSTANT_2].bit.EID)
#define	FxR_GTU2_ESID_3			(IO_FxR_GTU2.IO_ESID[CONSTANT_3].word)
#define	FxR_GTU2_ESID_3_RXEB    	(IO_FxR_GTU2.IO_ESID[CONSTANT_3].bit.RXEB)
#define	FxR_GTU2_ESID_3_RXEA    	(IO_FxR_GTU2.IO_ESID[CONSTANT_3].bit.RXEA)
#define	FxR_GTU2_ESID_3_EID    	(IO_FxR_GTU2.IO_ESID[CONSTANT_3].bit.EID)
#define	FxR_GTU2_ESID_4			(IO_FxR_GTU2.IO_ESID[CONSTANT_4].word)
#define	FxR_GTU2_ESID_4_RXEB    	(IO_FxR_GTU2.IO_ESID[CONSTANT_4].bit.RXEB)
#define	FxR_GTU2_ESID_4_RXEA    	(IO_FxR_GTU2.IO_ESID[CONSTANT_4].bit.RXEA)
#define	FxR_GTU2_ESID_4_EID    	(IO_FxR_GTU2.IO_ESID[CONSTANT_4].bit.EID)
#define	FxR_GTU2_ESID_5			(IO_FxR_GTU2.IO_ESID[CONSTANT_5].word)
#define	FxR_GTU2_ESID_5_RXEB    	(IO_FxR_GTU2.IO_ESID[CONSTANT_5].bit.RXEB)
#define	FxR_GTU2_ESID_5_RXEA    	(IO_FxR_GTU2.IO_ESID[CONSTANT_5].bit.RXEA)
#define	FxR_GTU2_ESID_5_EID    	(IO_FxR_GTU2.IO_ESID[CONSTANT_5].bit.EID)
#define	FxR_GTU2_ESID_6			(IO_FxR_GTU2.IO_ESID[CONSTANT_6].word)
#define	FxR_GTU2_ESID_6_RXEB    	(IO_FxR_GTU2.IO_ESID[CONSTANT_6].bit.RXEB)
#define	FxR_GTU2_ESID_6_RXEA    	(IO_FxR_GTU2.IO_ESID[CONSTANT_6].bit.RXEA)
#define	FxR_GTU2_ESID_6_EID    	(IO_FxR_GTU2.IO_ESID[CONSTANT_6].bit.EID)
#define	FxR_GTU2_ESID_7			(IO_FxR_GTU2.IO_ESID[CONSTANT_7].word)
#define	FxR_GTU2_ESID_7_RXEB    	(IO_FxR_GTU2.IO_ESID[CONSTANT_7].bit.RXEB)
#define	FxR_GTU2_ESID_7_RXEA    	(IO_FxR_GTU2.IO_ESID[CONSTANT_7].bit.RXEA)
#define	FxR_GTU2_ESID_7_EID    	(IO_FxR_GTU2.IO_ESID[CONSTANT_7].bit.EID)
#define	FxR_GTU2_ESID_8			(IO_FxR_GTU2.IO_ESID[CONSTANT_8].word)
#define	FxR_GTU2_ESID_8_RXEB    	(IO_FxR_GTU2.IO_ESID[CONSTANT_8].bit.RXEB)
#define	FxR_GTU2_ESID_8_RXEA    	(IO_FxR_GTU2.IO_ESID[CONSTANT_8].bit.RXEA)
#define	FxR_GTU2_ESID_8_EID    	(IO_FxR_GTU2.IO_ESID[CONSTANT_8].bit.EID)
#define	FxR_GTU2_ESID_9			(IO_FxR_GTU2.IO_ESID[CONSTANT_9].word)
#define	FxR_GTU2_ESID_9_RXEB    	(IO_FxR_GTU2.IO_ESID[CONSTANT_9].bit.RXEB)
#define	FxR_GTU2_ESID_9_RXEA    	(IO_FxR_GTU2.IO_ESID[CONSTANT_9].bit.RXEA)
#define	FxR_GTU2_ESID_9_EID    	(IO_FxR_GTU2.IO_ESID[CONSTANT_9].bit.EID)
#define	FxR_GTU2_ESID_10			(IO_FxR_GTU2.IO_ESID[CONSTANT_10].word)
#define	FxR_GTU2_ESID_10_RXEB    	(IO_FxR_GTU2.IO_ESID[CONSTANT_10].bit.RXEB)
#define	FxR_GTU2_ESID_10_RXEA    	(IO_FxR_GTU2.IO_ESID[CONSTANT_10].bit.RXEA)
#define	FxR_GTU2_ESID_10_EID    	(IO_FxR_GTU2.IO_ESID[CONSTANT_10].bit.EID)
#define	FxR_GTU2_ESID_11			(IO_FxR_GTU2.IO_ESID[CONSTANT_11].word)
#define	FxR_GTU2_ESID_11_RXEB    	(IO_FxR_GTU2.IO_ESID[CONSTANT_11].bit.RXEB)
#define	FxR_GTU2_ESID_11_RXEA    	(IO_FxR_GTU2.IO_ESID[CONSTANT_11].bit.RXEA)
#define	FxR_GTU2_ESID_11_EID    	(IO_FxR_GTU2.IO_ESID[CONSTANT_11].bit.EID)
#define	FxR_GTU2_ESID_12			(IO_FxR_GTU2.IO_ESID[CONSTANT_12].word)
#define	FxR_GTU2_ESID_12_RXEB    	(IO_FxR_GTU2.IO_ESID[CONSTANT_12].bit.RXEB)
#define	FxR_GTU2_ESID_12_RXEA    	(IO_FxR_GTU2.IO_ESID[CONSTANT_12].bit.RXEA)
#define	FxR_GTU2_ESID_12_EID    	(IO_FxR_GTU2.IO_ESID[CONSTANT_12].bit.EID)
#define	FxR_GTU2_ESID_13			(IO_FxR_GTU2.IO_ESID[CONSTANT_13].word)
#define	FxR_GTU2_ESID_13_RXEB    	(IO_FxR_GTU2.IO_ESID[CONSTANT_13].bit.RXEB)
#define	FxR_GTU2_ESID_13_RXEA    	(IO_FxR_GTU2.IO_ESID[CONSTANT_13].bit.RXEA)
#define	FxR_GTU2_ESID_13_EID    	(IO_FxR_GTU2.IO_ESID[CONSTANT_13].bit.EID)
#define	FxR_GTU2_ESID_14			(IO_FxR_GTU2.IO_ESID[CONSTANT_14].word)
#define	FxR_GTU2_ESID_14_RXEB    	(IO_FxR_GTU2.IO_ESID[CONSTANT_14].bit.RXEB)
#define	FxR_GTU2_ESID_14_RXEA    	(IO_FxR_GTU2.IO_ESID[CONSTANT_14].bit.RXEA)
#define	FxR_GTU2_ESID_14_EID    	(IO_FxR_GTU2.IO_ESID[CONSTANT_14].bit.EID)
#define	FxR_GTU2_OSID_0			(IO_FxR_GTU2.IO_OSID[CONSTANT_0].word)
#define	FxR_GTU2_OSID_0_RXOB    	(IO_FxR_GTU2.IO_OSID[CONSTANT_0].bit.RXOB)
#define	FxR_GTU2_OSID_0_RXOA    	(IO_FxR_GTU2.IO_OSID[CONSTANT_0].bit.RXOA)
#define	FxR_GTU2_OSID_0_OID    	(IO_FxR_GTU2.IO_OSID[CONSTANT_0].bit.OID)
#define	FxR_GTU2_OSID_1			(IO_FxR_GTU2.IO_OSID[CONSTANT_1].word)
#define	FxR_GTU2_OSID_1_RXOB    	(IO_FxR_GTU2.IO_OSID[CONSTANT_1].bit.RXOB)
#define	FxR_GTU2_OSID_1_RXOA    	(IO_FxR_GTU2.IO_OSID[CONSTANT_1].bit.RXOA)
#define	FxR_GTU2_OSID_1_OID    	(IO_FxR_GTU2.IO_OSID[CONSTANT_1].bit.OID)
#define	FxR_GTU2_OSID_2			(IO_FxR_GTU2.IO_OSID[CONSTANT_2].word)
#define	FxR_GTU2_OSID_2_RXOB    	(IO_FxR_GTU2.IO_OSID[CONSTANT_2].bit.RXOB)
#define	FxR_GTU2_OSID_2_RXOA    	(IO_FxR_GTU2.IO_OSID[CONSTANT_2].bit.RXOA)
#define	FxR_GTU2_OSID_2_OID    	(IO_FxR_GTU2.IO_OSID[CONSTANT_2].bit.OID)
#define	FxR_GTU2_OSID_3			(IO_FxR_GTU2.IO_OSID[CONSTANT_3].word)
#define	FxR_GTU2_OSID_3_RXOB    	(IO_FxR_GTU2.IO_OSID[CONSTANT_3].bit.RXOB)
#define	FxR_GTU2_OSID_3_RXOA    	(IO_FxR_GTU2.IO_OSID[CONSTANT_3].bit.RXOA)
#define	FxR_GTU2_OSID_3_OID    	(IO_FxR_GTU2.IO_OSID[CONSTANT_3].bit.OID)
#define	FxR_GTU2_OSID_4			(IO_FxR_GTU2.IO_OSID[CONSTANT_4].word)
#define	FxR_GTU2_OSID_4_RXOB    	(IO_FxR_GTU2.IO_OSID[CONSTANT_4].bit.RXOB)
#define	FxR_GTU2_OSID_4_RXOA    	(IO_FxR_GTU2.IO_OSID[CONSTANT_4].bit.RXOA)
#define	FxR_GTU2_OSID_4_OID    	(IO_FxR_GTU2.IO_OSID[CONSTANT_4].bit.OID)
#define	FxR_GTU2_OSID_5			(IO_FxR_GTU2.IO_OSID[CONSTANT_5].word)
#define	FxR_GTU2_OSID_5_RXOB    	(IO_FxR_GTU2.IO_OSID[CONSTANT_5].bit.RXOB)
#define	FxR_GTU2_OSID_5_RXOA    	(IO_FxR_GTU2.IO_OSID[CONSTANT_5].bit.RXOA)
#define	FxR_GTU2_OSID_5_OID    	(IO_FxR_GTU2.IO_OSID[CONSTANT_5].bit.OID)
#define	FxR_GTU2_OSID_6			(IO_FxR_GTU2.IO_OSID[CONSTANT_6].word)
#define	FxR_GTU2_OSID_6_RXOB    	(IO_FxR_GTU2.IO_OSID[CONSTANT_6].bit.RXOB)
#define	FxR_GTU2_OSID_6_RXOA    	(IO_FxR_GTU2.IO_OSID[CONSTANT_6].bit.RXOA)
#define	FxR_GTU2_OSID_6_OID    	(IO_FxR_GTU2.IO_OSID[CONSTANT_6].bit.OID)
#define	FxR_GTU2_OSID_7			(IO_FxR_GTU2.IO_OSID[CONSTANT_7].word)
#define	FxR_GTU2_OSID_7_RXOB    	(IO_FxR_GTU2.IO_OSID[CONSTANT_7].bit.RXOB)
#define	FxR_GTU2_OSID_7_RXOA    	(IO_FxR_GTU2.IO_OSID[CONSTANT_7].bit.RXOA)
#define	FxR_GTU2_OSID_7_OID    	(IO_FxR_GTU2.IO_OSID[CONSTANT_7].bit.OID)
#define	FxR_GTU2_OSID_8			(IO_FxR_GTU2.IO_OSID[CONSTANT_8].word)
#define	FxR_GTU2_OSID_8_RXOB    	(IO_FxR_GTU2.IO_OSID[CONSTANT_8].bit.RXOB)
#define	FxR_GTU2_OSID_8_RXOA    	(IO_FxR_GTU2.IO_OSID[CONSTANT_8].bit.RXOA)
#define	FxR_GTU2_OSID_8_OID    	(IO_FxR_GTU2.IO_OSID[CONSTANT_8].bit.OID)
#define	FxR_GTU2_OSID_9			(IO_FxR_GTU2.IO_OSID[CONSTANT_9].word)
#define	FxR_GTU2_OSID_9_RXOB    	(IO_FxR_GTU2.IO_OSID[CONSTANT_9].bit.RXOB)
#define	FxR_GTU2_OSID_9_RXOA    	(IO_FxR_GTU2.IO_OSID[CONSTANT_9].bit.RXOA)
#define	FxR_GTU2_OSID_9_OID    	(IO_FxR_GTU2.IO_OSID[CONSTANT_9].bit.OID)
#define	FxR_GTU2_OSID_10			(IO_FxR_GTU2.IO_OSID[CONSTANT_10].word)
#define	FxR_GTU2_OSID_10_RXOB    	(IO_FxR_GTU2.IO_OSID[CONSTANT_10].bit.RXOB)
#define	FxR_GTU2_OSID_10_RXOA    	(IO_FxR_GTU2.IO_OSID[CONSTANT_10].bit.RXOA)
#define	FxR_GTU2_OSID_10_OID    	(IO_FxR_GTU2.IO_OSID[CONSTANT_10].bit.OID)
#define	FxR_GTU2_OSID_11			(IO_FxR_GTU2.IO_OSID[CONSTANT_11].word)
#define	FxR_GTU2_OSID_11_RXOB    	(IO_FxR_GTU2.IO_OSID[CONSTANT_11].bit.RXOB)
#define	FxR_GTU2_OSID_11_RXOA    	(IO_FxR_GTU2.IO_OSID[CONSTANT_11].bit.RXOA)
#define	FxR_GTU2_OSID_11_OID    	(IO_FxR_GTU2.IO_OSID[CONSTANT_11].bit.OID)
#define	FxR_GTU2_OSID_12			(IO_FxR_GTU2.IO_OSID[CONSTANT_12].word)
#define	FxR_GTU2_OSID_12_RXOB    	(IO_FxR_GTU2.IO_OSID[CONSTANT_12].bit.RXOB)
#define	FxR_GTU2_OSID_12_RXOA    	(IO_FxR_GTU2.IO_OSID[CONSTANT_12].bit.RXOA)
#define	FxR_GTU2_OSID_12_OID    	(IO_FxR_GTU2.IO_OSID[CONSTANT_12].bit.OID)
#define	FxR_GTU2_OSID_13			(IO_FxR_GTU2.IO_OSID[CONSTANT_13].word)
#define	FxR_GTU2_OSID_13_RXOB    	(IO_FxR_GTU2.IO_OSID[CONSTANT_13].bit.RXOB)
#define	FxR_GTU2_OSID_13_RXOA    	(IO_FxR_GTU2.IO_OSID[CONSTANT_13].bit.RXOA)
#define	FxR_GTU2_OSID_13_OID    	(IO_FxR_GTU2.IO_OSID[CONSTANT_13].bit.OID)
#define	FxR_GTU2_OSID_14			(IO_FxR_GTU2.IO_OSID[CONSTANT_14].word)
#define	FxR_GTU2_OSID_14_RXOB    	(IO_FxR_GTU2.IO_OSID[CONSTANT_14].bit.RXOB)
#define	FxR_GTU2_OSID_14_RXOA    	(IO_FxR_GTU2.IO_OSID[CONSTANT_14].bit.RXOA)
#define	FxR_GTU2_OSID_14_OID    	(IO_FxR_GTU2.IO_OSID[CONSTANT_14].bit.OID)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_FxR_NMV,attr=IO,locate=0xD1B0
#endif

__IO_EXTENDED	__WORD	IO_FxR_NMV[CONSTANT_3];
#define	_fxr_nmv		(IO_FxR_NMV)
#define	FxR_NMV	(_fxr_nmv)
#define	FxR_NMV0	(IO_FxR_NMV[CONSTANT_0])
#define	FxR_NMV1	(IO_FxR_NMV[CONSTANT_1])
#define	FxR_NMV2	(IO_FxR_NMV[CONSTANT_2])

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_FxR_MHD,attr=IO,locate=0xD300
#endif

__IO_EXTENDED	struct {
	union {
		__WORD	word;
		struct {
			__BYTE	RESV00:1;
			__BYTE	RESV01:1;
			__BYTE	RESV02:1;
			__BYTE	RESV03:1;
			__BYTE	RESV04:1;
			__BYTE	SPLM:1;
			__BYTE	SEC:2;
			__BYTE	LCB:8;
			__BYTE	FFB:8;
			__BYTE	FDB:8;
		} bit;
		struct {
			__BYTE	RESV00:1;
			__BYTE	RESV01:1;
			__BYTE	RESV02:1;
			__BYTE	RESV03:1;
			__BYTE	RESV04:1;
			__BYTE	SPLM:1;
			__BYTE	SEC1:1;
			__BYTE	SEC0:1;
			__BYTE	LCB7:1;
			__BYTE	LCB6:1;
			__BYTE	LCB5:1;
			__BYTE	LCB4:1;
			__BYTE	LCB3:1;
			__BYTE	LCB2:1;
			__BYTE	LCB1:1;
			__BYTE	LCB0:1;
			__BYTE	FFB7:1;
			__BYTE	FFB6:1;
			__BYTE	FFB5:1;
			__BYTE	FFB4:1;
			__BYTE	FFB3:1;
			__BYTE	FFB2:1;
			__BYTE	FFB1:1;
			__BYTE	FFB0:1;
			__BYTE	FDB7:1;
			__BYTE	FDB6:1;
			__BYTE	FDB5:1;
			__BYTE	FDB4:1;
			__BYTE	FDB3:1;
			__BYTE	FDB2:1;
			__BYTE	FDB1:1;
			__BYTE	FDB0:1;
		} bitc;
	} IO_MRC;
	union {
		__WORD	word;
		struct {
			__BYTE	RESV40:1;
			__BYTE	RESV41:1;
			__BYTE	RESV42:1;
			__BYTE	RESV43:1;
			__BYTE	RESV44:1;
			__BYTE	RESV45:1;
			__BYTE	RESV46:1;
			__BYTE	RNF:1;
			__BYTE	RSS:1;
			__BYTE	CYF:7;
			__BYTE	RESV410:1;
			__BYTE	RESV411:1;
			__BYTE	RESV412:1;
			__WORD	FID:11;
			__BYTE	CH:2;
		} bit;
		struct {
			__BYTE	RESV40:1;
			__BYTE	RESV41:1;
			__BYTE	RESV42:1;
			__BYTE	RESV43:1;
			__BYTE	RESV44:1;
			__BYTE	RESV45:1;
			__BYTE	RESV46:1;
			__BYTE	RNF:1;
			__BYTE	RSS:1;
			__BYTE	CYF6:1;
			__BYTE	CYF5:1;
			__BYTE	CYF4:1;
			__BYTE	CYF3:1;
			__BYTE	CYF2:1;
			__BYTE	CYF1:1;
			__BYTE	CYF0:1;
			__BYTE	RESV416:1;
			__BYTE	RESV417:1;
			__BYTE	RESV418:1;
			__BYTE	FID10:1;
			__BYTE	FID9:1;
			__BYTE	FID8:1;
			__BYTE	FID7:1;
			__BYTE	FID6:1;
			__BYTE	FID5:1;
			__BYTE	FID4:1;
			__BYTE	FID3:1;
			__BYTE	FID2:1;
			__BYTE	FID1:1;
			__BYTE	FID0:1;
			__BYTE	CH1:1;
			__BYTE	CH0:1;
		} bitc;
	} IO_FRF;
	union {
		__WORD	word;
		struct {
			__BYTE	RESV80:1;
			__BYTE	RESV81:1;
			__BYTE	RESV82:1;
			__BYTE	RESV83:1;
			__BYTE	RESV84:1;
			__BYTE	RESV85:1;
			__BYTE	RESV86:1;
			__BYTE	RESV87:1;
			__BYTE	RESV88:1;
			__BYTE	RESV89:1;
			__BYTE	RESV810:1;
			__BYTE	RESV811:1;
			__BYTE	RESV812:1;
			__BYTE	RESV813:1;
			__BYTE	RESV814:1;
			__BYTE	RESV815:1;
			__BYTE	RESV816:1;
			__BYTE	RESV817:1;
			__BYTE	RESV818:1;
			__WORD	MFID:11;
			__BYTE	RESV820:1;
			__BYTE	RESV821:1;
		} bit;
		struct {
			__BYTE	RESV80:1;
			__BYTE	RESV81:1;
			__BYTE	RESV82:1;
			__BYTE	RESV83:1;
			__BYTE	RESV84:1;
			__BYTE	RESV85:1;
			__BYTE	RESV86:1;
			__BYTE	RESV87:1;
			__BYTE	RESV88:1;
			__BYTE	RESV89:1;
			__BYTE	RESV810:1;
			__BYTE	RESV811:1;
			__BYTE	RESV812:1;
			__BYTE	RESV813:1;
			__BYTE	RESV814:1;
			__BYTE	RESV815:1;
			__BYTE	RESV816:1;
			__BYTE	RESV817:1;
			__BYTE	RESV818:1;
			__BYTE	MFID10:1;
			__BYTE	MFID9:1;
			__BYTE	MFID8:1;
			__BYTE	MFID7:1;
			__BYTE	MFID6:1;
			__BYTE	MFID5:1;
			__BYTE	MFID4:1;
			__BYTE	MFID3:1;
			__BYTE	MFID2:1;
			__BYTE	MFID1:1;
			__BYTE	MFID0:1;
			__BYTE	RESV830:1;
			__BYTE	RESV831:1;
		} bitc;
	} IO_FRFM;
	union {
		__WORD	word;
		struct {
			__BYTE	RESV120:1;
			__BYTE	RESV121:1;
			__BYTE	RESV122:1;
			__BYTE	RESV123:1;
			__BYTE	RESV124:1;
			__BYTE	RESV125:1;
			__BYTE	RESV126:1;
			__BYTE	RESV127:1;
			__BYTE	RESV128:1;
			__BYTE	RESV129:1;
			__BYTE	RESV1210:1;
			__BYTE	RESV1211:1;
			__BYTE	RESV1212:1;
			__BYTE	RESV1213:1;
			__BYTE	RESV1214:1;
			__BYTE	RESV1215:1;
			__BYTE	RESV1216:1;
			__BYTE	RESV1217:1;
			__BYTE	RESV1218:1;
			__BYTE	RESV1219:1;
			__BYTE	RESV1220:1;
			__BYTE	RESV1221:1;
			__BYTE	RESV1222:1;
			__BYTE	RESV1223:1;
			__BYTE	CL:8;
		} bit;
		struct {
			__BYTE	RESV120:1;
			__BYTE	RESV121:1;
			__BYTE	RESV122:1;
			__BYTE	RESV123:1;
			__BYTE	RESV124:1;
			__BYTE	RESV125:1;
			__BYTE	RESV126:1;
			__BYTE	RESV127:1;
			__BYTE	RESV128:1;
			__BYTE	RESV129:1;
			__BYTE	RESV1210:1;
			__BYTE	RESV1211:1;
			__BYTE	RESV1212:1;
			__BYTE	RESV1213:1;
			__BYTE	RESV1214:1;
			__BYTE	RESV1215:1;
			__BYTE	RESV1216:1;
			__BYTE	RESV1217:1;
			__BYTE	RESV1218:1;
			__BYTE	RESV1219:1;
			__BYTE	RESV1220:1;
			__BYTE	RESV1221:1;
			__BYTE	RESV1222:1;
			__BYTE	RESV1223:1;
			__BYTE	CL7:1;
			__BYTE	CL6:1;
			__BYTE	CL5:1;
			__BYTE	CL4:1;
			__BYTE	CL3:1;
			__BYTE	CL2:1;
			__BYTE	CL1:1;
			__BYTE	CL0:1;
		} bitc;
	} IO_FCL;
	union {
		__WORD	word;
		struct {
			__BYTE	RESV160:1;
			__BYTE	MBU:7;
			__BYTE	RESV162:1;
			__BYTE	MBT:7;
			__BYTE	RESV164:1;
			__BYTE	FMB:7;
			__BYTE	CRAM:1;
			__BYTE	MFMB:1;
			__BYTE	FMBD:1;
			__BYTE	PTBF2:1;
			__BYTE	PTBF1:1;
			__BYTE	PMR:1;
			__BYTE	POBF:1;
			__BYTE	PIBF:1;
		} bit;
		struct {
			__BYTE	RESV160:1;
			__BYTE	MBU6:1;
			__BYTE	MBU5:1;
			__BYTE	MBU4:1;
			__BYTE	MBU3:1;
			__BYTE	MBU2:1;
			__BYTE	MBU1:1;
			__BYTE	MBU0:1;
			__BYTE	RESV168:1;
			__BYTE	MBT6:1;
			__BYTE	MBT5:1;
			__BYTE	MBT4:1;
			__BYTE	MBT3:1;
			__BYTE	MBT2:1;
			__BYTE	MBT1:1;
			__BYTE	MBT0:1;
			__BYTE	RESV1616:1;
			__BYTE	FMB6:1;
			__BYTE	FMB5:1;
			__BYTE	FMB4:1;
			__BYTE	FMB3:1;
			__BYTE	FMB2:1;
			__BYTE	FMB1:1;
			__BYTE	FMB0:1;
			__BYTE	CRAM:1;
			__BYTE	MFMB:1;
			__BYTE	FMBD:1;
			__BYTE	PTBF2:1;
			__BYTE	PTBF1:1;
			__BYTE	PMR:1;
			__BYTE	POBF:1;
			__BYTE	PIBF:1;
		} bitc;
	} IO_MHDS;
	const union {
		__WORD	word;
		struct {
			__BYTE	RESV200:1;
			__BYTE	RESV201:1;
			__BYTE	RESV202:1;
			__BYTE	RESV203:1;
			__BYTE	RESV204:1;
			__WORD	LDTB:11;
			__BYTE	RESV206:1;
			__BYTE	RESV207:1;
			__BYTE	RESV208:1;
			__BYTE	RESV209:1;
			__BYTE	RESV2010:1;
			__WORD	LDTA:11;
		} bit;
		struct {
			__BYTE	RESV200:1;
			__BYTE	RESV201:1;
			__BYTE	RESV202:1;
			__BYTE	RESV203:1;
			__BYTE	RESV204:1;
			__BYTE	LDTB10:1;
			__BYTE	LDTB9:1;
			__BYTE	LDTB8:1;
			__BYTE	LDTB7:1;
			__BYTE	LDTB6:1;
			__BYTE	LDTB5:1;
			__BYTE	LDTB4:1;
			__BYTE	LDTB3:1;
			__BYTE	LDTB2:1;
			__BYTE	LDTB1:1;
			__BYTE	LDTB0:1;
			__BYTE	RESV2016:1;
			__BYTE	RESV2017:1;
			__BYTE	RESV2018:1;
			__BYTE	RESV2019:1;
			__BYTE	RESV2020:1;
			__BYTE	LDTA10:1;
			__BYTE	LDTA9:1;
			__BYTE	LDTA8:1;
			__BYTE	LDTA7:1;
			__BYTE	LDTA6:1;
			__BYTE	LDTA5:1;
			__BYTE	LDTA4:1;
			__BYTE	LDTA3:1;
			__BYTE	LDTA2:1;
			__BYTE	LDTA1:1;
			__BYTE	LDTA0:1;
		} bitc;
	} IO_LDTS;
	const union {
		__WORD	word;
		struct {
			__BYTE	RESV240:1;
			__BYTE	RESV241:1;
			__BYTE	RESV242:1;
			__BYTE	RESV243:1;
			__BYTE	RESV244:1;
			__BYTE	RESV245:1;
			__BYTE	RESV246:1;
			__BYTE	RESV247:1;
			__BYTE	RESV248:1;
			__BYTE	RESV249:1;
			__BYTE	RESV2410:1;
			__BYTE	RESV2411:1;
			__BYTE	RESV2412:1;
			__BYTE	RESV2413:1;
			__BYTE	RESV2414:1;
			__BYTE	RESV2415:1;
			__BYTE	RFFL:8;
			__BYTE	RESV2417:1;
			__BYTE	RESV2418:1;
			__BYTE	RESV2419:1;
			__BYTE	RESV2420:1;
			__BYTE	RESV2421:1;
			__BYTE	RFO:1;
			__BYTE	RFCL:1;
			__BYTE	RFNE:1;
		} bit;
		struct {
			__BYTE	RESV240:1;
			__BYTE	RESV241:1;
			__BYTE	RESV242:1;
			__BYTE	RESV243:1;
			__BYTE	RESV244:1;
			__BYTE	RESV245:1;
			__BYTE	RESV246:1;
			__BYTE	RESV247:1;
			__BYTE	RESV248:1;
			__BYTE	RESV249:1;
			__BYTE	RESV2410:1;
			__BYTE	RESV2411:1;
			__BYTE	RESV2412:1;
			__BYTE	RESV2413:1;
			__BYTE	RESV2414:1;
			__BYTE	RESV2415:1;
			__BYTE	RFFL7:1;
			__BYTE	RFFL6:1;
			__BYTE	RFFL5:1;
			__BYTE	RFFL4:1;
			__BYTE	RFFL3:1;
			__BYTE	RFFL2:1;
			__BYTE	RFFL1:1;
			__BYTE	RFFL0:1;
			__BYTE	RESV2424:1;
			__BYTE	RESV2425:1;
			__BYTE	RESV2426:1;
			__BYTE	RESV2427:1;
			__BYTE	RESV2428:1;
			__BYTE	RFO:1;
			__BYTE	RFCL:1;
			__BYTE	RFNE:1;
		} bitc;
	} IO_FSR;
	union {
		__WORD	word;
		struct {
			__BYTE	RESV280:1;
			__BYTE	RESV281:1;
			__BYTE	RESV282:1;
			__BYTE	RESV283:1;
			__BYTE	RESV284:1;
			__BYTE	RESV285:1;
			__BYTE	RESV286:1;
			__BYTE	RESV287:1;
			__BYTE	RESV288:1;
			__BYTE	RESV289:1;
			__BYTE	RESV2810:1;
			__BYTE	RESV2811:1;
			__BYTE	RESV2812:1;
			__BYTE	RESV2813:1;
			__BYTE	RESV2814:1;
			__BYTE	RESV2815:1;
			__BYTE	RESV2816:1;
			__BYTE	RESV2817:1;
			__BYTE	RESV2818:1;
			__BYTE	RESV2819:1;
			__BYTE	RESV2820:1;
			__BYTE	RESV2821:1;
			__BYTE	RESV2822:1;
			__BYTE	WAHP:1;
			__BYTE	RESV2824:1;
			__BYTE	RESV2825:1;
			__BYTE	TBFB:1;
			__BYTE	TBFA:1;
			__BYTE	FNFB:1;
			__BYTE	FNFA:1;
			__BYTE	SNUB:1;
			__BYTE	SNUA:1;
		} bit;
		struct {
			__BYTE	RESV280:1;
			__BYTE	RESV281:1;
			__BYTE	RESV282:1;
			__BYTE	RESV283:1;
			__BYTE	RESV284:1;
			__BYTE	RESV285:1;
			__BYTE	RESV286:1;
			__BYTE	RESV287:1;
			__BYTE	RESV288:1;
			__BYTE	RESV289:1;
			__BYTE	RESV2810:1;
			__BYTE	RESV2811:1;
			__BYTE	RESV2812:1;
			__BYTE	RESV2813:1;
			__BYTE	RESV2814:1;
			__BYTE	RESV2815:1;
			__BYTE	RESV2816:1;
			__BYTE	RESV2817:1;
			__BYTE	RESV2818:1;
			__BYTE	RESV2819:1;
			__BYTE	RESV2820:1;
			__BYTE	RESV2821:1;
			__BYTE	RESV2822:1;
			__BYTE	WAHP:1;
			__BYTE	RESV2824:1;
			__BYTE	RESV2825:1;
			__BYTE	TBFB:1;
			__BYTE	TBFA:1;
			__BYTE	FNFB:1;
			__BYTE	FNFA:1;
			__BYTE	SNUB:1;
			__BYTE	SNUA:1;
		} bitc;
	} IO_MHDF;
	const union {
		__WORD	word;
		struct {
			__BYTE	TXR31:1;
			__BYTE	TXR30:1;
			__BYTE	TXR29:1;
			__BYTE	TXR28:1;
			__BYTE	TXR27:1;
			__BYTE	TXR26:1;
			__BYTE	TXR25:1;
			__BYTE	TXR24:1;
			__BYTE	TXR23:1;
			__BYTE	TXR22:1;
			__BYTE	TXR21:1;
			__BYTE	TXR20:1;
			__BYTE	TXR19:1;
			__BYTE	TXR18:1;
			__BYTE	TXR17:1;
			__BYTE	TXR16:1;
			__BYTE	TXR15:1;
			__BYTE	TXR14:1;
			__BYTE	TXR13:1;
			__BYTE	TXR12:1;
			__BYTE	TXR11:1;
			__BYTE	TXR10:1;
			__BYTE	TXR9:1;
			__BYTE	TXR8:1;
			__BYTE	TXR7:1;
			__BYTE	TXR6:1;
			__BYTE	TXR5:1;
			__BYTE	TXR4:1;
			__BYTE	TXR3:1;
			__BYTE	TXR2:1;
			__BYTE	TXR1:1;
			__BYTE	TXR0:1;
		} bit;
		struct {
			__BYTE	TXR31:1;
			__BYTE	TXR30:1;
			__BYTE	TXR29:1;
			__BYTE	TXR28:1;
			__BYTE	TXR27:1;
			__BYTE	TXR26:1;
			__BYTE	TXR25:1;
			__BYTE	TXR24:1;
			__BYTE	TXR23:1;
			__BYTE	TXR22:1;
			__BYTE	TXR21:1;
			__BYTE	TXR20:1;
			__BYTE	TXR19:1;
			__BYTE	TXR18:1;
			__BYTE	TXR17:1;
			__BYTE	TXR16:1;
			__BYTE	TXR15:1;
			__BYTE	TXR14:1;
			__BYTE	TXR13:1;
			__BYTE	TXR12:1;
			__BYTE	TXR11:1;
			__BYTE	TXR10:1;
			__BYTE	TXR9:1;
			__BYTE	TXR8:1;
			__BYTE	TXR7:1;
			__BYTE	TXR6:1;
			__BYTE	TXR5:1;
			__BYTE	TXR4:1;
			__BYTE	TXR3:1;
			__BYTE	TXR2:1;
			__BYTE	TXR1:1;
			__BYTE	TXR0:1;
		} bitc;
	} IO_TXRQ1;
	const union {
		__WORD	word;
		struct {
			__BYTE	TXR63:1;
			__BYTE	TXR62:1;
			__BYTE	TXR61:1;
			__BYTE	TXR60:1;
			__BYTE	TXR59:1;
			__BYTE	TXR58:1;
			__BYTE	TXR57:1;
			__BYTE	TXR56:1;
			__BYTE	TXR55:1;
			__BYTE	TXR54:1;
			__BYTE	TXR53:1;
			__BYTE	TXR52:1;
			__BYTE	TXR51:1;
			__BYTE	TXR50:1;
			__BYTE	TXR49:1;
			__BYTE	TXR48:1;
			__BYTE	TXR47:1;
			__BYTE	TXR46:1;
			__BYTE	TXR45:1;
			__BYTE	TXR44:1;
			__BYTE	TXR43:1;
			__BYTE	TXR42:1;
			__BYTE	TXR41:1;
			__BYTE	TXR40:1;
			__BYTE	TXR39:1;
			__BYTE	TXR38:1;
			__BYTE	TXR37:1;
			__BYTE	TXR36:1;
			__BYTE	TXR35:1;
			__BYTE	TXR34:1;
			__BYTE	TXR33:1;
			__BYTE	TXR32:1;
		} bit;
		struct {
			__BYTE	TXR63:1;
			__BYTE	TXR62:1;
			__BYTE	TXR61:1;
			__BYTE	TXR60:1;
			__BYTE	TXR59:1;
			__BYTE	TXR58:1;
			__BYTE	TXR57:1;
			__BYTE	TXR56:1;
			__BYTE	TXR55:1;
			__BYTE	TXR54:1;
			__BYTE	TXR53:1;
			__BYTE	TXR52:1;
			__BYTE	TXR51:1;
			__BYTE	TXR50:1;
			__BYTE	TXR49:1;
			__BYTE	TXR48:1;
			__BYTE	TXR47:1;
			__BYTE	TXR46:1;
			__BYTE	TXR45:1;
			__BYTE	TXR44:1;
			__BYTE	TXR43:1;
			__BYTE	TXR42:1;
			__BYTE	TXR41:1;
			__BYTE	TXR40:1;
			__BYTE	TXR39:1;
			__BYTE	TXR38:1;
			__BYTE	TXR37:1;
			__BYTE	TXR36:1;
			__BYTE	TXR35:1;
			__BYTE	TXR34:1;
			__BYTE	TXR33:1;
			__BYTE	TXR32:1;
		} bitc;
	} IO_TXRQ2;
	const union {
		__WORD	word;
		struct {
			__BYTE	TXR95:1;
			__BYTE	TXR94:1;
			__BYTE	TXR93:1;
			__BYTE	TXR92:1;
			__BYTE	TXR91:1;
			__BYTE	TXR90:1;
			__BYTE	TXR89:1;
			__BYTE	TXR88:1;
			__BYTE	TXR87:1;
			__BYTE	TXR86:1;
			__BYTE	TXR85:1;
			__BYTE	TXR84:1;
			__BYTE	TXR83:1;
			__BYTE	TXR82:1;
			__BYTE	TXR81:1;
			__BYTE	TXR80:1;
			__BYTE	TXR79:1;
			__BYTE	TXR78:1;
			__BYTE	TXR77:1;
			__BYTE	TXR76:1;
			__BYTE	TXR75:1;
			__BYTE	TXR74:1;
			__BYTE	TXR73:1;
			__BYTE	TXR72:1;
			__BYTE	TXR71:1;
			__BYTE	TXR70:1;
			__BYTE	TXR69:1;
			__BYTE	TXR68:1;
			__BYTE	TXR67:1;
			__BYTE	TXR66:1;
			__BYTE	TXR65:1;
			__BYTE	TXR64:1;
		} bit;
		struct {
			__BYTE	TXR95:1;
			__BYTE	TXR94:1;
			__BYTE	TXR93:1;
			__BYTE	TXR92:1;
			__BYTE	TXR91:1;
			__BYTE	TXR90:1;
			__BYTE	TXR89:1;
			__BYTE	TXR88:1;
			__BYTE	TXR87:1;
			__BYTE	TXR86:1;
			__BYTE	TXR85:1;
			__BYTE	TXR84:1;
			__BYTE	TXR83:1;
			__BYTE	TXR82:1;
			__BYTE	TXR81:1;
			__BYTE	TXR80:1;
			__BYTE	TXR79:1;
			__BYTE	TXR78:1;
			__BYTE	TXR77:1;
			__BYTE	TXR76:1;
			__BYTE	TXR75:1;
			__BYTE	TXR74:1;
			__BYTE	TXR73:1;
			__BYTE	TXR72:1;
			__BYTE	TXR71:1;
			__BYTE	TXR70:1;
			__BYTE	TXR69:1;
			__BYTE	TXR68:1;
			__BYTE	TXR67:1;
			__BYTE	TXR66:1;
			__BYTE	TXR65:1;
			__BYTE	TXR64:1;
		} bitc;
	} IO_TXRQ3;
	const union {
		__WORD	word;
		struct {
			__BYTE	TXR127:1;
			__BYTE	TXR126:1;
			__BYTE	TXR125:1;
			__BYTE	TXR124:1;
			__BYTE	TXR123:1;
			__BYTE	TXR122:1;
			__BYTE	TXR121:1;
			__BYTE	TXR120:1;
			__BYTE	TXR119:1;
			__BYTE	TXR118:1;
			__BYTE	TXR117:1;
			__BYTE	TXR116:1;
			__BYTE	TXR115:1;
			__BYTE	TXR114:1;
			__BYTE	TXR113:1;
			__BYTE	TXR112:1;
			__BYTE	TXR111:1;
			__BYTE	TXR110:1;
			__BYTE	TXR109:1;
			__BYTE	TXR108:1;
			__BYTE	TXR107:1;
			__BYTE	TXR106:1;
			__BYTE	TXR105:1;
			__BYTE	TXR104:1;
			__BYTE	TXR103:1;
			__BYTE	TXR102:1;
			__BYTE	TXR101:1;
			__BYTE	TXR100:1;
			__BYTE	TXR99:1;
			__BYTE	TXR98:1;
			__BYTE	TXR97:1;
			__BYTE	TXR96:1;
		} bit;
		struct {
			__BYTE	TXR127:1;
			__BYTE	TXR126:1;
			__BYTE	TXR125:1;
			__BYTE	TXR124:1;
			__BYTE	TXR123:1;
			__BYTE	TXR122:1;
			__BYTE	TXR121:1;
			__BYTE	TXR120:1;
			__BYTE	TXR119:1;
			__BYTE	TXR118:1;
			__BYTE	TXR117:1;
			__BYTE	TXR116:1;
			__BYTE	TXR115:1;
			__BYTE	TXR114:1;
			__BYTE	TXR113:1;
			__BYTE	TXR112:1;
			__BYTE	TXR111:1;
			__BYTE	TXR110:1;
			__BYTE	TXR109:1;
			__BYTE	TXR108:1;
			__BYTE	TXR107:1;
			__BYTE	TXR106:1;
			__BYTE	TXR105:1;
			__BYTE	TXR104:1;
			__BYTE	TXR103:1;
			__BYTE	TXR102:1;
			__BYTE	TXR101:1;
			__BYTE	TXR100:1;
			__BYTE	TXR99:1;
			__BYTE	TXR98:1;
			__BYTE	TXR97:1;
			__BYTE	TXR96:1;
		} bitc;
	} IO_TXRQ4;
	const union {
		__WORD	word;
		struct {
			__BYTE	ND31:1;
			__BYTE	ND30:1;
			__BYTE	ND29:1;
			__BYTE	ND28:1;
			__BYTE	ND27:1;
			__BYTE	ND26:1;
			__BYTE	ND25:1;
			__BYTE	ND24:1;
			__BYTE	ND23:1;
			__BYTE	ND22:1;
			__BYTE	ND21:1;
			__BYTE	ND20:1;
			__BYTE	ND19:1;
			__BYTE	ND18:1;
			__BYTE	ND17:1;
			__BYTE	ND16:1;
			__BYTE	ND15:1;
			__BYTE	ND14:1;
			__BYTE	ND13:1;
			__BYTE	ND12:1;
			__BYTE	ND11:1;
			__BYTE	ND10:1;
			__BYTE	ND9:1;
			__BYTE	ND8:1;
			__BYTE	ND7:1;
			__BYTE	ND6:1;
			__BYTE	ND5:1;
			__BYTE	ND4:1;
			__BYTE	ND3:1;
			__BYTE	ND2:1;
			__BYTE	ND1:1;
			__BYTE	ND0:1;
		} bit;
		struct {
			__BYTE	ND31:1;
			__BYTE	ND30:1;
			__BYTE	ND29:1;
			__BYTE	ND28:1;
			__BYTE	ND27:1;
			__BYTE	ND26:1;
			__BYTE	ND25:1;
			__BYTE	ND24:1;
			__BYTE	ND23:1;
			__BYTE	ND22:1;
			__BYTE	ND21:1;
			__BYTE	ND20:1;
			__BYTE	ND19:1;
			__BYTE	ND18:1;
			__BYTE	ND17:1;
			__BYTE	ND16:1;
			__BYTE	ND15:1;
			__BYTE	ND14:1;
			__BYTE	ND13:1;
			__BYTE	ND12:1;
			__BYTE	ND11:1;
			__BYTE	ND10:1;
			__BYTE	ND9:1;
			__BYTE	ND8:1;
			__BYTE	ND7:1;
			__BYTE	ND6:1;
			__BYTE	ND5:1;
			__BYTE	ND4:1;
			__BYTE	ND3:1;
			__BYTE	ND2:1;
			__BYTE	ND1:1;
			__BYTE	ND0:1;
		} bitc;
	} IO_NDAT1;
	const union {
		__WORD	word;
		struct {
			__BYTE	ND63:1;
			__BYTE	ND62:1;
			__BYTE	ND61:1;
			__BYTE	ND60:1;
			__BYTE	ND59:1;
			__BYTE	ND58:1;
			__BYTE	ND57:1;
			__BYTE	ND56:1;
			__BYTE	ND55:1;
			__BYTE	ND54:1;
			__BYTE	ND53:1;
			__BYTE	ND52:1;
			__BYTE	ND51:1;
			__BYTE	ND50:1;
			__BYTE	ND49:1;
			__BYTE	ND48:1;
			__BYTE	ND47:1;
			__BYTE	ND46:1;
			__BYTE	ND45:1;
			__BYTE	ND44:1;
			__BYTE	ND43:1;
			__BYTE	ND42:1;
			__BYTE	ND41:1;
			__BYTE	ND40:1;
			__BYTE	ND39:1;
			__BYTE	ND38:1;
			__BYTE	ND37:1;
			__BYTE	ND36:1;
			__BYTE	ND35:1;
			__BYTE	ND34:1;
			__BYTE	ND33:1;
			__BYTE	ND32:1;
		} bit;
		struct {
			__BYTE	ND63:1;
			__BYTE	ND62:1;
			__BYTE	ND61:1;
			__BYTE	ND60:1;
			__BYTE	ND59:1;
			__BYTE	ND58:1;
			__BYTE	ND57:1;
			__BYTE	ND56:1;
			__BYTE	ND55:1;
			__BYTE	ND54:1;
			__BYTE	ND53:1;
			__BYTE	ND52:1;
			__BYTE	ND51:1;
			__BYTE	ND50:1;
			__BYTE	ND49:1;
			__BYTE	ND48:1;
			__BYTE	ND47:1;
			__BYTE	ND46:1;
			__BYTE	ND45:1;
			__BYTE	ND44:1;
			__BYTE	ND43:1;
			__BYTE	ND42:1;
			__BYTE	ND41:1;
			__BYTE	ND40:1;
			__BYTE	ND39:1;
			__BYTE	ND38:1;
			__BYTE	ND37:1;
			__BYTE	ND36:1;
			__BYTE	ND35:1;
			__BYTE	ND34:1;
			__BYTE	ND33:1;
			__BYTE	ND32:1;
		} bitc;
	} IO_NDAT2;
	const union {
		__WORD	word;
		struct {
			__BYTE	ND95:1;
			__BYTE	ND94:1;
			__BYTE	ND93:1;
			__BYTE	ND92:1;
			__BYTE	ND91:1;
			__BYTE	ND90:1;
			__BYTE	ND89:1;
			__BYTE	ND88:1;
			__BYTE	ND87:1;
			__BYTE	ND86:1;
			__BYTE	ND85:1;
			__BYTE	ND84:1;
			__BYTE	ND83:1;
			__BYTE	ND82:1;
			__BYTE	ND81:1;
			__BYTE	ND80:1;
			__BYTE	ND79:1;
			__BYTE	ND78:1;
			__BYTE	ND77:1;
			__BYTE	ND76:1;
			__BYTE	ND75:1;
			__BYTE	ND74:1;
			__BYTE	ND73:1;
			__BYTE	ND72:1;
			__BYTE	ND71:1;
			__BYTE	ND70:1;
			__BYTE	ND69:1;
			__BYTE	ND68:1;
			__BYTE	ND67:1;
			__BYTE	ND66:1;
			__BYTE	ND65:1;
			__BYTE	ND64:1;
		} bit;
		struct {
			__BYTE	ND95:1;
			__BYTE	ND94:1;
			__BYTE	ND93:1;
			__BYTE	ND92:1;
			__BYTE	ND91:1;
			__BYTE	ND90:1;
			__BYTE	ND89:1;
			__BYTE	ND88:1;
			__BYTE	ND87:1;
			__BYTE	ND86:1;
			__BYTE	ND85:1;
			__BYTE	ND84:1;
			__BYTE	ND83:1;
			__BYTE	ND82:1;
			__BYTE	ND81:1;
			__BYTE	ND80:1;
			__BYTE	ND79:1;
			__BYTE	ND78:1;
			__BYTE	ND77:1;
			__BYTE	ND76:1;
			__BYTE	ND75:1;
			__BYTE	ND74:1;
			__BYTE	ND73:1;
			__BYTE	ND72:1;
			__BYTE	ND71:1;
			__BYTE	ND70:1;
			__BYTE	ND69:1;
			__BYTE	ND68:1;
			__BYTE	ND67:1;
			__BYTE	ND66:1;
			__BYTE	ND65:1;
			__BYTE	ND64:1;
		} bitc;
	} IO_NDAT3;
	const union {
		__WORD	word;
		struct {
			__BYTE	ND127:1;
			__BYTE	ND126:1;
			__BYTE	ND125:1;
			__BYTE	ND124:1;
			__BYTE	ND123:1;
			__BYTE	ND122:1;
			__BYTE	ND121:1;
			__BYTE	ND120:1;
			__BYTE	ND119:1;
			__BYTE	ND118:1;
			__BYTE	ND117:1;
			__BYTE	ND116:1;
			__BYTE	ND115:1;
			__BYTE	ND114:1;
			__BYTE	ND113:1;
			__BYTE	ND112:1;
			__BYTE	ND111:1;
			__BYTE	ND110:1;
			__BYTE	ND109:1;
			__BYTE	ND108:1;
			__BYTE	ND107:1;
			__BYTE	ND106:1;
			__BYTE	ND105:1;
			__BYTE	ND104:1;
			__BYTE	ND103:1;
			__BYTE	ND102:1;
			__BYTE	ND101:1;
			__BYTE	ND100:1;
			__BYTE	ND99:1;
			__BYTE	ND98:1;
			__BYTE	ND97:1;
			__BYTE	ND96:1;
		} bit;
		struct {
			__BYTE	ND127:1;
			__BYTE	ND126:1;
			__BYTE	ND125:1;
			__BYTE	ND124:1;
			__BYTE	ND123:1;
			__BYTE	ND122:1;
			__BYTE	ND121:1;
			__BYTE	ND120:1;
			__BYTE	ND119:1;
			__BYTE	ND118:1;
			__BYTE	ND117:1;
			__BYTE	ND116:1;
			__BYTE	ND115:1;
			__BYTE	ND114:1;
			__BYTE	ND113:1;
			__BYTE	ND112:1;
			__BYTE	ND111:1;
			__BYTE	ND110:1;
			__BYTE	ND109:1;
			__BYTE	ND108:1;
			__BYTE	ND107:1;
			__BYTE	ND106:1;
			__BYTE	ND105:1;
			__BYTE	ND104:1;
			__BYTE	ND103:1;
			__BYTE	ND102:1;
			__BYTE	ND101:1;
			__BYTE	ND100:1;
			__BYTE	ND99:1;
			__BYTE	ND98:1;
			__BYTE	ND97:1;
			__BYTE	ND96:1;
		} bitc;
	} IO_NDAT4;
	const union {
		__WORD	word;
		struct {
			__BYTE	MBC31:1;
			__BYTE	MBC30:1;
			__BYTE	MBC29:1;
			__BYTE	MBC28:1;
			__BYTE	MBC27:1;
			__BYTE	MBC26:1;
			__BYTE	MBC25:1;
			__BYTE	MBC24:1;
			__BYTE	MBC23:1;
			__BYTE	MBC22:1;
			__BYTE	MBC21:1;
			__BYTE	MBC20:1;
			__BYTE	MBC19:1;
			__BYTE	MBC18:1;
			__BYTE	MBC17:1;
			__BYTE	MBC16:1;
			__BYTE	MBC15:1;
			__BYTE	MBC14:1;
			__BYTE	MBC13:1;
			__BYTE	MBC12:1;
			__BYTE	MBC11:1;
			__BYTE	MBC10:1;
			__BYTE	MBC9:1;
			__BYTE	MBC8:1;
			__BYTE	MBC7:1;
			__BYTE	MBC6:1;
			__BYTE	MBC5:1;
			__BYTE	MBC4:1;
			__BYTE	MBC3:1;
			__BYTE	MBC2:1;
			__BYTE	MBC1:1;
			__BYTE	MBC0:1;
		} bit;
		struct {
			__BYTE	MBC31:1;
			__BYTE	MBC30:1;
			__BYTE	MBC29:1;
			__BYTE	MBC28:1;
			__BYTE	MBC27:1;
			__BYTE	MBC26:1;
			__BYTE	MBC25:1;
			__BYTE	MBC24:1;
			__BYTE	MBC23:1;
			__BYTE	MBC22:1;
			__BYTE	MBC21:1;
			__BYTE	MBC20:1;
			__BYTE	MBC19:1;
			__BYTE	MBC18:1;
			__BYTE	MBC17:1;
			__BYTE	MBC16:1;
			__BYTE	MBC15:1;
			__BYTE	MBC14:1;
			__BYTE	MBC13:1;
			__BYTE	MBC12:1;
			__BYTE	MBC11:1;
			__BYTE	MBC10:1;
			__BYTE	MBC9:1;
			__BYTE	MBC8:1;
			__BYTE	MBC7:1;
			__BYTE	MBC6:1;
			__BYTE	MBC5:1;
			__BYTE	MBC4:1;
			__BYTE	MBC3:1;
			__BYTE	MBC2:1;
			__BYTE	MBC1:1;
			__BYTE	MBC0:1;
		} bitc;
	} IO_MBSC1;
	const union {
		__WORD	word;
		struct {
			__BYTE	MBC63:1;
			__BYTE	MBC62:1;
			__BYTE	MBC61:1;
			__BYTE	MBC60:1;
			__BYTE	MBC59:1;
			__BYTE	MBC58:1;
			__BYTE	MBC57:1;
			__BYTE	MBC56:1;
			__BYTE	MBC55:1;
			__BYTE	MBC54:1;
			__BYTE	MBC53:1;
			__BYTE	MBC52:1;
			__BYTE	MBC51:1;
			__BYTE	MBC50:1;
			__BYTE	MBC49:1;
			__BYTE	MBC48:1;
			__BYTE	MBC47:1;
			__BYTE	MBC46:1;
			__BYTE	MBC45:1;
			__BYTE	MBC44:1;
			__BYTE	MBC43:1;
			__BYTE	MBC42:1;
			__BYTE	MBC41:1;
			__BYTE	MBC40:1;
			__BYTE	MBC39:1;
			__BYTE	MBC38:1;
			__BYTE	MBC37:1;
			__BYTE	MBC36:1;
			__BYTE	MBC35:1;
			__BYTE	MBC34:1;
			__BYTE	MBC33:1;
			__BYTE	MBC32:1;
		} bit;
		struct {
			__BYTE	MBC63:1;
			__BYTE	MBC62:1;
			__BYTE	MBC61:1;
			__BYTE	MBC60:1;
			__BYTE	MBC59:1;
			__BYTE	MBC58:1;
			__BYTE	MBC57:1;
			__BYTE	MBC56:1;
			__BYTE	MBC55:1;
			__BYTE	MBC54:1;
			__BYTE	MBC53:1;
			__BYTE	MBC52:1;
			__BYTE	MBC51:1;
			__BYTE	MBC50:1;
			__BYTE	MBC49:1;
			__BYTE	MBC48:1;
			__BYTE	MBC47:1;
			__BYTE	MBC46:1;
			__BYTE	MBC45:1;
			__BYTE	MBC44:1;
			__BYTE	MBC43:1;
			__BYTE	MBC42:1;
			__BYTE	MBC41:1;
			__BYTE	MBC40:1;
			__BYTE	MBC39:1;
			__BYTE	MBC38:1;
			__BYTE	MBC37:1;
			__BYTE	MBC36:1;
			__BYTE	MBC35:1;
			__BYTE	MBC34:1;
			__BYTE	MBC33:1;
			__BYTE	MBC32:1;
		} bitc;
	} IO_MBSC2;
	const union {
		__WORD	word;
		struct {
			__BYTE	MBC95:1;
			__BYTE	MBC94:1;
			__BYTE	MBC93:1;
			__BYTE	MBC92:1;
			__BYTE	MBC91:1;
			__BYTE	MBC90:1;
			__BYTE	MBC89:1;
			__BYTE	MBC88:1;
			__BYTE	MBC87:1;
			__BYTE	MBC86:1;
			__BYTE	MBC85:1;
			__BYTE	MBC84:1;
			__BYTE	MBC83:1;
			__BYTE	MBC82:1;
			__BYTE	MBC81:1;
			__BYTE	MBC80:1;
			__BYTE	MBC79:1;
			__BYTE	MBC78:1;
			__BYTE	MBC77:1;
			__BYTE	MBC76:1;
			__BYTE	MBC75:1;
			__BYTE	MBC74:1;
			__BYTE	MBC73:1;
			__BYTE	MBC72:1;
			__BYTE	MBC71:1;
			__BYTE	MBC70:1;
			__BYTE	MBC69:1;
			__BYTE	MBC68:1;
			__BYTE	MBC67:1;
			__BYTE	MBC66:1;
			__BYTE	MBC65:1;
			__BYTE	MBC64:1;
		} bit;
		struct {
			__BYTE	MBC95:1;
			__BYTE	MBC94:1;
			__BYTE	MBC93:1;
			__BYTE	MBC92:1;
			__BYTE	MBC91:1;
			__BYTE	MBC90:1;
			__BYTE	MBC89:1;
			__BYTE	MBC88:1;
			__BYTE	MBC87:1;
			__BYTE	MBC86:1;
			__BYTE	MBC85:1;
			__BYTE	MBC84:1;
			__BYTE	MBC83:1;
			__BYTE	MBC82:1;
			__BYTE	MBC81:1;
			__BYTE	MBC80:1;
			__BYTE	MBC79:1;
			__BYTE	MBC78:1;
			__BYTE	MBC77:1;
			__BYTE	MBC76:1;
			__BYTE	MBC75:1;
			__BYTE	MBC74:1;
			__BYTE	MBC73:1;
			__BYTE	MBC72:1;
			__BYTE	MBC71:1;
			__BYTE	MBC70:1;
			__BYTE	MBC69:1;
			__BYTE	MBC68:1;
			__BYTE	MBC67:1;
			__BYTE	MBC66:1;
			__BYTE	MBC65:1;
			__BYTE	MBC64:1;
		} bitc;
	} IO_MBSC3;
	const union {
		__WORD	word;
		struct {
			__BYTE	MBC127:1;
			__BYTE	MBC126:1;
			__BYTE	MBC125:1;
			__BYTE	MBC124:1;
			__BYTE	MBC123:1;
			__BYTE	MBC122:1;
			__BYTE	MBC121:1;
			__BYTE	MBC120:1;
			__BYTE	MBC119:1;
			__BYTE	MBC118:1;
			__BYTE	MBC117:1;
			__BYTE	MBC116:1;
			__BYTE	MBC115:1;
			__BYTE	MBC114:1;
			__BYTE	MBC113:1;
			__BYTE	MBC112:1;
			__BYTE	MBC111:1;
			__BYTE	MBC110:1;
			__BYTE	MBC109:1;
			__BYTE	MBC108:1;
			__BYTE	MBC107:1;
			__BYTE	MBC106:1;
			__BYTE	MBC105:1;
			__BYTE	MBC104:1;
			__BYTE	MBC103:1;
			__BYTE	MBC102:1;
			__BYTE	MBC101:1;
			__BYTE	MBC100:1;
			__BYTE	MBC99:1;
			__BYTE	MBC98:1;
			__BYTE	MBC97:1;
			__BYTE	MBC96:1;
		} bit;
		struct {
			__BYTE	MBC127:1;
			__BYTE	MBC126:1;
			__BYTE	MBC125:1;
			__BYTE	MBC124:1;
			__BYTE	MBC123:1;
			__BYTE	MBC122:1;
			__BYTE	MBC121:1;
			__BYTE	MBC120:1;
			__BYTE	MBC119:1;
			__BYTE	MBC118:1;
			__BYTE	MBC117:1;
			__BYTE	MBC116:1;
			__BYTE	MBC115:1;
			__BYTE	MBC114:1;
			__BYTE	MBC113:1;
			__BYTE	MBC112:1;
			__BYTE	MBC111:1;
			__BYTE	MBC110:1;
			__BYTE	MBC109:1;
			__BYTE	MBC108:1;
			__BYTE	MBC107:1;
			__BYTE	MBC106:1;
			__BYTE	MBC105:1;
			__BYTE	MBC104:1;
			__BYTE	MBC103:1;
			__BYTE	MBC102:1;
			__BYTE	MBC101:1;
			__BYTE	MBC100:1;
			__BYTE	MBC99:1;
			__BYTE	MBC98:1;
			__BYTE	MBC97:1;
			__BYTE	MBC96:1;
		} bitc;
	} IO_MBSC4;
} IO_FxR_MHD;

#define	FxR_MHD_MRC			(IO_FxR_MHD.IO_MRC.word)
#define	FxR_MHD_MRC_SPLM    	(IO_FxR_MHD.IO_MRC.bit.SPLM)
#define	FxR_MHD_MRC_SEC    	(IO_FxR_MHD.IO_MRC.bit.SEC)
#define	FxR_MHD_MRC_SEC0    	(IO_FxR_MHD.IO_MRC.bitc.SEC0)
#define	FxR_MHD_MRC_SEC1    	(IO_FxR_MHD.IO_MRC.bitc.SEC1)
#define	FxR_MHD_MRC_LCB    	(IO_FxR_MHD.IO_MRC.bit.LCB)
#define	FxR_MHD_MRC_LCB0    	(IO_FxR_MHD.IO_MRC.bitc.LCB0)
#define	FxR_MHD_MRC_LCB1    	(IO_FxR_MHD.IO_MRC.bitc.LCB1)
#define	FxR_MHD_MRC_LCB2    	(IO_FxR_MHD.IO_MRC.bitc.LCB2)
#define	FxR_MHD_MRC_LCB3    	(IO_FxR_MHD.IO_MRC.bitc.LCB3)
#define	FxR_MHD_MRC_LCB4    	(IO_FxR_MHD.IO_MRC.bitc.LCB4)
#define	FxR_MHD_MRC_LCB5    	(IO_FxR_MHD.IO_MRC.bitc.LCB5)
#define	FxR_MHD_MRC_LCB6    	(IO_FxR_MHD.IO_MRC.bitc.LCB6)
#define	FxR_MHD_MRC_LCB7    	(IO_FxR_MHD.IO_MRC.bitc.LCB7)
#define	FxR_MHD_MRC_FFB    	(IO_FxR_MHD.IO_MRC.bit.FFB)
#define	FxR_MHD_MRC_FFB0    	(IO_FxR_MHD.IO_MRC.bitc.FFB0)
#define	FxR_MHD_MRC_FFB1    	(IO_FxR_MHD.IO_MRC.bitc.FFB1)
#define	FxR_MHD_MRC_FFB2    	(IO_FxR_MHD.IO_MRC.bitc.FFB2)
#define	FxR_MHD_MRC_FFB3    	(IO_FxR_MHD.IO_MRC.bitc.FFB3)
#define	FxR_MHD_MRC_FFB4    	(IO_FxR_MHD.IO_MRC.bitc.FFB4)
#define	FxR_MHD_MRC_FFB5    	(IO_FxR_MHD.IO_MRC.bitc.FFB5)
#define	FxR_MHD_MRC_FFB6    	(IO_FxR_MHD.IO_MRC.bitc.FFB6)
#define	FxR_MHD_MRC_FFB7    	(IO_FxR_MHD.IO_MRC.bitc.FFB7)
#define	FxR_MHD_MRC_FDB    	(IO_FxR_MHD.IO_MRC.bit.FDB)
#define	FxR_MHD_MRC_FDB0    	(IO_FxR_MHD.IO_MRC.bitc.FDB0)
#define	FxR_MHD_MRC_FDB1    	(IO_FxR_MHD.IO_MRC.bitc.FDB1)
#define	FxR_MHD_MRC_FDB2    	(IO_FxR_MHD.IO_MRC.bitc.FDB2)
#define	FxR_MHD_MRC_FDB3    	(IO_FxR_MHD.IO_MRC.bitc.FDB3)
#define	FxR_MHD_MRC_FDB4    	(IO_FxR_MHD.IO_MRC.bitc.FDB4)
#define	FxR_MHD_MRC_FDB5    	(IO_FxR_MHD.IO_MRC.bitc.FDB5)
#define	FxR_MHD_MRC_FDB6    	(IO_FxR_MHD.IO_MRC.bitc.FDB6)
#define	FxR_MHD_MRC_FDB7    	(IO_FxR_MHD.IO_MRC.bitc.FDB7)
#define	FxR_MHD_FRF			(IO_FxR_MHD.IO_FRF.word)
#define	FxR_MHD_FRF_RNF    	(IO_FxR_MHD.IO_FRF.bit.RNF)
#define	FxR_MHD_FRF_RSS    	(IO_FxR_MHD.IO_FRF.bit.RSS)
#define	FxR_MHD_FRF_CYF    	(IO_FxR_MHD.IO_FRF.bit.CYF)
#define	FxR_MHD_FRF_CYF0    	(IO_FxR_MHD.IO_FRF.bitc.CYF0)
#define	FxR_MHD_FRF_CYF1    	(IO_FxR_MHD.IO_FRF.bitc.CYF1)
#define	FxR_MHD_FRF_CYF2    	(IO_FxR_MHD.IO_FRF.bitc.CYF2)
#define	FxR_MHD_FRF_CYF3    	(IO_FxR_MHD.IO_FRF.bitc.CYF3)
#define	FxR_MHD_FRF_CYF4    	(IO_FxR_MHD.IO_FRF.bitc.CYF4)
#define	FxR_MHD_FRF_CYF5    	(IO_FxR_MHD.IO_FRF.bitc.CYF5)
#define	FxR_MHD_FRF_CYF6    	(IO_FxR_MHD.IO_FRF.bitc.CYF6)
#define	FxR_MHD_FRF_FID    	(IO_FxR_MHD.IO_FRF.bit.FID)
#define	FxR_MHD_FRF_FID0    	(IO_FxR_MHD.IO_FRF.bitc.FID0)
#define	FxR_MHD_FRF_FID1    	(IO_FxR_MHD.IO_FRF.bitc.FID1)
#define	FxR_MHD_FRF_FID2    	(IO_FxR_MHD.IO_FRF.bitc.FID2)
#define	FxR_MHD_FRF_FID3    	(IO_FxR_MHD.IO_FRF.bitc.FID3)
#define	FxR_MHD_FRF_FID4    	(IO_FxR_MHD.IO_FRF.bitc.FID4)
#define	FxR_MHD_FRF_FID5    	(IO_FxR_MHD.IO_FRF.bitc.FID5)
#define	FxR_MHD_FRF_FID6    	(IO_FxR_MHD.IO_FRF.bitc.FID6)
#define	FxR_MHD_FRF_FID7    	(IO_FxR_MHD.IO_FRF.bitc.FID7)
#define	FxR_MHD_FRF_FID8    	(IO_FxR_MHD.IO_FRF.bitc.FID8)
#define	FxR_MHD_FRF_FID9    	(IO_FxR_MHD.IO_FRF.bitc.FID9)
#define	FxR_MHD_FRF_FID10    	(IO_FxR_MHD.IO_FRF.bitc.FID10)
#define	FxR_MHD_FRF_CH    	(IO_FxR_MHD.IO_FRF.bit.CH)
#define	FxR_MHD_FRF_CH0    	(IO_FxR_MHD.IO_FRF.bitc.CH0)
#define	FxR_MHD_FRF_CH1    	(IO_FxR_MHD.IO_FRF.bitc.CH1)
#define	FxR_MHD_FRFM			(IO_FxR_MHD.IO_FRFM.word)
#define	FxR_MHD_FRFM_MFID    	(IO_FxR_MHD.IO_FRFM.bit.MFID)
#define	FxR_MHD_FRFM_MFID0    	(IO_FxR_MHD.IO_FRFM.bitc.MFID0)
#define	FxR_MHD_FRFM_MFID1    	(IO_FxR_MHD.IO_FRFM.bitc.MFID1)
#define	FxR_MHD_FRFM_MFID2    	(IO_FxR_MHD.IO_FRFM.bitc.MFID2)
#define	FxR_MHD_FRFM_MFID3    	(IO_FxR_MHD.IO_FRFM.bitc.MFID3)
#define	FxR_MHD_FRFM_MFID4    	(IO_FxR_MHD.IO_FRFM.bitc.MFID4)
#define	FxR_MHD_FRFM_MFID5    	(IO_FxR_MHD.IO_FRFM.bitc.MFID5)
#define	FxR_MHD_FRFM_MFID6    	(IO_FxR_MHD.IO_FRFM.bitc.MFID6)
#define	FxR_MHD_FRFM_MFID7    	(IO_FxR_MHD.IO_FRFM.bitc.MFID7)
#define	FxR_MHD_FRFM_MFID8    	(IO_FxR_MHD.IO_FRFM.bitc.MFID8)
#define	FxR_MHD_FRFM_MFID9    	(IO_FxR_MHD.IO_FRFM.bitc.MFID9)
#define	FxR_MHD_FRFM_MFID10    	(IO_FxR_MHD.IO_FRFM.bitc.MFID10)
#define	FxR_MHD_FCL			(IO_FxR_MHD.IO_FCL.word)
#define	FxR_MHD_FCL_CL    	(IO_FxR_MHD.IO_FCL.bit.CL)
#define	FxR_MHD_FCL_CL0    	(IO_FxR_MHD.IO_FCL.bitc.CL0)
#define	FxR_MHD_FCL_CL1    	(IO_FxR_MHD.IO_FCL.bitc.CL1)
#define	FxR_MHD_FCL_CL2    	(IO_FxR_MHD.IO_FCL.bitc.CL2)
#define	FxR_MHD_FCL_CL3    	(IO_FxR_MHD.IO_FCL.bitc.CL3)
#define	FxR_MHD_FCL_CL4    	(IO_FxR_MHD.IO_FCL.bitc.CL4)
#define	FxR_MHD_FCL_CL5    	(IO_FxR_MHD.IO_FCL.bitc.CL5)
#define	FxR_MHD_FCL_CL6    	(IO_FxR_MHD.IO_FCL.bitc.CL6)
#define	FxR_MHD_FCL_CL7    	(IO_FxR_MHD.IO_FCL.bitc.CL7)
#define	FxR_MHD_MHDS			(IO_FxR_MHD.IO_MHDS.word)
#define	FxR_MHD_MHDS_MBU    	(IO_FxR_MHD.IO_MHDS.bit.MBU)
#define	FxR_MHD_MHDS_MBU0    	(IO_FxR_MHD.IO_MHDS.bitc.MBU0)
#define	FxR_MHD_MHDS_MBU1    	(IO_FxR_MHD.IO_MHDS.bitc.MBU1)
#define	FxR_MHD_MHDS_MBU2    	(IO_FxR_MHD.IO_MHDS.bitc.MBU2)
#define	FxR_MHD_MHDS_MBU3    	(IO_FxR_MHD.IO_MHDS.bitc.MBU3)
#define	FxR_MHD_MHDS_MBU4    	(IO_FxR_MHD.IO_MHDS.bitc.MBU4)
#define	FxR_MHD_MHDS_MBU5    	(IO_FxR_MHD.IO_MHDS.bitc.MBU5)
#define	FxR_MHD_MHDS_MBU6    	(IO_FxR_MHD.IO_MHDS.bitc.MBU6)
#define	FxR_MHD_MHDS_MBT    	(IO_FxR_MHD.IO_MHDS.bit.MBT)
#define	FxR_MHD_MHDS_MBT0    	(IO_FxR_MHD.IO_MHDS.bitc.MBT0)
#define	FxR_MHD_MHDS_MBT1    	(IO_FxR_MHD.IO_MHDS.bitc.MBT1)
#define	FxR_MHD_MHDS_MBT2    	(IO_FxR_MHD.IO_MHDS.bitc.MBT2)
#define	FxR_MHD_MHDS_MBT3    	(IO_FxR_MHD.IO_MHDS.bitc.MBT3)
#define	FxR_MHD_MHDS_MBT4    	(IO_FxR_MHD.IO_MHDS.bitc.MBT4)
#define	FxR_MHD_MHDS_MBT5    	(IO_FxR_MHD.IO_MHDS.bitc.MBT5)
#define	FxR_MHD_MHDS_MBT6    	(IO_FxR_MHD.IO_MHDS.bitc.MBT6)
#define	FxR_MHD_MHDS_FMB    	(IO_FxR_MHD.IO_MHDS.bit.FMB)
#define	FxR_MHD_MHDS_FMB0    	(IO_FxR_MHD.IO_MHDS.bitc.FMB0)
#define	FxR_MHD_MHDS_FMB1    	(IO_FxR_MHD.IO_MHDS.bitc.FMB1)
#define	FxR_MHD_MHDS_FMB2    	(IO_FxR_MHD.IO_MHDS.bitc.FMB2)
#define	FxR_MHD_MHDS_FMB3    	(IO_FxR_MHD.IO_MHDS.bitc.FMB3)
#define	FxR_MHD_MHDS_FMB4    	(IO_FxR_MHD.IO_MHDS.bitc.FMB4)
#define	FxR_MHD_MHDS_FMB5    	(IO_FxR_MHD.IO_MHDS.bitc.FMB5)
#define	FxR_MHD_MHDS_FMB6    	(IO_FxR_MHD.IO_MHDS.bitc.FMB6)
#define	FxR_MHD_MHDS_CRAM    	(IO_FxR_MHD.IO_MHDS.bit.CRAM)
#define	FxR_MHD_MHDS_MFMB    	(IO_FxR_MHD.IO_MHDS.bit.MFMB)
#define	FxR_MHD_MHDS_FMBD    	(IO_FxR_MHD.IO_MHDS.bit.FMBD)
#define	FxR_MHD_MHDS_PTBF2    	(IO_FxR_MHD.IO_MHDS.bit.PTBF2)
#define	FxR_MHD_MHDS_PTBF1    	(IO_FxR_MHD.IO_MHDS.bit.PTBF1)
#define	FxR_MHD_MHDS_PMR    	(IO_FxR_MHD.IO_MHDS.bit.PMR)
#define	FxR_MHD_MHDS_POBF    	(IO_FxR_MHD.IO_MHDS.bit.POBF)
#define	FxR_MHD_MHDS_PIBF    	(IO_FxR_MHD.IO_MHDS.bit.PIBF)
#define	FxR_MHD_LDTS			(IO_FxR_MHD.IO_LDTS.word)
#define	FxR_MHD_LDTS_LDTB    	(IO_FxR_MHD.IO_LDTS.bit.LDTB)
#define	FxR_MHD_LDTS_LDTB0    	(IO_FxR_MHD.IO_LDTS.bitc.LDTB0)
#define	FxR_MHD_LDTS_LDTB1    	(IO_FxR_MHD.IO_LDTS.bitc.LDTB1)
#define	FxR_MHD_LDTS_LDTB2    	(IO_FxR_MHD.IO_LDTS.bitc.LDTB2)
#define	FxR_MHD_LDTS_LDTB3    	(IO_FxR_MHD.IO_LDTS.bitc.LDTB3)
#define	FxR_MHD_LDTS_LDTB4    	(IO_FxR_MHD.IO_LDTS.bitc.LDTB4)
#define	FxR_MHD_LDTS_LDTB5    	(IO_FxR_MHD.IO_LDTS.bitc.LDTB5)
#define	FxR_MHD_LDTS_LDTB6    	(IO_FxR_MHD.IO_LDTS.bitc.LDTB6)
#define	FxR_MHD_LDTS_LDTB7    	(IO_FxR_MHD.IO_LDTS.bitc.LDTB7)
#define	FxR_MHD_LDTS_LDTB8    	(IO_FxR_MHD.IO_LDTS.bitc.LDTB8)
#define	FxR_MHD_LDTS_LDTB9    	(IO_FxR_MHD.IO_LDTS.bitc.LDTB9)
#define	FxR_MHD_LDTS_LDTB10    	(IO_FxR_MHD.IO_LDTS.bitc.LDTB10)
#define	FxR_MHD_LDTS_LDTA    	(IO_FxR_MHD.IO_LDTS.bit.LDTA)
#define	FxR_MHD_LDTS_LDTA0    	(IO_FxR_MHD.IO_LDTS.bitc.LDTA0)
#define	FxR_MHD_LDTS_LDTA1    	(IO_FxR_MHD.IO_LDTS.bitc.LDTA1)
#define	FxR_MHD_LDTS_LDTA2    	(IO_FxR_MHD.IO_LDTS.bitc.LDTA2)
#define	FxR_MHD_LDTS_LDTA3    	(IO_FxR_MHD.IO_LDTS.bitc.LDTA3)
#define	FxR_MHD_LDTS_LDTA4    	(IO_FxR_MHD.IO_LDTS.bitc.LDTA4)
#define	FxR_MHD_LDTS_LDTA5    	(IO_FxR_MHD.IO_LDTS.bitc.LDTA5)
#define	FxR_MHD_LDTS_LDTA6    	(IO_FxR_MHD.IO_LDTS.bitc.LDTA6)
#define	FxR_MHD_LDTS_LDTA7    	(IO_FxR_MHD.IO_LDTS.bitc.LDTA7)
#define	FxR_MHD_LDTS_LDTA8    	(IO_FxR_MHD.IO_LDTS.bitc.LDTA8)
#define	FxR_MHD_LDTS_LDTA9    	(IO_FxR_MHD.IO_LDTS.bitc.LDTA9)
#define	FxR_MHD_LDTS_LDTA10    	(IO_FxR_MHD.IO_LDTS.bitc.LDTA10)
#define	FxR_MHD_FSR			(IO_FxR_MHD.IO_FSR.word)
#define	FxR_MHD_FSR_RFFL    	(IO_FxR_MHD.IO_FSR.bit.RFFL)
#define	FxR_MHD_FSR_RFFL0    	(IO_FxR_MHD.IO_FSR.bitc.RFFL0)
#define	FxR_MHD_FSR_RFFL1    	(IO_FxR_MHD.IO_FSR.bitc.RFFL1)
#define	FxR_MHD_FSR_RFFL2    	(IO_FxR_MHD.IO_FSR.bitc.RFFL2)
#define	FxR_MHD_FSR_RFFL3    	(IO_FxR_MHD.IO_FSR.bitc.RFFL3)
#define	FxR_MHD_FSR_RFFL4    	(IO_FxR_MHD.IO_FSR.bitc.RFFL4)
#define	FxR_MHD_FSR_RFFL5    	(IO_FxR_MHD.IO_FSR.bitc.RFFL5)
#define	FxR_MHD_FSR_RFFL6    	(IO_FxR_MHD.IO_FSR.bitc.RFFL6)
#define	FxR_MHD_FSR_RFFL7    	(IO_FxR_MHD.IO_FSR.bitc.RFFL7)
#define	FxR_MHD_FSR_RFO    	(IO_FxR_MHD.IO_FSR.bit.RFO)
#define	FxR_MHD_FSR_RFCL    	(IO_FxR_MHD.IO_FSR.bit.RFCL)
#define	FxR_MHD_FSR_RFNE    	(IO_FxR_MHD.IO_FSR.bit.RFNE)
#define	FxR_MHD_MHDF			(IO_FxR_MHD.IO_MHDF.word)
#define	FxR_MHD_MHDF_WAHP    	(IO_FxR_MHD.IO_MHDF.bit.WAHP)
#define	FxR_MHD_MHDF_TBFB    	(IO_FxR_MHD.IO_MHDF.bit.TBFB)
#define	FxR_MHD_MHDF_TBFA    	(IO_FxR_MHD.IO_MHDF.bit.TBFA)
#define	FxR_MHD_MHDF_FNFB    	(IO_FxR_MHD.IO_MHDF.bit.FNFB)
#define	FxR_MHD_MHDF_FNFA    	(IO_FxR_MHD.IO_MHDF.bit.FNFA)
#define	FxR_MHD_MHDF_SNUB    	(IO_FxR_MHD.IO_MHDF.bit.SNUB)
#define	FxR_MHD_MHDF_SNUA    	(IO_FxR_MHD.IO_MHDF.bit.SNUA)
#define	FxR_MHD_TXRQ1			(IO_FxR_MHD.IO_TXRQ1.word)
#define	FxR_MHD_TXRQ1_TXR31    	(IO_FxR_MHD.IO_TXRQ1.bit.TXR31)
#define	FxR_MHD_TXRQ1_TXR30    	(IO_FxR_MHD.IO_TXRQ1.bit.TXR30)
#define	FxR_MHD_TXRQ1_TXR29    	(IO_FxR_MHD.IO_TXRQ1.bit.TXR29)
#define	FxR_MHD_TXRQ1_TXR28    	(IO_FxR_MHD.IO_TXRQ1.bit.TXR28)
#define	FxR_MHD_TXRQ1_TXR27    	(IO_FxR_MHD.IO_TXRQ1.bit.TXR27)
#define	FxR_MHD_TXRQ1_TXR26    	(IO_FxR_MHD.IO_TXRQ1.bit.TXR26)
#define	FxR_MHD_TXRQ1_TXR25    	(IO_FxR_MHD.IO_TXRQ1.bit.TXR25)
#define	FxR_MHD_TXRQ1_TXR24    	(IO_FxR_MHD.IO_TXRQ1.bit.TXR24)
#define	FxR_MHD_TXRQ1_TXR23    	(IO_FxR_MHD.IO_TXRQ1.bit.TXR23)
#define	FxR_MHD_TXRQ1_TXR22    	(IO_FxR_MHD.IO_TXRQ1.bit.TXR22)
#define	FxR_MHD_TXRQ1_TXR21    	(IO_FxR_MHD.IO_TXRQ1.bit.TXR21)
#define	FxR_MHD_TXRQ1_TXR20    	(IO_FxR_MHD.IO_TXRQ1.bit.TXR20)
#define	FxR_MHD_TXRQ1_TXR19    	(IO_FxR_MHD.IO_TXRQ1.bit.TXR19)
#define	FxR_MHD_TXRQ1_TXR18    	(IO_FxR_MHD.IO_TXRQ1.bit.TXR18)
#define	FxR_MHD_TXRQ1_TXR17    	(IO_FxR_MHD.IO_TXRQ1.bit.TXR17)
#define	FxR_MHD_TXRQ1_TXR16    	(IO_FxR_MHD.IO_TXRQ1.bit.TXR16)
#define	FxR_MHD_TXRQ1_TXR15    	(IO_FxR_MHD.IO_TXRQ1.bit.TXR15)
#define	FxR_MHD_TXRQ1_TXR14    	(IO_FxR_MHD.IO_TXRQ1.bit.TXR14)
#define	FxR_MHD_TXRQ1_TXR13    	(IO_FxR_MHD.IO_TXRQ1.bit.TXR13)
#define	FxR_MHD_TXRQ1_TXR12    	(IO_FxR_MHD.IO_TXRQ1.bit.TXR12)
#define	FxR_MHD_TXRQ1_TXR11    	(IO_FxR_MHD.IO_TXRQ1.bit.TXR11)
#define	FxR_MHD_TXRQ1_TXR10    	(IO_FxR_MHD.IO_TXRQ1.bit.TXR10)
#define	FxR_MHD_TXRQ1_TXR9    	(IO_FxR_MHD.IO_TXRQ1.bit.TXR9)
#define	FxR_MHD_TXRQ1_TXR8    	(IO_FxR_MHD.IO_TXRQ1.bit.TXR8)
#define	FxR_MHD_TXRQ1_TXR7    	(IO_FxR_MHD.IO_TXRQ1.bit.TXR7)
#define	FxR_MHD_TXRQ1_TXR6    	(IO_FxR_MHD.IO_TXRQ1.bit.TXR6)
#define	FxR_MHD_TXRQ1_TXR5    	(IO_FxR_MHD.IO_TXRQ1.bit.TXR5)
#define	FxR_MHD_TXRQ1_TXR4    	(IO_FxR_MHD.IO_TXRQ1.bit.TXR4)
#define	FxR_MHD_TXRQ1_TXR3    	(IO_FxR_MHD.IO_TXRQ1.bit.TXR3)
#define	FxR_MHD_TXRQ1_TXR2    	(IO_FxR_MHD.IO_TXRQ1.bit.TXR2)
#define	FxR_MHD_TXRQ1_TXR1    	(IO_FxR_MHD.IO_TXRQ1.bit.TXR1)
#define	FxR_MHD_TXRQ1_TXR0    	(IO_FxR_MHD.IO_TXRQ1.bit.TXR0)
#define	FxR_MHD_TXRQ2			(IO_FxR_MHD.IO_TXRQ2.word)
#define	FxR_MHD_TXRQ2_TXR63    	(IO_FxR_MHD.IO_TXRQ2.bit.TXR63)
#define	FxR_MHD_TXRQ2_TXR62    	(IO_FxR_MHD.IO_TXRQ2.bit.TXR62)
#define	FxR_MHD_TXRQ2_TXR61    	(IO_FxR_MHD.IO_TXRQ2.bit.TXR61)
#define	FxR_MHD_TXRQ2_TXR60    	(IO_FxR_MHD.IO_TXRQ2.bit.TXR60)
#define	FxR_MHD_TXRQ2_TXR59    	(IO_FxR_MHD.IO_TXRQ2.bit.TXR59)
#define	FxR_MHD_TXRQ2_TXR58    	(IO_FxR_MHD.IO_TXRQ2.bit.TXR58)
#define	FxR_MHD_TXRQ2_TXR57    	(IO_FxR_MHD.IO_TXRQ2.bit.TXR57)
#define	FxR_MHD_TXRQ2_TXR56    	(IO_FxR_MHD.IO_TXRQ2.bit.TXR56)
#define	FxR_MHD_TXRQ2_TXR55    	(IO_FxR_MHD.IO_TXRQ2.bit.TXR55)
#define	FxR_MHD_TXRQ2_TXR54    	(IO_FxR_MHD.IO_TXRQ2.bit.TXR54)
#define	FxR_MHD_TXRQ2_TXR53    	(IO_FxR_MHD.IO_TXRQ2.bit.TXR53)
#define	FxR_MHD_TXRQ2_TXR52    	(IO_FxR_MHD.IO_TXRQ2.bit.TXR52)
#define	FxR_MHD_TXRQ2_TXR51    	(IO_FxR_MHD.IO_TXRQ2.bit.TXR51)
#define	FxR_MHD_TXRQ2_TXR50    	(IO_FxR_MHD.IO_TXRQ2.bit.TXR50)
#define	FxR_MHD_TXRQ2_TXR49    	(IO_FxR_MHD.IO_TXRQ2.bit.TXR49)
#define	FxR_MHD_TXRQ2_TXR48    	(IO_FxR_MHD.IO_TXRQ2.bit.TXR48)
#define	FxR_MHD_TXRQ2_TXR47    	(IO_FxR_MHD.IO_TXRQ2.bit.TXR47)
#define	FxR_MHD_TXRQ2_TXR46    	(IO_FxR_MHD.IO_TXRQ2.bit.TXR46)
#define	FxR_MHD_TXRQ2_TXR45    	(IO_FxR_MHD.IO_TXRQ2.bit.TXR45)
#define	FxR_MHD_TXRQ2_TXR44    	(IO_FxR_MHD.IO_TXRQ2.bit.TXR44)
#define	FxR_MHD_TXRQ2_TXR43    	(IO_FxR_MHD.IO_TXRQ2.bit.TXR43)
#define	FxR_MHD_TXRQ2_TXR42    	(IO_FxR_MHD.IO_TXRQ2.bit.TXR42)
#define	FxR_MHD_TXRQ2_TXR41    	(IO_FxR_MHD.IO_TXRQ2.bit.TXR41)
#define	FxR_MHD_TXRQ2_TXR40    	(IO_FxR_MHD.IO_TXRQ2.bit.TXR40)
#define	FxR_MHD_TXRQ2_TXR39    	(IO_FxR_MHD.IO_TXRQ2.bit.TXR39)
#define	FxR_MHD_TXRQ2_TXR38    	(IO_FxR_MHD.IO_TXRQ2.bit.TXR38)
#define	FxR_MHD_TXRQ2_TXR37    	(IO_FxR_MHD.IO_TXRQ2.bit.TXR37)
#define	FxR_MHD_TXRQ2_TXR36    	(IO_FxR_MHD.IO_TXRQ2.bit.TXR36)
#define	FxR_MHD_TXRQ2_TXR35    	(IO_FxR_MHD.IO_TXRQ2.bit.TXR35)
#define	FxR_MHD_TXRQ2_TXR34    	(IO_FxR_MHD.IO_TXRQ2.bit.TXR34)
#define	FxR_MHD_TXRQ2_TXR33    	(IO_FxR_MHD.IO_TXRQ2.bit.TXR33)
#define	FxR_MHD_TXRQ2_TXR32    	(IO_FxR_MHD.IO_TXRQ2.bit.TXR32)
#define	FxR_MHD_TXRQ3			(IO_FxR_MHD.IO_TXRQ3.word)
#define	FxR_MHD_TXRQ3_TXR95    	(IO_FxR_MHD.IO_TXRQ3.bit.TXR95)
#define	FxR_MHD_TXRQ3_TXR94    	(IO_FxR_MHD.IO_TXRQ3.bit.TXR94)
#define	FxR_MHD_TXRQ3_TXR93    	(IO_FxR_MHD.IO_TXRQ3.bit.TXR93)
#define	FxR_MHD_TXRQ3_TXR92    	(IO_FxR_MHD.IO_TXRQ3.bit.TXR92)
#define	FxR_MHD_TXRQ3_TXR91    	(IO_FxR_MHD.IO_TXRQ3.bit.TXR91)
#define	FxR_MHD_TXRQ3_TXR90    	(IO_FxR_MHD.IO_TXRQ3.bit.TXR90)
#define	FxR_MHD_TXRQ3_TXR89    	(IO_FxR_MHD.IO_TXRQ3.bit.TXR89)
#define	FxR_MHD_TXRQ3_TXR88    	(IO_FxR_MHD.IO_TXRQ3.bit.TXR88)
#define	FxR_MHD_TXRQ3_TXR87    	(IO_FxR_MHD.IO_TXRQ3.bit.TXR87)
#define	FxR_MHD_TXRQ3_TXR86    	(IO_FxR_MHD.IO_TXRQ3.bit.TXR86)
#define	FxR_MHD_TXRQ3_TXR85    	(IO_FxR_MHD.IO_TXRQ3.bit.TXR85)
#define	FxR_MHD_TXRQ3_TXR84    	(IO_FxR_MHD.IO_TXRQ3.bit.TXR84)
#define	FxR_MHD_TXRQ3_TXR83    	(IO_FxR_MHD.IO_TXRQ3.bit.TXR83)
#define	FxR_MHD_TXRQ3_TXR82    	(IO_FxR_MHD.IO_TXRQ3.bit.TXR82)
#define	FxR_MHD_TXRQ3_TXR81    	(IO_FxR_MHD.IO_TXRQ3.bit.TXR81)
#define	FxR_MHD_TXRQ3_TXR80    	(IO_FxR_MHD.IO_TXRQ3.bit.TXR80)
#define	FxR_MHD_TXRQ3_TXR79    	(IO_FxR_MHD.IO_TXRQ3.bit.TXR79)
#define	FxR_MHD_TXRQ3_TXR78    	(IO_FxR_MHD.IO_TXRQ3.bit.TXR78)
#define	FxR_MHD_TXRQ3_TXR77    	(IO_FxR_MHD.IO_TXRQ3.bit.TXR77)
#define	FxR_MHD_TXRQ3_TXR76    	(IO_FxR_MHD.IO_TXRQ3.bit.TXR76)
#define	FxR_MHD_TXRQ3_TXR75    	(IO_FxR_MHD.IO_TXRQ3.bit.TXR75)
#define	FxR_MHD_TXRQ3_TXR74    	(IO_FxR_MHD.IO_TXRQ3.bit.TXR74)
#define	FxR_MHD_TXRQ3_TXR73    	(IO_FxR_MHD.IO_TXRQ3.bit.TXR73)
#define	FxR_MHD_TXRQ3_TXR72    	(IO_FxR_MHD.IO_TXRQ3.bit.TXR72)
#define	FxR_MHD_TXRQ3_TXR71    	(IO_FxR_MHD.IO_TXRQ3.bit.TXR71)
#define	FxR_MHD_TXRQ3_TXR70    	(IO_FxR_MHD.IO_TXRQ3.bit.TXR70)
#define	FxR_MHD_TXRQ3_TXR69    	(IO_FxR_MHD.IO_TXRQ3.bit.TXR69)
#define	FxR_MHD_TXRQ3_TXR68    	(IO_FxR_MHD.IO_TXRQ3.bit.TXR68)
#define	FxR_MHD_TXRQ3_TXR67    	(IO_FxR_MHD.IO_TXRQ3.bit.TXR67)
#define	FxR_MHD_TXRQ3_TXR66    	(IO_FxR_MHD.IO_TXRQ3.bit.TXR66)
#define	FxR_MHD_TXRQ3_TXR65    	(IO_FxR_MHD.IO_TXRQ3.bit.TXR65)
#define	FxR_MHD_TXRQ3_TXR64    	(IO_FxR_MHD.IO_TXRQ3.bit.TXR64)
#define	FxR_MHD_TXRQ4			(IO_FxR_MHD.IO_TXRQ4.word)
#define	FxR_MHD_TXRQ4_TXR127    	(IO_FxR_MHD.IO_TXRQ4.bit.TXR127)
#define	FxR_MHD_TXRQ4_TXR126    	(IO_FxR_MHD.IO_TXRQ4.bit.TXR126)
#define	FxR_MHD_TXRQ4_TXR125    	(IO_FxR_MHD.IO_TXRQ4.bit.TXR125)
#define	FxR_MHD_TXRQ4_TXR124    	(IO_FxR_MHD.IO_TXRQ4.bit.TXR124)
#define	FxR_MHD_TXRQ4_TXR123    	(IO_FxR_MHD.IO_TXRQ4.bit.TXR123)
#define	FxR_MHD_TXRQ4_TXR122    	(IO_FxR_MHD.IO_TXRQ4.bit.TXR122)
#define	FxR_MHD_TXRQ4_TXR121    	(IO_FxR_MHD.IO_TXRQ4.bit.TXR121)
#define	FxR_MHD_TXRQ4_TXR120    	(IO_FxR_MHD.IO_TXRQ4.bit.TXR120)
#define	FxR_MHD_TXRQ4_TXR119    	(IO_FxR_MHD.IO_TXRQ4.bit.TXR119)
#define	FxR_MHD_TXRQ4_TXR118    	(IO_FxR_MHD.IO_TXRQ4.bit.TXR118)
#define	FxR_MHD_TXRQ4_TXR117    	(IO_FxR_MHD.IO_TXRQ4.bit.TXR117)
#define	FxR_MHD_TXRQ4_TXR116    	(IO_FxR_MHD.IO_TXRQ4.bit.TXR116)
#define	FxR_MHD_TXRQ4_TXR115    	(IO_FxR_MHD.IO_TXRQ4.bit.TXR115)
#define	FxR_MHD_TXRQ4_TXR114    	(IO_FxR_MHD.IO_TXRQ4.bit.TXR114)
#define	FxR_MHD_TXRQ4_TXR113    	(IO_FxR_MHD.IO_TXRQ4.bit.TXR113)
#define	FxR_MHD_TXRQ4_TXR112    	(IO_FxR_MHD.IO_TXRQ4.bit.TXR112)
#define	FxR_MHD_TXRQ4_TXR111    	(IO_FxR_MHD.IO_TXRQ4.bit.TXR111)
#define	FxR_MHD_TXRQ4_TXR110    	(IO_FxR_MHD.IO_TXRQ4.bit.TXR110)
#define	FxR_MHD_TXRQ4_TXR109    	(IO_FxR_MHD.IO_TXRQ4.bit.TXR109)
#define	FxR_MHD_TXRQ4_TXR108    	(IO_FxR_MHD.IO_TXRQ4.bit.TXR108)
#define	FxR_MHD_TXRQ4_TXR107    	(IO_FxR_MHD.IO_TXRQ4.bit.TXR107)
#define	FxR_MHD_TXRQ4_TXR106    	(IO_FxR_MHD.IO_TXRQ4.bit.TXR106)
#define	FxR_MHD_TXRQ4_TXR105    	(IO_FxR_MHD.IO_TXRQ4.bit.TXR105)
#define	FxR_MHD_TXRQ4_TXR104    	(IO_FxR_MHD.IO_TXRQ4.bit.TXR104)
#define	FxR_MHD_TXRQ4_TXR103    	(IO_FxR_MHD.IO_TXRQ4.bit.TXR103)
#define	FxR_MHD_TXRQ4_TXR102    	(IO_FxR_MHD.IO_TXRQ4.bit.TXR102)
#define	FxR_MHD_TXRQ4_TXR101    	(IO_FxR_MHD.IO_TXRQ4.bit.TXR101)
#define	FxR_MHD_TXRQ4_TXR100    	(IO_FxR_MHD.IO_TXRQ4.bit.TXR100)
#define	FxR_MHD_TXRQ4_TXR99    	(IO_FxR_MHD.IO_TXRQ4.bit.TXR99)
#define	FxR_MHD_TXRQ4_TXR98    	(IO_FxR_MHD.IO_TXRQ4.bit.TXR98)
#define	FxR_MHD_TXRQ4_TXR97    	(IO_FxR_MHD.IO_TXRQ4.bit.TXR97)
#define	FxR_MHD_TXRQ4_TXR96    	(IO_FxR_MHD.IO_TXRQ4.bit.TXR96)
#define	FxR_MHD_NDAT1			(IO_FxR_MHD.IO_NDAT1.word)
#define	FxR_MHD_NDAT1_ND31    	(IO_FxR_MHD.IO_NDAT1.bit.ND31)
#define	FxR_MHD_NDAT1_ND30    	(IO_FxR_MHD.IO_NDAT1.bit.ND30)
#define	FxR_MHD_NDAT1_ND29    	(IO_FxR_MHD.IO_NDAT1.bit.ND29)
#define	FxR_MHD_NDAT1_ND28    	(IO_FxR_MHD.IO_NDAT1.bit.ND28)
#define	FxR_MHD_NDAT1_ND27    	(IO_FxR_MHD.IO_NDAT1.bit.ND27)
#define	FxR_MHD_NDAT1_ND26    	(IO_FxR_MHD.IO_NDAT1.bit.ND26)
#define	FxR_MHD_NDAT1_ND25    	(IO_FxR_MHD.IO_NDAT1.bit.ND25)
#define	FxR_MHD_NDAT1_ND24    	(IO_FxR_MHD.IO_NDAT1.bit.ND24)
#define	FxR_MHD_NDAT1_ND23    	(IO_FxR_MHD.IO_NDAT1.bit.ND23)
#define	FxR_MHD_NDAT1_ND22    	(IO_FxR_MHD.IO_NDAT1.bit.ND22)
#define	FxR_MHD_NDAT1_ND21    	(IO_FxR_MHD.IO_NDAT1.bit.ND21)
#define	FxR_MHD_NDAT1_ND20    	(IO_FxR_MHD.IO_NDAT1.bit.ND20)
#define	FxR_MHD_NDAT1_ND19    	(IO_FxR_MHD.IO_NDAT1.bit.ND19)
#define	FxR_MHD_NDAT1_ND18    	(IO_FxR_MHD.IO_NDAT1.bit.ND18)
#define	FxR_MHD_NDAT1_ND17    	(IO_FxR_MHD.IO_NDAT1.bit.ND17)
#define	FxR_MHD_NDAT1_ND16    	(IO_FxR_MHD.IO_NDAT1.bit.ND16)
#define	FxR_MHD_NDAT1_ND15    	(IO_FxR_MHD.IO_NDAT1.bit.ND15)
#define	FxR_MHD_NDAT1_ND14    	(IO_FxR_MHD.IO_NDAT1.bit.ND14)
#define	FxR_MHD_NDAT1_ND13    	(IO_FxR_MHD.IO_NDAT1.bit.ND13)
#define	FxR_MHD_NDAT1_ND12    	(IO_FxR_MHD.IO_NDAT1.bit.ND12)
#define	FxR_MHD_NDAT1_ND11    	(IO_FxR_MHD.IO_NDAT1.bit.ND11)
#define	FxR_MHD_NDAT1_ND10    	(IO_FxR_MHD.IO_NDAT1.bit.ND10)
#define	FxR_MHD_NDAT1_ND9    	(IO_FxR_MHD.IO_NDAT1.bit.ND9)
#define	FxR_MHD_NDAT1_ND8    	(IO_FxR_MHD.IO_NDAT1.bit.ND8)
#define	FxR_MHD_NDAT1_ND7    	(IO_FxR_MHD.IO_NDAT1.bit.ND7)
#define	FxR_MHD_NDAT1_ND6    	(IO_FxR_MHD.IO_NDAT1.bit.ND6)
#define	FxR_MHD_NDAT1_ND5    	(IO_FxR_MHD.IO_NDAT1.bit.ND5)
#define	FxR_MHD_NDAT1_ND4    	(IO_FxR_MHD.IO_NDAT1.bit.ND4)
#define	FxR_MHD_NDAT1_ND3    	(IO_FxR_MHD.IO_NDAT1.bit.ND3)
#define	FxR_MHD_NDAT1_ND2    	(IO_FxR_MHD.IO_NDAT1.bit.ND2)
#define	FxR_MHD_NDAT1_ND1    	(IO_FxR_MHD.IO_NDAT1.bit.ND1)
#define	FxR_MHD_NDAT1_ND0    	(IO_FxR_MHD.IO_NDAT1.bit.ND0)
#define	FxR_MHD_NDAT2			(IO_FxR_MHD.IO_NDAT2.word)
#define	FxR_MHD_NDAT2_ND63    	(IO_FxR_MHD.IO_NDAT2.bit.ND63)
#define	FxR_MHD_NDAT2_ND62    	(IO_FxR_MHD.IO_NDAT2.bit.ND62)
#define	FxR_MHD_NDAT2_ND61    	(IO_FxR_MHD.IO_NDAT2.bit.ND61)
#define	FxR_MHD_NDAT2_ND60    	(IO_FxR_MHD.IO_NDAT2.bit.ND60)
#define	FxR_MHD_NDAT2_ND59    	(IO_FxR_MHD.IO_NDAT2.bit.ND59)
#define	FxR_MHD_NDAT2_ND58    	(IO_FxR_MHD.IO_NDAT2.bit.ND58)
#define	FxR_MHD_NDAT2_ND57    	(IO_FxR_MHD.IO_NDAT2.bit.ND57)
#define	FxR_MHD_NDAT2_ND56    	(IO_FxR_MHD.IO_NDAT2.bit.ND56)
#define	FxR_MHD_NDAT2_ND55    	(IO_FxR_MHD.IO_NDAT2.bit.ND55)
#define	FxR_MHD_NDAT2_ND54    	(IO_FxR_MHD.IO_NDAT2.bit.ND54)
#define	FxR_MHD_NDAT2_ND53    	(IO_FxR_MHD.IO_NDAT2.bit.ND53)
#define	FxR_MHD_NDAT2_ND52    	(IO_FxR_MHD.IO_NDAT2.bit.ND52)
#define	FxR_MHD_NDAT2_ND51    	(IO_FxR_MHD.IO_NDAT2.bit.ND51)
#define	FxR_MHD_NDAT2_ND50    	(IO_FxR_MHD.IO_NDAT2.bit.ND50)
#define	FxR_MHD_NDAT2_ND49    	(IO_FxR_MHD.IO_NDAT2.bit.ND49)
#define	FxR_MHD_NDAT2_ND48    	(IO_FxR_MHD.IO_NDAT2.bit.ND48)
#define	FxR_MHD_NDAT2_ND47    	(IO_FxR_MHD.IO_NDAT2.bit.ND47)
#define	FxR_MHD_NDAT2_ND46    	(IO_FxR_MHD.IO_NDAT2.bit.ND46)
#define	FxR_MHD_NDAT2_ND45    	(IO_FxR_MHD.IO_NDAT2.bit.ND45)
#define	FxR_MHD_NDAT2_ND44    	(IO_FxR_MHD.IO_NDAT2.bit.ND44)
#define	FxR_MHD_NDAT2_ND43    	(IO_FxR_MHD.IO_NDAT2.bit.ND43)
#define	FxR_MHD_NDAT2_ND42    	(IO_FxR_MHD.IO_NDAT2.bit.ND42)
#define	FxR_MHD_NDAT2_ND41    	(IO_FxR_MHD.IO_NDAT2.bit.ND41)
#define	FxR_MHD_NDAT2_ND40    	(IO_FxR_MHD.IO_NDAT2.bit.ND40)
#define	FxR_MHD_NDAT2_ND39    	(IO_FxR_MHD.IO_NDAT2.bit.ND39)
#define	FxR_MHD_NDAT2_ND38    	(IO_FxR_MHD.IO_NDAT2.bit.ND38)
#define	FxR_MHD_NDAT2_ND37    	(IO_FxR_MHD.IO_NDAT2.bit.ND37)
#define	FxR_MHD_NDAT2_ND36    	(IO_FxR_MHD.IO_NDAT2.bit.ND36)
#define	FxR_MHD_NDAT2_ND35    	(IO_FxR_MHD.IO_NDAT2.bit.ND35)
#define	FxR_MHD_NDAT2_ND34    	(IO_FxR_MHD.IO_NDAT2.bit.ND34)
#define	FxR_MHD_NDAT2_ND33    	(IO_FxR_MHD.IO_NDAT2.bit.ND33)
#define	FxR_MHD_NDAT2_ND32    	(IO_FxR_MHD.IO_NDAT2.bit.ND32)
#define	FxR_MHD_NDAT3			(IO_FxR_MHD.IO_NDAT3.word)
#define	FxR_MHD_NDAT3_ND95    	(IO_FxR_MHD.IO_NDAT3.bit.ND95)
#define	FxR_MHD_NDAT3_ND94    	(IO_FxR_MHD.IO_NDAT3.bit.ND94)
#define	FxR_MHD_NDAT3_ND93    	(IO_FxR_MHD.IO_NDAT3.bit.ND93)
#define	FxR_MHD_NDAT3_ND92    	(IO_FxR_MHD.IO_NDAT3.bit.ND92)
#define	FxR_MHD_NDAT3_ND91    	(IO_FxR_MHD.IO_NDAT3.bit.ND91)
#define	FxR_MHD_NDAT3_ND90    	(IO_FxR_MHD.IO_NDAT3.bit.ND90)
#define	FxR_MHD_NDAT3_ND89    	(IO_FxR_MHD.IO_NDAT3.bit.ND89)
#define	FxR_MHD_NDAT3_ND88    	(IO_FxR_MHD.IO_NDAT3.bit.ND88)
#define	FxR_MHD_NDAT3_ND87    	(IO_FxR_MHD.IO_NDAT3.bit.ND87)
#define	FxR_MHD_NDAT3_ND86    	(IO_FxR_MHD.IO_NDAT3.bit.ND86)
#define	FxR_MHD_NDAT3_ND85    	(IO_FxR_MHD.IO_NDAT3.bit.ND85)
#define	FxR_MHD_NDAT3_ND84    	(IO_FxR_MHD.IO_NDAT3.bit.ND84)
#define	FxR_MHD_NDAT3_ND83    	(IO_FxR_MHD.IO_NDAT3.bit.ND83)
#define	FxR_MHD_NDAT3_ND82    	(IO_FxR_MHD.IO_NDAT3.bit.ND82)
#define	FxR_MHD_NDAT3_ND81    	(IO_FxR_MHD.IO_NDAT3.bit.ND81)
#define	FxR_MHD_NDAT3_ND80    	(IO_FxR_MHD.IO_NDAT3.bit.ND80)
#define	FxR_MHD_NDAT3_ND79    	(IO_FxR_MHD.IO_NDAT3.bit.ND79)
#define	FxR_MHD_NDAT3_ND78    	(IO_FxR_MHD.IO_NDAT3.bit.ND78)
#define	FxR_MHD_NDAT3_ND77    	(IO_FxR_MHD.IO_NDAT3.bit.ND77)
#define	FxR_MHD_NDAT3_ND76    	(IO_FxR_MHD.IO_NDAT3.bit.ND76)
#define	FxR_MHD_NDAT3_ND75    	(IO_FxR_MHD.IO_NDAT3.bit.ND75)
#define	FxR_MHD_NDAT3_ND74    	(IO_FxR_MHD.IO_NDAT3.bit.ND74)
#define	FxR_MHD_NDAT3_ND73    	(IO_FxR_MHD.IO_NDAT3.bit.ND73)
#define	FxR_MHD_NDAT3_ND72    	(IO_FxR_MHD.IO_NDAT3.bit.ND72)
#define	FxR_MHD_NDAT3_ND71    	(IO_FxR_MHD.IO_NDAT3.bit.ND71)
#define	FxR_MHD_NDAT3_ND70    	(IO_FxR_MHD.IO_NDAT3.bit.ND70)
#define	FxR_MHD_NDAT3_ND69    	(IO_FxR_MHD.IO_NDAT3.bit.ND69)
#define	FxR_MHD_NDAT3_ND68    	(IO_FxR_MHD.IO_NDAT3.bit.ND68)
#define	FxR_MHD_NDAT3_ND67    	(IO_FxR_MHD.IO_NDAT3.bit.ND67)
#define	FxR_MHD_NDAT3_ND66    	(IO_FxR_MHD.IO_NDAT3.bit.ND66)
#define	FxR_MHD_NDAT3_ND65    	(IO_FxR_MHD.IO_NDAT3.bit.ND65)
#define	FxR_MHD_NDAT3_ND64    	(IO_FxR_MHD.IO_NDAT3.bit.ND64)
#define	FxR_MHD_NDAT4			(IO_FxR_MHD.IO_NDAT4.word)
#define	FxR_MHD_NDAT4_ND127    	(IO_FxR_MHD.IO_NDAT4.bit.ND127)
#define	FxR_MHD_NDAT4_ND126    	(IO_FxR_MHD.IO_NDAT4.bit.ND126)
#define	FxR_MHD_NDAT4_ND125    	(IO_FxR_MHD.IO_NDAT4.bit.ND125)
#define	FxR_MHD_NDAT4_ND124    	(IO_FxR_MHD.IO_NDAT4.bit.ND124)
#define	FxR_MHD_NDAT4_ND123    	(IO_FxR_MHD.IO_NDAT4.bit.ND123)
#define	FxR_MHD_NDAT4_ND122    	(IO_FxR_MHD.IO_NDAT4.bit.ND122)
#define	FxR_MHD_NDAT4_ND121    	(IO_FxR_MHD.IO_NDAT4.bit.ND121)
#define	FxR_MHD_NDAT4_ND120    	(IO_FxR_MHD.IO_NDAT4.bit.ND120)
#define	FxR_MHD_NDAT4_ND119    	(IO_FxR_MHD.IO_NDAT4.bit.ND119)
#define	FxR_MHD_NDAT4_ND118    	(IO_FxR_MHD.IO_NDAT4.bit.ND118)
#define	FxR_MHD_NDAT4_ND117    	(IO_FxR_MHD.IO_NDAT4.bit.ND117)
#define	FxR_MHD_NDAT4_ND116    	(IO_FxR_MHD.IO_NDAT4.bit.ND116)
#define	FxR_MHD_NDAT4_ND115    	(IO_FxR_MHD.IO_NDAT4.bit.ND115)
#define	FxR_MHD_NDAT4_ND114    	(IO_FxR_MHD.IO_NDAT4.bit.ND114)
#define	FxR_MHD_NDAT4_ND113    	(IO_FxR_MHD.IO_NDAT4.bit.ND113)
#define	FxR_MHD_NDAT4_ND112    	(IO_FxR_MHD.IO_NDAT4.bit.ND112)
#define	FxR_MHD_NDAT4_ND111    	(IO_FxR_MHD.IO_NDAT4.bit.ND111)
#define	FxR_MHD_NDAT4_ND110    	(IO_FxR_MHD.IO_NDAT4.bit.ND110)
#define	FxR_MHD_NDAT4_ND109    	(IO_FxR_MHD.IO_NDAT4.bit.ND109)
#define	FxR_MHD_NDAT4_ND108    	(IO_FxR_MHD.IO_NDAT4.bit.ND108)
#define	FxR_MHD_NDAT4_ND107    	(IO_FxR_MHD.IO_NDAT4.bit.ND107)
#define	FxR_MHD_NDAT4_ND106    	(IO_FxR_MHD.IO_NDAT4.bit.ND106)
#define	FxR_MHD_NDAT4_ND105    	(IO_FxR_MHD.IO_NDAT4.bit.ND105)
#define	FxR_MHD_NDAT4_ND104    	(IO_FxR_MHD.IO_NDAT4.bit.ND104)
#define	FxR_MHD_NDAT4_ND103    	(IO_FxR_MHD.IO_NDAT4.bit.ND103)
#define	FxR_MHD_NDAT4_ND102    	(IO_FxR_MHD.IO_NDAT4.bit.ND102)
#define	FxR_MHD_NDAT4_ND101    	(IO_FxR_MHD.IO_NDAT4.bit.ND101)
#define	FxR_MHD_NDAT4_ND100    	(IO_FxR_MHD.IO_NDAT4.bit.ND100)
#define	FxR_MHD_NDAT4_ND99    	(IO_FxR_MHD.IO_NDAT4.bit.ND99)
#define	FxR_MHD_NDAT4_ND98    	(IO_FxR_MHD.IO_NDAT4.bit.ND98)
#define	FxR_MHD_NDAT4_ND97    	(IO_FxR_MHD.IO_NDAT4.bit.ND97)
#define	FxR_MHD_NDAT4_ND96    	(IO_FxR_MHD.IO_NDAT4.bit.ND96)
#define	FxR_MHD_MBSC1			(IO_FxR_MHD.IO_MBSC1.word)
#define	FxR_MHD_MBSC1_MBC31    	(IO_FxR_MHD.IO_MBSC1.bit.MBC31)
#define	FxR_MHD_MBSC1_MBC30    	(IO_FxR_MHD.IO_MBSC1.bit.MBC30)
#define	FxR_MHD_MBSC1_MBC29    	(IO_FxR_MHD.IO_MBSC1.bit.MBC29)
#define	FxR_MHD_MBSC1_MBC28    	(IO_FxR_MHD.IO_MBSC1.bit.MBC28)
#define	FxR_MHD_MBSC1_MBC27    	(IO_FxR_MHD.IO_MBSC1.bit.MBC27)
#define	FxR_MHD_MBSC1_MBC26    	(IO_FxR_MHD.IO_MBSC1.bit.MBC26)
#define	FxR_MHD_MBSC1_MBC25    	(IO_FxR_MHD.IO_MBSC1.bit.MBC25)
#define	FxR_MHD_MBSC1_MBC24    	(IO_FxR_MHD.IO_MBSC1.bit.MBC24)
#define	FxR_MHD_MBSC1_MBC23    	(IO_FxR_MHD.IO_MBSC1.bit.MBC23)
#define	FxR_MHD_MBSC1_MBC22    	(IO_FxR_MHD.IO_MBSC1.bit.MBC22)
#define	FxR_MHD_MBSC1_MBC21    	(IO_FxR_MHD.IO_MBSC1.bit.MBC21)
#define	FxR_MHD_MBSC1_MBC20    	(IO_FxR_MHD.IO_MBSC1.bit.MBC20)
#define	FxR_MHD_MBSC1_MBC19    	(IO_FxR_MHD.IO_MBSC1.bit.MBC19)
#define	FxR_MHD_MBSC1_MBC18    	(IO_FxR_MHD.IO_MBSC1.bit.MBC18)
#define	FxR_MHD_MBSC1_MBC17    	(IO_FxR_MHD.IO_MBSC1.bit.MBC17)
#define	FxR_MHD_MBSC1_MBC16    	(IO_FxR_MHD.IO_MBSC1.bit.MBC16)
#define	FxR_MHD_MBSC1_MBC15    	(IO_FxR_MHD.IO_MBSC1.bit.MBC15)
#define	FxR_MHD_MBSC1_MBC14    	(IO_FxR_MHD.IO_MBSC1.bit.MBC14)
#define	FxR_MHD_MBSC1_MBC13    	(IO_FxR_MHD.IO_MBSC1.bit.MBC13)
#define	FxR_MHD_MBSC1_MBC12    	(IO_FxR_MHD.IO_MBSC1.bit.MBC12)
#define	FxR_MHD_MBSC1_MBC11    	(IO_FxR_MHD.IO_MBSC1.bit.MBC11)
#define	FxR_MHD_MBSC1_MBC10    	(IO_FxR_MHD.IO_MBSC1.bit.MBC10)
#define	FxR_MHD_MBSC1_MBC9    	(IO_FxR_MHD.IO_MBSC1.bit.MBC9)
#define	FxR_MHD_MBSC1_MBC8    	(IO_FxR_MHD.IO_MBSC1.bit.MBC8)
#define	FxR_MHD_MBSC1_MBC7    	(IO_FxR_MHD.IO_MBSC1.bit.MBC7)
#define	FxR_MHD_MBSC1_MBC6    	(IO_FxR_MHD.IO_MBSC1.bit.MBC6)
#define	FxR_MHD_MBSC1_MBC5    	(IO_FxR_MHD.IO_MBSC1.bit.MBC5)
#define	FxR_MHD_MBSC1_MBC4    	(IO_FxR_MHD.IO_MBSC1.bit.MBC4)
#define	FxR_MHD_MBSC1_MBC3    	(IO_FxR_MHD.IO_MBSC1.bit.MBC3)
#define	FxR_MHD_MBSC1_MBC2    	(IO_FxR_MHD.IO_MBSC1.bit.MBC2)
#define	FxR_MHD_MBSC1_MBC1    	(IO_FxR_MHD.IO_MBSC1.bit.MBC1)
#define	FxR_MHD_MBSC1_MBC0    	(IO_FxR_MHD.IO_MBSC1.bit.MBC0)
#define	FxR_MHD_MBSC2			(IO_FxR_MHD.IO_MBSC2.word)
#define	FxR_MHD_MBSC2_MBC63    	(IO_FxR_MHD.IO_MBSC2.bit.MBC63)
#define	FxR_MHD_MBSC2_MBC62    	(IO_FxR_MHD.IO_MBSC2.bit.MBC62)
#define	FxR_MHD_MBSC2_MBC61    	(IO_FxR_MHD.IO_MBSC2.bit.MBC61)
#define	FxR_MHD_MBSC2_MBC60    	(IO_FxR_MHD.IO_MBSC2.bit.MBC60)
#define	FxR_MHD_MBSC2_MBC59    	(IO_FxR_MHD.IO_MBSC2.bit.MBC59)
#define	FxR_MHD_MBSC2_MBC58    	(IO_FxR_MHD.IO_MBSC2.bit.MBC58)
#define	FxR_MHD_MBSC2_MBC57    	(IO_FxR_MHD.IO_MBSC2.bit.MBC57)
#define	FxR_MHD_MBSC2_MBC56    	(IO_FxR_MHD.IO_MBSC2.bit.MBC56)
#define	FxR_MHD_MBSC2_MBC55    	(IO_FxR_MHD.IO_MBSC2.bit.MBC55)
#define	FxR_MHD_MBSC2_MBC54    	(IO_FxR_MHD.IO_MBSC2.bit.MBC54)
#define	FxR_MHD_MBSC2_MBC53    	(IO_FxR_MHD.IO_MBSC2.bit.MBC53)
#define	FxR_MHD_MBSC2_MBC52    	(IO_FxR_MHD.IO_MBSC2.bit.MBC52)
#define	FxR_MHD_MBSC2_MBC51    	(IO_FxR_MHD.IO_MBSC2.bit.MBC51)
#define	FxR_MHD_MBSC2_MBC50    	(IO_FxR_MHD.IO_MBSC2.bit.MBC50)
#define	FxR_MHD_MBSC2_MBC49    	(IO_FxR_MHD.IO_MBSC2.bit.MBC49)
#define	FxR_MHD_MBSC2_MBC48    	(IO_FxR_MHD.IO_MBSC2.bit.MBC48)
#define	FxR_MHD_MBSC2_MBC47    	(IO_FxR_MHD.IO_MBSC2.bit.MBC47)
#define	FxR_MHD_MBSC2_MBC46    	(IO_FxR_MHD.IO_MBSC2.bit.MBC46)
#define	FxR_MHD_MBSC2_MBC45    	(IO_FxR_MHD.IO_MBSC2.bit.MBC45)
#define	FxR_MHD_MBSC2_MBC44    	(IO_FxR_MHD.IO_MBSC2.bit.MBC44)
#define	FxR_MHD_MBSC2_MBC43    	(IO_FxR_MHD.IO_MBSC2.bit.MBC43)
#define	FxR_MHD_MBSC2_MBC42    	(IO_FxR_MHD.IO_MBSC2.bit.MBC42)
#define	FxR_MHD_MBSC2_MBC41    	(IO_FxR_MHD.IO_MBSC2.bit.MBC41)
#define	FxR_MHD_MBSC2_MBC40    	(IO_FxR_MHD.IO_MBSC2.bit.MBC40)
#define	FxR_MHD_MBSC2_MBC39    	(IO_FxR_MHD.IO_MBSC2.bit.MBC39)
#define	FxR_MHD_MBSC2_MBC38    	(IO_FxR_MHD.IO_MBSC2.bit.MBC38)
#define	FxR_MHD_MBSC2_MBC37    	(IO_FxR_MHD.IO_MBSC2.bit.MBC37)
#define	FxR_MHD_MBSC2_MBC36    	(IO_FxR_MHD.IO_MBSC2.bit.MBC36)
#define	FxR_MHD_MBSC2_MBC35    	(IO_FxR_MHD.IO_MBSC2.bit.MBC35)
#define	FxR_MHD_MBSC2_MBC34    	(IO_FxR_MHD.IO_MBSC2.bit.MBC34)
#define	FxR_MHD_MBSC2_MBC33    	(IO_FxR_MHD.IO_MBSC2.bit.MBC33)
#define	FxR_MHD_MBSC2_MBC32    	(IO_FxR_MHD.IO_MBSC2.bit.MBC32)
#define	FxR_MHD_MBSC3			(IO_FxR_MHD.IO_MBSC3.word)
#define	FxR_MHD_MBSC3_MBC95    	(IO_FxR_MHD.IO_MBSC3.bit.MBC95)
#define	FxR_MHD_MBSC3_MBC94    	(IO_FxR_MHD.IO_MBSC3.bit.MBC94)
#define	FxR_MHD_MBSC3_MBC93    	(IO_FxR_MHD.IO_MBSC3.bit.MBC93)
#define	FxR_MHD_MBSC3_MBC92    	(IO_FxR_MHD.IO_MBSC3.bit.MBC92)
#define	FxR_MHD_MBSC3_MBC91    	(IO_FxR_MHD.IO_MBSC3.bit.MBC91)
#define	FxR_MHD_MBSC3_MBC90    	(IO_FxR_MHD.IO_MBSC3.bit.MBC90)
#define	FxR_MHD_MBSC3_MBC89    	(IO_FxR_MHD.IO_MBSC3.bit.MBC89)
#define	FxR_MHD_MBSC3_MBC88    	(IO_FxR_MHD.IO_MBSC3.bit.MBC88)
#define	FxR_MHD_MBSC3_MBC87    	(IO_FxR_MHD.IO_MBSC3.bit.MBC87)
#define	FxR_MHD_MBSC3_MBC86    	(IO_FxR_MHD.IO_MBSC3.bit.MBC86)
#define	FxR_MHD_MBSC3_MBC85    	(IO_FxR_MHD.IO_MBSC3.bit.MBC85)
#define	FxR_MHD_MBSC3_MBC84    	(IO_FxR_MHD.IO_MBSC3.bit.MBC84)
#define	FxR_MHD_MBSC3_MBC83    	(IO_FxR_MHD.IO_MBSC3.bit.MBC83)
#define	FxR_MHD_MBSC3_MBC82    	(IO_FxR_MHD.IO_MBSC3.bit.MBC82)
#define	FxR_MHD_MBSC3_MBC81    	(IO_FxR_MHD.IO_MBSC3.bit.MBC81)
#define	FxR_MHD_MBSC3_MBC80    	(IO_FxR_MHD.IO_MBSC3.bit.MBC80)
#define	FxR_MHD_MBSC3_MBC79    	(IO_FxR_MHD.IO_MBSC3.bit.MBC79)
#define	FxR_MHD_MBSC3_MBC78    	(IO_FxR_MHD.IO_MBSC3.bit.MBC78)
#define	FxR_MHD_MBSC3_MBC77    	(IO_FxR_MHD.IO_MBSC3.bit.MBC77)
#define	FxR_MHD_MBSC3_MBC76    	(IO_FxR_MHD.IO_MBSC3.bit.MBC76)
#define	FxR_MHD_MBSC3_MBC75    	(IO_FxR_MHD.IO_MBSC3.bit.MBC75)
#define	FxR_MHD_MBSC3_MBC74    	(IO_FxR_MHD.IO_MBSC3.bit.MBC74)
#define	FxR_MHD_MBSC3_MBC73    	(IO_FxR_MHD.IO_MBSC3.bit.MBC73)
#define	FxR_MHD_MBSC3_MBC72    	(IO_FxR_MHD.IO_MBSC3.bit.MBC72)
#define	FxR_MHD_MBSC3_MBC71    	(IO_FxR_MHD.IO_MBSC3.bit.MBC71)
#define	FxR_MHD_MBSC3_MBC70    	(IO_FxR_MHD.IO_MBSC3.bit.MBC70)
#define	FxR_MHD_MBSC3_MBC69    	(IO_FxR_MHD.IO_MBSC3.bit.MBC69)
#define	FxR_MHD_MBSC3_MBC68    	(IO_FxR_MHD.IO_MBSC3.bit.MBC68)
#define	FxR_MHD_MBSC3_MBC67    	(IO_FxR_MHD.IO_MBSC3.bit.MBC67)
#define	FxR_MHD_MBSC3_MBC66    	(IO_FxR_MHD.IO_MBSC3.bit.MBC66)
#define	FxR_MHD_MBSC3_MBC65    	(IO_FxR_MHD.IO_MBSC3.bit.MBC65)
#define	FxR_MHD_MBSC3_MBC64    	(IO_FxR_MHD.IO_MBSC3.bit.MBC64)
#define	FxR_MHD_MBSC4			(IO_FxR_MHD.IO_MBSC4.word)
#define	FxR_MHD_MBSC4_MBC127    	(IO_FxR_MHD.IO_MBSC4.bit.MBC127)
#define	FxR_MHD_MBSC4_MBC126    	(IO_FxR_MHD.IO_MBSC4.bit.MBC126)
#define	FxR_MHD_MBSC4_MBC125    	(IO_FxR_MHD.IO_MBSC4.bit.MBC125)
#define	FxR_MHD_MBSC4_MBC124    	(IO_FxR_MHD.IO_MBSC4.bit.MBC124)
#define	FxR_MHD_MBSC4_MBC123    	(IO_FxR_MHD.IO_MBSC4.bit.MBC123)
#define	FxR_MHD_MBSC4_MBC122    	(IO_FxR_MHD.IO_MBSC4.bit.MBC122)
#define	FxR_MHD_MBSC4_MBC121    	(IO_FxR_MHD.IO_MBSC4.bit.MBC121)
#define	FxR_MHD_MBSC4_MBC120    	(IO_FxR_MHD.IO_MBSC4.bit.MBC120)
#define	FxR_MHD_MBSC4_MBC119    	(IO_FxR_MHD.IO_MBSC4.bit.MBC119)
#define	FxR_MHD_MBSC4_MBC118    	(IO_FxR_MHD.IO_MBSC4.bit.MBC118)
#define	FxR_MHD_MBSC4_MBC117    	(IO_FxR_MHD.IO_MBSC4.bit.MBC117)
#define	FxR_MHD_MBSC4_MBC116    	(IO_FxR_MHD.IO_MBSC4.bit.MBC116)
#define	FxR_MHD_MBSC4_MBC115    	(IO_FxR_MHD.IO_MBSC4.bit.MBC115)
#define	FxR_MHD_MBSC4_MBC114    	(IO_FxR_MHD.IO_MBSC4.bit.MBC114)
#define	FxR_MHD_MBSC4_MBC113    	(IO_FxR_MHD.IO_MBSC4.bit.MBC113)
#define	FxR_MHD_MBSC4_MBC112    	(IO_FxR_MHD.IO_MBSC4.bit.MBC112)
#define	FxR_MHD_MBSC4_MBC111    	(IO_FxR_MHD.IO_MBSC4.bit.MBC111)
#define	FxR_MHD_MBSC4_MBC110    	(IO_FxR_MHD.IO_MBSC4.bit.MBC110)
#define	FxR_MHD_MBSC4_MBC109    	(IO_FxR_MHD.IO_MBSC4.bit.MBC109)
#define	FxR_MHD_MBSC4_MBC108    	(IO_FxR_MHD.IO_MBSC4.bit.MBC108)
#define	FxR_MHD_MBSC4_MBC107    	(IO_FxR_MHD.IO_MBSC4.bit.MBC107)
#define	FxR_MHD_MBSC4_MBC106    	(IO_FxR_MHD.IO_MBSC4.bit.MBC106)
#define	FxR_MHD_MBSC4_MBC105    	(IO_FxR_MHD.IO_MBSC4.bit.MBC105)
#define	FxR_MHD_MBSC4_MBC104    	(IO_FxR_MHD.IO_MBSC4.bit.MBC104)
#define	FxR_MHD_MBSC4_MBC103    	(IO_FxR_MHD.IO_MBSC4.bit.MBC103)
#define	FxR_MHD_MBSC4_MBC102    	(IO_FxR_MHD.IO_MBSC4.bit.MBC102)
#define	FxR_MHD_MBSC4_MBC101    	(IO_FxR_MHD.IO_MBSC4.bit.MBC101)
#define	FxR_MHD_MBSC4_MBC100    	(IO_FxR_MHD.IO_MBSC4.bit.MBC100)
#define	FxR_MHD_MBSC4_MBC99    	(IO_FxR_MHD.IO_MBSC4.bit.MBC99)
#define	FxR_MHD_MBSC4_MBC98    	(IO_FxR_MHD.IO_MBSC4.bit.MBC98)
#define	FxR_MHD_MBSC4_MBC97    	(IO_FxR_MHD.IO_MBSC4.bit.MBC97)
#define	FxR_MHD_MBSC4_MBC96    	(IO_FxR_MHD.IO_MBSC4.bit.MBC96)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_FxR_GIF2,attr=IO,locate=0xD3F0
#endif

__IO_EXTENDED	struct {
	const union {
		__WORD	word;
		struct {
			__BYTE	REL:4;
			__WORD	STEP:8;
			__BYTE	YEAR:4;
			__BYTE	MON:8;
			__BYTE	DAY:8;
		} bit;
		struct {
			__BYTE	REL3:1;
			__BYTE	REL2:1;
			__BYTE	REL1:1;
			__BYTE	REL0:1;
			__BYTE	STEP7:1;
			__BYTE	STEP6:1;
			__BYTE	STEP5:1;
			__BYTE	STEP4:1;
			__BYTE	STEP3:1;
			__BYTE	STEP2:1;
			__BYTE	STEP1:1;
			__BYTE	STEP0:1;
			__BYTE	YEAR3:1;
			__BYTE	YEAR2:1;
			__BYTE	YEAR1:1;
			__BYTE	YEAR0:1;
			__BYTE	MON7:1;
			__BYTE	MON6:1;
			__BYTE	MON5:1;
			__BYTE	MON4:1;
			__BYTE	MON3:1;
			__BYTE	MON2:1;
			__BYTE	MON1:1;
			__BYTE	MON0:1;
			__BYTE	DAY7:1;
			__BYTE	DAY6:1;
			__BYTE	DAY5:1;
			__BYTE	DAY4:1;
			__BYTE	DAY3:1;
			__BYTE	DAY2:1;
			__BYTE	DAY1:1;
			__BYTE	DAY0:1;
		} bitc;
	} IO_CREL;
	const __WORD	IO_ENDN;
} IO_FxR_GIF2;

#define	FxR_GIF2_CREL			(IO_FxR_GIF2.IO_CREL.word)
#define	FxR_GIF2_CREL_REL    	(IO_FxR_GIF2.IO_CREL.bit.REL)
#define	FxR_GIF2_CREL_REL0    	(IO_FxR_GIF2.IO_CREL.bitc.REL0)
#define	FxR_GIF2_CREL_REL1    	(IO_FxR_GIF2.IO_CREL.bitc.REL1)
#define	FxR_GIF2_CREL_REL2    	(IO_FxR_GIF2.IO_CREL.bitc.REL2)
#define	FxR_GIF2_CREL_REL3    	(IO_FxR_GIF2.IO_CREL.bitc.REL3)
#define	FxR_GIF2_CREL_STEP    	(IO_FxR_GIF2.IO_CREL.bit.STEP)
#define	FxR_GIF2_CREL_STEP0    	(IO_FxR_GIF2.IO_CREL.bitc.STEP0)
#define	FxR_GIF2_CREL_STEP1    	(IO_FxR_GIF2.IO_CREL.bitc.STEP1)
#define	FxR_GIF2_CREL_STEP2    	(IO_FxR_GIF2.IO_CREL.bitc.STEP2)
#define	FxR_GIF2_CREL_STEP3    	(IO_FxR_GIF2.IO_CREL.bitc.STEP3)
#define	FxR_GIF2_CREL_STEP4    	(IO_FxR_GIF2.IO_CREL.bitc.STEP4)
#define	FxR_GIF2_CREL_STEP5    	(IO_FxR_GIF2.IO_CREL.bitc.STEP5)
#define	FxR_GIF2_CREL_STEP6    	(IO_FxR_GIF2.IO_CREL.bitc.STEP6)
#define	FxR_GIF2_CREL_STEP7    	(IO_FxR_GIF2.IO_CREL.bitc.STEP7)
#define	FxR_GIF2_CREL_YEAR    	(IO_FxR_GIF2.IO_CREL.bit.YEAR)
#define	FxR_GIF2_CREL_YEAR0    	(IO_FxR_GIF2.IO_CREL.bitc.YEAR0)
#define	FxR_GIF2_CREL_YEAR1    	(IO_FxR_GIF2.IO_CREL.bitc.YEAR1)
#define	FxR_GIF2_CREL_YEAR2    	(IO_FxR_GIF2.IO_CREL.bitc.YEAR2)
#define	FxR_GIF2_CREL_YEAR3    	(IO_FxR_GIF2.IO_CREL.bitc.YEAR3)
#define	FxR_GIF2_CREL_MON    	(IO_FxR_GIF2.IO_CREL.bit.MON)
#define	FxR_GIF2_CREL_MON0    	(IO_FxR_GIF2.IO_CREL.bitc.MON0)
#define	FxR_GIF2_CREL_MON1    	(IO_FxR_GIF2.IO_CREL.bitc.MON1)
#define	FxR_GIF2_CREL_MON2    	(IO_FxR_GIF2.IO_CREL.bitc.MON2)
#define	FxR_GIF2_CREL_MON3    	(IO_FxR_GIF2.IO_CREL.bitc.MON3)
#define	FxR_GIF2_CREL_MON4    	(IO_FxR_GIF2.IO_CREL.bitc.MON4)
#define	FxR_GIF2_CREL_MON5    	(IO_FxR_GIF2.IO_CREL.bitc.MON5)
#define	FxR_GIF2_CREL_MON6    	(IO_FxR_GIF2.IO_CREL.bitc.MON6)
#define	FxR_GIF2_CREL_MON7    	(IO_FxR_GIF2.IO_CREL.bitc.MON7)
#define	FxR_GIF2_CREL_DAY    	(IO_FxR_GIF2.IO_CREL.bit.DAY)
#define	FxR_GIF2_CREL_DAY0    	(IO_FxR_GIF2.IO_CREL.bitc.DAY0)
#define	FxR_GIF2_CREL_DAY1    	(IO_FxR_GIF2.IO_CREL.bitc.DAY1)
#define	FxR_GIF2_CREL_DAY2    	(IO_FxR_GIF2.IO_CREL.bitc.DAY2)
#define	FxR_GIF2_CREL_DAY3    	(IO_FxR_GIF2.IO_CREL.bitc.DAY3)
#define	FxR_GIF2_CREL_DAY4    	(IO_FxR_GIF2.IO_CREL.bitc.DAY4)
#define	FxR_GIF2_CREL_DAY5    	(IO_FxR_GIF2.IO_CREL.bitc.DAY5)
#define	FxR_GIF2_CREL_DAY6    	(IO_FxR_GIF2.IO_CREL.bitc.DAY6)
#define	FxR_GIF2_CREL_DAY7    	(IO_FxR_GIF2.IO_CREL.bitc.DAY7)
#define	FxR_GIF2_ENDN	(IO_FxR_GIF2.IO_ENDN)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_FxR_WRDS,attr=IO,locate=0xD400
#endif

__IO_EXTENDED	__WORD	IO_FxR_WRDS[CONSTANT_64];
#define	_fxr_wrds		(IO_FxR_WRDS)
#define	FxR_WRDS	(_fxr_wrds)
#define	FxR_WRDS0	(IO_FxR_WRDS[CONSTANT_0])
#define	FxR_WRDS1	(IO_FxR_WRDS[CONSTANT_1])
#define	FxR_WRDS2	(IO_FxR_WRDS[CONSTANT_2])
#define	FxR_WRDS3	(IO_FxR_WRDS[CONSTANT_3])
#define	FxR_WRDS4	(IO_FxR_WRDS[CONSTANT_4])
#define	FxR_WRDS5	(IO_FxR_WRDS[CONSTANT_5])
#define	FxR_WRDS6	(IO_FxR_WRDS[CONSTANT_6])
#define	FxR_WRDS7	(IO_FxR_WRDS[CONSTANT_7])
#define	FxR_WRDS8	(IO_FxR_WRDS[CONSTANT_8])
#define	FxR_WRDS9	(IO_FxR_WRDS[CONSTANT_9])
#define	FxR_WRDS10	(IO_FxR_WRDS[CONSTANT_10])
#define	FxR_WRDS11	(IO_FxR_WRDS[CONSTANT_11])
#define	FxR_WRDS12	(IO_FxR_WRDS[CONSTANT_12])
#define	FxR_WRDS13	(IO_FxR_WRDS[CONSTANT_13])
#define	FxR_WRDS14	(IO_FxR_WRDS[CONSTANT_14])
#define	FxR_WRDS15	(IO_FxR_WRDS[CONSTANT_15])
#define	FxR_WRDS16	(IO_FxR_WRDS[CONSTANT_16])
#define	FxR_WRDS17	(IO_FxR_WRDS[CONSTANT_17])
#define	FxR_WRDS18	(IO_FxR_WRDS[CONSTANT_18])
#define	FxR_WRDS19	(IO_FxR_WRDS[CONSTANT_19])
#define	FxR_WRDS20	(IO_FxR_WRDS[CONSTANT_20])
#define	FxR_WRDS21	(IO_FxR_WRDS[CONSTANT_21])
#define	FxR_WRDS22	(IO_FxR_WRDS[CONSTANT_22])
#define	FxR_WRDS23	(IO_FxR_WRDS[CONSTANT_23])
#define	FxR_WRDS24	(IO_FxR_WRDS[CONSTANT_24])
#define	FxR_WRDS25	(IO_FxR_WRDS[CONSTANT_25])
#define	FxR_WRDS26	(IO_FxR_WRDS[CONSTANT_26])
#define	FxR_WRDS27	(IO_FxR_WRDS[CONSTANT_27])
#define	FxR_WRDS28	(IO_FxR_WRDS[CONSTANT_28])
#define	FxR_WRDS29	(IO_FxR_WRDS[CONSTANT_29])
#define	FxR_WRDS30	(IO_FxR_WRDS[CONSTANT_30])
#define	FxR_WRDS31	(IO_FxR_WRDS[CONSTANT_31])
#define	FxR_WRDS32	(IO_FxR_WRDS[CONSTANT_32])
#define	FxR_WRDS33	(IO_FxR_WRDS[CONSTANT_33])
#define	FxR_WRDS34	(IO_FxR_WRDS[CONSTANT_34])
#define	FxR_WRDS35	(IO_FxR_WRDS[CONSTANT_35])
#define	FxR_WRDS36	(IO_FxR_WRDS[CONSTANT_36])
#define	FxR_WRDS37	(IO_FxR_WRDS[CONSTANT_37])
#define	FxR_WRDS38	(IO_FxR_WRDS[CONSTANT_38])
#define	FxR_WRDS39	(IO_FxR_WRDS[CONSTANT_39])
#define	FxR_WRDS40	(IO_FxR_WRDS[CONSTANT_40])
#define	FxR_WRDS41	(IO_FxR_WRDS[CONSTANT_41])
#define	FxR_WRDS42	(IO_FxR_WRDS[CONSTANT_42])
#define	FxR_WRDS43	(IO_FxR_WRDS[CONSTANT_43])
#define	FxR_WRDS44	(IO_FxR_WRDS[CONSTANT_44])
#define	FxR_WRDS45	(IO_FxR_WRDS[CONSTANT_45])
#define	FxR_WRDS46	(IO_FxR_WRDS[CONSTANT_46])
#define	FxR_WRDS47	(IO_FxR_WRDS[CONSTANT_47])
#define	FxR_WRDS48	(IO_FxR_WRDS[CONSTANT_48])
#define	FxR_WRDS49	(IO_FxR_WRDS[CONSTANT_49])
#define	FxR_WRDS50	(IO_FxR_WRDS[CONSTANT_50])
#define	FxR_WRDS51	(IO_FxR_WRDS[CONSTANT_51])
#define	FxR_WRDS52	(IO_FxR_WRDS[CONSTANT_52])
#define	FxR_WRDS53	(IO_FxR_WRDS[CONSTANT_53])
#define	FxR_WRDS54	(IO_FxR_WRDS[CONSTANT_54])
#define	FxR_WRDS55	(IO_FxR_WRDS[CONSTANT_55])
#define	FxR_WRDS56	(IO_FxR_WRDS[CONSTANT_56])
#define	FxR_WRDS57	(IO_FxR_WRDS[CONSTANT_57])
#define	FxR_WRDS58	(IO_FxR_WRDS[CONSTANT_58])
#define	FxR_WRDS59	(IO_FxR_WRDS[CONSTANT_59])
#define	FxR_WRDS60	(IO_FxR_WRDS[CONSTANT_60])
#define	FxR_WRDS61	(IO_FxR_WRDS[CONSTANT_61])
#define	FxR_WRDS62	(IO_FxR_WRDS[CONSTANT_62])
#define	FxR_WRDS63	(IO_FxR_WRDS[CONSTANT_63])

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_FxR_IBF,attr=IO,locate=0xD500
#endif

__IO_EXTENDED	struct {
	union {
		__WORD	word;
		struct {
			__BYTE	RESV00:1;
			__BYTE	RESV01:1;
			__BYTE	MBI:1;
			__BYTE	TXM:1;
			__BYTE	PPIT:1;
			__BYTE	CFG:1;
			__BYTE	CHB:1;
			__BYTE	CHA:1;
			__BYTE	RESV08:1;
			__BYTE	CYC:7;
			__BYTE	RESV010:1;
			__BYTE	RESV011:1;
			__BYTE	RESV012:1;
			__BYTE	RESV013:1;
			__BYTE	RESV014:1;
			__WORD	FID:11;
		} bit;
		struct {
			__BYTE	RESV00:1;
			__BYTE	RESV01:1;
			__BYTE	MBI:1;
			__BYTE	TXM:1;
			__BYTE	PPIT:1;
			__BYTE	CFG:1;
			__BYTE	CHB:1;
			__BYTE	CHA:1;
			__BYTE	RESV08:1;
			__BYTE	CYC6:1;
			__BYTE	CYC5:1;
			__BYTE	CYC4:1;
			__BYTE	CYC3:1;
			__BYTE	CYC2:1;
			__BYTE	CYC1:1;
			__BYTE	CYC0:1;
			__BYTE	RESV016:1;
			__BYTE	RESV017:1;
			__BYTE	RESV018:1;
			__BYTE	RESV019:1;
			__BYTE	RESV020:1;
			__BYTE	FID10:1;
			__BYTE	FID9:1;
			__BYTE	FID8:1;
			__BYTE	FID7:1;
			__BYTE	FID6:1;
			__BYTE	FID5:1;
			__BYTE	FID4:1;
			__BYTE	FID3:1;
			__BYTE	FID2:1;
			__BYTE	FID1:1;
			__BYTE	FID0:1;
		} bitc;
	} IO_WRHS1;
	union {
		__WORD	word;
		struct {
			__BYTE	RESV40:1;
			__BYTE	RESV41:1;
			__BYTE	RESV42:1;
			__BYTE	RESV43:1;
			__BYTE	RESV44:1;
			__BYTE	RESV45:1;
			__BYTE	RESV46:1;
			__BYTE	RESV47:1;
			__BYTE	RESV48:1;
			__BYTE	PLC:7;
			__BYTE	RESV410:1;
			__BYTE	RESV411:1;
			__BYTE	RESV412:1;
			__BYTE	RESV413:1;
			__BYTE	RESV414:1;
			__WORD	CRC:11;
		} bit;
		struct {
			__BYTE	RESV40:1;
			__BYTE	RESV41:1;
			__BYTE	RESV42:1;
			__BYTE	RESV43:1;
			__BYTE	RESV44:1;
			__BYTE	RESV45:1;
			__BYTE	RESV46:1;
			__BYTE	RESV47:1;
			__BYTE	RESV48:1;
			__BYTE	PLC6:1;
			__BYTE	PLC5:1;
			__BYTE	PLC4:1;
			__BYTE	PLC3:1;
			__BYTE	PLC2:1;
			__BYTE	PLC1:1;
			__BYTE	PLC0:1;
			__BYTE	RESV416:1;
			__BYTE	RESV417:1;
			__BYTE	RESV418:1;
			__BYTE	RESV419:1;
			__BYTE	RESV420:1;
			__BYTE	CRC10:1;
			__BYTE	CRC9:1;
			__BYTE	CRC8:1;
			__BYTE	CRC7:1;
			__BYTE	CRC6:1;
			__BYTE	CRC5:1;
			__BYTE	CRC4:1;
			__BYTE	CRC3:1;
			__BYTE	CRC2:1;
			__BYTE	CRC1:1;
			__BYTE	CRC0:1;
		} bitc;
	} IO_WRHS2;
	union {
		__WORD	word;
		struct {
			__BYTE	RESV80:1;
			__BYTE	RESV81:1;
			__BYTE	RESV82:1;
			__BYTE	RESV83:1;
			__BYTE	RESV84:1;
			__BYTE	RESV85:1;
			__BYTE	RESV86:1;
			__BYTE	RESV87:1;
			__BYTE	RESV88:1;
			__BYTE	RESV89:1;
			__BYTE	RESV810:1;
			__BYTE	RESV811:1;
			__BYTE	RESV812:1;
			__BYTE	RESV813:1;
			__BYTE	RESV814:1;
			__BYTE	RESV815:1;
			__BYTE	RESV816:1;
			__BYTE	RESV817:1;
			__BYTE	RESV818:1;
			__BYTE	RESV819:1;
			__BYTE	RESV820:1;
			__WORD	DP:11;
		} bit;
		struct {
			__BYTE	RESV80:1;
			__BYTE	RESV81:1;
			__BYTE	RESV82:1;
			__BYTE	RESV83:1;
			__BYTE	RESV84:1;
			__BYTE	RESV85:1;
			__BYTE	RESV86:1;
			__BYTE	RESV87:1;
			__BYTE	RESV88:1;
			__BYTE	RESV89:1;
			__BYTE	RESV810:1;
			__BYTE	RESV811:1;
			__BYTE	RESV812:1;
			__BYTE	RESV813:1;
			__BYTE	RESV814:1;
			__BYTE	RESV815:1;
			__BYTE	RESV816:1;
			__BYTE	RESV817:1;
			__BYTE	RESV818:1;
			__BYTE	RESV819:1;
			__BYTE	RESV820:1;
			__BYTE	DP10:1;
			__BYTE	DP9:1;
			__BYTE	DP8:1;
			__BYTE	DP7:1;
			__BYTE	DP6:1;
			__BYTE	DP5:1;
			__BYTE	DP4:1;
			__BYTE	DP3:1;
			__BYTE	DP2:1;
			__BYTE	DP1:1;
			__BYTE	DP0:1;
		} bitc;
	} IO_WRHS3;
	__WORD	IO_RESV1;
	union {
		__WORD	word;
		struct {
			__BYTE	RESV160:1;
			__BYTE	RESV161:1;
			__BYTE	RESV162:1;
			__BYTE	RESV163:1;
			__BYTE	RESV164:1;
			__BYTE	RESV165:1;
			__BYTE	RESV166:1;
			__BYTE	RESV167:1;
			__BYTE	RESV168:1;
			__BYTE	RESV169:1;
			__BYTE	RESV1610:1;
			__BYTE	RESV1611:1;
			__BYTE	RESV1612:1;
			__BYTE	STXRS:1;
			__BYTE	LDSS:1;
			__BYTE	LHSS:1;
			__BYTE	RESV1616:1;
			__BYTE	RESV1617:1;
			__BYTE	RESV1618:1;
			__BYTE	RESV1619:1;
			__BYTE	RESV1620:1;
			__BYTE	RESV1621:1;
			__BYTE	RESV1622:1;
			__BYTE	RESV1623:1;
			__BYTE	RESV1624:1;
			__BYTE	RESV1625:1;
			__BYTE	RESV1626:1;
			__BYTE	RESV1627:1;
			__BYTE	RESV1628:1;
			__BYTE	STXRH:1;
			__BYTE	LDSH:1;
			__BYTE	LHSH:1;
		} bit;
		struct {
			__BYTE	RESV160:1;
			__BYTE	RESV161:1;
			__BYTE	RESV162:1;
			__BYTE	RESV163:1;
			__BYTE	RESV164:1;
			__BYTE	RESV165:1;
			__BYTE	RESV166:1;
			__BYTE	RESV167:1;
			__BYTE	RESV168:1;
			__BYTE	RESV169:1;
			__BYTE	RESV1610:1;
			__BYTE	RESV1611:1;
			__BYTE	RESV1612:1;
			__BYTE	STXRS:1;
			__BYTE	LDSS:1;
			__BYTE	LHSS:1;
			__BYTE	RESV1616:1;
			__BYTE	RESV1617:1;
			__BYTE	RESV1618:1;
			__BYTE	RESV1619:1;
			__BYTE	RESV1620:1;
			__BYTE	RESV1621:1;
			__BYTE	RESV1622:1;
			__BYTE	RESV1623:1;
			__BYTE	RESV1624:1;
			__BYTE	RESV1625:1;
			__BYTE	RESV1626:1;
			__BYTE	RESV1627:1;
			__BYTE	RESV1628:1;
			__BYTE	STXRH:1;
			__BYTE	LDSH:1;
			__BYTE	LHSH:1;
		} bitc;
	} IO_IBCM;
	union {
		__WORD	word;
		struct {
			__BYTE	RESV200:1;
			__BYTE	RESV201:1;
			__BYTE	RESV202:1;
			__BYTE	RESV203:1;
			__BYTE	RESV204:1;
			__BYTE	RESV205:1;
			__BYTE	RESV206:1;
			__BYTE	RESV207:1;
			__BYTE	RESV208:1;
			__BYTE	IBRS:7;
			__BYTE	RESV2010:1;
			__BYTE	RESV2011:1;
			__BYTE	RESV2012:1;
			__BYTE	RESV2013:1;
			__BYTE	RESV2014:1;
			__BYTE	RESV2015:1;
			__BYTE	RESV2016:1;
			__BYTE	RESV2017:1;
			__BYTE	RESV2018:1;
			__BYTE	IBRH:7;
		} bit;
		struct {
			__BYTE	RESV200:1;
			__BYTE	RESV201:1;
			__BYTE	RESV202:1;
			__BYTE	RESV203:1;
			__BYTE	RESV204:1;
			__BYTE	RESV205:1;
			__BYTE	RESV206:1;
			__BYTE	RESV207:1;
			__BYTE	RESV208:1;
			__BYTE	IBRS6:1;
			__BYTE	IBRS5:1;
			__BYTE	IBRS4:1;
			__BYTE	IBRS3:1;
			__BYTE	IBRS2:1;
			__BYTE	IBRS1:1;
			__BYTE	IBRS0:1;
			__BYTE	RESV2016:1;
			__BYTE	RESV2017:1;
			__BYTE	RESV2018:1;
			__BYTE	RESV2019:1;
			__BYTE	RESV2020:1;
			__BYTE	RESV2021:1;
			__BYTE	RESV2022:1;
			__BYTE	RESV2023:1;
			__BYTE	RESV2024:1;
			__BYTE	IBRH6:1;
			__BYTE	IBRH5:1;
			__BYTE	IBRH4:1;
			__BYTE	IBRH3:1;
			__BYTE	IBRH2:1;
			__BYTE	IBRH1:1;
			__BYTE	IBRH0:1;
		} bitc;
	} IO_IBCR;
} IO_FxR_IBF;

#define	FxR_IBF_WRHS1			(IO_FxR_IBF.IO_WRHS1.word)
#define	FxR_IBF_WRHS1_MBI    	(IO_FxR_IBF.IO_WRHS1.bit.MBI)
#define	FxR_IBF_WRHS1_TXM    	(IO_FxR_IBF.IO_WRHS1.bit.TXM)
#define	FxR_IBF_WRHS1_PPIT    	(IO_FxR_IBF.IO_WRHS1.bit.PPIT)
#define	FxR_IBF_WRHS1_CFG    	(IO_FxR_IBF.IO_WRHS1.bit.CFG)
#define	FxR_IBF_WRHS1_CHB    	(IO_FxR_IBF.IO_WRHS1.bit.CHB)
#define	FxR_IBF_WRHS1_CHA    	(IO_FxR_IBF.IO_WRHS1.bit.CHA)
#define	FxR_IBF_WRHS1_CYC    	(IO_FxR_IBF.IO_WRHS1.bit.CYC)
#define	FxR_IBF_WRHS1_CYC0    	(IO_FxR_IBF.IO_WRHS1.bitc.CYC0)
#define	FxR_IBF_WRHS1_CYC1    	(IO_FxR_IBF.IO_WRHS1.bitc.CYC1)
#define	FxR_IBF_WRHS1_CYC2    	(IO_FxR_IBF.IO_WRHS1.bitc.CYC2)
#define	FxR_IBF_WRHS1_CYC3    	(IO_FxR_IBF.IO_WRHS1.bitc.CYC3)
#define	FxR_IBF_WRHS1_CYC4    	(IO_FxR_IBF.IO_WRHS1.bitc.CYC4)
#define	FxR_IBF_WRHS1_CYC5    	(IO_FxR_IBF.IO_WRHS1.bitc.CYC5)
#define	FxR_IBF_WRHS1_CYC6    	(IO_FxR_IBF.IO_WRHS1.bitc.CYC6)
#define	FxR_IBF_WRHS1_FID    	(IO_FxR_IBF.IO_WRHS1.bit.FID)
#define	FxR_IBF_WRHS1_FID0    	(IO_FxR_IBF.IO_WRHS1.bitc.FID0)
#define	FxR_IBF_WRHS1_FID1    	(IO_FxR_IBF.IO_WRHS1.bitc.FID1)
#define	FxR_IBF_WRHS1_FID2    	(IO_FxR_IBF.IO_WRHS1.bitc.FID2)
#define	FxR_IBF_WRHS1_FID3    	(IO_FxR_IBF.IO_WRHS1.bitc.FID3)
#define	FxR_IBF_WRHS1_FID4    	(IO_FxR_IBF.IO_WRHS1.bitc.FID4)
#define	FxR_IBF_WRHS1_FID5    	(IO_FxR_IBF.IO_WRHS1.bitc.FID5)
#define	FxR_IBF_WRHS1_FID6    	(IO_FxR_IBF.IO_WRHS1.bitc.FID6)
#define	FxR_IBF_WRHS1_FID7    	(IO_FxR_IBF.IO_WRHS1.bitc.FID7)
#define	FxR_IBF_WRHS1_FID8    	(IO_FxR_IBF.IO_WRHS1.bitc.FID8)
#define	FxR_IBF_WRHS1_FID9    	(IO_FxR_IBF.IO_WRHS1.bitc.FID9)
#define	FxR_IBF_WRHS1_FID10    	(IO_FxR_IBF.IO_WRHS1.bitc.FID10)
#define	FxR_IBF_WRHS2			(IO_FxR_IBF.IO_WRHS2.word)
#define	FxR_IBF_WRHS2_PLC    	(IO_FxR_IBF.IO_WRHS2.bit.PLC)
#define	FxR_IBF_WRHS2_PLC0    	(IO_FxR_IBF.IO_WRHS2.bitc.PLC0)
#define	FxR_IBF_WRHS2_PLC1    	(IO_FxR_IBF.IO_WRHS2.bitc.PLC1)
#define	FxR_IBF_WRHS2_PLC2    	(IO_FxR_IBF.IO_WRHS2.bitc.PLC2)
#define	FxR_IBF_WRHS2_PLC3    	(IO_FxR_IBF.IO_WRHS2.bitc.PLC3)
#define	FxR_IBF_WRHS2_PLC4    	(IO_FxR_IBF.IO_WRHS2.bitc.PLC4)
#define	FxR_IBF_WRHS2_PLC5    	(IO_FxR_IBF.IO_WRHS2.bitc.PLC5)
#define	FxR_IBF_WRHS2_PLC6    	(IO_FxR_IBF.IO_WRHS2.bitc.PLC6)
#define	FxR_IBF_WRHS2_CRC    	(IO_FxR_IBF.IO_WRHS2.bit.CRC)
#define	FxR_IBF_WRHS2_CRC0    	(IO_FxR_IBF.IO_WRHS2.bitc.CRC0)
#define	FxR_IBF_WRHS2_CRC1    	(IO_FxR_IBF.IO_WRHS2.bitc.CRC1)
#define	FxR_IBF_WRHS2_CRC2    	(IO_FxR_IBF.IO_WRHS2.bitc.CRC2)
#define	FxR_IBF_WRHS2_CRC3    	(IO_FxR_IBF.IO_WRHS2.bitc.CRC3)
#define	FxR_IBF_WRHS2_CRC4    	(IO_FxR_IBF.IO_WRHS2.bitc.CRC4)
#define	FxR_IBF_WRHS2_CRC5    	(IO_FxR_IBF.IO_WRHS2.bitc.CRC5)
#define	FxR_IBF_WRHS2_CRC6    	(IO_FxR_IBF.IO_WRHS2.bitc.CRC6)
#define	FxR_IBF_WRHS2_CRC7    	(IO_FxR_IBF.IO_WRHS2.bitc.CRC7)
#define	FxR_IBF_WRHS2_CRC8    	(IO_FxR_IBF.IO_WRHS2.bitc.CRC8)
#define	FxR_IBF_WRHS2_CRC9    	(IO_FxR_IBF.IO_WRHS2.bitc.CRC9)
#define	FxR_IBF_WRHS2_CRC10    	(IO_FxR_IBF.IO_WRHS2.bitc.CRC10)
#define	FxR_IBF_WRHS3			(IO_FxR_IBF.IO_WRHS3.word)
#define	FxR_IBF_WRHS3_DP    	(IO_FxR_IBF.IO_WRHS3.bit.DP)
#define	FxR_IBF_WRHS3_DP0    	(IO_FxR_IBF.IO_WRHS3.bitc.DP0)
#define	FxR_IBF_WRHS3_DP1    	(IO_FxR_IBF.IO_WRHS3.bitc.DP1)
#define	FxR_IBF_WRHS3_DP2    	(IO_FxR_IBF.IO_WRHS3.bitc.DP2)
#define	FxR_IBF_WRHS3_DP3    	(IO_FxR_IBF.IO_WRHS3.bitc.DP3)
#define	FxR_IBF_WRHS3_DP4    	(IO_FxR_IBF.IO_WRHS3.bitc.DP4)
#define	FxR_IBF_WRHS3_DP5    	(IO_FxR_IBF.IO_WRHS3.bitc.DP5)
#define	FxR_IBF_WRHS3_DP6    	(IO_FxR_IBF.IO_WRHS3.bitc.DP6)
#define	FxR_IBF_WRHS3_DP7    	(IO_FxR_IBF.IO_WRHS3.bitc.DP7)
#define	FxR_IBF_WRHS3_DP8    	(IO_FxR_IBF.IO_WRHS3.bitc.DP8)
#define	FxR_IBF_WRHS3_DP9    	(IO_FxR_IBF.IO_WRHS3.bitc.DP9)
#define	FxR_IBF_WRHS3_DP10    	(IO_FxR_IBF.IO_WRHS3.bitc.DP10)
#define	FxR_IBF_IBCM			(IO_FxR_IBF.IO_IBCM.word)
#define	FxR_IBF_IBCM_STXRS    	(IO_FxR_IBF.IO_IBCM.bit.STXRS)
#define	FxR_IBF_IBCM_LDSS    	(IO_FxR_IBF.IO_IBCM.bit.LDSS)
#define	FxR_IBF_IBCM_LHSS    	(IO_FxR_IBF.IO_IBCM.bit.LHSS)
#define	FxR_IBF_IBCM_STXRH    	(IO_FxR_IBF.IO_IBCM.bit.STXRH)
#define	FxR_IBF_IBCM_LDSH    	(IO_FxR_IBF.IO_IBCM.bit.LDSH)
#define	FxR_IBF_IBCM_LHSH    	(IO_FxR_IBF.IO_IBCM.bit.LHSH)
#define	FxR_IBF_IBCR			(IO_FxR_IBF.IO_IBCR.word)
#define	FxR_IBF_IBCR_IBRS    	(IO_FxR_IBF.IO_IBCR.bit.IBRS)
#define	FxR_IBF_IBCR_IBRS0    	(IO_FxR_IBF.IO_IBCR.bitc.IBRS0)
#define	FxR_IBF_IBCR_IBRS1    	(IO_FxR_IBF.IO_IBCR.bitc.IBRS1)
#define	FxR_IBF_IBCR_IBRS2    	(IO_FxR_IBF.IO_IBCR.bitc.IBRS2)
#define	FxR_IBF_IBCR_IBRS3    	(IO_FxR_IBF.IO_IBCR.bitc.IBRS3)
#define	FxR_IBF_IBCR_IBRS4    	(IO_FxR_IBF.IO_IBCR.bitc.IBRS4)
#define	FxR_IBF_IBCR_IBRS5    	(IO_FxR_IBF.IO_IBCR.bitc.IBRS5)
#define	FxR_IBF_IBCR_IBRS6    	(IO_FxR_IBF.IO_IBCR.bitc.IBRS6)
#define	FxR_IBF_IBCR_IBRH    	(IO_FxR_IBF.IO_IBCR.bit.IBRH)
#define	FxR_IBF_IBCR_IBRH0    	(IO_FxR_IBF.IO_IBCR.bitc.IBRH0)
#define	FxR_IBF_IBCR_IBRH1    	(IO_FxR_IBF.IO_IBCR.bitc.IBRH1)
#define	FxR_IBF_IBCR_IBRH2    	(IO_FxR_IBF.IO_IBCR.bitc.IBRH2)
#define	FxR_IBF_IBCR_IBRH3    	(IO_FxR_IBF.IO_IBCR.bitc.IBRH3)
#define	FxR_IBF_IBCR_IBRH4    	(IO_FxR_IBF.IO_IBCR.bitc.IBRH4)
#define	FxR_IBF_IBCR_IBRH5    	(IO_FxR_IBF.IO_IBCR.bitc.IBRH5)
#define	FxR_IBF_IBCR_IBRH6    	(IO_FxR_IBF.IO_IBCR.bitc.IBRH6)

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_FxR_RDDS,attr=IO,locate=0xD600
#endif

__IO_EXTENDED	__WORD	IO_FxR_RDDS[CONSTANT_64];
#define	_fxr_rdds		(IO_FxR_RDDS)
#define	FxR_RDDS	(_fxr_rdds)
#define	FxR_RDDS0	(IO_FxR_RDDS[CONSTANT_0])
#define	FxR_RDDS1	(IO_FxR_RDDS[CONSTANT_1])
#define	FxR_RDDS2	(IO_FxR_RDDS[CONSTANT_2])
#define	FxR_RDDS3	(IO_FxR_RDDS[CONSTANT_3])
#define	FxR_RDDS4	(IO_FxR_RDDS[CONSTANT_4])
#define	FxR_RDDS5	(IO_FxR_RDDS[CONSTANT_5])
#define	FxR_RDDS6	(IO_FxR_RDDS[CONSTANT_6])
#define	FxR_RDDS7	(IO_FxR_RDDS[CONSTANT_7])
#define	FxR_RDDS8	(IO_FxR_RDDS[CONSTANT_8])
#define	FxR_RDDS9	(IO_FxR_RDDS[CONSTANT_9])
#define	FxR_RDDS10	(IO_FxR_RDDS[CONSTANT_10])
#define	FxR_RDDS11	(IO_FxR_RDDS[CONSTANT_11])
#define	FxR_RDDS12	(IO_FxR_RDDS[CONSTANT_12])
#define	FxR_RDDS13	(IO_FxR_RDDS[CONSTANT_13])
#define	FxR_RDDS14	(IO_FxR_RDDS[CONSTANT_14])
#define	FxR_RDDS15	(IO_FxR_RDDS[CONSTANT_15])
#define	FxR_RDDS16	(IO_FxR_RDDS[CONSTANT_16])
#define	FxR_RDDS17	(IO_FxR_RDDS[CONSTANT_17])
#define	FxR_RDDS18	(IO_FxR_RDDS[CONSTANT_18])
#define	FxR_RDDS19	(IO_FxR_RDDS[CONSTANT_19])
#define	FxR_RDDS20	(IO_FxR_RDDS[CONSTANT_20])
#define	FxR_RDDS21	(IO_FxR_RDDS[CONSTANT_21])
#define	FxR_RDDS22	(IO_FxR_RDDS[CONSTANT_22])
#define	FxR_RDDS23	(IO_FxR_RDDS[CONSTANT_23])
#define	FxR_RDDS24	(IO_FxR_RDDS[CONSTANT_24])
#define	FxR_RDDS25	(IO_FxR_RDDS[CONSTANT_25])
#define	FxR_RDDS26	(IO_FxR_RDDS[CONSTANT_26])
#define	FxR_RDDS27	(IO_FxR_RDDS[CONSTANT_27])
#define	FxR_RDDS28	(IO_FxR_RDDS[CONSTANT_28])
#define	FxR_RDDS29	(IO_FxR_RDDS[CONSTANT_29])
#define	FxR_RDDS30	(IO_FxR_RDDS[CONSTANT_30])
#define	FxR_RDDS31	(IO_FxR_RDDS[CONSTANT_31])
#define	FxR_RDDS32	(IO_FxR_RDDS[CONSTANT_32])
#define	FxR_RDDS33	(IO_FxR_RDDS[CONSTANT_33])
#define	FxR_RDDS34	(IO_FxR_RDDS[CONSTANT_34])
#define	FxR_RDDS35	(IO_FxR_RDDS[CONSTANT_35])
#define	FxR_RDDS36	(IO_FxR_RDDS[CONSTANT_36])
#define	FxR_RDDS37	(IO_FxR_RDDS[CONSTANT_37])
#define	FxR_RDDS38	(IO_FxR_RDDS[CONSTANT_38])
#define	FxR_RDDS39	(IO_FxR_RDDS[CONSTANT_39])
#define	FxR_RDDS40	(IO_FxR_RDDS[CONSTANT_40])
#define	FxR_RDDS41	(IO_FxR_RDDS[CONSTANT_41])
#define	FxR_RDDS42	(IO_FxR_RDDS[CONSTANT_42])
#define	FxR_RDDS43	(IO_FxR_RDDS[CONSTANT_43])
#define	FxR_RDDS44	(IO_FxR_RDDS[CONSTANT_44])
#define	FxR_RDDS45	(IO_FxR_RDDS[CONSTANT_45])
#define	FxR_RDDS46	(IO_FxR_RDDS[CONSTANT_46])
#define	FxR_RDDS47	(IO_FxR_RDDS[CONSTANT_47])
#define	FxR_RDDS48	(IO_FxR_RDDS[CONSTANT_48])
#define	FxR_RDDS49	(IO_FxR_RDDS[CONSTANT_49])
#define	FxR_RDDS50	(IO_FxR_RDDS[CONSTANT_50])
#define	FxR_RDDS51	(IO_FxR_RDDS[CONSTANT_51])
#define	FxR_RDDS52	(IO_FxR_RDDS[CONSTANT_52])
#define	FxR_RDDS53	(IO_FxR_RDDS[CONSTANT_53])
#define	FxR_RDDS54	(IO_FxR_RDDS[CONSTANT_54])
#define	FxR_RDDS55	(IO_FxR_RDDS[CONSTANT_55])
#define	FxR_RDDS56	(IO_FxR_RDDS[CONSTANT_56])
#define	FxR_RDDS57	(IO_FxR_RDDS[CONSTANT_57])
#define	FxR_RDDS58	(IO_FxR_RDDS[CONSTANT_58])
#define	FxR_RDDS59	(IO_FxR_RDDS[CONSTANT_59])
#define	FxR_RDDS60	(IO_FxR_RDDS[CONSTANT_60])
#define	FxR_RDDS61	(IO_FxR_RDDS[CONSTANT_61])
#define	FxR_RDDS62	(IO_FxR_RDDS[CONSTANT_62])
#define	FxR_RDDS63	(IO_FxR_RDDS[CONSTANT_63])

#ifdef __IO_DEFINE
#pragma segment     DATA=IO_FxR_OBF,attr=IO,locate=0xD700
#endif

__IO_EXTENDED	struct {
	const union {
		__WORD	word;
		struct {
			__BYTE	RESV00:1;
			__BYTE	RESV01:1;
			__BYTE	MBI:1;
			__BYTE	TXM:1;
			__BYTE	PPIT:1;
			__BYTE	CFG:1;
			__BYTE	CHB:1;
			__BYTE	CHA:1;
			__BYTE	RESV08:1;
			__BYTE	CYC:7;
			__BYTE	RESV010:1;
			__BYTE	RESV011:1;
			__BYTE	RESV012:1;
			__BYTE	RESV013:1;
			__BYTE	RESV014:1;
			__WORD	FID:11;
		} bit;
		struct {
			__BYTE	RESV00:1;
			__BYTE	RESV01:1;
			__BYTE	MBI:1;
			__BYTE	TXM:1;
			__BYTE	PPIT:1;
			__BYTE	CFG:1;
			__BYTE	CHB:1;
			__BYTE	CHA:1;
			__BYTE	RESV08:1;
			__BYTE	CYC6:1;
			__BYTE	CYC5:1;
			__BYTE	CYC4:1;
			__BYTE	CYC3:1;
			__BYTE	CYC2:1;
			__BYTE	CYC1:1;
			__BYTE	CYC0:1;
			__BYTE	RESV016:1;
			__BYTE	RESV017:1;
			__BYTE	RESV018:1;
			__BYTE	RESV019:1;
			__BYTE	RESV020:1;
			__BYTE	FID10:1;
			__BYTE	FID9:1;
			__BYTE	FID8:1;
			__BYTE	FID7:1;
			__BYTE	FID6:1;
			__BYTE	FID5:1;
			__BYTE	FID4:1;
			__BYTE	FID3:1;
			__BYTE	FID2:1;
			__BYTE	FID1:1;
			__BYTE	FID0:1;
		} bitc;
	} IO_RDHS1;
	const union {
		__WORD	word;
		struct {
			__BYTE	RESV40:1;
			__BYTE	PLR:7;
			__BYTE	RESV42:1;
			__BYTE	PLC:7;
			__BYTE	RESV44:1;
			__BYTE	RESV45:1;
			__BYTE	RESV46:1;
			__BYTE	RESV47:1;
			__BYTE	RESV48:1;
			__WORD	CRC:11;
		} bit;
		struct {
			__BYTE	RESV40:1;
			__BYTE	PLR6:1;
			__BYTE	PLR5:1;
			__BYTE	PLR4:1;
			__BYTE	PLR3:1;
			__BYTE	PLR2:1;
			__BYTE	PLR1:1;
			__BYTE	PLR0:1;
			__BYTE	RESV48:1;
			__BYTE	PLC6:1;
			__BYTE	PLC5:1;
			__BYTE	PLC4:1;
			__BYTE	PLC3:1;
			__BYTE	PLC2:1;
			__BYTE	PLC1:1;
			__BYTE	PLC0:1;
			__BYTE	RESV416:1;
			__BYTE	RESV417:1;
			__BYTE	RESV418:1;
			__BYTE	RESV419:1;
			__BYTE	RESV420:1;
			__BYTE	CRC10:1;
			__BYTE	CRC9:1;
			__BYTE	CRC8:1;
			__BYTE	CRC7:1;
			__BYTE	CRC6:1;
			__BYTE	CRC5:1;
			__BYTE	CRC4:1;
			__BYTE	CRC3:1;
			__BYTE	CRC2:1;
			__BYTE	CRC1:1;
			__BYTE	CRC0:1;
		} bitc;
	} IO_RDHS2;
	const union {
		__WORD	word;
		struct {
			__BYTE	RESV80:1;
			__BYTE	RESV81:1;
			__BYTE	RES:1;
			__BYTE	PPI:1;
			__BYTE	NFI:1;
			__BYTE	SYN:1;
			__BYTE	SFI:1;
			__BYTE	RCI:1;
			__BYTE	RESV88:1;
			__BYTE	RESV89:1;
			__BYTE	RCC:6;
			__BYTE	RESV811:1;
			__BYTE	RESV812:1;
			__BYTE	RESV813:1;
			__BYTE	RESV814:1;
			__BYTE	RESV815:1;
			__WORD	DP:11;
		} bit;
		struct {
			__BYTE	RESV80:1;
			__BYTE	RESV81:1;
			__BYTE	RES:1;
			__BYTE	PPI:1;
			__BYTE	NFI:1;
			__BYTE	SYN:1;
			__BYTE	SFI:1;
			__BYTE	RCI:1;
			__BYTE	RESV88:1;
			__BYTE	RESV89:1;
			__BYTE	RCC5:1;
			__BYTE	RCC4:1;
			__BYTE	RCC3:1;
			__BYTE	RCC2:1;
			__BYTE	RCC1:1;
			__BYTE	RCC0:1;
			__BYTE	RESV816:1;
			__BYTE	RESV817:1;
			__BYTE	RESV818:1;
			__BYTE	RESV819:1;
			__BYTE	RESV820:1;
			__BYTE	DP10:1;
			__BYTE	DP9:1;
			__BYTE	DP8:1;
			__BYTE	DP7:1;
			__BYTE	DP6:1;
			__BYTE	DP5:1;
			__BYTE	DP4:1;
			__BYTE	DP3:1;
			__BYTE	DP2:1;
			__BYTE	DP1:1;
			__BYTE	DP0:1;
		} bitc;
	} IO_RDHS3;
	const union {
		__WORD	word;
		struct {
			__BYTE	RESV120:1;
			__BYTE	RESV121:1;
			__BYTE	RESS:1;
			__BYTE	PPIS:1;
			__BYTE	NFIS:1;
			__BYTE	SYNS:1;
			__BYTE	SFIS:1;
			__BYTE	RCIS:1;
			__BYTE	RESV128:1;
			__BYTE	RESV129:1;
			__BYTE	CCS:6;
			__BYTE	FTB:1;
			__BYTE	FTA:1;
			__BYTE	RESV1213:1;
			__BYTE	MLST:1;
			__BYTE	ESB:1;
			__BYTE	ESA:1;
			__BYTE	TCIB:1;
			__BYTE	TCIA:1;
			__BYTE	SVOB:1;
			__BYTE	SVOA:1;
			__BYTE	CEOB:1;
			__BYTE	CEOA:1;
			__BYTE	SEOB:1;
			__BYTE	SEOA:1;
			__BYTE	VFRB:1;
			__BYTE	VFRA:1;
		} bit;
		struct {
			__BYTE	RESV120:1;
			__BYTE	RESV121:1;
			__BYTE	RESS:1;
			__BYTE	PPIS:1;
			__BYTE	NFIS:1;
			__BYTE	SYNS:1;
			__BYTE	SFIS:1;
			__BYTE	RCIS:1;
			__BYTE	RESV128:1;
			__BYTE	RESV129:1;
			__BYTE	CCS5:1;
			__BYTE	CCS4:1;
			__BYTE	CCS3:1;
			__BYTE	CCS2:1;
			__BYTE	CCS1:1;
			__BYTE	CCS0:1;
			__BYTE	FTB:1;
			__BYTE	FTA:1;
			__BYTE	RESV1218:1;
			__BYTE	MLST:1;
			__BYTE	ESB:1;
			__BYTE	ESA:1;
			__BYTE	TCIB:1;
			__BYTE	TCIA:1;
			__BYTE	SVOB:1;
			__BYTE	SVOA:1;
			__BYTE	CEOB:1;
			__BYTE	CEOA:1;
			__BYTE	SEOB:1;
			__BYTE	SEOA:1;
			__BYTE	VFRB:1;
			__BYTE	VFRA:1;
		} bitc;
	} IO_MBS;
	union {
		__WORD	word;
		struct {
			__BYTE	RESV160:1;
			__BYTE	RESV161:1;
			__BYTE	RESV162:1;
			__BYTE	RESV163:1;
			__BYTE	RESV164:1;
			__BYTE	RESV165:1;
			__BYTE	RESV166:1;
			__BYTE	RESV167:1;
			__BYTE	RESV168:1;
			__BYTE	RESV169:1;
			__BYTE	RESV1610:1;
			__BYTE	RESV1611:1;
			__BYTE	RESV1612:1;
			__BYTE	RESV1613:1;
			__BYTE	RDSH:1;
			__BYTE	RHSH:1;
			__BYTE	RESV1616:1;
			__BYTE	RESV1617:1;
			__BYTE	RESV1618:1;
			__BYTE	RESV1619:1;
			__BYTE	RESV1620:1;
			__BYTE	RESV1621:1;
			__BYTE	RESV1622:1;
			__BYTE	RESV1623:1;
			__BYTE	RESV1624:1;
			__BYTE	RESV1625:1;
			__BYTE	RESV1626:1;
			__BYTE	RESV1627:1;
			__BYTE	RESV1628:1;
			__BYTE	RESV1629:1;
			__BYTE	RDSS:1;
			__BYTE	RHSS:1;
		} bit;
		struct {
			__BYTE	RESV160:1;
			__BYTE	RESV161:1;
			__BYTE	RESV162:1;
			__BYTE	RESV163:1;
			__BYTE	RESV164:1;
			__BYTE	RESV165:1;
			__BYTE	RESV166:1;
			__BYTE	RESV167:1;
			__BYTE	RESV168:1;
			__BYTE	RESV169:1;
			__BYTE	RESV1610:1;
			__BYTE	RESV1611:1;
			__BYTE	RESV1612:1;
			__BYTE	RESV1613:1;
			__BYTE	RDSH:1;
			__BYTE	RHSH:1;
			__BYTE	RESV1616:1;
			__BYTE	RESV1617:1;
			__BYTE	RESV1618:1;
			__BYTE	RESV1619:1;
			__BYTE	RESV1620:1;
			__BYTE	RESV1621:1;
			__BYTE	RESV1622:1;
			__BYTE	RESV1623:1;
			__BYTE	RESV1624:1;
			__BYTE	RESV1625:1;
			__BYTE	RESV1626:1;
			__BYTE	RESV1627:1;
			__BYTE	RESV1628:1;
			__BYTE	RESV1629:1;
			__BYTE	RDSS:1;
			__BYTE	RHSS:1;
		} bitc;
	} IO_OBCM;
	union {
		__WORD	word;
		struct {
			__BYTE	RESV200:1;
			__BYTE	RESV201:1;
			__BYTE	RESV202:1;
			__BYTE	RESV203:1;
			__BYTE	RESV204:1;
			__BYTE	RESV205:1;
			__BYTE	RESV206:1;
			__BYTE	RESV207:1;
			__BYTE	RESV208:1;
			__BYTE	OBRH:7;
			__BYTE	RESV2010:1;
			__BYTE	RESV2011:1;
			__BYTE	RESV2012:1;
			__BYTE	RESV2013:1;
			__BYTE	RESV2014:1;
			__BYTE	RESV2015:1;
			__BYTE	REQ:1;
			__BYTE	VIEW:1;
			__BYTE	RESV2018:1;
			__BYTE	OBRS:7;
		} bit;
		struct {
			__BYTE	RESV200:1;
			__BYTE	RESV201:1;
			__BYTE	RESV202:1;
			__BYTE	RESV203:1;
			__BYTE	RESV204:1;
			__BYTE	RESV205:1;
			__BYTE	RESV206:1;
			__BYTE	RESV207:1;
			__BYTE	RESV208:1;
			__BYTE	OBRH6:1;
			__BYTE	OBRH5:1;
			__BYTE	OBRH4:1;
			__BYTE	OBRH3:1;
			__BYTE	OBRH2:1;
			__BYTE	OBRH1:1;
			__BYTE	OBRH0:1;
			__BYTE	RESV2016:1;
			__BYTE	RESV2017:1;
			__BYTE	RESV2018:1;
			__BYTE	RESV2019:1;
			__BYTE	RESV2020:1;
			__BYTE	RESV2021:1;
			__BYTE	REQ:1;
			__BYTE	VIEW:1;
			__BYTE	RESV2024:1;
			__BYTE	OBRS6:1;
			__BYTE	OBRS5:1;
			__BYTE	OBRS4:1;
			__BYTE	OBRS3:1;
			__BYTE	OBRS2:1;
			__BYTE	OBRS1:1;
			__BYTE	OBRS0:1;
		} bitc;
	} IO_OBCR;
} IO_FxR_OBF;

#define	FxR_OBF_RDHS1			(IO_FxR_OBF.IO_RDHS1.word)
#define	FxR_OBF_RDHS1_MBI    	(IO_FxR_OBF.IO_RDHS1.bit.MBI)
#define	FxR_OBF_RDHS1_TXM    	(IO_FxR_OBF.IO_RDHS1.bit.TXM)
#define	FxR_OBF_RDHS1_PPIT    	(IO_FxR_OBF.IO_RDHS1.bit.PPIT)
#define	FxR_OBF_RDHS1_CFG    	(IO_FxR_OBF.IO_RDHS1.bit.CFG)
#define	FxR_OBF_RDHS1_CHB    	(IO_FxR_OBF.IO_RDHS1.bit.CHB)
#define	FxR_OBF_RDHS1_CHA    	(IO_FxR_OBF.IO_RDHS1.bit.CHA)
#define	FxR_OBF_RDHS1_CYC    	(IO_FxR_OBF.IO_RDHS1.bit.CYC)
#define	FxR_OBF_RDHS1_CYC0    	(IO_FxR_OBF.IO_RDHS1.bitc.CYC0)
#define	FxR_OBF_RDHS1_CYC1    	(IO_FxR_OBF.IO_RDHS1.bitc.CYC1)
#define	FxR_OBF_RDHS1_CYC2    	(IO_FxR_OBF.IO_RDHS1.bitc.CYC2)
#define	FxR_OBF_RDHS1_CYC3    	(IO_FxR_OBF.IO_RDHS1.bitc.CYC3)
#define	FxR_OBF_RDHS1_CYC4    	(IO_FxR_OBF.IO_RDHS1.bitc.CYC4)
#define	FxR_OBF_RDHS1_CYC5    	(IO_FxR_OBF.IO_RDHS1.bitc.CYC5)
#define	FxR_OBF_RDHS1_CYC6    	(IO_FxR_OBF.IO_RDHS1.bitc.CYC6)
#define	FxR_OBF_RDHS1_FID    	(IO_FxR_OBF.IO_RDHS1.bit.FID)
#define	FxR_OBF_RDHS1_FID0    	(IO_FxR_OBF.IO_RDHS1.bitc.FID0)
#define	FxR_OBF_RDHS1_FID1    	(IO_FxR_OBF.IO_RDHS1.bitc.FID1)
#define	FxR_OBF_RDHS1_FID2    	(IO_FxR_OBF.IO_RDHS1.bitc.FID2)
#define	FxR_OBF_RDHS1_FID3    	(IO_FxR_OBF.IO_RDHS1.bitc.FID3)
#define	FxR_OBF_RDHS1_FID4    	(IO_FxR_OBF.IO_RDHS1.bitc.FID4)
#define	FxR_OBF_RDHS1_FID5    	(IO_FxR_OBF.IO_RDHS1.bitc.FID5)
#define	FxR_OBF_RDHS1_FID6    	(IO_FxR_OBF.IO_RDHS1.bitc.FID6)
#define	FxR_OBF_RDHS1_FID7    	(IO_FxR_OBF.IO_RDHS1.bitc.FID7)
#define	FxR_OBF_RDHS1_FID8    	(IO_FxR_OBF.IO_RDHS1.bitc.FID8)
#define	FxR_OBF_RDHS1_FID9    	(IO_FxR_OBF.IO_RDHS1.bitc.FID9)
#define	FxR_OBF_RDHS1_FID10    	(IO_FxR_OBF.IO_RDHS1.bitc.FID10)
#define	FxR_OBF_RDHS2			(IO_FxR_OBF.IO_RDHS2.word)
#define	FxR_OBF_RDHS2_PLR    	(IO_FxR_OBF.IO_RDHS2.bit.PLR)
#define	FxR_OBF_RDHS2_PLR0    	(IO_FxR_OBF.IO_RDHS2.bitc.PLR0)
#define	FxR_OBF_RDHS2_PLR1    	(IO_FxR_OBF.IO_RDHS2.bitc.PLR1)
#define	FxR_OBF_RDHS2_PLR2    	(IO_FxR_OBF.IO_RDHS2.bitc.PLR2)
#define	FxR_OBF_RDHS2_PLR3    	(IO_FxR_OBF.IO_RDHS2.bitc.PLR3)
#define	FxR_OBF_RDHS2_PLR4    	(IO_FxR_OBF.IO_RDHS2.bitc.PLR4)
#define	FxR_OBF_RDHS2_PLR5    	(IO_FxR_OBF.IO_RDHS2.bitc.PLR5)
#define	FxR_OBF_RDHS2_PLR6    	(IO_FxR_OBF.IO_RDHS2.bitc.PLR6)
#define	FxR_OBF_RDHS2_PLC    	(IO_FxR_OBF.IO_RDHS2.bit.PLC)
#define	FxR_OBF_RDHS2_PLC0    	(IO_FxR_OBF.IO_RDHS2.bitc.PLC0)
#define	FxR_OBF_RDHS2_PLC1    	(IO_FxR_OBF.IO_RDHS2.bitc.PLC1)
#define	FxR_OBF_RDHS2_PLC2    	(IO_FxR_OBF.IO_RDHS2.bitc.PLC2)
#define	FxR_OBF_RDHS2_PLC3    	(IO_FxR_OBF.IO_RDHS2.bitc.PLC3)
#define	FxR_OBF_RDHS2_PLC4    	(IO_FxR_OBF.IO_RDHS2.bitc.PLC4)
#define	FxR_OBF_RDHS2_PLC5    	(IO_FxR_OBF.IO_RDHS2.bitc.PLC5)
#define	FxR_OBF_RDHS2_PLC6    	(IO_FxR_OBF.IO_RDHS2.bitc.PLC6)
#define	FxR_OBF_RDHS2_CRC    	(IO_FxR_OBF.IO_RDHS2.bit.CRC)
#define	FxR_OBF_RDHS2_CRC0    	(IO_FxR_OBF.IO_RDHS2.bitc.CRC0)
#define	FxR_OBF_RDHS2_CRC1    	(IO_FxR_OBF.IO_RDHS2.bitc.CRC1)
#define	FxR_OBF_RDHS2_CRC2    	(IO_FxR_OBF.IO_RDHS2.bitc.CRC2)
#define	FxR_OBF_RDHS2_CRC3    	(IO_FxR_OBF.IO_RDHS2.bitc.CRC3)
#define	FxR_OBF_RDHS2_CRC4    	(IO_FxR_OBF.IO_RDHS2.bitc.CRC4)
#define	FxR_OBF_RDHS2_CRC5    	(IO_FxR_OBF.IO_RDHS2.bitc.CRC5)
#define	FxR_OBF_RDHS2_CRC6    	(IO_FxR_OBF.IO_RDHS2.bitc.CRC6)
#define	FxR_OBF_RDHS2_CRC7    	(IO_FxR_OBF.IO_RDHS2.bitc.CRC7)
#define	FxR_OBF_RDHS2_CRC8    	(IO_FxR_OBF.IO_RDHS2.bitc.CRC8)
#define	FxR_OBF_RDHS2_CRC9    	(IO_FxR_OBF.IO_RDHS2.bitc.CRC9)
#define	FxR_OBF_RDHS2_CRC10    	(IO_FxR_OBF.IO_RDHS2.bitc.CRC10)
#define	FxR_OBF_RDHS3			(IO_FxR_OBF.IO_RDHS3.word)
#define	FxR_OBF_RDHS3_RES    	(IO_FxR_OBF.IO_RDHS3.bit.RES)
#define	FxR_OBF_RDHS3_PPI    	(IO_FxR_OBF.IO_RDHS3.bit.PPI)
#define	FxR_OBF_RDHS3_NFI    	(IO_FxR_OBF.IO_RDHS3.bit.NFI)
#define	FxR_OBF_RDHS3_SYN    	(IO_FxR_OBF.IO_RDHS3.bit.SYN)
#define	FxR_OBF_RDHS3_SFI    	(IO_FxR_OBF.IO_RDHS3.bit.SFI)
#define	FxR_OBF_RDHS3_RCI    	(IO_FxR_OBF.IO_RDHS3.bit.RCI)
#define	FxR_OBF_RDHS3_RCC    	(IO_FxR_OBF.IO_RDHS3.bit.RCC)
#define	FxR_OBF_RDHS3_RCC0    	(IO_FxR_OBF.IO_RDHS3.bitc.RCC0)
#define	FxR_OBF_RDHS3_RCC1    	(IO_FxR_OBF.IO_RDHS3.bitc.RCC1)
#define	FxR_OBF_RDHS3_RCC2    	(IO_FxR_OBF.IO_RDHS3.bitc.RCC2)
#define	FxR_OBF_RDHS3_RCC3    	(IO_FxR_OBF.IO_RDHS3.bitc.RCC3)
#define	FxR_OBF_RDHS3_RCC4    	(IO_FxR_OBF.IO_RDHS3.bitc.RCC4)
#define	FxR_OBF_RDHS3_RCC5    	(IO_FxR_OBF.IO_RDHS3.bitc.RCC5)
#define	FxR_OBF_RDHS3_DP    	(IO_FxR_OBF.IO_RDHS3.bit.DP)
#define	FxR_OBF_RDHS3_DP0    	(IO_FxR_OBF.IO_RDHS3.bitc.DP0)
#define	FxR_OBF_RDHS3_DP1    	(IO_FxR_OBF.IO_RDHS3.bitc.DP1)
#define	FxR_OBF_RDHS3_DP2    	(IO_FxR_OBF.IO_RDHS3.bitc.DP2)
#define	FxR_OBF_RDHS3_DP3    	(IO_FxR_OBF.IO_RDHS3.bitc.DP3)
#define	FxR_OBF_RDHS3_DP4    	(IO_FxR_OBF.IO_RDHS3.bitc.DP4)
#define	FxR_OBF_RDHS3_DP5    	(IO_FxR_OBF.IO_RDHS3.bitc.DP5)
#define	FxR_OBF_RDHS3_DP6    	(IO_FxR_OBF.IO_RDHS3.bitc.DP6)
#define	FxR_OBF_RDHS3_DP7    	(IO_FxR_OBF.IO_RDHS3.bitc.DP7)
#define	FxR_OBF_RDHS3_DP8    	(IO_FxR_OBF.IO_RDHS3.bitc.DP8)
#define	FxR_OBF_RDHS3_DP9    	(IO_FxR_OBF.IO_RDHS3.bitc.DP9)
#define	FxR_OBF_RDHS3_DP10    	(IO_FxR_OBF.IO_RDHS3.bitc.DP10)
#define	FxR_OBF_MBS			(IO_FxR_OBF.IO_MBS.word)
#define	FxR_OBF_MBS_RESS    	(IO_FxR_OBF.IO_MBS.bit.RESS)
#define	FxR_OBF_MBS_PPIS    	(IO_FxR_OBF.IO_MBS.bit.PPIS)
#define	FxR_OBF_MBS_NFIS    	(IO_FxR_OBF.IO_MBS.bit.NFIS)
#define	FxR_OBF_MBS_SYNS    	(IO_FxR_OBF.IO_MBS.bit.SYNS)
#define	FxR_OBF_MBS_SFIS    	(IO_FxR_OBF.IO_MBS.bit.SFIS)
#define	FxR_OBF_MBS_RCIS    	(IO_FxR_OBF.IO_MBS.bit.RCIS)
#define	FxR_OBF_MBS_CCS    	(IO_FxR_OBF.IO_MBS.bit.CCS)
#define	FxR_OBF_MBS_CCS0    	(IO_FxR_OBF.IO_MBS.bitc.CCS0)
#define	FxR_OBF_MBS_CCS1    	(IO_FxR_OBF.IO_MBS.bitc.CCS1)
#define	FxR_OBF_MBS_CCS2    	(IO_FxR_OBF.IO_MBS.bitc.CCS2)
#define	FxR_OBF_MBS_CCS3    	(IO_FxR_OBF.IO_MBS.bitc.CCS3)
#define	FxR_OBF_MBS_CCS4    	(IO_FxR_OBF.IO_MBS.bitc.CCS4)
#define	FxR_OBF_MBS_CCS5    	(IO_FxR_OBF.IO_MBS.bitc.CCS5)
#define	FxR_OBF_MBS_FTB    	(IO_FxR_OBF.IO_MBS.bit.FTB)
#define	FxR_OBF_MBS_FTA    	(IO_FxR_OBF.IO_MBS.bit.FTA)
#define	FxR_OBF_MBS_MLST    	(IO_FxR_OBF.IO_MBS.bit.MLST)
#define	FxR_OBF_MBS_ESB    	(IO_FxR_OBF.IO_MBS.bit.ESB)
#define	FxR_OBF_MBS_ESA    	(IO_FxR_OBF.IO_MBS.bit.ESA)
#define	FxR_OBF_MBS_TCIB    	(IO_FxR_OBF.IO_MBS.bit.TCIB)
#define	FxR_OBF_MBS_TCIA    	(IO_FxR_OBF.IO_MBS.bit.TCIA)
#define	FxR_OBF_MBS_SVOB    	(IO_FxR_OBF.IO_MBS.bit.SVOB)
#define	FxR_OBF_MBS_SVOA    	(IO_FxR_OBF.IO_MBS.bit.SVOA)
#define	FxR_OBF_MBS_CEOB    	(IO_FxR_OBF.IO_MBS.bit.CEOB)
#define	FxR_OBF_MBS_CEOA    	(IO_FxR_OBF.IO_MBS.bit.CEOA)
#define	FxR_OBF_MBS_SEOB    	(IO_FxR_OBF.IO_MBS.bit.SEOB)
#define	FxR_OBF_MBS_SEOA    	(IO_FxR_OBF.IO_MBS.bit.SEOA)
#define	FxR_OBF_MBS_VFRB    	(IO_FxR_OBF.IO_MBS.bit.VFRB)
#define	FxR_OBF_MBS_VFRA    	(IO_FxR_OBF.IO_MBS.bit.VFRA)
#define	FxR_OBF_OBCM			(IO_FxR_OBF.IO_OBCM.word)
#define	FxR_OBF_OBCM_RDSH    	(IO_FxR_OBF.IO_OBCM.bit.RDSH)
#define	FxR_OBF_OBCM_RHSH    	(IO_FxR_OBF.IO_OBCM.bit.RHSH)
#define	FxR_OBF_OBCM_RDSS    	(IO_FxR_OBF.IO_OBCM.bit.RDSS)
#define	FxR_OBF_OBCM_RHSS    	(IO_FxR_OBF.IO_OBCM.bit.RHSS)
#define	FxR_OBF_OBCR			(IO_FxR_OBF.IO_OBCR.word)
#define	FxR_OBF_OBCR_OBRH    	(IO_FxR_OBF.IO_OBCR.bit.OBRH)
#define	FxR_OBF_OBCR_OBRH0    	(IO_FxR_OBF.IO_OBCR.bitc.OBRH0)
#define	FxR_OBF_OBCR_OBRH1    	(IO_FxR_OBF.IO_OBCR.bitc.OBRH1)
#define	FxR_OBF_OBCR_OBRH2    	(IO_FxR_OBF.IO_OBCR.bitc.OBRH2)
#define	FxR_OBF_OBCR_OBRH3    	(IO_FxR_OBF.IO_OBCR.bitc.OBRH3)
#define	FxR_OBF_OBCR_OBRH4    	(IO_FxR_OBF.IO_OBCR.bitc.OBRH4)
#define	FxR_OBF_OBCR_OBRH5    	(IO_FxR_OBF.IO_OBCR.bitc.OBRH5)
#define	FxR_OBF_OBCR_OBRH6    	(IO_FxR_OBF.IO_OBCR.bitc.OBRH6)
#define	FxR_OBF_OBCR_REQ    	(IO_FxR_OBF.IO_OBCR.bit.REQ)
#define	FxR_OBF_OBCR_VIEW    	(IO_FxR_OBF.IO_OBCR.bit.VIEW)
#define	FxR_OBF_OBCR_OBRS    	(IO_FxR_OBF.IO_OBCR.bit.OBRS)
#define	FxR_OBF_OBCR_OBRS0    	(IO_FxR_OBF.IO_OBCR.bitc.OBRS0)
#define	FxR_OBF_OBCR_OBRS1    	(IO_FxR_OBF.IO_OBCR.bitc.OBRS1)
#define	FxR_OBF_OBCR_OBRS2    	(IO_FxR_OBF.IO_OBCR.bitc.OBRS2)
#define	FxR_OBF_OBCR_OBRS3    	(IO_FxR_OBF.IO_OBCR.bitc.OBRS3)
#define	FxR_OBF_OBCR_OBRS4    	(IO_FxR_OBF.IO_OBCR.bitc.OBRS4)
#define	FxR_OBF_OBCR_OBRS5    	(IO_FxR_OBF.IO_OBCR.bitc.OBRS5)
#define	FxR_OBF_OBCR_OBRS6    	(IO_FxR_OBF.IO_OBCR.bitc.OBRS6)


#endif /*__MB91F465X_H__*/

