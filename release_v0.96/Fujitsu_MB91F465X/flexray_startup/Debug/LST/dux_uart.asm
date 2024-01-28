//					FR Family SOFTUNE cpcom V65L06
	.program	"dux_uart"
	.library	"lib911.lib"
	._LANGUAGE	C_FR20, N, U, F
	._FILE	"Y:\FlexRayDriver\Fujitsu_MB91F465X\flexray_startup\src\dux_uart.c", 0
	._FILE	"C:\Softune6\LIB\911\INCLUDE\string.h", 1
	._FILE	"C:\Softune6\LIB\911\INCLUDE\stdarg.h", 2
	._FILE	"C:\Softune6\LIB\911\INCLUDE\stddef.h", 3
	._FILE	"C:\Softune6\LIB\911\INCLUDE\stdio.h", 4
	._FILE	"Y:\FlexRayDriver\Fujitsu_MB91F465X\flexray_startup\src\..\h_file\..\IO_MB91465X_V01L03\_fr.h", 5
	._FILE	"Y:\FlexRayDriver\Fujitsu_MB91F465X\flexray_startup\src\..\h_file\dux_watchdog.h", 6
	._FILE	"Y:\FlexRayDriver\Fujitsu_MB91F465X\flexray_startup\src\..\IO_MB91465X_V01L03\mb91f465x.h", 7
	._FILE	"Y:\FlexRayDriver\Fujitsu_MB91F465X\flexray_startup\src\..\IO_MB91465X_V01L03\_fr.h", 8
	._FILE	"Y:\FlexRayDriver\Fujitsu_MB91F465X\flexray_startup\src\..\h_file\FLX_regist_defines.h", 9
	._FILE	"Y:\FlexRayDriver\Fujitsu_MB91F465X\flexray_startup\src\..\h_file\..\h_file\dux_platform_types.h", 10
	._FILE	"Y:\FlexRayDriver\Fujitsu_MB91F465X\flexray_startup\src\..\h_file\dux_uart.h", 11
	._BTYPE	0x80000001, 1
	._BTYPE	0x80000002, 1
	._BTYPE	0x80000003, 2
	._BTYPE	0x80000004, 2
	._BTYPE	0x80000005, 4
	._BTYPE	0x80000006, 4
	._BTYPE	0x80000007, 4
	._BTYPE	0x80000008, 4
	._BTYPE	0x80000009, 1
	._BTYPE	0x8000000a, 2
	._BTYPE	0x8000000b, 4
	._BTYPE	0x8000000c, 8
	._BTYPE	0x8000000d, 8
	._BTYPE	0x8000000e, 1
	._BTYPE	0x8000000f, 0
	._BTYPE	0x80000010, 8
	._BTYPE	0x80000011, 8
	._SYMBOL	"uint8", Y, 0x80000002
	._SYMBOL	"va_list", Y, 0x8000000e
	._POINTER	1
	.global	_IO_PDR14
	.global	_IO_PDR15
	.global	_IO_PDR16
	.global	_IO_PDR17
	.global	_IO_PDR18
	.global	_IO_PDR19
	.global	_IO_PDR22
	.global	_IO_PDR23
	.global	_IO_PDR24
	.global	_IO_PDR27
	.global	_IO_PDR28
	.global	_IO_PDR29
	.global	_IO_PDR31
	.global	_IO_EIRR0
	.global	_IO_ENIR0
	.global	_IO_ELVR0
	.global	_IO_EIRR1
	.global	_IO_ENIR1
	.global	_IO_ELVR1
	.global	_IO_DICR
	.global	_IO_HRCL
	.global	_IO_RBSYNC
	.global	_IO_SCR04
	.global	_IO_SMR04
	.global	_IO_SSR04
	.global	_IO_RDR04
	.global	_IO_ESCR04
	.global	_IO_ECCR04
	.global	_IO_FSR04
	.global	_IO_FCR04
	.global	_IO_SCR06
	.global	_IO_SMR06
	.global	_IO_SSR06
	.global	_IO_RDR06
	.global	_IO_ESCR06
	.global	_IO_ECCR06
	.global	_IO_FSR06
	.global	_IO_FCR06
	.global	_IO_SCR07
	.global	_IO_SMR07
	.global	_IO_SSR07
	.global	_IO_RDR07
	.global	_IO_ESCR07
	.global	_IO_ECCR07
	.global	_IO_FSR07
	.global	_IO_FCR07
	.global	_IO_BGR04
	.global	_IO_BGR06
	.global	_IO_BGR07
	.global	_IO_IIC0
	.global	_IO_GCN10
	.global	_IO_GCN20
	.global	_IO_GCN11
	.global	_IO_GCN21
	.global	_IO_GCN12
	.global	_IO_GCN22
	.global	_IO_PTMR00
	.global	_IO_PCSR00
	.global	_IO_PDUT00
	.global	_IO_PCN00
	.global	_IO_PTMR01
	.global	_IO_PCSR01
	.global	_IO_PDUT01
	.global	_IO_PCN01
	.global	_IO_PTMR02
	.global	_IO_PCSR02
	.global	_IO_PDUT02
	.global	_IO_PCN02
	.global	_IO_PTMR03
	.global	_IO_PCSR03
	.global	_IO_PDUT03
	.global	_IO_PCN03
	.global	_IO_PTMR04
	.global	_IO_PCSR04
	.global	_IO_PDUT04
	.global	_IO_PCN04
	.global	_IO_PTMR05
	.global	_IO_PCSR05
	.global	_IO_PDUT05
	.global	_IO_PCN05
	.global	_IO_PTMR06
	.global	_IO_PCSR06
	.global	_IO_PDUT06
	.global	_IO_PCN06
	.global	_IO_PTMR07
	.global	_IO_PCSR07
	.global	_IO_PDUT07
	.global	_IO_PCN07
	.global	_IO_PTMR08
	.global	_IO_PCSR08
	.global	_IO_PDUT08
	.global	_IO_PCN08
	.global	_IO_PTMR09
	.global	_IO_PCSR09
	.global	_IO_PDUT09
	.global	_IO_PCN09
	.global	_IO_PTMR10
	.global	_IO_PCSR10
	.global	_IO_PDUT10
	.global	_IO_PCN10
	.global	_IO_PTMR11
	.global	_IO_PCSR11
	.global	_IO_PDUT11
	.global	_IO_PCN11
	.global	_IO_ICS01
	.global	_IO_ICS23
	.global	_IO_IPCP0
	.global	_IO_IPCP1
	.global	_IO_IPCP2
	.global	_IO_IPCP3
	.global	_IO_OCS01
	.global	_IO_OCS23
	.global	_IO_OCCP0
	.global	_IO_OCCP1
	.global	_IO_OCCP2
	.global	_IO_OCCP3
	.global	_IO_AD
	.global	_IO_TMRLR0
	.global	_IO_TMR0
	.global	_IO_TMCSR0
	.global	_IO_TMRLR1
	.global	_IO_TMR1
	.global	_IO_TMCSR1
	.global	_IO_TMRLR2
	.global	_IO_TMR2
	.global	_IO_TMCSR2
	.global	_IO_TMRLR3
	.global	_IO_TMR3
	.global	_IO_TMCSR3
	.global	_IO_TMRLR4
	.global	_IO_TMR4
	.global	_IO_TMCSR4
	.global	_IO_TMRLR5
	.global	_IO_TMR5
	.global	_IO_TMCSR5
	.global	_IO_TMRLR6
	.global	_IO_TMR6
	.global	_IO_TMCSR6
	.global	_IO_TMRLR7
	.global	_IO_TMR7
	.global	_IO_TMCSR7
	.global	_IO_TCDT0
	.global	_IO_TCCS0
	.global	_IO_TCDT1
	.global	_IO_TCCS1
	.global	_IO_TCDT2
	.global	_IO_TCCS2
	.global	_IO_TCDT3
	.global	_IO_TCCS3
	.global	_IO_DMACA0
	.global	_IO_DMACB0
	.global	_IO_DMACA1
	.global	_IO_DMACB1
	.global	_IO_DMACA2
	.global	_IO_DMACB2
	.global	_IO_DMACA3
	.global	_IO_DMACB3
	.global	_IO_DMACA4
	.global	_IO_DMACB4
	.global	_IO_DMACR
	.global	_IO_ICS45
	.global	_IO_ICS67
	.global	_IO_IPCP4
	.global	_IO_IPCP5
	.global	_IO_IPCP6
	.global	_IO_IPCP7
	.global	_IO_OCS45
	.global	_IO_OCCP4
	.global	_IO_OCCP5
	.global	_IO_TCDT4
	.global	_IO_TCCS4
	.global	_IO_TCDT5
	.global	_IO_TCCS5
	.global	_IO_TCDT6
	.global	_IO_TCCS6
	.global	_IO_TCDT7
	.global	_IO_TCCS7
	.global	_IO_ROMS
	.global	_IO_BSD0
	.global	_IO_BSD1
	.global	_IO_BSDC
	.global	_IO_BSRR
	.global	_IO_ICR
	.global	_IO_CLK
	.global	_IO_PLL
	.global	_IO_OSCC1
	.global	_IO_OSCS1
	.global	_IO_OSCC2
	.global	_IO_OSCS2
	.global	_IO_PORTEN
	.global	_IO_WT
	.global	_IO_CSS
	.global	_IO_CUSO
	.global	_IO_CM
	.global	_IO_CANPRE
	.global	_IO_CANCKD
	.global	_IO_LVD
	.global	_IO_OST
	.global	_IO_OSC
	.global	_IO_PLL2
	.global	_IO_IOS
	.global	_IO_PORT2
	.global	_IO_DMAD
	.global	_IO_FMCS
	.global	_IO_FMCR
	.global	_IO_FCHCR
	.global	_IO_FMWT
	.global	_IO_FMWT2
	.global	_IO_FMPS
	.global	_IO_FMAC
	.global	_IO_CAN0
	.global	_IO_CAN4
	.global	_IO_FxR_CIF
	.global	_IO_FxR_GIF1
	.global	_IO_FxR_INT
	.global	_IO_FxR_SUC1
	.global	_IO_FxR_NEMC
	.global	_IO_FxR_PRT
	.global	_IO_FxR_MHDC
	.global	_IO_FxR_GTU1
	.global	_IO_FxR_SUC2
	.global	_IO_FxR_GTU2
	.global	_IO_FxR_NMV
	.global	_IO_FxR_MHD
	.global	_IO_FxR_GIF2
	.global	_IO_FxR_WRDS
	.global	_IO_FxR_IBF
	.global	_IO_FxR_RDDS
	.global	_IO_FxR_OBF
	.global	__ptr_file
	.section	DATA, DATA, align=4
	.align	1
LI_11:
	.res.b	14
LI_12:
	.res.b	300
	.section	CONST, CONST, align=4
	.align	4
LS_10:
	.ascii	"\033[0m\000"
	.datab.b	3,0
LS_9:
	.ascii	"\033[0;37m\000"
LS_8:
	.ascii	"\033[0;30m\000"
LS_7:
	.ascii	"\033[0;36m\000"
LS_6:
	.ascii	"\033[0;35m\000"
LS_5:
	.ascii	"\033[0;34m\000"
LS_4:
	.ascii	"\033[0;33m\000"
LS_3:
	.ascii	"\033[0;32m\000"
LS_2:
	.ascii	"\033[0;31m\000"
LS_1:
	.ascii	"\033[%d;%df\000"
	.datab.b	3,0
LS_0:
	.ascii	"\033[2J\000"
	.datab.b	3,0
	.global	_strlen
	.global	_vsprintf
	.global	_sprintf
	.section	CODE, CODE, align=2
	.global	_DUXUartInit
	._SYMBOL	"DUXUartInit", F, 0x8000000f, E, "_DUXUartInit", F
	._FPARAM	S, 0, F
	._FPARAM	E
	._CONFIG	S, F, 1
	._LINE	0, 42
_DUXUartInit:
L_20:
	ST	RP,@-SP
	ENTER	#4
;-------end_of_no_optimize_block
	._FUNCTION	"fp", "fp", 16
	._CONFIG	S, B
L_21:				// Pred: L_20
	._LINE	0, 44
	LDI:20	#_IO_LVD+3,R3
	BAND	#0xF7,@R3
	._LINE	0, 45
	LDI	#2499,R13
	DMOVH	R13,@_IO_BGR04	; _IO_BGR04
	._LINE	0, 48
	LDI	#23,R13
	DMOVB	R13,@_IO_SCR04	; _IO_SCR04
	._LINE	0, 49
	LDI	#13,R13
	DMOVB	R13,@_IO_SMR04	; _IO_SMR04
	._LINE	0, 50
	LDI	#0,R0
	MOV	R0,R13
	DMOVB	R13,@_IO_SSR04	; _IO_SSR04
	._LINE	0, 52
	LDI:20	#_IO_PORT2+147,R4
	LDUB	@R4,R2	; _IO_PORT2
	LDI	#252,R1
	AND	R1,R2
	LDI	#3,R1
	OR	R1,R2
	STB	R2,@R4	; _IO_PORT2
	._LINE	0, 53
	LDI:20	#_IO_PORT2+211,R1
	STB	R0,@R1	; _IO_PORT2
	._LINE	0, 55
	BAND	#0xF7,@R3
L_22:				// Pred: L_21
	._LINE	0, 55
	._CONFIG	E
	._LINE	0, 56
	LEAVE
	LD	@SP+,RP
	RET
	._CONFIG	E
	.global	_DUXClearTerminal
	._SYMBOL	"DUXClearTerminal", F, 0x8000000f, E, "_DUXClearTerminal", F
	._FPARAM	S, 0, F
	._FPARAM	E
	._CONFIG	S, F, 1
	._LINE	0, 60
_DUXClearTerminal:
L_23:
	ST	RP,@-SP
	ENTER	#4
;-------end_of_no_optimize_block
	._FUNCTION	"fp", "fp", 16
	._CONFIG	S, B
L_24:				// Pred: L_23
	._LINE	0, 61
	LDI:20	#_IO_LVD+3,R0
	BAND	#0xF7,@R0
	._LINE	0, 62
	LDI:20	#LS_0,R4
	CALL20	__DUXPutString,R12
L_25:				// Pred: L_24
	._LINE	0, 62
	._CONFIG	E
	._LINE	0, 63
	LEAVE
	LD	@SP+,RP
	RET
	._CONFIG	E
	.global	_DUXPrintTerminal
	._SYMBOL	"DUXPrintTerminal", F, 0x8000000f, E, "_DUXPrintTerminal", F
	._FPARAM	S, 4, V
	._SYMBOL	"text", P, 0x8000000e, A, 8
	._POINTER	1
	._TYPED	C
	._SYMBOL	"color", P, 0x80000002, A, 15
	._SYMBOL	"row", P, 0x80000002, A, 19
	._SYMBOL	"col", P, 0x80000002, A, 23
	._FPARAM	E
	._CONFIG	S, F, 1
	._LINE	0, 67
_DUXPrintTerminal:
L_26:
	STM	(R4,R5,R6,R7)
	ST	RP,@-SP
	ENTER	#8
	STM	(R8,R9,R10)
;-------end_of_no_optimize_block
	._FUNCTION	"fp", "fp", 48
	._CONFIG	S, B
	._SYMBOL	"buffer", V, 0x8000000e, S, "LI_12"
	._ARRAY	1, 1, 299, 0
	._SYMBOL	"posBuffer", V, 0x8000000e, S, "LI_11"
	._ARRAY	1, 1, 13, 0
	._SYMBOL	"args", V, 0x8000000e, A, -4
	._POINTER	1
L_27:				// Pred: L_26
	._LINE	0, 69
	._LINE	0, 73
	LDI:20	#_IO_LVD+3,R9
	BAND	#0xF7,@R9
	._LINE	0, 74
	LDUB	@(FP,19),R0	; _row
	CMP	#0,R0
	BLE20	L_29,R12
L_30:				// Pred: L_27
	._LINE	0, 74
	LDUB	@(FP,23),R0	; _col
	CMP	#0,R0
	BLE20	L_29,R12
L_28:				// Pred: L_30
	._LINE	0, 74
	._LINE	0, 75
	LDI:20	#LI_11,R10
	LDI:20	#LS_1,R5
	LDUB	@(FP,19),R6	; _row
	LDUB	@(FP,23),R7	; _col
	MOV	R10,R4
	CALL20	_sprintf,R12
	._LINE	0, 76
	MOV	R10,R4
	CALL20	__DUXPutString,R12
	._LINE	0, 77
L_29:				// Pred: L_28 L_30 L_27
	._LINE	0, 78
	LDUB	@(FP,15),R0	; _color
	CMP	#1,R0
	BNE20	L_32,R12
L_31:				// Pred: L_29
	._LINE	0, 78
	._LINE	0, 79
	LDI:20	#LS_2,R4
	CALL20	__DUXPutString,R12
	._LINE	0, 80
	BRA20	L_33,R12
L_32:				// Pred: L_29
	._LINE	0, 80
	LDUB	@(FP,15),R0	; _color
	CMP	#2,R0
	BNE20	L_35,R12
L_34:				// Pred: L_32
	._LINE	0, 80
	._LINE	0, 81
	LDI:20	#LS_3,R4
	CALL20	__DUXPutString,R12
	._LINE	0, 82
	BRA20	L_33,R12
L_35:				// Pred: L_32
	._LINE	0, 82
	LDUB	@(FP,15),R0	; _color
	CMP	#3,R0
	BNE20	L_38,R12
L_37:				// Pred: L_35
	._LINE	0, 82
	._LINE	0, 83
	LDI:20	#LS_4,R4
	CALL20	__DUXPutString,R12
	._LINE	0, 84
	BRA20	L_33,R12
L_38:				// Pred: L_35
	._LINE	0, 84
	LDUB	@(FP,15),R0	; _color
	CMP	#4,R0
	BNE20	L_41,R12
L_40:				// Pred: L_38
	._LINE	0, 84
	._LINE	0, 85
	LDI:20	#LS_5,R4
	CALL20	__DUXPutString,R12
	._LINE	0, 86
	BRA20	L_33,R12
L_41:				// Pred: L_38
	._LINE	0, 86
	LDUB	@(FP,15),R0	; _color
	CMP	#5,R0
	BNE20	L_44,R12
L_43:				// Pred: L_41
	._LINE	0, 86
	._LINE	0, 87
	LDI:20	#LS_6,R4
	CALL20	__DUXPutString,R12
	._LINE	0, 88
	BRA20	L_33,R12
L_44:				// Pred: L_41
	._LINE	0, 88
	LDUB	@(FP,15),R0	; _color
	CMP	#6,R0
	BNE20	L_47,R12
L_46:				// Pred: L_44
	._LINE	0, 88
	._LINE	0, 89
	LDI:20	#LS_7,R4
	CALL20	__DUXPutString,R12
	._LINE	0, 90
	BRA20	L_33,R12
L_47:				// Pred: L_44
	._LINE	0, 90
	LDUB	@(FP,15),R0	; _color
	CMP	#7,R0
	BNE20	L_50,R12
L_49:				// Pred: L_47
	._LINE	0, 90
	._LINE	0, 91
	LDI:20	#LS_8,R4
	CALL20	__DUXPutString,R12
	._LINE	0, 92
	BRA20	L_33,R12
L_50:				// Pred: L_47
	._LINE	0, 92
	._LINE	0, 93
	LDI:20	#LS_9,R4
	CALL20	__DUXPutString,R12
	._LINE	0, 94
L_33:				// Pred: L_50 L_49 L_46 L_43
				//	 L_40 L_37 L_34 L_31
	._LINE	0, 95
	BAND	#0xF7,@R9
	._LINE	0, 96
	LDI	#23,R1
	MOV	FP,R0
	ADDN	R1,R0
	ADDN	#4,R0
	ST	R0,@(FP,-4)	; _args
	._LINE	0, 97
	LDI:20	#LI_12,R8
	LD	@(FP,8),R5	; _text
	LD	@(FP,-4),R6	; _args
	MOV	R8,R4
	CALL20	_vsprintf,R12
	._LINE	0, 98
	._LINE	0, 99
	BAND	#0xF7,@R9
	._LINE	0, 100
	MOV	R8,R4
	CALL20	__DUXPutString,R12
	._LINE	0, 101
	LDI:20	#LS_10,R4
	CALL20	__DUXPutString,R12
L_52:				// Pred: L_33
	._LINE	0, 101
	._CONFIG	E
	._LINE	0, 102
	LDM	(R8,R9,R10)
	LEAVE
	LD	@SP+,RP
	ADDSP	#16
	RET
	._CONFIG	E
	._SYMBOL	"_DUXPutCharacter", F, 0x8000000f, S, "__DUXPutCharacter", F
	._FPARAM	S, 1, F
	._SYMBOL	"ch", P, 0x8000000e, A, 11
	._FPARAM	E
	._CONFIG	S, F, 1
	._LINE	0, 110
__DUXPutCharacter:
L_69:
	ST	R4,@-SP
	ST	RP,@-SP
	ENTER	#4
;-------end_of_no_optimize_block
	._FUNCTION	"fp", "fp", 40
	._CONFIG	S, B
L_70:				// Pred: L_69
	._LINE	0, 112
	LDI:20	#_IO_SSR04,R0
	LDI:20	#_IO_LVD+3,R1
L_71:				// Pred: L_72 L_70
	._LINE	0, 112
	BTSTL	#0x8,@R0
	BNE20	L_73,R12
L_72:				// Pred: L_71
	._LINE	0, 112
	BAND	#0xF7,@R1
	BRA20	L_71,R12
L_73:				// Pred: L_71
	._LINE	0, 113
	LDUB	@(FP,11),R13	; _ch
	DMOVB	R13,@_IO_RDR04	; _IO_RDR04
L_74:				// Pred: L_73
	._LINE	0, 113
	._CONFIG	E
	._LINE	0, 114
	LEAVE
	LD	@SP+,RP
	ADDSP	#4
	RET
	._CONFIG	E
	._SYMBOL	"_DUXPutString", F, 0x8000000f, S, "__DUXPutString", F
	._FPARAM	S, 1, F
	._SYMBOL	"text", P, 0x8000000e, A, 8
	._POINTER	1
	._TYPED	C
	._FPARAM	E
	._CONFIG	S, F, 1
	._LINE	0, 118
__DUXPutString:
L_75:
	ST	R4,@-SP
	ST	RP,@-SP
	ENTER	#12
	STM	(R8,R9)
;-------end_of_no_optimize_block
	._FUNCTION	"fp", "fp", 48
	._CONFIG	S, B
	._SYMBOL	"i", V, 0x80000005, A, -8
	._TYPED	V
	._SYMBOL	"len", V, 0x80000005, A, -4
	._TYPED	V
L_76:				// Pred: L_75
	._LINE	0, 120
	._LINE	0, 121
	LD	@(FP,8),R4	; _text
	CALL20	_strlen,R12
	ST	R4,@(FP,-4)	; _len
	._LINE	0, 122
	LDI	#0,R0
	ST	R0,@(FP,-8)	; _i
	LDI:20	#_IO_LVD+3,R8
L_77:				// Pred: L_80 L_76
	._LINE	0, 122
	LD	@(FP,-8),R9	; _i
	LD	@(FP,8),R4	; _text
	CALL20	_strlen,R12
	CMP	R4,R9
	BNC20	L_81,R12
L_78:				// Pred: L_77
	._LINE	0, 123
	._LINE	0, 124
	BAND	#0xF7,@R8
	._LINE	0, 125
	LD	@(FP,-8),R13	; _i
	LD	@(FP,8),R0	; _text
	LDUB	@(R0,R13),R0
	CMP	#10,R0
	BNE20	L_80,R12
L_79:				// Pred: L_78
	._LINE	0, 125
	LDI	#13,R4
	CALL20	__DUXPutCharacter,R12
L_80:				// Pred: L_79 L_78
	._LINE	0, 126
	LD	@(FP,-8),R13	; _i
	LD	@(FP,8),R0	; _text
	LDUB	@(R0,R13),R4
	CALL20	__DUXPutCharacter,R12
	._LINE	0, 127
	LD	@(FP,-8),R0	; _i
	ADDN	#1,R0
	ST	R0,@(FP,-8)	; _i
	BRA20	L_77,R12
L_81:				// Pred: L_77
	._LINE	0, 127
L_82:				// Pred: L_81
	._LINE	0, 127
	._CONFIG	E
	._LINE	0, 128
	LDM	(R8,R9)
	LEAVE
	LD	@SP+,RP
	ADDSP	#4
	RET
	._CONFIG	E
	.end	
