//					FR Family SOFTUNE cpcom V65L06
	.program	"flexray"
	.library	"lib911.lib"
	._LANGUAGE	C_FR20, N, U, F
	._FILE	"Y:\FlexRayDriver\Fujitsu_MB91F465X\flexray_startup\src\flexray.c", 0
	._FILE	"Y:\FlexRayDriver\Fujitsu_MB91F465X\flexray_startup\src\..\clusterconfig\DUXFlexRayClusterConfig.h", 1
	._FILE	"Y:\FlexRayDriver\Fujitsu_MB91F465X\flexray_startup\src\..\h_file\watchdog.h", 2
	._FILE	"Y:\FlexRayDriver\Fujitsu_MB91F465X\flexray_startup\src\..\h_file\flexray.h", 3
	._FILE	"Y:\FlexRayDriver\Fujitsu_MB91F465X\flexray_startup\src\..\h_file\..\h_file\platform_types.h", 4
	._FILE	"Y:\FlexRayDriver\Fujitsu_MB91F465X\flexray_startup\src\..\h_file\FLX_regist_defines.h", 5
	._FILE	"Y:\FlexRayDriver\Fujitsu_MB91F465X\flexray_startup\src\..\IO_MB91465X_V01L03\mb91f465x.h", 6
	._FILE	"Y:\FlexRayDriver\Fujitsu_MB91F465X\flexray_startup\src\..\IO_MB91465X_V01L03\_fr.h", 7
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
	._MEMBER	S, 0x17, 16, S
	._SYMBOL	"msgval", M, 0x80000002, S, 0, 1
	._SYMBOL	"channel", M, 0x80000002, S, 1, 1
	._SYMBOL	"slotID", M, 0x80000004, S, 2, 2
	._SYMBOL	"WRHS1", M, 0x80000008, S, 4, 4
	._SYMBOL	"WRHS2", M, 0x80000008, S, 8, 4
	._SYMBOL	"WRHS3", M, 0x80000008, S, 12, 4
	._MEMBER	E
	._SYMBOL	"uint32", Y, 0x80000008
	._SYMBOL	"uint8", Y, 0x80000002
	._SYMBOL	"uint16", Y, 0x80000004
	._SYMBOL	"sint16", Y, 0x80000003
	._SYMBOL	"boolean", Y, 0x80000002
	._SYMBOL	"", G, 0x17, S
	._SYMBOL	"DUX_TYP_FLX_MSGOBJ", Y, 0x17
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
	.section	INIT, DATA, align=4
	.align	4
__controllerName:
	.word	LS_0
	.section	CONST, CONST, align=4
	.align	4
LS_0:
	.ascii	"New Node 1\000"
	.datab.b	1,0
	.global	_typ_FLX_msgobj
_typ_FLX_msgobj:
	.byte	1
	.byte	2
	.half	1
	.word	385875969
	.word	524571
	.word	48
	.byte	1
	.byte	0
	.half	3
	.word	352321539
	.word	131711
	.word	52
	.byte	1
	.byte	1
	.half	3
	.word	369098755
	.word	131711
	.word	53
	.byte	1
	.byte	2
	.half	2
	.word	587202562
	.word	524288
	.word	54
	.byte	1
	.byte	0
	.half	4
	.word	553648132
	.word	131072
	.word	58
	.byte	1
	.byte	1
	.half	4
	.word	570425348
	.word	131072
	.word	59
	.global	_DUXWatchDogReset
	.global	___wait_nop
	.section	CODE, CODE, align=2
	.global	_DUXFXControllerName
	._SYMBOL	"DUXFXControllerName", F, 0x8000000e, E, "_DUXFXControllerName", F
	._FPARAM	S, 0, F
	._FPARAM	E
	._POINTER	1
	._CONFIG	S, F, 1
	._LINE	0, 49
_DUXFXControllerName:
L_20:
	ST	RP,@-SP
	ENTER	#4
;-------end_of_no_optimize_block
	._FUNCTION	"fp", "fp", 16
	._CONFIG	S, B
L_21:				// Pred: L_20
	._LINE	0, 50
	LDI:20	#__controllerName,R0
	LD	@R0,R4	; __controllerName
L_22:				// Pred: L_21
	._LINE	0, 50
	._CONFIG	E
	._LINE	0, 51
	LEAVE
	LD	@SP+,RP
	RET
	._CONFIG	E
	.global	_DUXFXInit
	._SYMBOL	"DUXFXInit", F, 0x8000000f, E, "_DUXFXInit", F
	._FPARAM	S, 0, F
	._FPARAM	E
	._CONFIG	S, F, 1
	._LINE	0, 57
_DUXFXInit:
L_23:
	ST	RP,@-SP
	ENTER	#4
	STM	(R8)
;-------end_of_no_optimize_block
	._FUNCTION	"fp", "fp", 16
	._CONFIG	S, B
L_24:				// Pred: L_23
	._LINE	0, 59
	CALL20	_DUXFXConfigInit,R12
	._LINE	0, 60
	LDI:20	#_IO_LVD+3,R8
	BAND	#0xF7,@R8
	._LINE	0, 63
	CALL20	_DUXFXCreateMessageRam,R12
	._LINE	0, 64
	BAND	#0xF7,@R8
	._LINE	0, 67
	CALL20	_DUXFXInterruptInit,R12
	._LINE	0, 70
	LDI	#16,R4
	LDI	#0,R5
	CALL20	_DUXFXInterruptConfig,R12
	._LINE	0, 73
	LDI	#1,R4
	LDI	#0,R5
	LDI	#0,R6
	LDI	#0,R7
	CALL20	_DUXFXInterruptLineConfig,R12
	._LINE	0, 74
	BAND	#0xF7,@R8
	._LINE	0, 77
	CALL20	_DUXFXConfigFix,R12
L_25:				// Pred: L_24
	._LINE	0, 77
	._CONFIG	E
	._LINE	0, 79
	LDM	(R8)
	LEAVE
	LD	@SP+,RP
	RET
	._CONFIG	E
	._SYMBOL	"DUXFXConfigInit", F, 0x8000000f, S, "_DUXFXConfigInit", F
	._FPARAM	S, 0, F
	._FPARAM	E
	._CONFIG	S, F, 1
	._LINE	0, 91
_DUXFXConfigInit:
L_235:
	ST	RP,@-SP
	ENTER	#8
;-------end_of_no_optimize_block
	._FUNCTION	"fp", "fp", 24
	._CONFIG	S, B
	._SYMBOL	"i", V, 0x80000008, A, -4
L_236:				// Pred: L_235
	._LINE	0, 93
	._LINE	0, 93
	LDI	#0,R2
	ST	R2,@(FP,-4)	; _i
	._LINE	0, 96
	LDI:20	#_IO_PLL2,R0
	LDI	#1,R1
	STB	R1,@R0	; _IO_PLL2
	._LINE	0, 97
	LDI:20	#_IO_PLL2+1,R0
	LDI	#19,R1
	STB	R1,@R0	; _IO_PLL2
	._LINE	0, 98
	LDI:20	#_IO_PLL2+2,R0
	LDI	#0,R4
	STB	R4,@R0	; _IO_PLL2
	._LINE	0, 99
	LDI:20	#_IO_PLL2+3,R0
	STB	R4,@R0	; _IO_PLL2
	._LINE	0, 101
	LDI:20	#_IO_PLL2+6,R3
	LDUB	@R3,R1	; _IO_PLL2
	LDI	#4,R0
	OR	R0,R1
	STB	R1,@R3	; _IO_PLL2
	._LINE	0, 102
	LDUB	@R3,R1	; _IO_PLL2
	LDI	#2,R0
	OR	R0,R1
	STB	R1,@R3	; _IO_PLL2
	._LINE	0, 104
L_237:				// Pred: L_239 L_236
	._LINE	0, 104
	._LINE	0, 105
	._LINE	0, 108
	LD	@(FP,-4),R0	; _i
	LDI	#19200,R1
	CMP	R1,R0
	BLS20	L_239,R12
L_238:				// Pred: L_237
	._LINE	0, 109
	._LINE	0, 110
	BRA20	L_240,R12
L_239:				// Pred: L_237
	._LINE	0, 112
	LD	@(FP,-4),R0	; _i
	ADDN	#1,R0
	ST	R0,@(FP,-4)	; _i
	._LINE	0, 113
	BRA20	L_237,R12
L_240:				// Pred: L_238
	._LINE	0, 115
	LDI:20	#_IO_FxR_PRT,R0
	LDI	#-47380929,R1
	ST	R1,@R0	; _IO_FxR_PRT
	._LINE	0, 116
	LDI:20	#_IO_FxR_PRT+4,R0
	LDI	#1018443579,R1
	ST	R1,@R0	; _IO_FxR_PRT
	._LINE	0, 117
	LDI:20	#_IO_FxR_MHDC,R0
	LDI	#7929864,R1
	ST	R1,@R0	; _IO_FxR_MHDC
	._LINE	0, 118
	LDI:20	#_IO_FxR_GTU1,R1
	LDI	#40000,R0
	ST	R0,@R1	; _IO_FxR_GTU1
	._LINE	0, 119
	LDI:20	#_IO_FxR_GTU1+4,R1
	LDI	#984040,R0
	ST	R0,@R1	; _IO_FxR_GTU1
	._LINE	0, 120
	LDI:20	#_IO_FxR_GTU1+8,R0
	LDI	#50533910,R1
	ST	R1,@R0	; _IO_FxR_GTU1
	._LINE	0, 121
	LDI:20	#_IO_FxR_GTU1+12,R0
	LDI	#65012701,R1
	ST	R1,@R0	; _IO_FxR_GTU1
	._LINE	0, 122
	LDI:20	#_IO_FxR_GTU1+16,R0
	LDI	#268501506,R1
	ST	R1,@R0	; _IO_FxR_GTU1
	._LINE	0, 123
	LDI:20	#_IO_FxR_GTU1+20,R0
	LDI	#7929997,R1
	ST	R1,@R0	; _IO_FxR_GTU1
	._LINE	0, 124
	LDI:20	#_IO_FxR_GTU1+24,R1
	LDI	#131106,R0
	ST	R0,@R1	; _IO_FxR_GTU1
	._LINE	0, 125
	LDI:20	#_IO_FxR_GTU1+28,R0
	LDI	#8126471,R1
	ST	R1,@R0	; _IO_FxR_GTU1
	._LINE	0, 126
	LDI:20	#_IO_FxR_GTU1+32,R0
	LDI	#66307,R1
	ST	R1,@R0	; _IO_FxR_GTU1
	._LINE	0, 127
	LDI:20	#_IO_FxR_GTU1+36,R0
	LDI	#7929995,R1
	ST	R1,@R0	; _IO_FxR_GTU1
	._LINE	0, 128
	LDI:20	#_IO_FxR_GTU1+40,R0
	ST	R2,@R0	; _IO_FxR_GTU1
	._LINE	0, 129
	LDI:20	#_IO_FxR_SUC1,R2
	LDI	#209844993,R0
	ST	R0,@R2	; _IO_FxR_SUC1
	._LINE	0, 130
	LDI:20	#_IO_FxR_SUC1+4,R0
	LDI	#251738482,R1
	ST	R1,@R0	; _IO_FxR_SUC1
	._LINE	0, 131
	LDI:20	#_IO_FxR_SUC1+8,R0
	LDI	#254,R1
	ST	R1,@R0	; _IO_FxR_SUC1
	._LINE	0, 138
L_241:				// Pred: L_240
	._LINE	0, 138
	LD	@R2,R0	; _IO_FxR_SUC1
	LDI	#128,R5
	AND	R5,R0
	CMP	R5,R0
	BNE20	L_246,R12
L_242:				// Pred: L_241
	._LINE	0, 138
L_243:				// Pred: L_428 L_242
	._LINE	0, 138
L_244:				// Pred: L_243
	._LINE	0, 138
	LD	@R2,R0	; _IO_FxR_SUC1
	LDI	#128,R6
	AND	R6,R0
	CMP	R6,R0
	BNE20	L_246,R12
L_428:				// Pred: L_244
	._LINE	0, 138
	BRA20	L_243,R12
L_246:				// Pred: L_244 L_241
	._LINE	0, 138
	._CONFIG	E
	._LINE	0, 139
	LEAVE
	LD	@SP+,RP
	RET
	._CONFIG	E
	._SYMBOL	"DUXFXCreateMessageRam", F, 0x8000000f, S, "_DUXFXCreateMessageRam", F
	._FPARAM	S, 0, F
	._FPARAM	E
	._CONFIG	S, F, 1
	._LINE	0, 151
_DUXFXCreateMessageRam:
L_248:
	ST	RP,@-SP
	ENTER	#8
;-------end_of_no_optimize_block
	._FUNCTION	"fp", "fp", 24
	._CONFIG	S, B
	._SYMBOL	"index", V, 0x80000008, A, -4
L_249:				// Pred: L_248
	._LINE	0, 153
	._LINE	0, 161
	LDI:20	#_IO_FxR_MHD,R0
	LDI	#360452,R1
	ST	R1,@R0	; _IO_FxR_MHD
	._LINE	0, 165
	LDI	#0,R0
	ST	R0,@(FP,-4)	; _index
	LDI:20	#_typ_FLX_msgobj,R1
	LDI:20	#_IO_FxR_IBF,R3
	LDI:20	#_IO_FxR_IBF+4,R4
	LDI:20	#_IO_FxR_IBF+8,R5
	LDI:20	#_IO_FxR_IBF+20,R2
	LDI:20	#_IO_FxR_IBF+16,R6
L_250:				// Pred: L_258 L_249
	._LINE	0, 165
	LD	@(FP,-4),R0	; _index
	CMP	#6,R0
	BNC20	L_259,R12
L_251:				// Pred: L_250
	._LINE	0, 166
	._LINE	0, 168
	LD	@(FP,-4),R7	; _index
	LSL	#4,R7
	MOV	R1,R0
	ADDN	R7,R0
	LDUB	@R0,R0
	CMP	#1,R0
	BNE20	L_258,R12
L_252:				// Pred: L_251
	._LINE	0, 168
	._LINE	0, 169
	LD	@(FP,-4),R7	; _index
	LSL	#4,R7
	MOV	R1,R0
	ADDN	R7,R0
	LDI	#4,R13
	LD	@(R0,R13),R0
	ST	R0,@R3	; _IO_FxR_IBF
	._LINE	0, 170
	LD	@(FP,-4),R7	; _index
	LSL	#4,R7
	MOV	R1,R0
	ADDN	R7,R0
	LDI	#8,R13
	LD	@(R0,R13),R0
	ST	R0,@R4	; _IO_FxR_IBF
	._LINE	0, 171
	LD	@(FP,-4),R7	; _index
	LSL	#4,R7
	MOV	R1,R0
	ADDN	R7,R0
	LDI	#12,R13
	LD	@(R0,R13),R0
	ST	R0,@R5	; _IO_FxR_IBF
	._LINE	0, 175
L_253:				// Pred: L_252
	._LINE	0, 175
	LD	@R2,R0	; _IO_FxR_IBF
	LSL	#16,R0
	BP20	L_257,R12
L_254:				// Pred: L_253
	._LINE	0, 175
L_255:				// Pred: L_256 L_254
	._LINE	0, 175
L_256:				// Pred: L_255
	._LINE	0, 175
	LD	@R2,R0	; _IO_FxR_IBF
	LSL	#16,R0
	BN20	L_255,R12
L_429:				// Pred: L_256
	._LINE	0, 178
L_257:				// Pred: L_429 L_253
	._LINE	0, 178
	LDI	#1,R0
	ST	R0,@R6	; _IO_FxR_IBF
	._LINE	0, 181
	LD	@(FP,-4),R7	; _index
	LDI	#127,R0
	AND	R0,R7
	LDI:20	#_IO_FxR_IBF+20,R0
	ST	R7,@R0	; _IO_FxR_IBF
	._LINE	0, 182
L_258:				// Pred: L_257 L_251
	._LINE	0, 183
	LD	@(FP,-4),R0	; _index
	ADDN	#1,R0
	ST	R0,@(FP,-4)	; _index
	BRA20	L_250,R12
L_259:				// Pred: L_250
	._LINE	0, 185
L_260:				// Pred: L_259
	._LINE	0, 185
	._CONFIG	E
	._LINE	0, 186
	LEAVE
	LD	@SP+,RP
	RET
	._CONFIG	E
	._SYMBOL	"DUXFXInterruptInit", F, 0x8000000f, S, "_DUXFXInterruptInit", F
	._FPARAM	S, 0, F
	._FPARAM	E
	._CONFIG	S, F, 1
	._LINE	0, 195
_DUXFXInterruptInit:
L_53:
	ST	RP,@-SP
	ENTER	#4
;-------end_of_no_optimize_block
	._FUNCTION	"fp", "fp", 16
	._CONFIG	S, B
L_54:				// Pred: L_53
	._LINE	0, 201
	LDI:20	#_IO_FxR_INT+32,R0
	LDI	#0,R1
	ST	R1,@R0	; _IO_FxR_INT
	._LINE	0, 204
	LDI:20	#_IO_FxR_INT+4,R0
	LDI:8	#-1,R2
	EXTSB	R2
	ST	R2,@R0	; _IO_FxR_INT
	._LINE	0, 205
	LDI:20	#_IO_FxR_INT,R0
	ST	R2,@R0	; _IO_FxR_INT
	._LINE	0, 208
	LDI:20	#_IO_FxR_INT+28,R0
	ST	R2,@R0	; _IO_FxR_INT
	._LINE	0, 209
	LDI:20	#_IO_FxR_INT+20,R0
	ST	R2,@R0	; _IO_FxR_INT
	._LINE	0, 212
	LDI:20	#_IO_FxR_INT+12,R0
	ST	R1,@R0	; _IO_FxR_INT
	._LINE	0, 213
	LDI:20	#_IO_FxR_INT+8,R0
	ST	R1,@R0	; _IO_FxR_INT
L_55:				// Pred: L_54
	._LINE	0, 213
	._CONFIG	E
	._LINE	0, 215
	LEAVE
	LD	@SP+,RP
	RET
	._CONFIG	E
	._SYMBOL	"DUXFXInterruptConfig", F, 0x8000000f, S, "_DUXFXInterruptConfig", F
	._FPARAM	S, 2, F
	._SYMBOL	"sir_reg", P, 0x80000008, A, 8
	._SYMBOL	"eir_reg", P, 0x80000008, A, 12
	._FPARAM	E
	._CONFIG	S, F, 1
	._LINE	0, 225
_DUXFXInterruptConfig:
L_56:
	STM	(R4,R5)
	ST	RP,@-SP
	ENTER	#4
;-------end_of_no_optimize_block
	._FUNCTION	"fp", "fp", 40
	._CONFIG	S, B
L_57:				// Pred: L_56
	._LINE	0, 229
	LD	@(FP,8),R1	; _sir_reg
	LDI:20	#_IO_FxR_INT+24,R0
	ST	R1,@R0	; _IO_FxR_INT
	._LINE	0, 232
	LD	@(FP,12),R0	; _eir_reg
	LDI:20	#_IO_FxR_INT+16,R1
	ST	R0,@R1	; _IO_FxR_INT
L_58:				// Pred: L_57
	._LINE	0, 232
	._CONFIG	E
	._LINE	0, 233
	LEAVE
	LD	@SP+,RP
	ADDSP	#8
	RET
	._CONFIG	E
	._SYMBOL	"DUXFXInterruptLineConfig", F, 0x8000000f, S, "_DUXFXInterruptLineConfig", F
	._FPARAM	S, 4, F
	._SYMBOL	"ln_0", P, 0x80000005, A, 8
	._SYMBOL	"ln_1", P, 0x80000005, A, 12
	._SYMBOL	"s_line", P, 0x80000008, A, 16
	._SYMBOL	"e_line", P, 0x80000008, A, 20
	._FPARAM	E
	._CONFIG	S, F, 1
	._LINE	0, 245
_DUXFXInterruptLineConfig:
L_59:
	STM	(R4,R5,R6,R7)
	ST	RP,@-SP
	ENTER	#4
;-------end_of_no_optimize_block
	._FUNCTION	"fp", "fp", 40
	._CONFIG	S, B
L_60:				// Pred: L_59
	._LINE	0, 249
	LD	@(FP,16),R0	; _s_line
	LDI:20	#_IO_FxR_INT+12,R1
	ST	R0,@R1	; _IO_FxR_INT
	._LINE	0, 252
	LD	@(FP,20),R0	; _e_line
	LDI:20	#_IO_FxR_INT+8,R1
	ST	R0,@R1	; _IO_FxR_INT
	._LINE	0, 254
	LD	@(FP,8),R0	; _ln_0
	CMP	#0,R0
	BEQ20	L_62,R12
L_61:				// Pred: L_60
	._LINE	0, 255
	._LINE	0, 258
	LDI:20	#_IO_FxR_INT+32,R0
	LDI	#1,R1
	ST	R1,@R0	; _IO_FxR_INT
	._LINE	0, 259
L_62:				// Pred: L_61 L_60
	._LINE	0, 261
	LD	@(FP,12),R0	; _ln_1
	CMP	#0,R0
	BEQ20	L_64,R12
L_63:				// Pred: L_62
	._LINE	0, 262
	._LINE	0, 265
	LDI:20	#_IO_FxR_INT+32,R0
	LDI	#16,R1
	ST	R1,@R0	; _IO_FxR_INT
	._LINE	0, 266
L_64:				// Pred: L_63 L_62
	._LINE	0, 270
	LDI:20	#_IO_ICR+34,R1
	LDI	#24,R0
	STB	R0,@R1
	._LINE	0, 272
L_65:				// Pred: L_64
	._LINE	0, 272
	._CONFIG	E
	._LINE	0, 273
	LEAVE
	LD	@SP+,RP
	ADDSP	#16
	RET
	._CONFIG	E
	._SYMBOL	"DUXFXConfigFix", F, 0x8000000f, S, "_DUXFXConfigFix", F
	._FPARAM	S, 0, F
	._FPARAM	E
	._CONFIG	S, F, 1
	._LINE	0, 285
_DUXFXConfigFix:
L_263:
	ST	RP,@-SP
	ENTER	#4
;-------end_of_no_optimize_block
	._FUNCTION	"fp", "fp", 16
	._CONFIG	S, B
L_264:				// Pred: L_263
	._LINE	0, 292
	LDI:20	#_IO_FxR_SUC2,R2
	LDI:20	#_IO_FxR_SUC1,R5
	LDI:20	#_IO_FxR_GIF1+12,R4
	LDI	#209844994,R3
L_438:				// Pred: L_276 L_264
	._LINE	0, 292
L_439:				// Pred: L_272 L_438
	._LINE	0, 292
L_265:				// Pred: L_439
	._LINE	0, 292
	LD	@R2,R0	; _IO_FxR_SUC2
	LDI	#63,R1
	AND	R1,R0
	CMP	#1,R0
	BEQ20	L_277,R12
L_266:				// Pred: L_265
	._LINE	0, 293
	._LINE	0, 295
L_267:				// Pred: L_266
	._LINE	0, 295
	LD	@R5,R0	; _IO_FxR_SUC1
	LDI	#128,R6
	AND	R6,R0
	CMP	R6,R0
	BNE20	L_271,R12
L_268:				// Pred: L_267
	._LINE	0, 295
L_269:				// Pred: L_270 L_268
	._LINE	0, 295
L_270:				// Pred: L_269
	._LINE	0, 295
	LD	@R5,R0	; _IO_FxR_SUC1
	LDI	#128,R7
	AND	R7,R0
	CMP	R7,R0
	BEQ20	L_269,R12
L_430:				// Pred: L_270
	._LINE	0, 299
L_271:				// Pred: L_430 L_267
	._LINE	0, 299
	LDI	#206,R0
	ST	R0,@R4	; _IO_FxR_GIF1
	._LINE	0, 300
	LDI	#49,R0
	ST	R0,@R4	; _IO_FxR_GIF1
	._LINE	0, 303
	ST	R3,@R5	; _IO_FxR_SUC1
	._LINE	0, 306
L_272:				// Pred: L_271
	._LINE	0, 306
	LD	@R5,R0	; _IO_FxR_SUC1
	AND	R6,R0
	CMP	R6,R0
	BNE20	L_439,R12
L_273:				// Pred: L_272
	._LINE	0, 306
L_274:				// Pred: L_275 L_273
	._LINE	0, 306
L_275:				// Pred: L_274
	._LINE	0, 306
	LD	@R5,R0	; _IO_FxR_SUC1
	LDI	#128,R12
	AND	R12,R0
	CMP	R12,R0
	BEQ20	L_274,R12
L_431:				// Pred: L_275
L_276:				// Pred: L_431
	._LINE	0, 307
	BRA20	L_438,R12
L_277:				// Pred: L_265
	._LINE	0, 307
L_278:				// Pred: L_277
	._LINE	0, 307
	._CONFIG	E
	._LINE	0, 308
	LEAVE
	LD	@SP+,RP
	RET
	._CONFIG	E
	.global	_DUXFXStartup
	._SYMBOL	"DUXFXStartup", F, 0x8000000f, E, "_DUXFXStartup", F
	._FPARAM	S, 0, F
	._FPARAM	E
	._CONFIG	S, F, 1
	._LINE	0, 319
_DUXFXStartup:
L_283:
	ST	RP,@-SP
	ENTER	#4
;-------end_of_no_optimize_block
	._FUNCTION	"fp", "fp", 16
	._CONFIG	S, B
L_284:				// Pred: L_283
	._LINE	0, 321
	LDI:20	#_IO_LVD+3,R3
	BAND	#0xF7,@R3
	._LINE	0, 326
	LDI:20	#_IO_FxR_SUC1,R0
	LDI	#3,R1
	ST	R1,@R0	; _IO_FxR_SUC1
	._LINE	0, 330
L_285:				// Pred: L_284
	._LINE	0, 330
	LD	@R0,R1	; _IO_FxR_SUC1
	LDI	#128,R6
	AND	R6,R1
	CMP	R6,R1
	BNE20	L_290,R12
L_286:				// Pred: L_285
	._LINE	0, 330
L_287:				// Pred: L_432 L_286
	._LINE	0, 330
L_288:				// Pred: L_287
	._LINE	0, 330
	LD	@R0,R1	; _IO_FxR_SUC1
	LDI	#128,R12
	AND	R12,R1
	CMP	R12,R1
	BNE20	L_290,R12
L_432:				// Pred: L_288
	._LINE	0, 333
	BRA20	L_287,R12
L_290:				// Pred: L_288 L_285
	._LINE	0, 333
	LDI:20	#_IO_FxR_SUC2,R4
	LD	@R4,R1	; _IO_FxR_SUC2
	LDI	#63,R5
	AND	R5,R1
	CMP	#1,R1
	BEQ20	L_294,R12
L_291:				// Pred: L_290
	._LINE	0, 333
L_292:				// Pred: L_293 L_291
	._LINE	0, 333
L_293:				// Pred: L_292
	._LINE	0, 333
	LD	@R4,R2	; _IO_FxR_SUC2
	LDI	#63,R1
	AND	R1,R2
	CMP	#1,R2
	BNE20	L_292,R12
L_433:				// Pred: L_293
	._LINE	0, 336
L_294:				// Pred: L_433 L_290
	._LINE	0, 336
	LDI	#9,R1
	ST	R1,@R0	; _IO_FxR_SUC1
	._LINE	0, 339
L_295:				// Pred: L_294
	._LINE	0, 339
	LD	@R0,R1	; _IO_FxR_SUC1
	AND	R6,R1
	CMP	R6,R1
	BNE20	L_299,R12
L_296:				// Pred: L_295
	._LINE	0, 339
L_297:				// Pred: L_298 L_296
	._LINE	0, 339
L_298:				// Pred: L_297
	._LINE	0, 339
	LD	@R0,R1	; _IO_FxR_SUC1
	LDI	#128,R7
	AND	R7,R1
	CMP	R7,R1
	BEQ20	L_297,R12
L_434:				// Pred: L_298
	._LINE	0, 342
L_299:				// Pred: L_434 L_295
	._LINE	0, 342
	LDI	#4,R1
	ST	R1,@R0	; _IO_FxR_SUC1
	._LINE	0, 345
L_300:				// Pred: L_299
	._LINE	0, 345
	LD	@R4,R0	; _IO_FxR_SUC2
	AND	R5,R0
	CMP	#2,R0
	BEQ20	L_305,R12
L_301:				// Pred: L_300
	._LINE	0, 345
L_302:				// Pred: L_435 L_301
	._LINE	0, 346
	._LINE	0, 347
;-------volatile_access
	NOP
;-------end_of_no_optimize_block
	._LINE	0, 349
	BAND	#0xF7,@R3
	._LINE	0, 351
L_303:				// Pred: L_302
	._LINE	0, 345
	LD	@R4,R0	; _IO_FxR_SUC2
	LDI	#63,R1
	AND	R1,R0
	CMP	#2,R0
	BEQ20	L_305,R12
L_435:				// Pred: L_303
	._LINE	0, 354
	BRA20	L_302,R12
L_305:				// Pred: L_303 L_300
	._LINE	0, 354
	._CONFIG	E
	._LINE	0, 355
	LEAVE
	LD	@SP+,RP
	RET
	._CONFIG	E
	.global	_DUXFXReceiveControl
	._SYMBOL	"DUXFXReceiveControl", F, 0x8000000f, E, "_DUXFXReceiveControl", F
	._FPARAM	S, 1, F
	._SYMBOL	"buf_no", P, 0x80000005, A, 8
	._FPARAM	E
	._CONFIG	S, F, 1
	._LINE	0, 363
_DUXFXReceiveControl:
L_307:
	ST	R4,@-SP
	ST	RP,@-SP
	ENTER	#4
;-------end_of_no_optimize_block
	._FUNCTION	"fp", "fp", 40
	._CONFIG	S, B
L_308:				// Pred: L_307
	._LINE	0, 370
	LDI:20	#_IO_FxR_OBF+16,R3
	LD	@R3,R1	; _IO_FxR_OBF
	LDI	#3,R0
	OR	R0,R1
	ST	R1,@R3	; _IO_FxR_OBF
	._LINE	0, 374
	LD	@(FP,8),R1	; _buf_no
	LDI	#127,R0
	AND	R0,R1
	LDI:20	#_IO_FxR_OBF+20,R2
	ST	R1,@R2	; _IO_FxR_OBF
	._LINE	0, 376
	LD	@R2,R0	; _IO_FxR_OBF
	LDI	#512,R1
	OR	R1,R0
	ST	R0,@R2	; _IO_FxR_OBF
	._LINE	0, 380
L_309:				// Pred: L_308
	._LINE	0, 380
	LD	@R2,R0	; _IO_FxR_OBF
	LSL	#16,R0
	BP20	L_313,R12
L_310:				// Pred: L_309
	._LINE	0, 380
L_311:				// Pred: L_312 L_310
	._LINE	0, 380
L_312:				// Pred: L_311
	._LINE	0, 380
	LD	@R2,R0	; _IO_FxR_OBF
	LSL	#16,R0
	BN20	L_311,R12
L_436:				// Pred: L_312
	._LINE	0, 386
L_313:				// Pred: L_436 L_309
	._LINE	0, 386
	LD	@R2,R1	; _IO_FxR_OBF
	LDI	#256,R0
	OR	R0,R1
	ST	R1,@R2	; _IO_FxR_OBF
L_314:				// Pred: L_313
	._LINE	0, 386
	._CONFIG	E
	._LINE	0, 388
	LEAVE
	LD	@SP+,RP
	ADDSP	#4
	RET
	._CONFIG	E
	.global	_DUXFXReceiveStatus
	._SYMBOL	"DUXFXReceiveStatus", F, 0x80000002, E, "_DUXFXReceiveStatus", F
	._FPARAM	S, 1, F
	._SYMBOL	"mbs_dat", P, 0x80000008, A, 8
	._POINTER	1
	._FPARAM	E
	._CONFIG	S, F, 1
	._LINE	0, 400
_DUXFXReceiveStatus:
L_107:
	ST	R4,@-SP
	ST	RP,@-SP
	ENTER	#8
;-------end_of_no_optimize_block
	._FUNCTION	"fp", "fp", 48
	._CONFIG	S, B
	._SYMBOL	"err_st", V, 0x80000002, A, -1
L_108:				// Pred: L_107
	._LINE	0, 402
	._LINE	0, 402
	LDI	#0,R0
	STB	R0,@(FP,-1)	; _err_st
	._LINE	0, 405
	LDI:20	#_IO_FxR_OBF+12,R0
	LD	@R0,R0	; _IO_FxR_OBF
	LD	@(FP,8),R1	; _mbs_dat
	ST	R0,@R1
	._LINE	0, 411
	LD	@(FP,8),R0	; _mbs_dat
	LD	@R0,R1
	LDI	#1108,R0
	AND	R0,R1
	BEQ20	L_110,R12
L_109:				// Pred: L_108
	._LINE	0, 411
	._LINE	0, 412
	LDI	#1,R0
	STB	R0,@(FP,-1)	; _err_st
	._LINE	0, 413
L_110:				// Pred: L_109 L_108
	._LINE	0, 419
	LD	@(FP,8),R0	; _mbs_dat
	LD	@R0,R2
	LDI	#2216,R0
	AND	R0,R2
	BEQ20	L_112,R12
L_111:				// Pred: L_110
	._LINE	0, 419
	._LINE	0, 420
	LDI	#1,R0
	STB	R0,@(FP,-1)	; _err_st
	._LINE	0, 421
L_112:				// Pred: L_111 L_110
	._LINE	0, 423
	LDUB	@(FP,-1),R4	; _err_st
L_113:				// Pred: L_112
	._LINE	0, 423
	._CONFIG	E
	._LINE	0, 424
	LEAVE
	LD	@SP+,RP
	ADDSP	#4
	RET
	._CONFIG	E
	._SYMBOL	"DUXFXAccessReceivedData", F, 0x80000008, S, "_DUXFXAccessReceivedData", F
	._FPARAM	S, 1, F
	._SYMBOL	"word", P, 0x80000005, A, 8
	._FPARAM	E
	._CONFIG	S, F, 1
	._LINE	0, 438
_DUXFXAccessReceivedData:
L_114:
	ST	R4,@-SP
	ST	RP,@-SP
	ENTER	#8
;-------end_of_no_optimize_block
	._FUNCTION	"fp", "fp", 48
	._CONFIG	S, B
	._SYMBOL	"recv_Data", V, 0x80000008, A, -4
L_115:				// Pred: L_114
	._LINE	0, 440
	._LINE	0, 442
	LD	@(FP,8),R13	; _word
	LSL	#2,R13
	LDI:20	#_IO_FxR_RDDS,R0
	LD	@(R0,R13),R0	; _IO_FxR_RDDS
	ST	R0,@(FP,-4)	; _recv_Data
	._LINE	0, 444
	LD	@(FP,-4),R4	; _recv_Data
L_116:				// Pred: L_115
	._LINE	0, 444
	._CONFIG	E
	._LINE	0, 445
	LEAVE
	LD	@SP+,RP
	ADDSP	#4
	RET
	._CONFIG	E
	._SYMBOL	"DUXFXTransmitData", F, 0x8000000f, S, "_DUXFXTransmitData", F
	._FPARAM	S, 2, F
	._SYMBOL	"word", P, 0x80000005, A, 8
	._SYMBOL	"tran_Data", P, 0x80000008, A, 12
	._FPARAM	E
	._CONFIG	S, F, 1
	._LINE	0, 457
_DUXFXTransmitData:
L_117:
	STM	(R4,R5)
	ST	RP,@-SP
	ENTER	#4
;-------end_of_no_optimize_block
	._FUNCTION	"fp", "fp", 40
	._CONFIG	S, B
L_118:				// Pred: L_117
	._LINE	0, 459
	LD	@(FP,8),R13	; _word
	LSL	#2,R13
	LD	@(FP,12),R1	; _tran_Data
	LDI:20	#_IO_FxR_WRDS,R0
	ST	R1,@(R0,R13)	; _IO_FxR_WRDS
	._LINE	0, 460
L_119:				// Pred: L_118
	._LINE	0, 460
	._CONFIG	E
	._LINE	0, 461
	LEAVE
	LD	@SP+,RP
	ADDSP	#8
	RET
	._CONFIG	E
	._SYMBOL	"DUXFXTransmitControl", F, 0x8000000f, S, "_DUXFXTransmitControl", F
	._FPARAM	S, 1, F
	._SYMBOL	"MsgbuffNo", P, 0x80000008, A, 8
	._FPARAM	E
	._CONFIG	S, F, 1
	._LINE	0, 474
_DUXFXTransmitControl:
L_316:
	ST	R4,@-SP
	ST	RP,@-SP
	ENTER	#4
;-------end_of_no_optimize_block
	._FUNCTION	"fp", "fp", 40
	._CONFIG	S, B
L_317:				// Pred: L_316
	._LINE	0, 478
	LDI:20	#_IO_FxR_IBF+20,R2
	LD	@R2,R0	; _IO_FxR_IBF
	LSL	#16,R0
	BP20	L_321,R12
L_318:				// Pred: L_317
	._LINE	0, 478
L_319:				// Pred: L_320 L_318
	._LINE	0, 478
L_320:				// Pred: L_319
	._LINE	0, 478
	LD	@R2,R0	; _IO_FxR_IBF
	LSL	#16,R0
	BN20	L_319,R12
L_437:				// Pred: L_320
	._LINE	0, 483
L_321:				// Pred: L_437 L_317
	._LINE	0, 483
	LDI:20	#_IO_FxR_IBF+16,R0
	LDI	#6,R1
	ST	R1,@R0	; _IO_FxR_IBF
	._LINE	0, 487
	LD	@(FP,8),R1	; _MsgbuffNo
	LDI	#127,R0
	AND	R0,R1
	ST	R1,@R2	; _IO_FxR_IBF
	._LINE	0, 489
L_322:				// Pred: L_321
	._LINE	0, 489
	._CONFIG	E
	._LINE	0, 490
	LEAVE
	LD	@SP+,RP
	ADDSP	#4
	RET
	._CONFIG	E
	.global	_DUXFXGetBufferNo
	._SYMBOL	"DUXFXGetBufferNo", F, 0x80000004, E, "_DUXFXGetBufferNo", F
	._FPARAM	S, 0, F
	._FPARAM	E
	._CONFIG	S, F, 1
	._LINE	0, 501
_DUXFXGetBufferNo:
L_324:
	ST	RP,@-SP
	ENTER	#16
;-------end_of_no_optimize_block
	._FUNCTION	"fp", "fp", 32
	._CONFIG	S, B
	._SYMBOL	"i", V, 0x80000005, A, -12
	._SYMBOL	"buffno", V, 0x80000008, A, -8
	._SYMBOL	"ndat_data", V, 0x80000008, A, -4
L_325:				// Pred: L_324
	._LINE	0, 503
	._LINE	0, 503
	LDI	#0,R1
	ST	R1,@(FP,-12)	; _i
	._LINE	0, 504
	LDI	#0,R0
	ST	R0,@(FP,-8)	; _buffno
	._LINE	0, 505
	ST	R0,@(FP,-4)	; _ndat_data
	._LINE	0, 508
L_326:				// Pred: L_325
	._LINE	0, 508
	ST	R1,@(FP,-12)	; _i
	LD	@(FP,-12),R0	; _i
	CMP	#4,R0
	BGE20	L_338,R12
L_327:				// Pred: L_326
	._LINE	0, 508
	LDI:20	#L_50441,R1
	LDI:20	#_IO_FxR_MHD+60,R5
	LDI:20	#_IO_FxR_MHD+56,R4
	LDI:20	#_IO_FxR_MHD+52,R3
	LDI:20	#_IO_FxR_MHD+48,R2
L_328:				// Pred: L_337 L_327
	._LINE	0, 509
	._LINE	0, 510
	LD	@(FP,-12),R13	; _i
	CMP	#4,R13
	BNC20	L_334,R12
L_427:				// Pred: L_328
	._LINE	0, 510
	LSL	#2,R13
	LD	@(R1,R13),R0
;-------table_branch
	JMP	@R0
	.section	CONST, CONST, align=4
	.align	4
L_50441:
	.word	L_329
	.word	L_330
	.word	L_331
	.word	L_332
	.section	CODE, CODE, align=2
	.align	2
L_329:				// Pred: L_427
	._LINE	0, 512
	LD	@R2,R0	; _IO_FxR_MHD
	ST	R0,@(FP,-4)	; _ndat_data
	BRA20	L_334,R12
L_330:				// Pred: L_427
	._LINE	0, 515
	LD	@R3,R0	; _IO_FxR_MHD
	ST	R0,@(FP,-4)	; _ndat_data
	BRA20	L_334,R12
L_331:				// Pred: L_427
	._LINE	0, 518
	LD	@R4,R0	; _IO_FxR_MHD
	ST	R0,@(FP,-4)	; _ndat_data
	BRA20	L_334,R12
L_332:				// Pred: L_427
	._LINE	0, 521
	LD	@R5,R0	; _IO_FxR_MHD
;-------volatile_access
	ST	R0,@(FP,-4)	; _ndat_data
L_334:				// Pred: L_332 L_331 L_330 L_329
				//	 L_427 L_328
	._LINE	0, 527
	LD	@(FP,-4),R0	; _ndat_data
	CMP	#0,R0
	BEQ20	L_336,R12
L_335:				// Pred: L_334
	._LINE	0, 528
	._LINE	0, 529
	LD	@(FP,-12),R0	; _i
	LSL	#5,R0
	LD	@(FP,-8),R1	; _buffno
	MULU	R0,R1
	MOV	MDL,R0
	ST	R0,@(FP,-8)	; _buffno
	._LINE	0, 530
	LD	@(FP,-4),R4	; _ndat_data
	CALL20	_FlexGetWordNo,R12
	ST	R4,@(FP,-8)	; _buffno
	._LINE	0, 532
	LD	@(FP,-8),R4	; _buffno
	EXTUH	R4
	BRA20	L_423,R12
L_336:				// Pred: L_334
	._LINE	0, 534
	LD	@(FP,-12),R0	; _i
	ADDN	#1,R0
	ST	R0,@(FP,-12)	; _i
L_337:				// Pred: L_336
	._LINE	0, 508
	LD	@(FP,-12),R0	; _i
	CMP	#4,R0
	BLT20	L_328,R12
L_338:				// Pred: L_337 L_326
	._LINE	0, 536
	LDI	#0,R4
L_423:				// Pred: L_338 L_335
	._LINE	0, 536
L_339:				// Pred: L_423
	._LINE	0, 536
	._CONFIG	E
	._LINE	0, 537
	LEAVE
	LD	@SP+,RP
	RET
	._CONFIG	E
	._SYMBOL	"FlexGetWordNo", F, 0x80000008, S, "_FlexGetWordNo", F
	._FPARAM	S, 1, F
	._SYMBOL	"word_data", P, 0x80000008, A, 8
	._FPARAM	E
	._CONFIG	S, F, 1
	._LINE	0, 548
_FlexGetWordNo:
L_142:
	ST	R4,@-SP
	ST	RP,@-SP
	ENTER	#8
;-------end_of_no_optimize_block
	._FUNCTION	"fp", "fp", 48
	._CONFIG	S, B
	._SYMBOL	"word_bitnum", V, 0x80000008, A, -4
L_143:				// Pred: L_142
	._LINE	0, 550
	._LINE	0, 550
	LDI	#0,R0
	ST	R0,@(FP,-4)	; _word_bitnum
	._LINE	0, 553
	MOV	FP,R5
	ADDN	#8,R5
	LD	@R5,R0
	EXTUB	R0
	CMP	#0,R0
	BEQ20	L_145,R12
L_144:				// Pred: L_143
	._LINE	0, 554
	._LINE	0, 555
	LD	@R5,R4
	EXTUB	R4
	CALL20	_FlexGetBitNo,R12
	LD	@(FP,-4),R0	; _word_bitnum
	ADDN	R4,R0
	ST	R0,@(FP,-4)	; _word_bitnum
	._LINE	0, 556
	BRA20	L_146,R12
L_145:				// Pred: L_143
	._LINE	0, 559
	LD	@R5,R1
	LSL	#16,R1
	LSR	#24,R1
	BEQ20	L_148,R12
L_147:				// Pred: L_145
	._LINE	0, 560
	._LINE	0, 561
	LDI	#8,R0
	ST	R0,@(FP,-4)	; _word_bitnum
	._LINE	0, 562
	LD	@R5,R4
	LSL	#16,R4
	LSR	#24,R4
	EXTUB	R4
	CALL20	_FlexGetBitNo,R12
	LD	@(FP,-4),R0	; _word_bitnum
	ADDN	R4,R0
	ST	R0,@(FP,-4)	; _word_bitnum
	._LINE	0, 563
	BRA20	L_146,R12
L_148:				// Pred: L_145
	._LINE	0, 565
	LD	@R5,R2
	LSL	#8,R2
	LSR	#24,R2
	BEQ20	L_151,R12
L_150:				// Pred: L_148
	._LINE	0, 566
	._LINE	0, 567
	LDI	#16,R0
	ST	R0,@(FP,-4)	; _word_bitnum
	._LINE	0, 568
	LD	@R5,R4
	LSL	#8,R4
	LSR	#24,R4
	EXTUB	R4
	CALL20	_FlexGetBitNo,R12
	LD	@(FP,-4),R0	; _word_bitnum
	ADDN	R4,R0
	ST	R0,@(FP,-4)	; _word_bitnum
	._LINE	0, 569
	BRA20	L_146,R12
L_151:				// Pred: L_148
	._LINE	0, 571
	LD	@R5,R3
	LSR	#24,R3
	BEQ20	L_154,R12
L_153:				// Pred: L_151
	._LINE	0, 572
	._LINE	0, 573
	LDI	#24,R0
	ST	R0,@(FP,-4)	; _word_bitnum
	._LINE	0, 574
	LD	@R5,R4
	LSR	#24,R4
	EXTUB	R4
	CALL20	_FlexGetBitNo,R12
	LD	@(FP,-4),R0	; _word_bitnum
	ADDN	R4,R0
	ST	R0,@(FP,-4)	; _word_bitnum
	._LINE	0, 575
	BRA20	L_146,R12
L_154:				// Pred: L_151
	._LINE	0, 577
	._LINE	0, 579
	LDI	#0,R4
	BRA20	L_424,R12
L_146:				// Pred: L_153 L_150 L_147 L_144
	._LINE	0, 583
;-------volatile_access
	LD	@(FP,-4),R4	; _word_bitnum
L_424:				// Pred: L_146 L_154
	._LINE	0, 583
L_156:				// Pred: L_424
	._LINE	0, 583
	._CONFIG	E
	._LINE	0, 584
	LEAVE
	LD	@SP+,RP
	ADDSP	#4
	RET
	._CONFIG	E
	._SYMBOL	"FlexGetBitNo", F, 0x80000008, S, "_FlexGetBitNo", F
	._FPARAM	S, 1, F
	._SYMBOL	"byte_data", P, 0x80000002, A, 11
	._FPARAM	E
	._CONFIG	S, F, 1
	._LINE	0, 594
_FlexGetBitNo:
L_341:
	ST	R4,@-SP
	ST	RP,@-SP
	ENTER	#12
;-------end_of_no_optimize_block
	._FUNCTION	"fp", "fp", 48
	._CONFIG	S, B
	._SYMBOL	"mask", V, 0x80000002, A, -1
	._SYMBOL	"i", V, 0x80000008, A, -8
L_342:				// Pred: L_341
	._LINE	0, 596
	._LINE	0, 596
	LDI	#1,R0
	STB	R0,@(FP,-1)	; _mask
	._LINE	0, 597
	LDI	#0,R1
	ST	R1,@(FP,-8)	; _i
	._LINE	0, 600
L_343:				// Pred: L_342
	._LINE	0, 600
	ST	R1,@(FP,-8)	; _i
	LD	@(FP,-8),R0	; _i
	CMP	#8,R0
	BNC20	L_349,R12
L_344:				// Pred: L_343
	._LINE	0, 600
L_345:				// Pred: L_348 L_344
	._LINE	0, 601
	._LINE	0, 603
	LDUB	@(FP,11),R1	; _byte_data
	LDUB	@(FP,-1),R0	; _mask
	AND	R0,R1
	LDUB	@(FP,-1),R0	; _mask
	CMP	R0,R1
	BNE20	L_347,R12
L_346:				// Pred: L_345
	._LINE	0, 604
	._LINE	0, 606
	LD	@(FP,-8),R4	; _i
	BRA20	L_425,R12
L_347:				// Pred: L_345
	._LINE	0, 610
	LDUB	@(FP,-1),R0	; _mask
	LSL	#1,R0
	STB	R0,@(FP,-1)	; _mask
	._LINE	0, 611
	LD	@(FP,-8),R0	; _i
	ADDN	#1,R0
	ST	R0,@(FP,-8)	; _i
L_348:				// Pred: L_347
	._LINE	0, 600
	LD	@(FP,-8),R0	; _i
	CMP	#8,R0
	BC20	L_345,R12
L_349:				// Pred: L_348 L_343
	._LINE	0, 614
	LDI	#0,R4
L_425:				// Pred: L_349 L_346
	._LINE	0, 614
L_350:				// Pred: L_425
	._LINE	0, 614
	._CONFIG	E
	._LINE	0, 615
	LEAVE
	LD	@SP+,RP
	ADDSP	#4
	RET
	._CONFIG	E
	.global	_DUXFXCCStatusCheck
	._SYMBOL	"DUXFXCCStatusCheck", F, 0x80000002, E, "_DUXFXCCStatusCheck", F
	._FPARAM	S, 0, F
	._FPARAM	E
	._CONFIG	S, F, 1
	._LINE	0, 633
_DUXFXCCStatusCheck:
L_166:
	ST	RP,@-SP
	ENTER	#8
;-------end_of_no_optimize_block
	._FUNCTION	"fp", "fp", 24
	._CONFIG	S, B
	._SYMBOL	"cc_state", V, 0x80000002, A, -1
L_167:				// Pred: L_166
	._LINE	0, 635
	._LINE	0, 635
	LDI	#0,R0
	STB	R0,@(FP,-1)	; _cc_state
	._LINE	0, 638
	LDI:20	#_IO_FxR_SUC2,R0
	LD	@R0,R1	; _IO_FxR_SUC2
	LDI	#63,R0
	AND	R0,R1
	STB	R1,@(FP,-1)	; _cc_state
	._LINE	0, 640
	LDUB	@(FP,-1),R4	; _cc_state
L_168:				// Pred: L_167
	._LINE	0, 640
	._CONFIG	E
	._LINE	0, 641
	LEAVE
	LD	@SP+,RP
	RET
	._CONFIG	E
	._SYMBOL	"findBufferForStaticSenderSlot", F, 0x80000003, S, "_findBufferForStaticSenderSlot", F
	._FPARAM	S, 2, F
	._SYMBOL	"slotID", P, 0x80000004, A, 10
	._SYMBOL	"channel", P, 0x80000002, A, 15
	._FPARAM	E
	._CONFIG	S, F, 1
	._LINE	0, 651
_findBufferForStaticSenderSlot:
L_352:
	STM	(R4,R5)
	ST	RP,@-SP
	ENTER	#8
	STM	(R8)
;-------end_of_no_optimize_block
	._FUNCTION	"fp", "fp", 48
	._CONFIG	S, B
	._SYMBOL	"foundIndex", V, 0x80000003, A, -4
	._SYMBOL	"i", V, 0x80000003, A, -2
L_353:				// Pred: L_352
	._LINE	0, 652
	._LINE	0, 652
	LDI:8	#-1,R0
	EXTSB	R0
	STH	R0,@(FP,-4)	; _foundIndex
	._LINE	0, 654
L_354:				// Pred: L_353
	._LINE	0, 654
	LDI	#0,R0
	STH	R0,@(FP,-2)	; _i
	LDUH	@(FP,-2),R0	; _i
	EXTSH	R0
	CMP	#1,R0
	BGE20	L_364,R12
L_355:				// Pred: L_354
	._LINE	0, 654
	LDI:20	#_typ_FLX_msgobj,R8
L_356:				// Pred: L_362 L_355
	._LINE	0, 655
	._LINE	0, 656
	CALL20	_DUXWatchDogReset,R12
	._LINE	0, 658
	LDUH	@(FP,-2),R0	; _i
	EXTSH	R0
	CMP	#6,R0
	BLT20	L_358,R12
L_357:				// Pred: L_356
	._LINE	0, 658
	BRA20	L_364,R12
L_358:				// Pred: L_356
	._LINE	0, 659
	LDUH	@(FP,-2),R1	; _i
	EXTSH	R1
	LSL	#4,R1
	MOV	R8,R0
	ADDN	R1,R0
	LDI	#2,R13
	LDUH	@(R0,R13),R0
	LDUH	@(FP,10),R1	; _slotID
	CMP	R1,R0
	BNE20	L_361,R12
L_359:				// Pred: L_358
	._LINE	0, 659
	LDUH	@(FP,-2),R1	; _i
	EXTSH	R1
	LSL	#4,R1
	MOV	R8,R0
	ADDN	R1,R0
	LDI	#1,R13
	LDUB	@(R0,R13),R0
	LDUB	@(FP,15),R1	; _channel
	CMP	R1,R0
	BNE20	L_361,R12
L_360:				// Pred: L_359
	._LINE	0, 660
	._LINE	0, 661
	LDUH	@(FP,-2),R0	; _i
	EXTSH	R0
	STH	R0,@(FP,-4)	; _foundIndex
	._LINE	0, 662
	BRA20	L_364,R12
L_361:				// Pred: L_359 L_358
	._LINE	0, 664
	LDUH	@(FP,-2),R0	; _i
	EXTSH	R0
	ADDN	#1,R0
	STH	R0,@(FP,-2)	; _i
L_362:				// Pred: L_361
	._LINE	0, 654
	LDUH	@(FP,-2),R0	; _i
	EXTSH	R0
	CMP	#1,R0
	BLT20	L_356,R12
L_363:				// Pred: L_362
	._LINE	0, 665
L_364:				// Pred: L_363 L_360 L_357 L_354
	._LINE	0, 665
	LDUH	@(FP,-4),R4	; _foundIndex
	EXTSH	R4
L_365:				// Pred: L_364
	._LINE	0, 665
	._CONFIG	E
	._LINE	0, 666
	LDM	(R8)
	LEAVE
	LD	@SP+,RP
	ADDSP	#8
	RET
	._CONFIG	E
	._SYMBOL	"findBufferForDynamicSenderSlot", F, 0x80000003, S, "_findBufferForDynamicSenderSlot", F
	._FPARAM	S, 2, F
	._SYMBOL	"slotID", P, 0x80000004, A, 10
	._SYMBOL	"channel", P, 0x80000002, A, 15
	._FPARAM	E
	._CONFIG	S, F, 1
	._LINE	0, 675
_findBufferForDynamicSenderSlot:
L_367:
	STM	(R4,R5)
	ST	RP,@-SP
	ENTER	#8
	STM	(R8)
;-------end_of_no_optimize_block
	._FUNCTION	"fp", "fp", 48
	._CONFIG	S, B
	._SYMBOL	"foundIndex", V, 0x80000003, A, -4
	._SYMBOL	"i", V, 0x80000003, A, -2
L_368:				// Pred: L_367
	._LINE	0, 676
	._LINE	0, 676
	LDI:8	#-1,R0
	EXTSB	R0
	STH	R0,@(FP,-4)	; _foundIndex
	._LINE	0, 678
L_369:				// Pred: L_368
	._LINE	0, 678
	LDI	#1,R0
	STH	R0,@(FP,-2)	; _i
	LDUH	@(FP,-2),R0	; _i
	EXTSH	R0
	CMP	#3,R0
	BGE20	L_379,R12
L_370:				// Pred: L_369
	._LINE	0, 678
	LDI:20	#_typ_FLX_msgobj,R8
L_371:				// Pred: L_377 L_370
	._LINE	0, 679
	._LINE	0, 680
	CALL20	_DUXWatchDogReset,R12
	._LINE	0, 682
	LDUH	@(FP,-2),R0	; _i
	EXTSH	R0
	CMP	#6,R0
	BLT20	L_373,R12
L_372:				// Pred: L_371
	._LINE	0, 682
	BRA20	L_379,R12
L_373:				// Pred: L_371
	._LINE	0, 683
	LDUH	@(FP,-2),R1	; _i
	EXTSH	R1
	LSL	#4,R1
	MOV	R8,R0
	ADDN	R1,R0
	LDI	#2,R13
	LDUH	@(R0,R13),R0
	LDUH	@(FP,10),R1	; _slotID
	CMP	R1,R0
	BNE20	L_376,R12
L_374:				// Pred: L_373
	._LINE	0, 683
	LDUH	@(FP,-2),R1	; _i
	EXTSH	R1
	LSL	#4,R1
	MOV	R8,R0
	ADDN	R1,R0
	LDI	#1,R13
	LDUB	@(R0,R13),R0
	LDUB	@(FP,15),R1	; _channel
	CMP	R1,R0
	BNE20	L_376,R12
L_375:				// Pred: L_374
	._LINE	0, 684
	._LINE	0, 685
	LDUH	@(FP,-2),R0	; _i
	EXTSH	R0
	STH	R0,@(FP,-4)	; _foundIndex
	._LINE	0, 686
	BRA20	L_379,R12
L_376:				// Pred: L_374 L_373
	._LINE	0, 688
	LDUH	@(FP,-2),R0	; _i
	EXTSH	R0
	ADDN	#1,R0
	STH	R0,@(FP,-2)	; _i
L_377:				// Pred: L_376
	._LINE	0, 678
	LDUH	@(FP,-2),R0	; _i
	EXTSH	R0
	CMP	#3,R0
	BLT20	L_371,R12
L_378:				// Pred: L_377
	._LINE	0, 689
L_379:				// Pred: L_378 L_375 L_372 L_369
	._LINE	0, 689
	LDUH	@(FP,-4),R4	; _foundIndex
	EXTSH	R4
L_380:				// Pred: L_379
	._LINE	0, 689
	._CONFIG	E
	._LINE	0, 690
	LDM	(R8)
	LEAVE
	LD	@SP+,RP
	ADDSP	#8
	RET
	._CONFIG	E
	.global	_DUXFXSendData
	._SYMBOL	"DUXFXSendData", F, 0x80000002, E, "_DUXFXSendData", F
	._FPARAM	S, 4, F
	._SYMBOL	"slotID", P, 0x80000004, A, 10
	._SYMBOL	"channel", P, 0x80000002, A, 15
	._SYMBOL	"data", P, 0x80000002, A, 16
	._POINTER	1
	._TYPED	C
	._SYMBOL	"payload", P, 0x80000002, A, 23
	._FPARAM	E
	._CONFIG	S, F, 1
	._LINE	0, 703
_DUXFXSendData:
L_383:
	STM	(R4,R5,R6,R7)
	ST	RP,@-SP
	ENTER	#12
	STM	(R8)
;-------end_of_no_optimize_block
	._FUNCTION	"fp", "fp", 48
	._CONFIG	S, B
	._SYMBOL	"myBufferIndex", V, 0x80000003, A, -4
	._SYMBOL	"len", V, 0x80000002, A, -2
	._SYMBOL	"i", V, 0x80000002, A, -1
	._SYMBOL	"marshallData", V, 0x80000008, A, -8
L_384:				// Pred: L_383
	._LINE	0, 704
	._LINE	0, 706
	LDI	#0,R0
	ST	R0,@(FP,-8)	; _marshallData
	._LINE	0, 710
	LDI:8	#-1,R0
	EXTSB	R0
	STH	R0,@(FP,-4)	; _myBufferIndex
	._LINE	0, 712
	LDUH	@(FP,10),R4	; _slotID
	LDUB	@(FP,15),R5	; _channel
	CALL20	_findBufferForStaticSenderSlot,R12
	STH	R4,@(FP,-4)	; _myBufferIndex
	._LINE	0, 713
	LDUH	@(FP,-4),R0	; _myBufferIndex
	EXTSH	R0
	CMP	#0,R0
	BGE20	L_387,R12
L_385:				// Pred: L_384
	._LINE	0, 713
	LDUB	@(FP,15),R0	; _channel
	CMP	#2,R0
	BNE20	L_387,R12
L_386:				// Pred: L_385
	._LINE	0, 713
	LDI	#0,R4
	BRA20	L_426,R12
L_387:				// Pred: L_385 L_384
	._LINE	0, 716
	LDUH	@(FP,-4),R0	; _myBufferIndex
	EXTSH	R0
	CMP	#0,R0
	BGE20	L_389,R12
L_388:				// Pred: L_387
	._LINE	0, 716
	._LINE	0, 717
	LDUH	@(FP,10),R4	; _slotID
	LDUB	@(FP,15),R5	; _channel
	CALL20	_findBufferForDynamicSenderSlot,R12
	STH	R4,@(FP,-4)	; _myBufferIndex
	._LINE	0, 718
L_389:				// Pred: L_388 L_387
	._LINE	0, 720
	LDUH	@(FP,-4),R0	; _myBufferIndex
	EXTSH	R0
	CMP	#0,R0
	BGE20	L_391,R12
L_390:				// Pred: L_389
	._LINE	0, 720
	LDI	#0,R4
	BRA20	L_426,R12
L_391:				// Pred: L_389
	._LINE	0, 723
	LDUB	@(FP,23),R1	; _payload
	MOV	R1,R0
	ASR	#1,R0
	LSR	#30,R0
	ADDN	R1,R0
	ASR	#2,R0
	STB	R0,@(FP,-2)	; _len
	._LINE	0, 724
L_392:				// Pred: L_391
	._LINE	0, 724
	LDI	#0,R8
	STB	R8,@(FP,-1)	; _i
	LDUB	@(FP,-1),R0	; _i
	LDUB	@(FP,-2),R1	; _len
	CMP	R1,R0
	BGE20	L_396,R12
L_393:				// Pred: L_392
	._LINE	0, 724
L_394:				// Pred: L_395 L_393
	._LINE	0, 724
	._LINE	0, 725
	LDI	#0,R0
	ST	R0,@(FP,-8)	; _marshallData
	._LINE	0, 726
	LDUB	@(FP,-1),R13	; _i
	LSL	#2,R13
	ADDN	#3,R13
	LD	@(FP,16),R0	; _data
	LDUB	@(R0,R13),R1
	LSL	#24,R1
	LDUB	@(FP,-1),R13	; _i
	LSL	#2,R13
	ADDN	#2,R13
	LD	@(FP,16),R0	; _data
	LDUB	@(R0,R13),R0
	LSL	#16,R0
	OR	R0,R1
	LDUB	@(FP,-1),R13	; _i
	LSL	#2,R13
	ADDN	#1,R13
	LD	@(FP,16),R0	; _data
	LDUB	@(R0,R13),R0
	LSL	#8,R0
	OR	R0,R1
	LDUB	@(FP,-1),R13	; _i
	LSL	#2,R13
	LD	@(FP,16),R0	; _data
	LDUB	@(R0,R13),R0
	OR	R0,R1
	ST	R1,@(FP,-8)	; _marshallData
	._LINE	0, 727
	LDUB	@(FP,-1),R4	; _i
	LD	@(FP,-8),R5	; _marshallData
	CALL20	_DUXFXTransmitData,R12
	._LINE	0, 728
	LDUB	@(FP,-1),R0	; _i
	ADDN	#1,R0
	STB	R0,@(FP,-1)	; _i
L_395:				// Pred: L_394
	._LINE	0, 724
	LDUB	@(FP,-1),R0	; _i
	LDUB	@(FP,-2),R1	; _len
	CMP	R1,R0
	BLT20	L_394,R12
L_396:				// Pred: L_395 L_392
	._LINE	0, 730
	LDUB	@(FP,23),R1	; _payload
	MOV	R1,R0
	ASR	#1,R0
	LSR	#30,R0
	ADDN	R1,R0
	LDI:8	#-4,R2
	EXTSB	R2
	AND	R2,R0
	SUB	R0,R1
	BEQ20	L_403,R12
L_397:				// Pred: L_396
	._LINE	0, 730
	._LINE	0, 731
L_398:				// Pred: L_397
	._LINE	0, 731
	STB	R8,@(FP,-1)	; _i
	LDUB	@(FP,-1),R4	; _i
	LDUB	@(FP,23),R12	; _payload
	MOV	R12,R0
	ASR	#1,R0
	LSR	#30,R0
	ADDN	R12,R0
	AND	R2,R0
	SUBN	R0,R12
	CMP	R12,R4
	BGE20	L_402,R12
L_399:				// Pred: L_398
	._LINE	0, 731
	LDI:8	#-4,R8
	EXTSB	R8
L_400:				// Pred: L_401 L_399
	._LINE	0, 731
	._LINE	0, 732
	LDI	#0,R0
	ST	R0,@(FP,-8)	; _marshallData
	._LINE	0, 733
	LDUB	@(FP,-2),R13	; _len
	LSL	#2,R13
	LDUB	@(FP,-1),R0	; _i
	ADDN	R0,R13
	LD	@(FP,16),R0	; _data
	LDUB	@(R0,R13),R5
	LDUB	@(FP,-1),R0	; _i
	LSL	#3,R0
	LSL	R0,R5
	LD	@(FP,-8),R0	; _marshallData
	OR	R5,R0
	ST	R0,@(FP,-8)	; _marshallData
	._LINE	0, 734
	CALL20	_DUXWatchDogReset,R12
	._LINE	0, 735
	LDUB	@(FP,-1),R0	; _i
	ADDN	#1,R0
	STB	R0,@(FP,-1)	; _i
L_401:				// Pred: L_400
	._LINE	0, 731
	LDUB	@(FP,-1),R3	; _i
	LDUB	@(FP,23),R5	; _payload
	MOV	R5,R0
	ASR	#1,R0
	LSR	#30,R0
	ADDN	R5,R0
	AND	R8,R0
	SUBN	R0,R5
	CMP	R5,R3
	BLT20	L_400,R12
L_402:				// Pred: L_401 L_398
	._LINE	0, 736
	LDUB	@(FP,-2),R4	; _len
	LSL	#2,R4
	LD	@(FP,-8),R5	; _marshallData
	CALL20	_DUXFXTransmitData,R12
	._LINE	0, 737
L_403:				// Pred: L_402 L_396
	._LINE	0, 739
	LDUH	@(FP,-4),R4	; _myBufferIndex
	EXTSH	R4
	CALL20	_DUXFXTransmitControl,R12
	._LINE	0, 741
	LDI	#1,R4
L_426:				// Pred: L_403 L_390 L_386
	._LINE	0, 741
L_404:				// Pred: L_426
	._LINE	0, 741
	._CONFIG	E
	._LINE	0, 742
	LDM	(R8)
	LEAVE
	LD	@SP+,RP
	ADDSP	#16
	RET
	._CONFIG	E
	.global	_DUXFXReceiveData
	._SYMBOL	"DUXFXReceiveData", F, 0x80000002, E, "_DUXFXReceiveData", F
	._FPARAM	S, 4, F
	._SYMBOL	"data", P, 0x80000002, A, 8
	._POINTER	1
	._SYMBOL	"payload", P, 0x80000002, A, 15
	._SYMBOL	"frameid", P, 0x80000004, A, 16
	._POINTER	1
	._SYMBOL	"channel", P, 0x80000002, A, 20
	._POINTER	1
	._FPARAM	E
	._CONFIG	S, F, 1
	._LINE	0, 745
_DUXFXReceiveData:
L_406:
	STM	(R4,R5,R6,R7)
	ST	RP,@-SP
	ENTER	#12
	STM	(R8,R9)
;-------end_of_no_optimize_block
	._FUNCTION	"fp", "fp", 48
	._CONFIG	S, B
	._SYMBOL	"i", V, 0x80000002, A, -1
	._SYMBOL	"regContent", V, 0x80000008, A, -8
L_407:				// Pred: L_406
	._LINE	0, 746
	._LINE	0, 746
	LDI	#0,R9
	STB	R9,@(FP,-1)	; _i
	._LINE	0, 747
	LDI	#0,R0
	ST	R0,@(FP,-8)	; _regContent
	._LINE	0, 752
L_408:				// Pred: L_407
	._LINE	0, 752
	STB	R9,@(FP,-1)	; _i
	LDUB	@(FP,-1),R0	; _i
	LDUB	@(FP,15),R1	; _payload
	CMP	R1,R0
	BGE20	L_412,R12
L_409:				// Pred: L_408
	._LINE	0, 752
	LDI:8	#-4,R8
	EXTSB	R8
L_410:				// Pred: L_411 L_409
	._LINE	0, 752
	._LINE	0, 753
	LDI	#0,R0
	ST	R0,@(FP,-8)	; _regContent
	._LINE	0, 754
	LDUB	@(FP,-1),R5	; _i
	MOV	R5,R4
	ASR	#1,R4
	LSR	#30,R4
	ADDN	R5,R4
	ASR	#2,R4
	CALL20	_DUXFXAccessReceivedData,R12
	ST	R4,@(FP,-8)	; _regContent
	._LINE	0, 755
	LDUB	@(FP,-1),R13	; _i
	LDUB	@(FP,-1),R1	; _i
	MOV	R1,R0
	ASR	#1,R0
	LSR	#30,R0
	ADDN	R1,R0
	AND	R8,R0
	SUBN	R0,R1
	LSL	#3,R1
	LD	@(FP,-8),R0	; _regContent
	LSR	R1,R0
	LD	@(FP,8),R1	; _data
	STB	R0,@(R1,R13)
	._LINE	0, 756
	LDUB	@(FP,-1),R0	; _i
	ADDN	#1,R0
	STB	R0,@(FP,-1)	; _i
L_411:				// Pred: L_410
	._LINE	0, 752
	LDUB	@(FP,-1),R0	; _i
	LDUB	@(FP,15),R1	; _payload
	CMP	R1,R0
	BLT20	L_410,R12
L_412:				// Pred: L_411 L_408
	._LINE	0, 759
	LDI:20	#_IO_FxR_OBF,R2
	LD	@R2,R0	; _IO_FxR_OBF
	LSL	#21,R0
	LSR	#21,R0
	LD	@(FP,16),R1	; _frameid
	STH	R0,@R1
	._LINE	0, 760
	BTSTL	#0x1,@R2
	BEQ20	L_415,R12
L_413:				// Pred: L_412
	._LINE	0, 760
	BTSTL	#0x2,@R2
	BEQ20	L_415,R12
L_414:				// Pred: L_413
	._LINE	0, 760
	LD	@(FP,20),R0	; _channel
	LDI	#2,R1
	STB	R1,@R0
	BRA20	L_422,R12
L_415:				// Pred: L_413 L_412
	._LINE	0, 761
	BTSTL	#0x1,@R2
	BEQ20	L_417,R12
L_416:				// Pred: L_415
	._LINE	0, 761
	LD	@(FP,20),R0	; _channel
	STB	R9,@R0
	BRA20	L_422,R12
L_417:				// Pred: L_415
	._LINE	0, 762
	BTSTL	#0x2,@R2
	BEQ20	L_422,R12
L_418:				// Pred: L_417
	._LINE	0, 762
	LD	@(FP,20),R0	; _channel
	LDI	#1,R1
;-------volatile_access
	STB	R1,@R0
L_422:				// Pred: L_418 L_417 L_416 L_414
	._LINE	0, 765
	LDI	#1,R4
	._CONFIG	E
	._LINE	0, 767
	LDM	(R8,R9)
	LEAVE
	LD	@SP+,RP
	ADDSP	#16
	RET
	._CONFIG	E
	.global	_DUXFXGetGlobalTime
	._SYMBOL	"DUXFXGetGlobalTime", F, 0x8000000f, E, "_DUXFXGetGlobalTime", F
	._FPARAM	S, 2, F
	._SYMBOL	"macroTick", P, 0x80000004, A, 8
	._POINTER	1
	._SYMBOL	"cycle", P, 0x80000002, A, 12
	._POINTER	1
	._FPARAM	E
	._CONFIG	S, F, 1
	._LINE	0, 769
_DUXFXGetGlobalTime:
L_231:
	STM	(R4,R5)
	ST	RP,@-SP
	ENTER	#4
;-------end_of_no_optimize_block
	._FUNCTION	"fp", "fp", 40
	._CONFIG	S, B
L_232:				// Pred: L_231
	._LINE	0, 770
	LD	@(FP,8),R1	; _macroTick
	LDI	#0,R0
	STH	R0,@R1
	._LINE	0, 771
	LD	@(FP,12),R0	; _cycle
	LDI	#0,R1
	STB	R1,@R0
	._LINE	0, 772
	LDI:20	#_IO_FxR_GTU2+4,R0
	LD	@R0,R1	; _IO_FxR_GTU2
	LSL	#18,R1
	LSR	#18,R1
	LDI	#8191,R0
	AND	R0,R1
	LD	@(FP,8),R0	; _macroTick
	STH	R1,@R0
	._LINE	0, 773
	LDI:20	#_IO_FxR_GTU2+5,R0
	LDUB	@R0,R1	; _IO_FxR_GTU2
	LSL	#26,R1
	LSR	#26,R1
	LDI	#31,R0
	AND	R0,R1
	LD	@(FP,12),R0	; _cycle
	STB	R1,@R0
L_233:				// Pred: L_232
	._LINE	0, 773
	._CONFIG	E
	._LINE	0, 774
	LEAVE
	LD	@SP+,RP
	ADDSP	#8
	RET
	._CONFIG	E
	._SYMBOL	"_controllerName", V, 0x8000000e, S, "__controllerName"
	._POINTER	1
	._SYMBOL	"typ_FLX_msgobj", V, 0x17, E, "_typ_FLX_msgobj"
	._ARRAY	16, 1, 5, 0
	._TYPED	C
	.end	
