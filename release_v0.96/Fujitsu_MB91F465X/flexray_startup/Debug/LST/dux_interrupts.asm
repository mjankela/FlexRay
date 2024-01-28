//					FR Family SOFTUNE cpcom V65L06
	.program	"dux_interrupts"
	.library	"lib911.lib"
	._LANGUAGE	C_FR20, N, U, F
	._FILE	"Y:\FlexRayDriver\Fujitsu_MB91F465X\flexray_startup\interrupt\dux_interrupts.c", 0
	._FILE	"C:\Softune6\LIB\911\INCLUDE\stddef.h", 1
	._FILE	"C:\Softune6\LIB\911\INCLUDE\string.h", 2
	._FILE	"Y:\FlexRayDriver\Fujitsu_MB91F465X\flexray_startup\interrupt\..\h_file\..\IO_MB91465X_V01L03\_fr.h", 3
	._FILE	"Y:\FlexRayDriver\Fujitsu_MB91F465X\flexray_startup\interrupt\..\h_file\dux_watchdog.h", 4
	._FILE	"Y:\FlexRayDriver\Fujitsu_MB91F465X\flexray_startup\interrupt\..\h_file\dux_uart.h", 5
	._FILE	"Y:\FlexRayDriver\Fujitsu_MB91F465X\flexray_startup\interrupt\..\h_file\dux_flexray.h", 6
	._FILE	"Y:\FlexRayDriver\Fujitsu_MB91F465X\flexray_startup\interrupt\..\h_file\..\h_file\dux_platform_types.h", 7
	._FILE	"Y:\FlexRayDriver\Fujitsu_MB91F465X\flexray_startup\interrupt\..\h_file\flx_regist_defines.h", 8
	._FILE	"Y:\FlexRayDriver\Fujitsu_MB91F465X\flexray_startup\interrupt\..\interrupt\dux_interrupts.h", 9
	._FILE	"Y:\FlexRayDriver\Fujitsu_MB91F465X\flexray_startup\interrupt\..\IO_MB91465X_V01L03\mb91f465x.h", 10
	._FILE	"Y:\FlexRayDriver\Fujitsu_MB91F465X\flexray_startup\interrupt\..\IO_MB91465X_V01L03\_fr.h", 11
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
	._SYMBOL	"uint16", Y, 0x80000004
	._SYMBOL	"uint8", Y, 0x80000002
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
	.section	DATA, DATA, align=4
	.align	1
__receivedFrameBuffer:
	.res.b	8
	.section	INIT, DATA, align=4
	.align	2
__receivedFrameID:
	.half	0
	.align	1
__receivedChannel:
	.byte	0
	.section	CONST, CONST, align=4
	.align	4
LS_7:
	.ascii	"%c%c%c%c%c%c\000"
	.datab.b	3,0
LS_6:
	.ascii	"%d\000"
	.datab.b	1,0
LS_5:
	.ascii	"                              \000"
	.datab.b	1,0
LS_4:
	.ascii	"   \000"
LS_3:
	.ascii	"A&B\000"
LS_2:
	.ascii	"B  \000"
LS_1:
	.ascii	"A  \000"
LS_0:
	.ascii	" %d       \000"
	.datab.b	1,0
	.global	_DUXPrintTerminal
	.global	_DUXFXReceiveData
	.global	___wait_nop
	.section	CODE, CODE, align=2
	.global	_printReceivedFXBuffer
	._SYMBOL	"printReceivedFXBuffer", F, 0x8000000f, E, "_printReceivedFXBuffer", F
	._FPARAM	S, 0, F
	._FPARAM	E
	._CONFIG	S, F, 1
	._LINE	0, 50
_printReceivedFXBuffer:
L_20:
	ST	RP,@-SP
	ENTER	#4
	STM	(R8)
	ADDSP	#-24
;-------end_of_no_optimize_block
	._FUNCTION	"fp", "fp", 40
	._CONFIG	S, B
L_21:				// Pred: L_20
	._LINE	0, 52
	LDI:20	#_IO_LVD+3,R8
	BAND	#0xF7,@R8
	._LINE	0, 54
	LDI:20	#LS_0,R4
	LDI:20	#__receivedFrameID,R0
	LDUH	@R0,R0	; __receivedFrameID
	ST	R0,@SP
	LDI	#2,R5
	LDI	#12,R6
	LDI	#18,R7
	CALL20	_DUXPrintTerminal,R12
	._LINE	0, 56
	BAND	#0xF7,@R8
	._LINE	0, 58
	LDI:20	#__receivedChannel,R13
	LDUB	@R13,R0	; __receivedChannel
	CMP	#0,R0
	BNE20	L_23,R12
L_22:				// Pred: L_21
	._LINE	0, 59
	LDI:20	#LS_1,R4
	LDI	#2,R5
	LDI	#12,R6
	LDI	#52,R7
	CALL20	_DUXPrintTerminal,R12
	BRA20	L_24,R12
L_23:				// Pred: L_21
	._LINE	0, 60
	LDUB	@R13,R0	; __receivedChannel
	CMP	#1,R0
	BNE20	L_26,R12
L_25:				// Pred: L_23
	._LINE	0, 61
	LDI:20	#LS_2,R4
	LDI	#2,R5
	LDI	#12,R6
	LDI	#52,R7
	CALL20	_DUXPrintTerminal,R12
	BRA20	L_24,R12
L_26:				// Pred: L_23
	._LINE	0, 62
	LDUB	@R13,R0	; __receivedChannel
	CMP	#2,R0
	BNE20	L_29,R12
L_28:				// Pred: L_26
	._LINE	0, 63
	LDI:20	#LS_3,R4
	LDI	#2,R5
	LDI	#12,R6
	LDI	#52,R7
	CALL20	_DUXPrintTerminal,R12
	BRA20	L_24,R12
L_29:				// Pred: L_26
	._LINE	0, 65
	LDI:20	#LS_4,R4
	LDI	#2,R5
	LDI	#12,R6
	LDI	#52,R7
	CALL20	_DUXPrintTerminal,R12
L_24:				// Pred: L_29 L_28 L_25 L_22
	._LINE	0, 67
	BAND	#0xF7,@R8
	._LINE	0, 68
	LDI:20	#LS_5,R4
	LDI	#2,R5
	LDI	#13,R6
	LDI	#7,R7
	CALL20	_DUXPrintTerminal,R12
	._LINE	0, 69
	LDI:20	#LS_6,R4
	LDI:20	#__receivedFrameBuffer,R0
	LDUB	@R0,R0	; __receivedFrameBuffer
	ST	R0,@SP
	LDI	#2,R5
	LDI	#13,R6
	LDI	#7,R7
	CALL20	_DUXPrintTerminal,R12
	._LINE	0, 70
	LDI:20	#LS_7,R4
	LDI:20	#__receivedFrameBuffer+2,R0
	LDUB	@R0,R1	; __receivedFrameBuffer
	LDI:20	#__receivedFrameBuffer+3,R0
	LDUB	@R0,R2	; __receivedFrameBuffer
	LDI:20	#__receivedFrameBuffer+4,R0
	LDUB	@R0,R3	; __receivedFrameBuffer
	LDI:20	#__receivedFrameBuffer+5,R0
	LDUB	@R0,R5	; __receivedFrameBuffer
	LDI:20	#__receivedFrameBuffer+6,R0
	LDUB	@R0,R6	; __receivedFrameBuffer
	LDI:20	#__receivedFrameBuffer+7,R0
	LDUB	@R0,R7	; __receivedFrameBuffer
	ST	R1,@SP
	ST	R2,@(SP,4)
	ST	R3,@(SP,8)
	ST	R5,@(SP,12)
	ST	R6,@(SP,16)
	ST	R7,@(SP,20)
	LDI	#2,R5
	LDI	#13,R6
	LDI	#12,R7
	CALL20	_DUXPrintTerminal,R12
	._LINE	0, 76
	BAND	#0xF7,@R8
L_31:				// Pred: L_24
	._LINE	0, 76
	._CONFIG	E
	._LINE	0, 78
	ADDSP	#24
	LDM	(R8)
	LEAVE
	LD	@SP+,RP
	RET
	._CONFIG	E
	.global	_ADC_int
	._SYMBOL	"ADC_int", F, 0x8000000f, E, "_ADC_int", I
	._FPARAM	S, 0, F
	._FPARAM	E
	._CONFIG	S, F, 1
	._LINE	0, 83
_ADC_int:
L_32:
	STM	(R0,R1,R2,R3,R12,R13)
	ST	RP,@-SP
	ENTER	#8
;-------end_of_no_optimize_block
	._FUNCTION	"fp", "fp", 24
	._CONFIG	S, B
	._SYMBOL	"ad_data9", V, 0x80000004, A, -4
	._SYMBOL	"led", V, 0x80000002, A, -2
	._SYMBOL	"ad_ch", V, 0x80000002, A, -1
L_33:				// Pred: L_32
	._LINE	0, 84
	._LINE	0, 88
;-------volatile_access
	NOP
;-------end_of_no_optimize_block
	._LINE	0, 89
;-------volatile_access
	NOP
;-------end_of_no_optimize_block
	._LINE	0, 90
;-------volatile_access
	NOP
;-------end_of_no_optimize_block
	._LINE	0, 91
;-------volatile_access
	NOP
;-------end_of_no_optimize_block
	._LINE	0, 92
;-------volatile_access
	NOP
;-------end_of_no_optimize_block
	._LINE	0, 94
	LDI:20	#_IO_LVD+3,R2
	BAND	#0xF7,@R2
	._LINE	0, 95
	LDI:20	#_IO_AD+5,R0
	LDUB	@R0,R1	; _IO_AD
	LDI	#31,R0
	AND	R0,R1
	STB	R1,@(FP,-1)	; _ad_ch
	._LINE	0, 97
	LDUB	@(FP,-1),R0	; _ad_ch
	CMP	#9,R0
	BNE20	L_35,R12
L_34:				// Pred: L_33
	._LINE	0, 97
	._LINE	0, 98
;-------volatile_access
	NOP
;-------end_of_no_optimize_block
	._LINE	0, 99
;-------volatile_access
	NOP
;-------end_of_no_optimize_block
	._LINE	0, 100
	LDI	#0,R0
	STH	R0,@(FP,-4)	; _ad_data9
	._LINE	0, 101
	LDI:20	#_IO_AD+6,R0
	LDUH	@R0,R0	; _IO_AD
	STH	R0,@(FP,-4)	; _ad_data9
	._LINE	0, 102
	LDUH	@(FP,-4),R0	; _ad_data9
	STB	R0,@(FP,-2)	; _led
	._LINE	0, 103
	LDUB	@(FP,-2),R13	; _led
	DMOVB	R13,@_IO_PDR14	; _IO_PDR14
	._LINE	0, 104
	BAND	#0xF7,@R2
	._LINE	0, 105
	BRA20	L_36,R12
L_35:				// Pred: L_33
	._LINE	0, 106
	LDUB	@(FP,-1),R0	; _ad_ch
	CMP	#10,R0
	BNE20	L_38,R12
L_37:				// Pred: L_35
	._LINE	0, 106
	._LINE	0, 107
;-------volatile_access
	NOP
;-------end_of_no_optimize_block
	._LINE	0, 108
;-------volatile_access
	NOP
;-------end_of_no_optimize_block
	._LINE	0, 116
	BRA20	L_36,R12
L_38:				// Pred: L_35
	._LINE	0, 117
	._LINE	0, 118
	BAND	#0xF7,@R2
	._LINE	0, 119
L_36:				// Pred: L_38 L_37 L_34
	._LINE	0, 121
	LDI:20	#_IO_AD+4,R3
	BAND	#0xBF,@R3
	._LINE	0, 122
	BAND	#0xF7,@R2
	._LINE	0, 123
;-------volatile_access
	NOP
;-------end_of_no_optimize_block
	._LINE	0, 124
	BOR	#0x2,@R3
L_40:				// Pred: L_36
	._LINE	0, 124
	._CONFIG	E
	._LINE	0, 126
	LEAVE
	LD	@SP+,RP
	LDM	(R0,R1,R2,R3,R12,R13)
	RETI
	._CONFIG	E
	.global	_iFlxStatusInterrupt
	._SYMBOL	"iFlxStatusInterrupt", F, 0x8000000f, E, "_iFlxStatusInterrupt", I
	._FPARAM	S, 0, F
	._FPARAM	E
	._CONFIG	S, F, 1
	._LINE	0, 131
_iFlxStatusInterrupt:
L_41:
	STM	(R0,R1,R2,R3,R4,R5,R6,R7,R8,R9,R12,R13)
	ST	MDH,@-SP
	ST	MDL,@-SP
	ST	RP,@-SP
	ENTER	#4
;-------end_of_no_optimize_block
	._FUNCTION	"fp", "fp", 16
	._CONFIG	S, B
L_42:				// Pred: L_41
	._LINE	0, 132
;-------volatile_access
	NOP
;-------end_of_no_optimize_block
	._LINE	0, 133
;-------volatile_access
	NOP
;-------end_of_no_optimize_block
	._LINE	0, 135
	LDI:20	#_IO_LVD+3,R8
	BAND	#0xF7,@R8
	._LINE	0, 136
;-------volatile_access
	NOP
;-------end_of_no_optimize_block
	._LINE	0, 137
	LDI:20	#_IO_FxR_INT+4,R2
	LD	@R2,R0	; _IO_FxR_INT
	LDI	#16,R1
	AND	R1,R0
	CMP	R1,R0
	BNE20	L_45,R12
L_43:				// Pred: L_42
	._LINE	0, 138
	._LINE	0, 140
	ST	R1,@R2	; _IO_FxR_INT
	._LINE	0, 145
	BAND	#0xF7,@R8
	._LINE	0, 146
	LDI:20	#__receivedFrameBuffer,R9
	LDI:20	#__receivedFrameID,R6
	LDI:20	#__receivedChannel,R7
	MOV	R9,R4
	LDI	#8,R5
	CALL20	_DUXFXReceiveData,R12
	._LINE	0, 147
	BAND	#0xF7,@R8
	._LINE	0, 148
	LDUB	@R9,R13	; __receivedFrameBuffer
	DMOVB	R13,@_IO_PDR14	; _IO_PDR14
	._LINE	0, 153
L_45:				// Pred: L_43 L_42
	._LINE	0, 154
	._CONFIG	E
	._LINE	0, 155
	LEAVE
	LD	@SP+,RP
	LD	@SP+,MDL
	LD	@SP+,MDH
	LDM	(R0,R1,R2,R3,R4,R5,R6,R7,R8,R9,R12,R13)
	RETI
	._CONFIG	E
	._SYMBOL	"_receivedFrameID", V, 0x80000004, S, "__receivedFrameID"
	._SYMBOL	"_receivedChannel", V, 0x80000002, S, "__receivedChannel"
	._SYMBOL	"_receivedFrameBuffer", V, 0x80000002, S, "__receivedFrameBuffer"
	._ARRAY	1, 1, 7, 0
	.end	
