//					FR Family SOFTUNE cpcom V65L06
	.program	"main"
	.library	"lib911.lib"
	._LANGUAGE	C_FR20, N, U, F
	._FILE	"Y:\FlexRayDriver\Fujitsu_MB91F465X\flexray_startup\src\main.c", 0
	._FILE	"Y:\FlexRayDriver\Fujitsu_MB91F465X\flexray_startup\src\..\h_file\dux_version.h", 1
	._FILE	"Y:\FlexRayDriver\Fujitsu_MB91F465X\flexray_startup\src\..\h_file\..\IO_MB91465X_V01L03\_fr.h", 2
	._FILE	"Y:\FlexRayDriver\Fujitsu_MB91F465X\flexray_startup\src\..\h_file\dux_watchdog.h", 3
	._FILE	"Y:\FlexRayDriver\Fujitsu_MB91F465X\flexray_startup\src\..\h_file\dux_adc.h", 4
	._FILE	"Y:\FlexRayDriver\Fujitsu_MB91F465X\flexray_startup\src\..\h_file\dux_ports.h", 5
	._FILE	"Y:\FlexRayDriver\Fujitsu_MB91F465X\flexray_startup\src\..\h_file\dux_uart.h", 6
	._FILE	"Y:\FlexRayDriver\Fujitsu_MB91F465X\flexray_startup\src\..\h_file\dux_flexray.h", 7
	._FILE	"Y:\FlexRayDriver\Fujitsu_MB91F465X\flexray_startup\src\..\h_file\dux_platform_types.h", 8
	._FILE	"Y:\FlexRayDriver\Fujitsu_MB91F465X\flexray_startup\src\..\interrupt\dux_interrupts.h", 9
	._FILE	"Y:\FlexRayDriver\Fujitsu_MB91F465X\flexray_startup\src\..\IO_MB91465X_V01L03\mb91f465x.h", 10
	._FILE	"Y:\FlexRayDriver\Fujitsu_MB91F465X\flexray_startup\src\..\IO_MB91465X_V01L03\_fr.h", 11
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
	._SYMBOL	"uint32", Y, 0x80000008
	._SYMBOL	"uint8", Y, 0x80000002
	._SYMBOL	"uint16", Y, 0x80000004
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
	.section	CONST, CONST, align=4
	.align	4
LS_24:
	.ascii	"%d    \000"
	.datab.b	1,0
LS_23:
	.ascii	"%d    \000"
	.datab.b	1,0
LS_22:
	.ascii	"UNKNOWN        \000"
LS_21:
	.ascii	"CONFIG State   \000"
LS_20:
	.ascii	"MONITOR MODE   \000"
LS_19:
	.ascii	"HALT           \000"
LS_18:
	.ascii	"NORMAL PASSIVE \000"
LS_17:
	.ascii	"NORMAL ACTIVE  \000"
LS_16:
	.ascii	"READY          \000"
LS_15:
	.ascii	"DEFAULT CONFIG \000"
LS_14:
	.ascii	"DEFAULT CONFIG \000"
LS_13:
	.ascii	"--------------------------------------------------------\n\000"
	.datab.b	2,0
LS_12:
	.ascii	"Data:\n\000"
	.datab.b	1,0
LS_11:
	.ascii	"FrameID received:                     for Channel:      \n\000"
	.datab.b	2,0
LS_10:
	.ascii	"--------------------------------------------------------\n\000"
	.datab.b	2,0
LS_9:
	.ascii	"Global Time:                           Cycle:           \n\000"
	.datab.b	2,0
LS_8:
	.ascii	"Controller:                            License: DUXPL\n\000"
	.datab.b	1,0
LS_7:
	.ascii	"Node name:                             Driver: V%d.%d\n\000"
	.datab.b	1,0
LS_6:
	.ascii	"--------------------------------------------------------\n\000"
	.datab.b	2,0
LS_5:
	.ascii	" (c) DUXSolutions KK; use at own risk           |__/\n\000"
	.datab.b	2,0
LS_4:
	.ascii	" |___/ \\___/_\\_\\       |_| |_\\___/_\\_\\|_|_\\__,_|\\_, |\n\000"
	.datab.b	1,0
LS_3:
	.ascii	" | |) |  ||\\ \\ / |___| | _|| / -_) \\ /|   / _` | || |\n\000"
	.datab.b	1,0
LS_2:
	.ascii	" |   \\ _  ___ __  ___  | __| |_____ __| _ \\__ _ _  _\n\000"
	.datab.b	2,0
LS_1:
	.ascii	"  ___                   ___ _          ___\n\000"
LS_0:
	.ascii	"--------------------------------------------------------\n\000"
	.datab.b	2,0
	.global	_DUXPortsInit
	.global	_DUXPrintTerminal
	.global	_DUXClearTerminal
	.global	_DUXUartInit
	.global	_DUXFXGetGlobalTime
	.global	_DUXFXCCStatusCheck
	.global	_DUXFXStartup
	.global	_DUXFXInit
	.global	_DUXFXControllerName
	.global	_printReceivedFXBuffer
	.global	___wait_nop
	.global	___set_il
	.global	___EI
	.section	CODE, CODE, align=2
	.global	_main
	._SYMBOL	"main", F, 0x8000000f, E, "_main", F
	._FPARAM	S, 0, F
	._FPARAM	E
	._CONFIG	S, F, 1
	._LINE	0, 93
_main:
L_44:
	ST	RP,@-SP
	ENTER	#28
	STM	(R8,R9,R10,R11)
	ADDSP	#-8
;-------end_of_no_optimize_block
	._FUNCTION	"fp", "fp", 48
	._CONFIG	S, B
	._SYMBOL	"i", V, 0x80000008, A, -8
	LDI:20	#_IO_PDR29,R8
L_45:				// Pred: L_44
	._LINE	0, 94
	._LINE	0, 94
	LDI	#0,R0
	ST	R0,@(FP,-8)	; _i
	._LINE	0, 97
	CALL20	_DUXPortsInit,R12
	._LINE	0, 100
;-------volatile_access
	STILM	#31
;-------end_of_no_optimize_block
	._LINE	0, 101
;-------volatile_access
	ORCCR	#0x10
;-------end_of_no_optimize_block
	._LINE	0, 104
	LDI:20	#_IO_LVD+3,R9
	BAND	#0xF7,@R9
	._LINE	0, 106
	CALL20	_DUXUartInit,R12
	._LINE	0, 109
	CALL20	_DUXClearTerminal,R12
	._LINE	0, 110
	LDI:20	#LS_0,R4
	LDI	#0,R5
	LDI	#1,R6
	LDI	#1,R7
	CALL20	_DUXPrintTerminal,R12
	._LINE	0, 111
	LDI:20	#LS_1,R4
	LDI	#0,R5
	LDI	#2,R6
	LDI	#1,R7
	CALL20	_DUXPrintTerminal,R12
	._LINE	0, 112
	LDI:20	#LS_2,R4
	LDI	#0,R5
	LDI	#3,R6
	LDI	#1,R7
	CALL20	_DUXPrintTerminal,R12
	._LINE	0, 113
	LDI:20	#LS_3,R4
	LDI	#0,R5
	LDI	#4,R6
	LDI	#1,R7
	CALL20	_DUXPrintTerminal,R12
	._LINE	0, 114
	LDI:20	#LS_4,R4
	LDI	#0,R5
	LDI	#5,R6
	LDI	#1,R7
	CALL20	_DUXPrintTerminal,R12
	._LINE	0, 115
	LDI:20	#LS_5,R4
	LDI	#0,R5
	LDI	#6,R6
	LDI	#1,R7
	CALL20	_DUXPrintTerminal,R12
	._LINE	0, 116
	LDI:20	#LS_6,R4
	LDI	#0,R5
	LDI	#7,R6
	LDI	#1,R7
	CALL20	_DUXPrintTerminal,R12
	._LINE	0, 117
	LDI:20	#LS_7,R4
	LDI	#0,R0
	ST	R0,@SP
	LDI	#96,R0
	ST	R0,@(SP,4)
	LDI	#0,R5
	LDI	#8,R6
	LDI	#1,R7
	CALL20	_DUXPrintTerminal,R12
	._LINE	0, 118
	LDI:20	#LS_8,R4
	LDI	#0,R5
	LDI	#9,R6
	LDI	#1,R7
	CALL20	_DUXPrintTerminal,R12
	._LINE	0, 119
	LDI:20	#LS_9,R4
	LDI	#0,R5
	LDI	#10,R6
	LDI	#1,R7
	CALL20	_DUXPrintTerminal,R12
	._LINE	0, 120
	LDI:20	#LS_10,R4
	LDI	#0,R5
	LDI	#11,R6
	LDI	#1,R7
	CALL20	_DUXPrintTerminal,R12
	._LINE	0, 121
	LDI:20	#LS_11,R4
	LDI	#0,R5
	LDI	#12,R6
	LDI	#1,R7
	CALL20	_DUXPrintTerminal,R12
	._LINE	0, 122
	LDI:20	#LS_12,R4
	LDI	#0,R5
	LDI	#13,R6
	LDI	#1,R7
	CALL20	_DUXPrintTerminal,R12
	._LINE	0, 123
	LDI:20	#LS_13,R4
	LDI	#0,R5
	LDI	#14,R6
	LDI	#1,R7
	CALL20	_DUXPrintTerminal,R12
	._LINE	0, 124
	CALL20	_DUXFXControllerName,R12
	LDI	#1,R5
	LDI	#8,R6
	LDI	#13,R7
	CALL20	_DUXPrintTerminal,R12
	._LINE	0, 125
	LDI:20	#LS_14,R4
	LDI	#1,R5
	LDI	#9,R6
	LDI	#13,R7
	CALL20	_DUXPrintTerminal,R12
	._LINE	0, 128
	BAND	#0xF7,@R9
	._LINE	0, 137
	LDI:20	#_IO_PDR17,R0
	BAND	#0xFE,@R0
	._LINE	0, 137
	BAND	#0xFD,@R0
	._LINE	0, 137
	BOR	#0x4,@R0
	._LINE	0, 137
	BAND	#0xF7,@R0
	._LINE	0, 137
	BAND	#0xEF,@R0
	._LINE	0, 137
	BOR	#0x20,@R0
	._LINE	0, 137
	BAND	#0xBF,@R0
	._LINE	0, 137
	BAND	#0x7F,@R0
	._LINE	0, 148
	BAND	#0xF7,@R9
	._LINE	0, 149
	MOV	R8,R11
	BOR	#0x1,@R11
	._LINE	0, 149
	BAND	#0xFD,@R11
	._LINE	0, 149
	BAND	#0xFB,@R11
	._LINE	0, 149
	BOR	#0x8,@R11
	._LINE	0, 149
	BOR	#0x10,@R11
	._LINE	0, 149
	BOR	#0x20,@R11
	._LINE	0, 149
	BOR	#0x40,@R11
	._LINE	0, 149
	BAND	#0x7F,@R11
	._LINE	0, 150
	CALL20	_DUXFXInit,R12
	._LINE	0, 152
	BAND	#0xF7,@R9
	._LINE	0, 153
	BAND	#0xFE,@R11
	._LINE	0, 153
	BAND	#0xFD,@R11
	._LINE	0, 153
	BOR	#0x4,@R11
	._LINE	0, 153
	BAND	#0xF7,@R11
	._LINE	0, 153
	BAND	#0xEF,@R11
	._LINE	0, 153
	BOR	#0x20,@R11
	._LINE	0, 153
	BAND	#0xBF,@R11
	._LINE	0, 153
	BAND	#0x7F,@R11
	._LINE	0, 155
	BAND	#0xF7,@R9
	._LINE	0, 156
	BAND	#0xFE,@R11
	._LINE	0, 156
	BAND	#0xFD,@R11
	._LINE	0, 156
	BAND	#0xFB,@R11
	._LINE	0, 156
	BAND	#0xF7,@R11
	._LINE	0, 156
	BOR	#0x10,@R11
	._LINE	0, 156
	BOR	#0x20,@R11
	._LINE	0, 156
	BAND	#0xBF,@R11
	._LINE	0, 156
	BAND	#0x7F,@R11
	._LINE	0, 158
	CALL20	_DUXFXStartup,R12
	._LINE	0, 159
	BAND	#0xF7,@R9
	._LINE	0, 161
;-------volatile_access
	NOP
;-------end_of_no_optimize_block
	._LINE	0, 165
L_46:				// Pred: L_45
	._LINE	0, 171
	LDI:20	#L_50070,R10
	LDI:20	#LS_21,R0
	ST	R0,@(FP,-24)
	MOV	FP,R0
	ADDN	#-4,R0
	ST	R0,@(FP,-12)
	MOV	FP,R0
	ADDN	#-1,R0
	ST	R0,@(FP,-16)
	LDI:20	#LS_23,R0
	ST	R0,@(FP,-20)
L_67:				// Pred: L_64 L_46
	._LINE	0, 171
L_68:				// Pred: L_62 L_67
	._LINE	0, 171
L_47:				// Pred: L_68
	._LINE	0, 165
	._LINE	0, 165
	._LINE	0, 166
;-------volatile_access
	NOP
;-------end_of_no_optimize_block
	._LINE	0, 167
;-------volatile_access
	NOP
;-------end_of_no_optimize_block
	._LINE	0, 168
;-------volatile_access
	NOP
;-------end_of_no_optimize_block
	._LINE	0, 169
	BAND	#0xF7,@R9
	._LINE	0, 171
	LD	@(FP,-8),R0	; _i
	CMP	#0,R0
	BNE20	L_58,R12
L_48:				// Pred: L_47
	._LINE	0, 171
	._SYMBOL	"cc_state", V, 0x80000002, A, -2
	._LINE	0, 172
	._LINE	0, 172
	LDI	#0,R0
	STB	R0,@(FP,-2)	; _cc_state
	._LINE	0, 173
	CALL20	_DUXFXCCStatusCheck,R12
	STB	R4,@(FP,-2)	; _cc_state
	._LINE	0, 175
	BAND	#0xF7,@R9
	._LINE	0, 176
	LDUB	@(FP,-2),R13	; _cc_state
	LDI	#16,R0
	CMP	R0,R13
	BNC20	L_56,R12
L_66:				// Pred: L_48
	._LINE	0, 176
	LSL	#2,R13
	LD	@(R10,R13),R0
;-------table_branch
	JMP	@R0
	.section	CONST, CONST, align=4
	.align	4
L_50070:
	.word	L_49
	.word	L_50
	.word	L_51
	.word	L_52
	.word	L_53
	.word	L_54
	.word	L_56
	.word	L_56
	.word	L_56
	.word	L_56
	.word	L_56
	.word	L_56
	.word	L_56
	.word	L_56
	.word	L_56
	.word	L_55
	.section	CODE, CODE, align=2
	.align	2
L_49:				// Pred: L_66
	._LINE	0, 178
	BAND	#0xFE,@R8
	._LINE	0, 178
	BAND	#0xFD,@R8
	._LINE	0, 178
	BAND	#0xFB,@R8
	._LINE	0, 178
	BAND	#0xF7,@R8
	._LINE	0, 178
	BAND	#0xEF,@R8
	._LINE	0, 178
	BAND	#0xDF,@R8
	._LINE	0, 178
	BOR	#0x40,@R8
	._LINE	0, 178
	BAND	#0x7F,@R8
	._LINE	0, 180
	LDI:20	#LS_15,R4
	LDI	#1,R5
	LDI	#9,R6
	LDI	#13,R7
	CALL20	_DUXPrintTerminal,R12
	BRA20	L_58,R12
L_50:				// Pred: L_66
	._LINE	0, 184
	BAND	#0xFE,@R8
	._LINE	0, 184
	BAND	#0xFD,@R8
	._LINE	0, 184
	BOR	#0x4,@R8
	._LINE	0, 184
	BAND	#0xF7,@R8
	._LINE	0, 184
	BAND	#0xEF,@R8
	._LINE	0, 184
	BOR	#0x20,@R8
	._LINE	0, 184
	BAND	#0xBF,@R8
	._LINE	0, 184
	BAND	#0x7F,@R8
	._LINE	0, 186
	LDI:20	#LS_16,R4
	LDI	#1,R5
	LDI	#9,R6
	LDI	#13,R7
	CALL20	_DUXPrintTerminal,R12
	BRA20	L_58,R12
L_51:				// Pred: L_66
	._LINE	0, 190
	BOR	#0x1,@R8
	._LINE	0, 190
	BAND	#0xFD,@R8
	._LINE	0, 190
	BAND	#0xFB,@R8
	._LINE	0, 190
	BOR	#0x8,@R8
	._LINE	0, 190
	BOR	#0x10,@R8
	._LINE	0, 190
	BAND	#0xDF,@R8
	._LINE	0, 190
	BAND	#0xBF,@R8
	._LINE	0, 190
	BAND	#0x7F,@R8
	._LINE	0, 192
	LDI:20	#LS_17,R4
	LDI	#1,R5
	LDI	#9,R6
	LDI	#13,R7
	CALL20	_DUXPrintTerminal,R12
	BRA20	L_58,R12
L_52:				// Pred: L_66
	._LINE	0, 196
	BAND	#0xFE,@R8
	._LINE	0, 196
	BOR	#0x2,@R8
	._LINE	0, 196
	BAND	#0xFB,@R8
	._LINE	0, 196
	BAND	#0xF7,@R8
	._LINE	0, 196
	BOR	#0x10,@R8
	._LINE	0, 196
	BAND	#0xDF,@R8
	._LINE	0, 196
	BAND	#0xBF,@R8
	._LINE	0, 196
	BAND	#0x7F,@R8
	._LINE	0, 198
	LDI:20	#LS_18,R4
	LDI	#1,R5
	LDI	#9,R6
	LDI	#13,R7
	CALL20	_DUXPrintTerminal,R12
	BRA20	L_58,R12
L_53:				// Pred: L_66
	._LINE	0, 202
	BAND	#0xFE,@R8
	._LINE	0, 202
	BOR	#0x2,@R8
	._LINE	0, 202
	BAND	#0xFB,@R8
	._LINE	0, 202
	BAND	#0xF7,@R8
	._LINE	0, 202
	BAND	#0xEF,@R8
	._LINE	0, 202
	BAND	#0xDF,@R8
	._LINE	0, 202
	BAND	#0xBF,@R8
	._LINE	0, 202
	BAND	#0x7F,@R8
	._LINE	0, 204
	LDI:20	#LS_19,R4
	LDI	#1,R5
	LDI	#9,R6
	LDI	#13,R7
	CALL20	_DUXPrintTerminal,R12
	BRA20	L_58,R12
L_54:				// Pred: L_66
	._LINE	0, 208
	BAND	#0xFE,@R8
	._LINE	0, 208
	BAND	#0xFD,@R8
	._LINE	0, 208
	BAND	#0xFB,@R8
	._LINE	0, 208
	BOR	#0x8,@R8
	._LINE	0, 208
	BOR	#0x10,@R8
	._LINE	0, 208
	BAND	#0xDF,@R8
	._LINE	0, 208
	BOR	#0x40,@R8
	._LINE	0, 208
	BAND	#0x7F,@R8
	._LINE	0, 210
	LDI:20	#LS_20,R4
	LDI	#1,R5
	LDI	#9,R6
	LDI	#13,R7
	CALL20	_DUXPrintTerminal,R12
	BRA20	L_58,R12
L_55:				// Pred: L_66
	._LINE	0, 214
	BOR	#0x1,@R11
	._LINE	0, 214
	BAND	#0xFD,@R11
	._LINE	0, 214
	BAND	#0xFB,@R11
	._LINE	0, 214
	BOR	#0x8,@R11
	._LINE	0, 214
	BOR	#0x10,@R11
	._LINE	0, 214
	BOR	#0x20,@R11
	._LINE	0, 214
	BOR	#0x40,@R11
	._LINE	0, 214
	BAND	#0x7F,@R11
	._LINE	0, 216
	LD	@(FP,-24),R4
	LDI	#1,R5
	LDI	#9,R6
	LDI	#13,R7
	CALL20	_DUXPrintTerminal,R12
	BRA20	L_58,R12
L_56:				// Pred: L_66 L_48
	._LINE	0, 220
	BAND	#0xFE,@R8
	._LINE	0, 220
	BAND	#0xFD,@R8
	._LINE	0, 220
	BAND	#0xFB,@R8
	._LINE	0, 220
	BOR	#0x8,@R8
	._LINE	0, 220
	BOR	#0x10,@R8
	._LINE	0, 220
	BAND	#0xDF,@R8
	._LINE	0, 220
	BAND	#0xBF,@R8
	._LINE	0, 220
	BAND	#0x7F,@R8
	._LINE	0, 222
	LDI:20	#LS_22,R4
	LDI	#1,R5
	LDI	#9,R6
	LDI	#13,R7
	CALL20	_DUXPrintTerminal,R12
	._LINE	0, 225
L_58:				// Pred: L_56 L_55 L_54 L_53
				//	 L_52 L_51 L_50 L_49
				//	 L_47
	._LINE	0, 229
	LD	@(FP,-8),R0	; _i
	LDI	#10000,R1
	CMP	R1,R0
	BNE20	L_60,R12
L_59:				// Pred: L_58
	._LINE	0, 229
	._SYMBOL	"globalTimeMacroTick", V, 0x80000004, A, -4
	._SYMBOL	"cycleCounter", V, 0x80000002, A, -1
	._LINE	0, 230
	._LINE	0, 230
	LDI	#0,R0
	STH	R0,@(FP,-4)	; _globalTimeMacroTick
	._LINE	0, 231
	LDI	#0,R0
	STB	R0,@(FP,-1)	; _cycleCounter
	._LINE	0, 233
	BAND	#0xF7,@R9
	._LINE	0, 234
	LD	@(FP,-12),R4
	LD	@(FP,-16),R5
	CALL20	_DUXFXGetGlobalTime,R12
	._LINE	0, 235
	BAND	#0xF7,@R9
	._LINE	0, 236
	LDUH	@(FP,-4),R0	; _globalTimeMacroTick
	ST	R0,@SP
	LD	@(FP,-20),R4
	LDI	#1,R5
	LDI	#10,R6
	LDI	#14,R7
	CALL20	_DUXPrintTerminal,R12
	._LINE	0, 237
	LDI:20	#LS_24,R4
	LDUB	@(FP,-1),R0	; _cycleCounter
	ST	R0,@SP
	LDI	#1,R5
	LDI	#10,R6
	LDI	#52,R7
	CALL20	_DUXPrintTerminal,R12
	._LINE	0, 238
L_60:				// Pred: L_59 L_58
	._LINE	0, 243
	LD	@(FP,-8),R0	; _i
	LDI	#20000,R1
	CMP	R1,R0
	BNE20	L_62,R12
L_61:				// Pred: L_60
	._LINE	0, 243
	._LINE	0, 244
	LDI:20	#_IO_LVD+3,R0
	BAND	#0xF7,@R0
	._LINE	0, 245
	CALL20	_printReceivedFXBuffer,R12
	._LINE	0, 246
L_62:				// Pred: L_61 L_60
	._LINE	0, 249
	LD	@(FP,-8),R0	; _i
	ADDN	#1,R0
	ST	R0,@(FP,-8)	; _i
	._LINE	0, 250
	LD	@(FP,-8),R0	; _i
	LDI	#40000,R1
	CMP	R1,R0
	BLS20	L_68,R12
L_63:				// Pred: L_62
	._LINE	0, 250
	LDI	#0,R0
	ST	R0,@(FP,-8)	; _i
L_64:				// Pred: L_63
	._LINE	0, 252
	BRA20	L_67,R12
L_65:
	._LINE	0, 252
	._CONFIG	E
	._LINE	0, 252
	._CONFIG	E
	.end	
