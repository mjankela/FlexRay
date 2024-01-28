//					FR Family SOFTUNE cpcom V65L06
	.program	"dux_flexray"
	.library	"lib911.lib"
	._LANGUAGE	C_FR20, N, U, F
	._FILE	"Y:\FlexRayDriver\Fujitsu_MB91F465X\flexray_startup\src\dux_flexray.c", 0
	._FILE	"Y:\FlexRayDriver\Fujitsu_MB91F465X\flexray_startup\src\..\clusterconfig\DUXFlexRayClusterConfig.h", 1
	._FILE	"Y:\FlexRayDriver\Fujitsu_MB91F465X\flexray_startup\src\..\h_file\..\IO_MB91465X_V01L03\_fr.h", 2
	._FILE	"Y:\FlexRayDriver\Fujitsu_MB91F465X\flexray_startup\src\..\h_file\dux_watchdog.h", 3
	._FILE	"Y:\FlexRayDriver\Fujitsu_MB91F465X\flexray_startup\src\..\h_file\dux_flexray.h", 4
	._FILE	"Y:\FlexRayDriver\Fujitsu_MB91F465X\flexray_startup\src\..\h_file\..\h_file\dux_platform_types.h", 5
	._FILE	"Y:\FlexRayDriver\Fujitsu_MB91F465X\flexray_startup\src\..\h_file\FLX_regist_defines.h", 6
	._FILE	"Y:\FlexRayDriver\Fujitsu_MB91F465X\flexray_startup\src\..\interrupt\dux_interrupts.h", 7
	._FILE	"Y:\FlexRayDriver\Fujitsu_MB91F465X\flexray_startup\src\..\IO_MB91465X_V01L03\mb91f465x.h", 8
	._FILE	"Y:\FlexRayDriver\Fujitsu_MB91F465X\flexray_startup\src\..\IO_MB91465X_V01L03\_fr.h", 9
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
	._SYMBOL	"uint16", Y, 0x80000004
	._SYMBOL	"uint8", Y, 0x80000002
	._SYMBOL	"boolean", Y, 0x80000002
	._SYMBOL	"sint16", Y, 0x80000003
	._SYMBOL	"uint32", Y, 0x80000008
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
	.ascii	"New Node 2\000"
	.datab.b	1,0
	.global	_typ_FLX_msgobj
_typ_FLX_msgobj:
	.byte	1
	.byte	2
	.half	2
	.word	385875970
	.word	525060
	.word	48
	.byte	1
	.byte	0
	.half	4
	.word	352321540
	.word	133044
	.word	52
	.byte	1
	.byte	1
	.half	4
	.word	369098756
	.word	133044
	.word	53
	.byte	1
	.byte	2
	.half	1
	.word	587202561
	.word	524288
	.word	54
	.byte	1
	.byte	0
	.half	3
	.word	553648131
	.word	131072
	.word	58
	.byte	1
	.byte	1
	.half	3
	.word	570425347
	.word	131072
	.word	59
	.global	___wait_nop
	.section	CODE, CODE, align=2
	.global	_DUXFXControllerName
	._SYMBOL	"DUXFXControllerName", F, 0x8000000e, E, "_DUXFXControllerName", F
	._FPARAM	S, 0, F
	._FPARAM	E
	._POINTER	1
	._CONFIG	S, F, 1
	._LINE	0, 68
_DUXFXControllerName:
L_20:
	ST	RP,@-SP
	ENTER	#4
;-------end_of_no_optimize_block
	._FUNCTION	"fp", "fp", 16
	._CONFIG	S, B
L_21:				// Pred: L_20
	._LINE	0, 69
	LDI:20	#__controllerName,R0
	LD	@R0,R4	; __controllerName
L_22:				// Pred: L_21
	._LINE	0, 69
	._CONFIG	E
	._LINE	0, 70
	LEAVE
	LD	@SP+,RP
	RET
	._CONFIG	E
	.global	_DUXFXInit
	._SYMBOL	"DUXFXInit", F, 0x8000000f, E, "_DUXFXInit", F
	._FPARAM	S, 0, F
	._FPARAM	E
	._CONFIG	S, F, 1
	._LINE	0, 74
_DUXFXInit:
L_23:
	ST	RP,@-SP
	ENTER	#4
	STM	(R8)
;-------end_of_no_optimize_block
	._FUNCTION	"fp", "fp", 16
	._CONFIG	S, B
L_24:				// Pred: L_23
	._LINE	0, 76
	LDI:20	#_IO_LVD+3,R8
	BAND	#0xF7,@R8
	._LINE	0, 77
	CALL20	__DUXFXConfigInit,R12
	._LINE	0, 78
	BAND	#0xF7,@R8
	._LINE	0, 81
	CALL20	__DUXFXCreateMessageRam,R12
	._LINE	0, 82
	BAND	#0xF7,@R8
	._LINE	0, 85
	CALL20	__DUXFXInterruptInit,R12
	._LINE	0, 86
	BAND	#0xF7,@R8
	._LINE	0, 88
	LDI	#16,R4
	LDI	#0,R5
	CALL20	__DUXFXInterruptConfig,R12
	._LINE	0, 89
	BAND	#0xF7,@R8
	._LINE	0, 91
	LDI	#1,R4
	LDI	#0,R5
	LDI	#0,R6
	LDI	#0,R7
	CALL20	__DUXFXInterruptLineConfig,R12
	._LINE	0, 92
	BAND	#0xF7,@R8
	._LINE	0, 95
	CALL20	__DUXFXConfigFix,R12
	._LINE	0, 96
	BAND	#0xF7,@R8
L_25:				// Pred: L_24
	._LINE	0, 96
	._CONFIG	E
	._LINE	0, 97
	LDM	(R8)
	LEAVE
	LD	@SP+,RP
	RET
	._CONFIG	E
	.global	_DUXFXStartup
	._SYMBOL	"DUXFXStartup", F, 0x8000000f, E, "_DUXFXStartup", F
	._FPARAM	S, 0, F
	._FPARAM	E
	._CONFIG	S, F, 1
	._LINE	0, 103
_DUXFXStartup:
L_238:
	ST	RP,@-SP
	ENTER	#4
;-------end_of_no_optimize_block
	._FUNCTION	"fp", "fp", 16
	._CONFIG	S, B
L_239:				// Pred: L_238
	._LINE	0, 105
	LDI:20	#_IO_LVD+3,R3
	BAND	#0xF7,@R3
	._LINE	0, 110
	LDI:20	#_IO_FxR_SUC1,R0
	LDI	#3,R1
	ST	R1,@R0	; _IO_FxR_SUC1
	._LINE	0, 114
L_240:				// Pred: L_239
	._LINE	0, 114
	LD	@R0,R1	; _IO_FxR_SUC1
	LDI	#128,R6
	AND	R6,R1
	CMP	R6,R1
	BNE20	L_245,R12
L_241:				// Pred: L_240
	._LINE	0, 114
L_242:				// Pred: L_429 L_241
	._LINE	0, 114
	BAND	#0xF7,@R3
L_243:				// Pred: L_242
	._LINE	0, 114
	LD	@R0,R1	; _IO_FxR_SUC1
	LDI	#128,R12
	AND	R12,R1
	CMP	R12,R1
	BNE20	L_245,R12
L_429:				// Pred: L_243
	._LINE	0, 117
	BRA20	L_242,R12
L_245:				// Pred: L_243 L_240
	._LINE	0, 117
	LDI:20	#_IO_FxR_SUC2,R4
	LD	@R4,R1	; _IO_FxR_SUC2
	LDI	#63,R5
	AND	R5,R1
	CMP	#1,R1
	BEQ20	L_249,R12
L_246:				// Pred: L_245
	._LINE	0, 117
L_247:				// Pred: L_248 L_246
	._LINE	0, 117
	BAND	#0xF7,@R3
L_248:				// Pred: L_247
	._LINE	0, 117
	LD	@R4,R2	; _IO_FxR_SUC2
	LDI	#63,R1
	AND	R1,R2
	CMP	#1,R2
	BNE20	L_247,R12
L_430:				// Pred: L_248
	._LINE	0, 120
L_249:				// Pred: L_430 L_245
	._LINE	0, 120
	LDI	#9,R1
	ST	R1,@R0	; _IO_FxR_SUC1
	._LINE	0, 123
L_250:				// Pred: L_249
	._LINE	0, 123
	LD	@R0,R1	; _IO_FxR_SUC1
	AND	R6,R1
	CMP	R6,R1
	BNE20	L_254,R12
L_251:				// Pred: L_250
	._LINE	0, 123
L_252:				// Pred: L_253 L_251
	._LINE	0, 123
	BAND	#0xF7,@R3
L_253:				// Pred: L_252
	._LINE	0, 123
	LD	@R0,R1	; _IO_FxR_SUC1
	LDI	#128,R7
	AND	R7,R1
	CMP	R7,R1
	BEQ20	L_252,R12
L_431:				// Pred: L_253
	._LINE	0, 126
L_254:				// Pred: L_431 L_250
	._LINE	0, 126
	LDI	#4,R1
	ST	R1,@R0	; _IO_FxR_SUC1
	._LINE	0, 129
L_255:				// Pred: L_254
	._LINE	0, 129
	LD	@R4,R0	; _IO_FxR_SUC2
	AND	R5,R0
	CMP	#2,R0
	BEQ20	L_260,R12
L_256:				// Pred: L_255
	._LINE	0, 129
L_257:				// Pred: L_432 L_256
	._LINE	0, 130
	._LINE	0, 131
;-------volatile_access
	NOP
;-------end_of_no_optimize_block
	._LINE	0, 133
	BAND	#0xF7,@R3
	._LINE	0, 134
L_258:				// Pred: L_257
	._LINE	0, 129
	LD	@R4,R0	; _IO_FxR_SUC2
	LDI	#63,R1
	AND	R1,R0
	CMP	#2,R0
	BEQ20	L_260,R12
L_432:				// Pred: L_258
	._LINE	0, 137
	BRA20	L_257,R12
L_260:				// Pred: L_258 L_255
	._LINE	0, 137
	._CONFIG	E
	._LINE	0, 138
	LEAVE
	LD	@SP+,RP
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
	._LINE	0, 144
_DUXFXSendData:
L_263:
	STM	(R4,R5,R6,R7)
	ST	RP,@-SP
	ENTER	#12
	STM	(R8,R9)
;-------end_of_no_optimize_block
	._FUNCTION	"fp", "fp", 48
	._CONFIG	S, B
	._SYMBOL	"myBufferIndex", V, 0x80000003, A, -4
	._SYMBOL	"len", V, 0x80000002, A, -2
	._SYMBOL	"i", V, 0x80000002, A, -1
	._SYMBOL	"marshallData", V, 0x80000008, A, -8
L_264:				// Pred: L_263
	._LINE	0, 145
	._LINE	0, 147
	LDI	#0,R0
	ST	R0,@(FP,-8)	; _marshallData
	._LINE	0, 149
	LDI:20	#_IO_LVD+3,R8
	BAND	#0xF7,@R8
	._LINE	0, 151
	LDI:8	#-1,R0
	EXTSB	R0
	STH	R0,@(FP,-4)	; _myBufferIndex
	._LINE	0, 153
	LDUH	@(FP,10),R4	; _slotID
	LDUB	@(FP,15),R5	; _channel
	CALL20	__DUXFXfindBufferForStaticSenderSlot,R12
	STH	R4,@(FP,-4)	; _myBufferIndex
	._LINE	0, 154
	LDUH	@(FP,-4),R0	; _myBufferIndex
	EXTSH	R0
	CMP	#0,R0
	BGE20	L_267,R12
L_265:				// Pred: L_264
	._LINE	0, 154
	LDUB	@(FP,15),R0	; _channel
	CMP	#2,R0
	BNE20	L_267,R12
L_266:				// Pred: L_265
	._LINE	0, 154
	LDI	#0,R4
	BRA20	L_424,R12
L_267:				// Pred: L_265 L_264
	._LINE	0, 156
	BAND	#0xF7,@R8
	._LINE	0, 159
	LDUH	@(FP,-4),R0	; _myBufferIndex
	EXTSH	R0
	CMP	#0,R0
	BGE20	L_269,R12
L_268:				// Pred: L_267
	._LINE	0, 159
	._LINE	0, 160
	LDUH	@(FP,10),R4	; _slotID
	LDUB	@(FP,15),R5	; _channel
	CALL20	__DUXFXfindBufferForDynamicSenderSlot,R12
	STH	R4,@(FP,-4)	; _myBufferIndex
	._LINE	0, 161
L_269:				// Pred: L_268 L_267
	._LINE	0, 163
	BAND	#0xF7,@R8
	._LINE	0, 165
	LDUH	@(FP,-4),R0	; _myBufferIndex
	EXTSH	R0
	CMP	#0,R0
	BGE20	L_271,R12
L_270:				// Pred: L_269
	._LINE	0, 165
	LDI	#0,R4
	BRA20	L_424,R12
L_271:				// Pred: L_269
	._LINE	0, 168
	LDUB	@(FP,23),R1	; _payload
	MOV	R1,R0
	ASR	#1,R0
	LSR	#30,R0
	ADDN	R1,R0
	ASR	#2,R0
	STB	R0,@(FP,-2)	; _len
	._LINE	0, 169
L_272:				// Pred: L_271
	._LINE	0, 169
	LDI	#0,R9
	STB	R9,@(FP,-1)	; _i
	LDUB	@(FP,-1),R0	; _i
	LDUB	@(FP,-2),R1	; _len
	CMP	R1,R0
	BGE20	L_276,R12
L_273:				// Pred: L_272
	._LINE	0, 169
L_274:				// Pred: L_275 L_273
	._LINE	0, 169
	._LINE	0, 170
	BAND	#0xF7,@R8
	._LINE	0, 171
	LDI	#0,R0
	ST	R0,@(FP,-8)	; _marshallData
	._LINE	0, 172
	LDUB	@(FP,-1),R13	; _i
	LSL	#2,R13
	ADDN	#3,R13
	LD	@(FP,16),R0	; _data
	LDUB	@(R0,R13),R2
	LSL	#24,R2
	LDUB	@(FP,-1),R13	; _i
	LSL	#2,R13
	ADDN	#2,R13
	LD	@(FP,16),R0	; _data
	LDUB	@(R0,R13),R0
	LSL	#16,R0
	OR	R0,R2
	LDUB	@(FP,-1),R13	; _i
	LSL	#2,R13
	ADDN	#1,R13
	LD	@(FP,16),R0	; _data
	LDUB	@(R0,R13),R0
	LSL	#8,R0
	OR	R0,R2
	LDUB	@(FP,-1),R13	; _i
	LSL	#2,R13
	LD	@(FP,16),R0	; _data
	LDUB	@(R0,R13),R0
	OR	R0,R2
	ST	R2,@(FP,-8)	; _marshallData
	._LINE	0, 173
	LDUB	@(FP,-1),R4	; _i
	LD	@(FP,-8),R5	; _marshallData
	CALL20	__DUXFXTransmitData,R12
	._LINE	0, 174
	LDUB	@(FP,-1),R0	; _i
	ADDN	#1,R0
	STB	R0,@(FP,-1)	; _i
L_275:				// Pred: L_274
	._LINE	0, 169
	LDUB	@(FP,-1),R0	; _i
	LDUB	@(FP,-2),R1	; _len
	CMP	R1,R0
	BLT20	L_274,R12
L_276:				// Pred: L_275 L_272
	._LINE	0, 176
	LDUB	@(FP,23),R1	; _payload
	MOV	R1,R0
	ASR	#1,R0
	LSR	#30,R0
	ADDN	R1,R0
	LDI:8	#-4,R3
	EXTSB	R3
	AND	R3,R0
	SUB	R0,R1
	BEQ20	L_283,R12
L_277:				// Pred: L_276
	._LINE	0, 176
	._LINE	0, 177
L_278:				// Pred: L_277
	._LINE	0, 177
	STB	R9,@(FP,-1)	; _i
	LDUB	@(FP,-1),R5	; _i
	LDUB	@(FP,23),R1	; _payload
	MOV	R1,R0
	ASR	#1,R0
	LSR	#30,R0
	ADDN	R1,R0
	AND	R3,R0
	SUBN	R0,R1
	CMP	R1,R5
	BGE20	L_282,R12
L_279:				// Pred: L_278
	._LINE	0, 177
	LDI:8	#-4,R1
	EXTSB	R1
L_280:				// Pred: L_281 L_279
	._LINE	0, 177
	._LINE	0, 178
	BAND	#0xF7,@R8
	._LINE	0, 179
	LDI	#0,R0
	ST	R0,@(FP,-8)	; _marshallData
	._LINE	0, 180
	LDUB	@(FP,-2),R13	; _len
	LSL	#2,R13
	LDUB	@(FP,-1),R0	; _i
	ADDN	R0,R13
	LD	@(FP,16),R0	; _data
	LDUB	@(R0,R13),R6
	LDUB	@(FP,-1),R0	; _i
	LSL	#3,R0
	LSL	R0,R6
	LD	@(FP,-8),R0	; _marshallData
	OR	R6,R0
	ST	R0,@(FP,-8)	; _marshallData
	._LINE	0, 181
	BAND	#0xF7,@R8
	._LINE	0, 182
	LDUB	@(FP,-1),R0	; _i
	ADDN	#1,R0
	STB	R0,@(FP,-1)	; _i
L_281:				// Pred: L_280
	._LINE	0, 177
	LDUB	@(FP,-1),R4	; _i
	LDUB	@(FP,23),R12	; _payload
	MOV	R12,R0
	ASR	#1,R0
	LSR	#30,R0
	ADDN	R12,R0
	AND	R1,R0
	SUBN	R0,R12
	CMP	R12,R4
	BLT20	L_280,R12
L_433:				// Pred: L_281
	._LINE	0, 183
L_282:				// Pred: L_433 L_278
	._LINE	0, 183
	LDUB	@(FP,-2),R4	; _len
	LSL	#2,R4
	EXTUH	R4
	LD	@(FP,-8),R5	; _marshallData
	CALL20	__DUXFXTransmitData,R12
	._LINE	0, 184
L_283:				// Pred: L_282 L_276
	._LINE	0, 186
	BAND	#0xF7,@R8
	._LINE	0, 187
	LDUH	@(FP,-4),R4	; _myBufferIndex
	EXTSH	R4
	CALL20	__DUXFXTransmitControl,R12
	._LINE	0, 189
	LDI	#1,R4
L_424:				// Pred: L_283 L_270 L_266
	._LINE	0, 189
L_284:				// Pred: L_424
	._LINE	0, 189
	._CONFIG	E
	._LINE	0, 190
	LDM	(R8,R9)
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
	._LINE	0, 195
_DUXFXReceiveData:
L_286:
	STM	(R4,R5,R6,R7)
	ST	RP,@-SP
	ENTER	#16
	STM	(R8,R9,R10)
;-------end_of_no_optimize_block
	._FUNCTION	"fp", "fp", 56
	._CONFIG	S, B
	._SYMBOL	"i", V, 0x80000002, A, -1
	._SYMBOL	"regContent", V, 0x80000008, A, -12
	._SYMBOL	"rcv_err", V, 0x80000008, A, -8
L_287:				// Pred: L_286
	._LINE	0, 196
	._LINE	0, 196
	LDI	#0,R8
	STB	R8,@(FP,-1)	; _i
	._LINE	0, 197
	LDI	#0,R0
	ST	R0,@(FP,-12)	; _regContent
	._LINE	0, 198
	ST	R0,@(FP,-8)	; _rcv_err
	._LINE	0, 200
	LDI:20	#_IO_LVD+3,R9
	BAND	#0xF7,@R9
	._LINE	0, 201
	CALL20	__DUXFXGetReceivedBufferNumber,R12
	CALL20	__DUXFXTransferReceivedBufferToRam,R12
	._LINE	0, 202
	MOV	FP,R4
	ADDN	#-8,R4
	CALL20	__DUXFXReceptionStatus,R12
	._LINE	0, 203
	BAND	#0xF7,@R9
	._LINE	0, 205
L_288:				// Pred: L_287
	._LINE	0, 205
	STB	R8,@(FP,-1)	; _i
	LDUB	@(FP,-1),R0	; _i
	LDUB	@(FP,15),R1	; _payload
	CMP	R1,R0
	BGE20	L_292,R12
L_289:				// Pred: L_288
	._LINE	0, 205
	LDI:8	#-4,R10
	EXTSB	R10
L_290:				// Pred: L_291 L_289
	._LINE	0, 205
	._LINE	0, 206
	BAND	#0xF7,@R9
	._LINE	0, 207
	LDI	#0,R0
	ST	R0,@(FP,-12)	; _regContent
	._LINE	0, 208
	LDUB	@(FP,-1),R12	; _i
	MOV	R12,R4
	ASR	#1,R4
	LSR	#30,R4
	ADDN	R12,R4
	ASR	#2,R4
	EXTUH	R4
	CALL20	__DUXFXAccessReceivedData,R12
	ST	R4,@(FP,-12)	; _regContent
	._LINE	0, 209
	LDUB	@(FP,-1),R13	; _i
	LDUB	@(FP,-1),R1	; _i
	MOV	R1,R0
	ASR	#1,R0
	LSR	#30,R0
	ADDN	R1,R0
	AND	R10,R0
	SUBN	R0,R1
	LSL	#3,R1
	LD	@(FP,-12),R0	; _regContent
	LSR	R1,R0
	LD	@(FP,8),R1	; _data
	STB	R0,@(R1,R13)
	._LINE	0, 210
	LDUB	@(FP,-1),R0	; _i
	ADDN	#1,R0
	STB	R0,@(FP,-1)	; _i
L_291:				// Pred: L_290
	._LINE	0, 205
	LDUB	@(FP,-1),R0	; _i
	LDUB	@(FP,15),R1	; _payload
	CMP	R1,R0
	BLT20	L_290,R12
L_292:				// Pred: L_291 L_288
	._LINE	0, 213
	LDI:20	#_IO_FxR_OBF,R2
	LD	@R2,R0	; _IO_FxR_OBF
	LSL	#21,R0
	LSR	#21,R0
	LD	@(FP,16),R1	; _frameid
	STH	R0,@R1
	._LINE	0, 214
	BTSTL	#0x1,@R2
	BEQ20	L_295,R12
L_293:				// Pred: L_292
	._LINE	0, 214
	BTSTL	#0x2,@R2
	BEQ20	L_295,R12
L_294:				// Pred: L_293
	._LINE	0, 214
	LD	@(FP,20),R0	; _channel
	LDI	#2,R1
	STB	R1,@R0
	BRA20	L_301,R12
L_295:				// Pred: L_293 L_292
	._LINE	0, 215
	BTSTL	#0x1,@R2
	BEQ20	L_297,R12
L_296:				// Pred: L_295
	._LINE	0, 215
	LD	@(FP,20),R0	; _channel
	STB	R8,@R0
	BRA20	L_301,R12
L_297:				// Pred: L_295
	._LINE	0, 216
	BTSTL	#0x2,@R2
	BEQ20	L_301,R12
L_298:				// Pred: L_297
	._LINE	0, 216
	LD	@(FP,20),R0	; _channel
	LDI	#1,R1
;-------volatile_access
	STB	R1,@R0
L_301:				// Pred: L_298 L_297 L_296 L_294
	._LINE	0, 218
	BAND	#0xF7,@R9
	._LINE	0, 220
L_302:				// Pred: L_301
	._LINE	0, 220
	LDI	#1,R4
	._CONFIG	E
	._LINE	0, 222
	LDM	(R8,R9,R10)
	LEAVE
	LD	@SP+,RP
	ADDSP	#16
	RET
	._CONFIG	E
	.global	_DUXFXCCStatusCheck
	._SYMBOL	"DUXFXCCStatusCheck", F, 0x80000002, E, "_DUXFXCCStatusCheck", F
	._FPARAM	S, 0, F
	._FPARAM	E
	._CONFIG	S, F, 1
	._LINE	0, 235
_DUXFXCCStatusCheck:
L_81:
	ST	RP,@-SP
	ENTER	#8
;-------end_of_no_optimize_block
	._FUNCTION	"fp", "fp", 24
	._CONFIG	S, B
	._SYMBOL	"cc_state", V, 0x80000002, A, -1
L_82:				// Pred: L_81
	._LINE	0, 237
	._LINE	0, 237
	LDI	#0,R0
	STB	R0,@(FP,-1)	; _cc_state
	._LINE	0, 239
	LDI:20	#_IO_LVD+3,R2
	BAND	#0xF7,@R2
	._LINE	0, 241
	LDI:20	#_IO_FxR_SUC2,R0
	LD	@R0,R1	; _IO_FxR_SUC2
	LDI	#63,R0
	AND	R0,R1
	STB	R1,@(FP,-1)	; _cc_state
	._LINE	0, 243
	BAND	#0xF7,@R2
	._LINE	0, 244
	LDUB	@(FP,-1),R4	; _cc_state
L_83:				// Pred: L_82
	._LINE	0, 244
	._CONFIG	E
	._LINE	0, 245
	LEAVE
	LD	@SP+,RP
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
	._LINE	0, 250
_DUXFXGetGlobalTime:
L_84:
	STM	(R4,R5)
	ST	RP,@-SP
	ENTER	#4
;-------end_of_no_optimize_block
	._FUNCTION	"fp", "fp", 40
	._CONFIG	S, B
L_85:				// Pred: L_84
	._LINE	0, 251
	LDI:20	#_IO_LVD+3,R2
	BAND	#0xF7,@R2
	._LINE	0, 252
	LD	@(FP,8),R0	; _macroTick
	LDI	#0,R1
	STH	R1,@R0
	._LINE	0, 253
	LD	@(FP,12),R0	; _cycle
	LDI	#0,R1
	STB	R1,@R0
	._LINE	0, 254
	LDI:20	#_IO_FxR_GTU2+4,R0
	LD	@R0,R1	; _IO_FxR_GTU2
	LSL	#18,R1
	LSR	#18,R1
	LDI	#8191,R0
	AND	R0,R1
	LD	@(FP,8),R0	; _macroTick
	STH	R1,@R0
	._LINE	0, 255
	LDI:20	#_IO_FxR_GTU2+5,R0
	LDUB	@R0,R1	; _IO_FxR_GTU2
	LSL	#26,R1
	LSR	#26,R1
	LDI	#31,R0
	AND	R0,R1
	LD	@(FP,12),R0	; _cycle
	STB	R1,@R0
	._LINE	0, 256
	BAND	#0xF7,@R2
L_86:				// Pred: L_85
	._LINE	0, 256
	._CONFIG	E
	._LINE	0, 257
	LEAVE
	LD	@SP+,RP
	ADDSP	#8
	RET
	._CONFIG	E
	._SYMBOL	"_DUXFXConfigInit", F, 0x8000000f, S, "__DUXFXConfigInit", F
	._FPARAM	S, 0, F
	._FPARAM	E
	._CONFIG	S, F, 1
	._LINE	0, 267
__DUXFXConfigInit:
L_304:
	ST	RP,@-SP
	ENTER	#8
;-------end_of_no_optimize_block
	._FUNCTION	"fp", "fp", 24
	._CONFIG	S, B
	._SYMBOL	"i", V, 0x80000008, A, -4
L_305:				// Pred: L_304
	._LINE	0, 269
	._LINE	0, 269
	LDI	#0,R2
	ST	R2,@(FP,-4)	; _i
	._LINE	0, 272
	LDI:20	#_IO_PLL2,R0
	LDI	#1,R1
	STB	R1,@R0	; _IO_PLL2
	._LINE	0, 273
	LDI:20	#_IO_PLL2+1,R0
	LDI	#19,R1
	STB	R1,@R0	; _IO_PLL2
	._LINE	0, 274
	LDI:20	#_IO_PLL2+2,R0
	LDI	#0,R4
	STB	R4,@R0	; _IO_PLL2
	._LINE	0, 275
	LDI:20	#_IO_PLL2+3,R0
	STB	R4,@R0	; _IO_PLL2
	._LINE	0, 277
	LDI:20	#_IO_PLL2+6,R3
	LDUB	@R3,R1	; _IO_PLL2
	LDI	#4,R0
	OR	R0,R1
	STB	R1,@R3	; _IO_PLL2
	._LINE	0, 278
	LDUB	@R3,R0	; _IO_PLL2
	LDI	#2,R1
	OR	R1,R0
	STB	R0,@R3	; _IO_PLL2
	._LINE	0, 280
	LDI:20	#_IO_LVD+3,R3
L_306:				// Pred: L_308 L_305
	._LINE	0, 280
	._LINE	0, 281
	._LINE	0, 284
	LD	@(FP,-4),R0	; _i
	LDI	#19200,R1
	CMP	R1,R0
	BLS20	L_308,R12
L_307:				// Pred: L_306
	._LINE	0, 285
	._LINE	0, 286
	BRA20	L_309,R12
L_308:				// Pred: L_306
	._LINE	0, 288
	LD	@(FP,-4),R0	; _i
	ADDN	#1,R0
	ST	R0,@(FP,-4)	; _i
	._LINE	0, 289
	BAND	#0xF7,@R3
	._LINE	0, 290
	BRA20	L_306,R12
L_309:				// Pred: L_307
	._LINE	0, 292
	LDI:20	#_IO_FxR_PRT,R0
	LDI	#-47380929,R1
	ST	R1,@R0	; _IO_FxR_PRT
	._LINE	0, 293
	LDI:20	#_IO_FxR_PRT+4,R1
	LDI	#1018443579,R0
	ST	R0,@R1	; _IO_FxR_PRT
	._LINE	0, 294
	LDI:20	#_IO_FxR_MHDC,R0
	LDI	#7929864,R1
	ST	R1,@R0	; _IO_FxR_MHDC
	._LINE	0, 295
	LDI:20	#_IO_FxR_GTU1,R1
	LDI	#40000,R0
	ST	R0,@R1	; _IO_FxR_GTU1
	._LINE	0, 296
	LDI:20	#_IO_FxR_GTU1+4,R1
	LDI	#984040,R0
	ST	R0,@R1	; _IO_FxR_GTU1
	._LINE	0, 297
	LDI:20	#_IO_FxR_GTU1+8,R0
	LDI	#50533910,R1
	ST	R1,@R0	; _IO_FxR_GTU1
	._LINE	0, 298
	LDI:20	#_IO_FxR_GTU1+12,R0
	LDI	#65012701,R1
	ST	R1,@R0	; _IO_FxR_GTU1
	._LINE	0, 299
	LDI:20	#_IO_FxR_GTU1+16,R0
	LDI	#268501506,R1
	ST	R1,@R0	; _IO_FxR_GTU1
	._LINE	0, 300
	LDI:20	#_IO_FxR_GTU1+20,R0
	LDI	#7929997,R1
	ST	R1,@R0	; _IO_FxR_GTU1
	._LINE	0, 301
	LDI:20	#_IO_FxR_GTU1+24,R1
	LDI	#131106,R0
	ST	R0,@R1	; _IO_FxR_GTU1
	._LINE	0, 302
	LDI:20	#_IO_FxR_GTU1+28,R0
	LDI	#8126471,R1
	ST	R1,@R0	; _IO_FxR_GTU1
	._LINE	0, 303
	LDI:20	#_IO_FxR_GTU1+32,R0
	LDI	#66307,R1
	ST	R1,@R0	; _IO_FxR_GTU1
	._LINE	0, 304
	LDI:20	#_IO_FxR_GTU1+36,R0
	LDI	#7929995,R1
	ST	R1,@R0	; _IO_FxR_GTU1
	._LINE	0, 305
	LDI:20	#_IO_FxR_GTU1+40,R0
	ST	R2,@R0	; _IO_FxR_GTU1
	._LINE	0, 306
	LDI:20	#_IO_FxR_SUC1,R2
	LDI	#209844993,R0
	ST	R0,@R2	; _IO_FxR_SUC1
	._LINE	0, 307
	LDI:20	#_IO_FxR_SUC1+4,R0
	LDI	#251738482,R1
	ST	R1,@R0	; _IO_FxR_SUC1
	._LINE	0, 308
	LDI:20	#_IO_FxR_SUC1+8,R0
	LDI	#254,R1
	ST	R1,@R0	; _IO_FxR_SUC1
	._LINE	0, 315
L_310:				// Pred: L_309
	._LINE	0, 315
	LD	@R2,R0	; _IO_FxR_SUC1
	LDI	#128,R5
	AND	R5,R0
	CMP	R5,R0
	BNE20	L_315,R12
L_311:				// Pred: L_310
	._LINE	0, 315
L_312:				// Pred: L_434 L_311
	._LINE	0, 315
	BAND	#0xF7,@R3
L_313:				// Pred: L_312
	._LINE	0, 315
	LD	@R2,R0	; _IO_FxR_SUC1
	LDI	#128,R6
	AND	R6,R0
	CMP	R6,R0
	BNE20	L_315,R12
L_434:				// Pred: L_313
	._LINE	0, 315
	BRA20	L_312,R12
L_315:				// Pred: L_313 L_310
	._LINE	0, 315
	._CONFIG	E
	._LINE	0, 316
	LEAVE
	LD	@SP+,RP
	RET
	._CONFIG	E
	._SYMBOL	"_DUXFXCreateMessageRam", F, 0x8000000f, S, "__DUXFXCreateMessageRam", F
	._FPARAM	S, 0, F
	._FPARAM	E
	._CONFIG	S, F, 1
	._LINE	0, 322
__DUXFXCreateMessageRam:
L_317:
	ST	RP,@-SP
	ENTER	#8
;-------end_of_no_optimize_block
	._FUNCTION	"fp", "fp", 24
	._CONFIG	S, B
	._SYMBOL	"index", V, 0x80000008, A, -4
L_318:				// Pred: L_317
	._LINE	0, 324
	._LINE	0, 332
	LDI:20	#_IO_FxR_MHD,R0
	LDI	#360452,R1
	ST	R1,@R0	; _IO_FxR_MHD
	._LINE	0, 335
	LDI:20	#_IO_LVD+3,R2
	BAND	#0xF7,@R2
	._LINE	0, 336
	LDI	#0,R0
	ST	R0,@(FP,-4)	; _index
	LDI:20	#_typ_FLX_msgobj,R1
	LDI:20	#_IO_FxR_IBF,R3
	LDI:20	#_IO_FxR_IBF+4,R4
	LDI:20	#_IO_FxR_IBF+8,R5
	LDI:20	#_IO_FxR_IBF+20,R6
L_319:				// Pred: L_327 L_318
	._LINE	0, 336
	LD	@(FP,-4),R0	; _index
	CMP	#6,R0
	BNC20	L_328,R12
L_320:				// Pred: L_319
	._LINE	0, 337
	._LINE	0, 338
	BAND	#0xF7,@R2
	._LINE	0, 340
	LD	@(FP,-4),R7	; _index
	LSL	#4,R7
	MOV	R1,R0
	ADDN	R7,R0
	LDUB	@R0,R0
	CMP	#1,R0
	BNE20	L_327,R12
L_321:				// Pred: L_320
	._LINE	0, 340
	._LINE	0, 341
	LD	@(FP,-4),R7	; _index
	LSL	#4,R7
	MOV	R1,R0
	ADDN	R7,R0
	LDI	#4,R13
	LD	@(R0,R13),R0
	ST	R0,@R3	; _IO_FxR_IBF
	._LINE	0, 342
	LD	@(FP,-4),R7	; _index
	LSL	#4,R7
	MOV	R1,R0
	ADDN	R7,R0
	LDI	#8,R13
	LD	@(R0,R13),R0
	ST	R0,@R4	; _IO_FxR_IBF
	._LINE	0, 343
	LD	@(FP,-4),R7	; _index
	LSL	#4,R7
	MOV	R1,R0
	ADDN	R7,R0
	LDI	#12,R13
	LD	@(R0,R13),R0
	ST	R0,@R5	; _IO_FxR_IBF
	._LINE	0, 347
L_322:				// Pred: L_321
	._LINE	0, 347
	LD	@R6,R0	; _IO_FxR_IBF
	LSL	#16,R0
	BP20	L_326,R12
L_323:				// Pred: L_322
	._LINE	0, 347
L_324:				// Pred: L_325 L_323
	._LINE	0, 347
	BAND	#0xF7,@R2
L_325:				// Pred: L_324
	._LINE	0, 347
	LD	@R6,R0	; _IO_FxR_IBF
	LSL	#16,R0
	BN20	L_324,R12
L_435:				// Pred: L_325
	._LINE	0, 350
L_326:				// Pred: L_435 L_322
	._LINE	0, 350
	LDI:20	#_IO_FxR_IBF+16,R0
	LDI	#1,R7
	ST	R7,@R0	; _IO_FxR_IBF
	._LINE	0, 353
	LD	@(FP,-4),R7	; _index
	LDI	#127,R0
	AND	R0,R7
	LDI:20	#_IO_FxR_IBF+20,R0
	ST	R7,@R0	; _IO_FxR_IBF
	._LINE	0, 354
L_327:				// Pred: L_326 L_320
	._LINE	0, 355
	LD	@(FP,-4),R0	; _index
	ADDN	#1,R0
	ST	R0,@(FP,-4)	; _index
	BRA20	L_319,R12
L_328:				// Pred: L_319
	._LINE	0, 357
L_329:				// Pred: L_328
	._LINE	0, 357
	._CONFIG	E
	._LINE	0, 358
	LEAVE
	LD	@SP+,RP
	RET
	._CONFIG	E
	._SYMBOL	"_DUXFXInterruptInit", F, 0x8000000f, S, "__DUXFXInterruptInit", F
	._FPARAM	S, 0, F
	._FPARAM	E
	._CONFIG	S, F, 1
	._LINE	0, 363
__DUXFXInterruptInit:
L_114:
	ST	RP,@-SP
	ENTER	#4
;-------end_of_no_optimize_block
	._FUNCTION	"fp", "fp", 16
	._CONFIG	S, B
L_115:				// Pred: L_114
	._LINE	0, 365
	LDI:20	#_IO_LVD+3,R2
	BAND	#0xF7,@R2
	._LINE	0, 369
	LDI:20	#_IO_FxR_INT+32,R0
	LDI	#0,R1
	ST	R1,@R0	; _IO_FxR_INT
	._LINE	0, 372
	LDI:20	#_IO_FxR_INT+4,R0
	LDI:8	#-1,R3
	EXTSB	R3
	ST	R3,@R0	; _IO_FxR_INT
	._LINE	0, 373
	LDI:20	#_IO_FxR_INT,R0
	ST	R3,@R0	; _IO_FxR_INT
	._LINE	0, 376
	LDI:20	#_IO_FxR_INT+28,R0
	ST	R3,@R0	; _IO_FxR_INT
	._LINE	0, 377
	LDI:20	#_IO_FxR_INT+20,R0
	ST	R3,@R0	; _IO_FxR_INT
	._LINE	0, 380
	LDI:20	#_IO_FxR_INT+12,R0
	ST	R1,@R0	; _IO_FxR_INT
	._LINE	0, 381
	LDI:20	#_IO_FxR_INT+8,R0
	ST	R1,@R0	; _IO_FxR_INT
	._LINE	0, 383
	BAND	#0xF7,@R2
L_116:				// Pred: L_115
	._LINE	0, 383
	._CONFIG	E
	._LINE	0, 384
	LEAVE
	LD	@SP+,RP
	RET
	._CONFIG	E
	._SYMBOL	"_DUXFXInterruptConfig", F, 0x8000000f, S, "__DUXFXInterruptConfig", F
	._FPARAM	S, 2, F
	._SYMBOL	"sir_reg", P, 0x80000008, A, 8
	._SYMBOL	"eir_reg", P, 0x80000008, A, 12
	._FPARAM	E
	._CONFIG	S, F, 1
	._LINE	0, 389
__DUXFXInterruptConfig:
L_117:
	STM	(R4,R5)
	ST	RP,@-SP
	ENTER	#4
;-------end_of_no_optimize_block
	._FUNCTION	"fp", "fp", 40
	._CONFIG	S, B
L_118:				// Pred: L_117
	._LINE	0, 391
	LDI:20	#_IO_LVD+3,R2
	BAND	#0xF7,@R2
	._LINE	0, 394
	LD	@(FP,8),R0	; _sir_reg
	LDI:20	#_IO_FxR_INT+24,R1
	ST	R0,@R1	; _IO_FxR_INT
	._LINE	0, 397
	LD	@(FP,12),R0	; _eir_reg
	LDI:20	#_IO_FxR_INT+16,R1
	ST	R0,@R1	; _IO_FxR_INT
	._LINE	0, 399
	BAND	#0xF7,@R2
L_119:				// Pred: L_118
	._LINE	0, 399
	._CONFIG	E
	._LINE	0, 400
	LEAVE
	LD	@SP+,RP
	ADDSP	#8
	RET
	._CONFIG	E
	._SYMBOL	"_DUXFXInterruptLineConfig", F, 0x8000000f, S, "__DUXFXInterruptLineConfig", F
	._FPARAM	S, 4, F
	._SYMBOL	"ln_0", P, 0x80000003, A, 10
	._SYMBOL	"ln_1", P, 0x80000003, A, 14
	._SYMBOL	"s_line", P, 0x80000008, A, 16
	._SYMBOL	"e_line", P, 0x80000008, A, 20
	._FPARAM	E
	._CONFIG	S, F, 1
	._LINE	0, 405
__DUXFXInterruptLineConfig:
L_120:
	STM	(R4,R5,R6,R7)
	ST	RP,@-SP
	ENTER	#4
;-------end_of_no_optimize_block
	._FUNCTION	"fp", "fp", 40
	._CONFIG	S, B
L_121:				// Pred: L_120
	._LINE	0, 407
	LDI:20	#_IO_LVD+3,R2
	BAND	#0xF7,@R2
	._LINE	0, 410
	LD	@(FP,16),R0	; _s_line
	LDI:20	#_IO_FxR_INT+12,R1
	ST	R0,@R1	; _IO_FxR_INT
	._LINE	0, 413
	LD	@(FP,20),R0	; _e_line
	LDI:20	#_IO_FxR_INT+8,R1
	ST	R0,@R1	; _IO_FxR_INT
	._LINE	0, 415
	LDUH	@(FP,10),R0	; _ln_0
	EXTSH	R0
	CMP	#0,R0
	BEQ20	L_123,R12
L_122:				// Pred: L_121
	._LINE	0, 416
	._LINE	0, 419
	LDI:20	#_IO_FxR_INT+32,R0
	LDI	#1,R1
	ST	R1,@R0	; _IO_FxR_INT
	._LINE	0, 420
L_123:				// Pred: L_122 L_121
	._LINE	0, 422
	LDUH	@(FP,14),R0	; _ln_1
	EXTSH	R0
	CMP	#0,R0
	BEQ20	L_125,R12
L_124:				// Pred: L_123
	._LINE	0, 423
	._LINE	0, 426
	LDI:20	#_IO_FxR_INT+32,R0
	LDI	#16,R1
	ST	R1,@R0	; _IO_FxR_INT
	._LINE	0, 427
L_125:				// Pred: L_124 L_123
	._LINE	0, 431
	LDI:20	#_IO_ICR+34,R0
	LDI	#24,R1
	STB	R1,@R0
	._LINE	0, 433
	BAND	#0xF7,@R2
	._LINE	0, 435
L_126:				// Pred: L_125
	._LINE	0, 435
	._CONFIG	E
	._LINE	0, 436
	LEAVE
	LD	@SP+,RP
	ADDSP	#16
	RET
	._CONFIG	E
	._SYMBOL	"_DUXFXConfigFix", F, 0x8000000f, S, "__DUXFXConfigFix", F
	._FPARAM	S, 0, F
	._FPARAM	E
	._CONFIG	S, F, 1
	._LINE	0, 442
__DUXFXConfigFix:
L_332:
	ST	RP,@-SP
	ENTER	#4
;-------end_of_no_optimize_block
	._FUNCTION	"fp", "fp", 16
	._CONFIG	S, B
L_333:				// Pred: L_332
	._LINE	0, 444
	LDI:20	#_IO_LVD+3,R6
	BAND	#0xF7,@R6
	._LINE	0, 450
	LDI:20	#_IO_FxR_SUC2,R2
	LDI:20	#_IO_FxR_SUC1,R5
	LDI:20	#_IO_FxR_GIF1+12,R4
	LDI	#209844994,R3
L_440:				// Pred: L_345 L_333
	._LINE	0, 450
L_441:				// Pred: L_341 L_440
	._LINE	0, 450
L_334:				// Pred: L_441
	._LINE	0, 450
	LD	@R2,R1	; _IO_FxR_SUC2
	LDI	#63,R0
	AND	R0,R1
	CMP	#1,R1
	BEQ20	L_346,R12
L_335:				// Pred: L_334
	._LINE	0, 451
	._LINE	0, 452
	BAND	#0xF7,@R6
	._LINE	0, 455
L_336:				// Pred: L_335
	._LINE	0, 455
	LD	@R5,R0	; _IO_FxR_SUC1
	LDI	#128,R7
	AND	R7,R0
	CMP	R7,R0
	BNE20	L_340,R12
L_337:				// Pred: L_336
	._LINE	0, 455
L_338:				// Pred: L_339 L_337
	._LINE	0, 455
	BAND	#0xF7,@R6
L_339:				// Pred: L_338
	._LINE	0, 455
	LD	@R5,R0	; _IO_FxR_SUC1
	LDI	#128,R1
	AND	R1,R0
	CMP	R1,R0
	BEQ20	L_338,R12
L_436:				// Pred: L_339
	._LINE	0, 459
L_340:				// Pred: L_436 L_336
	._LINE	0, 459
	LDI	#206,R0
	ST	R0,@R4	; _IO_FxR_GIF1
	._LINE	0, 460
	LDI	#49,R0
	ST	R0,@R4	; _IO_FxR_GIF1
	._LINE	0, 463
	ST	R3,@R5	; _IO_FxR_SUC1
	._LINE	0, 465
	BAND	#0xF7,@R6
	._LINE	0, 467
L_341:				// Pred: L_340
	._LINE	0, 467
	LD	@R5,R0	; _IO_FxR_SUC1
	AND	R7,R0
	CMP	R7,R0
	BNE20	L_441,R12
L_342:				// Pred: L_341
	._LINE	0, 467
	LDI:20	#_IO_FxR_SUC1,R13
L_343:				// Pred: L_344 L_342
	._LINE	0, 467
	BAND	#0xF7,@R6
L_344:				// Pred: L_343
	._LINE	0, 467
	LD	@R13,R0	; _IO_FxR_SUC1
	LDI	#128,R7
	AND	R7,R0
	CMP	R7,R0
	BEQ20	L_343,R12
L_437:				// Pred: L_344
L_345:				// Pred: L_437
	._LINE	0, 468
	BRA20	L_440,R12
L_346:				// Pred: L_334
	._LINE	0, 468
L_347:				// Pred: L_346
	._LINE	0, 468
	._CONFIG	E
	._LINE	0, 469
	LEAVE
	LD	@SP+,RP
	RET
	._CONFIG	E
	._SYMBOL	"_DUXFXTransferReceivedBufferToRam", F, 0x8000000f, S, "__DUXFXTransferReceivedBufferToRam", F
	._FPARAM	S, 1, F
	._SYMBOL	"buf_no", P, 0x80000004, A, 10
	._FPARAM	E
	._CONFIG	S, F, 1
	._LINE	0, 474
__DUXFXTransferReceivedBufferToRam:
L_349:
	ST	R4,@-SP
	ST	RP,@-SP
	ENTER	#4
;-------end_of_no_optimize_block
	._FUNCTION	"fp", "fp", 40
	._CONFIG	S, B
L_350:				// Pred: L_349
	._LINE	0, 476
	LDI:20	#_IO_LVD+3,R2
	BAND	#0xF7,@R2
	._LINE	0, 482
	LDI:20	#_IO_FxR_OBF+16,R4
	LD	@R4,R1	; _IO_FxR_OBF
	LDI	#3,R0
	OR	R0,R1
	ST	R1,@R4	; _IO_FxR_OBF
	._LINE	0, 486
	LDUH	@(FP,10),R1	; _buf_no
	LDI	#127,R0
	AND	R0,R1
	LDI:20	#_IO_FxR_OBF+20,R3
	ST	R1,@R3	; _IO_FxR_OBF
	._LINE	0, 488
	LD	@R3,R1	; _IO_FxR_OBF
	LDI	#512,R0
	OR	R0,R1
	ST	R1,@R3	; _IO_FxR_OBF
	._LINE	0, 490
	BAND	#0xF7,@R2
	._LINE	0, 493
L_351:				// Pred: L_350
	._LINE	0, 493
	LD	@R3,R0	; _IO_FxR_OBF
	LSL	#16,R0
	BP20	L_355,R12
L_352:				// Pred: L_351
	._LINE	0, 493
L_353:				// Pred: L_354 L_352
	._LINE	0, 493
	BAND	#0xF7,@R2
L_354:				// Pred: L_353
	._LINE	0, 493
	LD	@R3,R0	; _IO_FxR_OBF
	LSL	#16,R0
	BN20	L_353,R12
L_438:				// Pred: L_354
	._LINE	0, 499
L_355:				// Pred: L_438 L_351
	._LINE	0, 499
	LD	@R3,R0	; _IO_FxR_OBF
	LDI	#256,R1
	OR	R1,R0
	ST	R0,@R3	; _IO_FxR_OBF
	._LINE	0, 501
	BAND	#0xF7,@R2
L_356:				// Pred: L_355
	._LINE	0, 501
	._CONFIG	E
	._LINE	0, 502
	LEAVE
	LD	@SP+,RP
	ADDSP	#4
	RET
	._CONFIG	E
	._SYMBOL	"_DUXFXReceptionStatus", F, 0x80000002, S, "__DUXFXReceptionStatus", F
	._FPARAM	S, 1, F
	._SYMBOL	"mbs_dat", P, 0x80000008, A, 8
	._POINTER	1
	._FPARAM	E
	._CONFIG	S, F, 1
	._LINE	0, 509
__DUXFXReceptionStatus:
L_149:
	ST	R4,@-SP
	ST	RP,@-SP
	ENTER	#8
;-------end_of_no_optimize_block
	._FUNCTION	"fp", "fp", 48
	._CONFIG	S, B
	._SYMBOL	"err_st", V, 0x80000002, A, -1
L_150:				// Pred: L_149
	._LINE	0, 511
	._LINE	0, 511
	LDI	#0,R0
	STB	R0,@(FP,-1)	; _err_st
	._LINE	0, 513
	LDI:20	#_IO_LVD+3,R2
	BAND	#0xF7,@R2
	._LINE	0, 516
	LDI:20	#_IO_FxR_OBF+12,R0
	LD	@R0,R0	; _IO_FxR_OBF
	LD	@(FP,8),R1	; _mbs_dat
	ST	R0,@R1
	._LINE	0, 522
	LD	@(FP,8),R0	; _mbs_dat
	LD	@R0,R3
	LDI	#1108,R0
	AND	R0,R3
	BEQ20	L_152,R12
L_151:				// Pred: L_150
	._LINE	0, 522
	._LINE	0, 523
	LDI	#1,R0
	STB	R0,@(FP,-1)	; _err_st
	._LINE	0, 524
L_152:				// Pred: L_151 L_150
	._LINE	0, 530
	LD	@(FP,8),R0	; _mbs_dat
	LD	@R0,R4
	LDI	#2216,R0
	AND	R0,R4
	BEQ20	L_154,R12
L_153:				// Pred: L_152
	._LINE	0, 530
	._LINE	0, 531
	LDI	#1,R0
	STB	R0,@(FP,-1)	; _err_st
	._LINE	0, 532
L_154:				// Pred: L_153 L_152
	._LINE	0, 534
	BAND	#0xF7,@R2
	._LINE	0, 536
	LDUB	@(FP,-1),R4	; _err_st
L_155:				// Pred: L_154
	._LINE	0, 536
	._CONFIG	E
	._LINE	0, 537
	LEAVE
	LD	@SP+,RP
	ADDSP	#4
	RET
	._CONFIG	E
	._SYMBOL	"_DUXFXAccessReceivedData", F, 0x80000008, S, "__DUXFXAccessReceivedData", F
	._FPARAM	S, 1, F
	._SYMBOL	"word", P, 0x80000004, A, 10
	._FPARAM	E
	._CONFIG	S, F, 1
	._LINE	0, 545
__DUXFXAccessReceivedData:
L_156:
	ST	R4,@-SP
	ST	RP,@-SP
	ENTER	#8
;-------end_of_no_optimize_block
	._FUNCTION	"fp", "fp", 48
	._CONFIG	S, B
	._SYMBOL	"recv_Data", V, 0x80000008, A, -4
L_157:				// Pred: L_156
	._LINE	0, 547
	._LINE	0, 549
	LDI:20	#_IO_LVD+3,R0
	BAND	#0xF7,@R0
	._LINE	0, 551
	LDUH	@(FP,10),R13	; _word
	LSL	#2,R13
	LDI:20	#_IO_FxR_RDDS,R0
	LD	@(R0,R13),R0	; _IO_FxR_RDDS
	ST	R0,@(FP,-4)	; _recv_Data
	._LINE	0, 553
	LD	@(FP,-4),R4	; _recv_Data
L_158:				// Pred: L_157
	._LINE	0, 553
	._CONFIG	E
	._LINE	0, 554
	LEAVE
	LD	@SP+,RP
	ADDSP	#4
	RET
	._CONFIG	E
	._SYMBOL	"_DUXFXTransmitData", F, 0x8000000f, S, "__DUXFXTransmitData", F
	._FPARAM	S, 2, F
	._SYMBOL	"word", P, 0x80000004, A, 10
	._SYMBOL	"tran_Data", P, 0x80000008, A, 12
	._FPARAM	E
	._CONFIG	S, F, 1
	._LINE	0, 560
__DUXFXTransmitData:
L_159:
	STM	(R4,R5)
	ST	RP,@-SP
	ENTER	#4
;-------end_of_no_optimize_block
	._FUNCTION	"fp", "fp", 40
	._CONFIG	S, B
L_160:				// Pred: L_159
	._LINE	0, 562
	LDI:20	#_IO_LVD+3,R0
	BAND	#0xF7,@R0
	._LINE	0, 564
	LDUH	@(FP,10),R13	; _word
	LSL	#2,R13
	LD	@(FP,12),R0	; _tran_Data
	LDI:20	#_IO_FxR_WRDS,R1
	ST	R0,@(R1,R13)	; _IO_FxR_WRDS
	._LINE	0, 565
L_161:				// Pred: L_160
	._LINE	0, 565
	._CONFIG	E
	._LINE	0, 566
	LEAVE
	LD	@SP+,RP
	ADDSP	#8
	RET
	._CONFIG	E
	._SYMBOL	"_DUXFXTransmitControl", F, 0x8000000f, S, "__DUXFXTransmitControl", F
	._FPARAM	S, 1, F
	._SYMBOL	"MsgbuffNo", P, 0x80000008, A, 8
	._FPARAM	E
	._CONFIG	S, F, 1
	._LINE	0, 574
__DUXFXTransmitControl:
L_358:
	ST	R4,@-SP
	ST	RP,@-SP
	ENTER	#4
;-------end_of_no_optimize_block
	._FUNCTION	"fp", "fp", 40
	._CONFIG	S, B
L_359:				// Pred: L_358
	._LINE	0, 576
	LDI:20	#_IO_LVD+3,R2
	BAND	#0xF7,@R2
	._LINE	0, 579
L_360:				// Pred: L_359
	._LINE	0, 579
	LDI:20	#_IO_FxR_IBF+20,R3
	LD	@R3,R0	; _IO_FxR_IBF
	LSL	#16,R0
	BP20	L_364,R12
L_361:				// Pred: L_360
	._LINE	0, 579
L_362:				// Pred: L_363 L_361
	._LINE	0, 579
	BAND	#0xF7,@R2
L_363:				// Pred: L_362
	._LINE	0, 579
	LD	@R3,R0	; _IO_FxR_IBF
	LSL	#16,R0
	BN20	L_362,R12
L_439:				// Pred: L_363
	._LINE	0, 584
L_364:				// Pred: L_439 L_360
	._LINE	0, 584
	LDI:20	#_IO_FxR_IBF+16,R0
	LDI	#6,R1
	ST	R1,@R0	; _IO_FxR_IBF
	._LINE	0, 588
	LD	@(FP,8),R1	; _MsgbuffNo
	LDI	#127,R0
	AND	R0,R1
	ST	R1,@R3	; _IO_FxR_IBF
	._LINE	0, 590
	BAND	#0xF7,@R2
	._LINE	0, 591
L_365:				// Pred: L_364
	._LINE	0, 591
	._CONFIG	E
	._LINE	0, 592
	LEAVE
	LD	@SP+,RP
	ADDSP	#4
	RET
	._CONFIG	E
	._SYMBOL	"_DUXFXGetReceivedBufferNumber", F, 0x80000004, S, "__DUXFXGetReceivedBufferNumber", F
	._FPARAM	S, 0, F
	._FPARAM	E
	._CONFIG	S, F, 1
	._LINE	0, 598
__DUXFXGetReceivedBufferNumber:
L_367:
	ST	RP,@-SP
	ENTER	#16
	STM	(R8)
;-------end_of_no_optimize_block
	._FUNCTION	"fp", "fp", 32
	._CONFIG	S, B
	._SYMBOL	"i", V, 0x80000005, A, -12
	._SYMBOL	"buffno", V, 0x80000008, A, -8
	._SYMBOL	"ndat_data", V, 0x80000008, A, -4
L_368:				// Pred: L_367
	._LINE	0, 600
	._LINE	0, 600
	LDI	#0,R1
	ST	R1,@(FP,-12)	; _i
	._LINE	0, 601
	LDI	#0,R0
	ST	R0,@(FP,-8)	; _buffno
	._LINE	0, 602
	ST	R0,@(FP,-4)	; _ndat_data
	._LINE	0, 604
	LDI:20	#_IO_LVD+3,R8
	BAND	#0xF7,@R8
	._LINE	0, 607
L_369:				// Pred: L_368
	._LINE	0, 607
	ST	R1,@(FP,-12)	; _i
	LD	@(FP,-12),R0	; _i
	CMP	#4,R0
	BGE20	L_381,R12
L_370:				// Pred: L_369
	._LINE	0, 607
	LDI:20	#L_50443,R5
	LDI:20	#_IO_FxR_MHD+60,R6
	LDI:20	#_IO_FxR_MHD+56,R4
	LDI:20	#_IO_FxR_MHD+52,R3
	LDI:20	#_IO_FxR_MHD+48,R2
L_371:				// Pred: L_380 L_370
	._LINE	0, 608
	._LINE	0, 609
	BAND	#0xF7,@R8
	._LINE	0, 611
	LD	@(FP,-12),R13	; _i
	CMP	#4,R13
	BNC20	L_377,R12
L_428:				// Pred: L_371
	._LINE	0, 611
	LSL	#2,R13
	LD	@(R5,R13),R0
;-------table_branch
	JMP	@R0
	.section	CONST, CONST, align=4
	.align	4
L_50443:
	.word	L_372
	.word	L_373
	.word	L_374
	.word	L_375
	.section	CODE, CODE, align=2
	.align	2
L_372:				// Pred: L_428
	._LINE	0, 613
	LD	@R2,R0	; _IO_FxR_MHD
	ST	R0,@(FP,-4)	; _ndat_data
	BRA20	L_377,R12
L_373:				// Pred: L_428
	._LINE	0, 616
	LD	@R3,R0	; _IO_FxR_MHD
	ST	R0,@(FP,-4)	; _ndat_data
	BRA20	L_377,R12
L_374:				// Pred: L_428
	._LINE	0, 619
	LD	@R4,R0	; _IO_FxR_MHD
	ST	R0,@(FP,-4)	; _ndat_data
	BRA20	L_377,R12
L_375:				// Pred: L_428
	._LINE	0, 622
	LD	@R6,R0	; _IO_FxR_MHD
;-------volatile_access
	ST	R0,@(FP,-4)	; _ndat_data
L_377:				// Pred: L_375 L_374 L_373 L_372
				//	 L_428 L_371
	._LINE	0, 628
	LD	@(FP,-4),R0	; _ndat_data
	CMP	#0,R0
	BEQ20	L_379,R12
L_378:				// Pred: L_377
	._LINE	0, 629
	._LINE	0, 630
	LD	@(FP,-12),R0	; _i
	LSL	#5,R0
	LD	@(FP,-8),R1	; _buffno
	MULU	R0,R1
	MOV	MDL,R0
	ST	R0,@(FP,-8)	; _buffno
	._LINE	0, 631
	LD	@(FP,-4),R4	; _ndat_data
	CALL20	__DUXFXGetWordNo,R12
	ST	R4,@(FP,-8)	; _buffno
	._LINE	0, 632
	BAND	#0xF7,@R8
	._LINE	0, 633
	LD	@(FP,-8),R4	; _buffno
	EXTUH	R4
	BRA20	L_425,R12
L_379:				// Pred: L_377
	._LINE	0, 635
	LD	@(FP,-12),R0	; _i
	ADDN	#1,R0
	ST	R0,@(FP,-12)	; _i
L_380:				// Pred: L_379
	._LINE	0, 607
	LD	@(FP,-12),R0	; _i
	CMP	#4,R0
	BLT20	L_371,R12
L_381:				// Pred: L_380 L_369
	._LINE	0, 637
	LDI	#0,R4
L_425:				// Pred: L_381 L_378
	._LINE	0, 637
L_382:				// Pred: L_425
	._LINE	0, 637
	._CONFIG	E
	._LINE	0, 638
	LDM	(R8)
	LEAVE
	LD	@SP+,RP
	RET
	._CONFIG	E
	._SYMBOL	"_DUXFXGetWordNo", F, 0x80000008, S, "__DUXFXGetWordNo", F
	._FPARAM	S, 1, F
	._SYMBOL	"word_data", P, 0x80000008, A, 8
	._FPARAM	E
	._CONFIG	S, F, 1
	._LINE	0, 642
__DUXFXGetWordNo:
L_184:
	ST	R4,@-SP
	ST	RP,@-SP
	ENTER	#8
	STM	(R8)
;-------end_of_no_optimize_block
	._FUNCTION	"fp", "fp", 48
	._CONFIG	S, B
	._SYMBOL	"word_bitnum", V, 0x80000008, A, -4
L_185:				// Pred: L_184
	._LINE	0, 644
	._LINE	0, 644
	LDI	#0,R0
	ST	R0,@(FP,-4)	; _word_bitnum
	._LINE	0, 646
	LDI:20	#_IO_LVD+3,R8
	BAND	#0xF7,@R8
	._LINE	0, 648
	MOV	FP,R13
	ADDN	#8,R13
	LD	@R13,R0
	EXTUB	R0
	CMP	#0,R0
	BEQ20	L_187,R12
L_186:				// Pred: L_185
	._LINE	0, 649
	._LINE	0, 650
	LD	@R13,R4
	EXTUB	R4
	CALL20	__DUXFXGetBitNo,R12
	LD	@(FP,-4),R0	; _word_bitnum
	ADDN	R4,R0
	ST	R0,@(FP,-4)	; _word_bitnum
	._LINE	0, 651
	BRA20	L_188,R12
L_187:				// Pred: L_185
	._LINE	0, 653
	LD	@R13,R1
	LSL	#16,R1
	LSR	#24,R1
	BEQ20	L_190,R12
L_189:				// Pred: L_187
	._LINE	0, 654
	._LINE	0, 655
	LDI	#8,R0
	ST	R0,@(FP,-4)	; _word_bitnum
	._LINE	0, 656
	LD	@R13,R4
	LSL	#16,R4
	LSR	#24,R4
	EXTUB	R4
	CALL20	__DUXFXGetBitNo,R12
	LD	@(FP,-4),R0	; _word_bitnum
	ADDN	R4,R0
	ST	R0,@(FP,-4)	; _word_bitnum
	._LINE	0, 657
	BRA20	L_188,R12
L_190:				// Pred: L_187
	._LINE	0, 659
	LD	@R13,R2
	LSL	#8,R2
	LSR	#24,R2
	BEQ20	L_193,R12
L_192:				// Pred: L_190
	._LINE	0, 660
	._LINE	0, 661
	LDI	#16,R0
	ST	R0,@(FP,-4)	; _word_bitnum
	._LINE	0, 662
	LD	@R13,R4
	LSL	#8,R4
	LSR	#24,R4
	EXTUB	R4
	CALL20	__DUXFXGetBitNo,R12
	LD	@(FP,-4),R0	; _word_bitnum
	ADDN	R4,R0
	ST	R0,@(FP,-4)	; _word_bitnum
	._LINE	0, 663
	BRA20	L_188,R12
L_193:				// Pred: L_190
	._LINE	0, 665
	LD	@R13,R3
	LSR	#24,R3
	BEQ20	L_196,R12
L_195:				// Pred: L_193
	._LINE	0, 666
	._LINE	0, 667
	LDI	#24,R0
	ST	R0,@(FP,-4)	; _word_bitnum
	._LINE	0, 668
	LD	@R13,R4
	LSR	#24,R4
	EXTUB	R4
	CALL20	__DUXFXGetBitNo,R12
	LD	@(FP,-4),R0	; _word_bitnum
	ADDN	R4,R0
	ST	R0,@(FP,-4)	; _word_bitnum
	._LINE	0, 669
	BRA20	L_188,R12
L_196:				// Pred: L_193
	._LINE	0, 671
	._LINE	0, 672
	BAND	#0xF7,@R8
	._LINE	0, 674
	LDI	#0,R4
	BRA20	L_426,R12
L_188:				// Pred: L_195 L_192 L_189 L_186
	._LINE	0, 677
	BAND	#0xF7,@R8
	._LINE	0, 678
;-------volatile_access
	LD	@(FP,-4),R4	; _word_bitnum
L_426:				// Pred: L_188 L_196
	._LINE	0, 678
L_198:				// Pred: L_426
	._LINE	0, 678
	._CONFIG	E
	._LINE	0, 679
	LDM	(R8)
	LEAVE
	LD	@SP+,RP
	ADDSP	#4
	RET
	._CONFIG	E
	._SYMBOL	"_DUXFXGetBitNo", F, 0x80000008, S, "__DUXFXGetBitNo", F
	._FPARAM	S, 1, F
	._SYMBOL	"byte_data", P, 0x80000002, A, 11
	._FPARAM	E
	._CONFIG	S, F, 1
	._LINE	0, 683
__DUXFXGetBitNo:
L_384:
	ST	R4,@-SP
	ST	RP,@-SP
	ENTER	#12
;-------end_of_no_optimize_block
	._FUNCTION	"fp", "fp", 48
	._CONFIG	S, B
	._SYMBOL	"mask", V, 0x80000002, A, -1
	._SYMBOL	"i", V, 0x80000008, A, -8
L_385:				// Pred: L_384
	._LINE	0, 685
	._LINE	0, 685
	LDI	#1,R0
	STB	R0,@(FP,-1)	; _mask
	._LINE	0, 686
	LDI	#0,R3
	ST	R3,@(FP,-8)	; _i
	._LINE	0, 688
	LDI:20	#_IO_LVD+3,R2
	BAND	#0xF7,@R2
	._LINE	0, 690
L_386:				// Pred: L_385
	._LINE	0, 690
	ST	R3,@(FP,-8)	; _i
	LD	@(FP,-8),R0	; _i
	CMP	#8,R0
	BNC20	L_392,R12
L_387:				// Pred: L_386
	._LINE	0, 690
L_388:				// Pred: L_391 L_387
	._LINE	0, 691
	._LINE	0, 692
	BAND	#0xF7,@R2
	._LINE	0, 694
	LDUB	@(FP,11),R1	; _byte_data
	LDUB	@(FP,-1),R0	; _mask
	AND	R0,R1
	LDUB	@(FP,-1),R0	; _mask
	CMP	R0,R1
	BNE20	L_390,R12
L_389:				// Pred: L_388
	._LINE	0, 695
	._LINE	0, 697
	LD	@(FP,-8),R4	; _i
	BRA20	L_427,R12
L_390:				// Pred: L_388
	._LINE	0, 701
	LDUB	@(FP,-1),R0	; _mask
	LSL	#1,R0
	STB	R0,@(FP,-1)	; _mask
	._LINE	0, 702
	LD	@(FP,-8),R0	; _i
	ADDN	#1,R0
	ST	R0,@(FP,-8)	; _i
L_391:				// Pred: L_390
	._LINE	0, 690
	LD	@(FP,-8),R0	; _i
	CMP	#8,R0
	BC20	L_388,R12
L_392:				// Pred: L_391 L_386
	._LINE	0, 705
	LDI	#0,R4
L_427:				// Pred: L_392 L_389
	._LINE	0, 705
L_393:				// Pred: L_427
	._LINE	0, 705
	._CONFIG	E
	._LINE	0, 706
	LEAVE
	LD	@SP+,RP
	ADDSP	#4
	RET
	._CONFIG	E
	._SYMBOL	"_DUXFXfindBufferForStaticSenderSlot", F, 0x80000003, S, "__DUXFXfindBufferForStaticSenderSlot", F
	._FPARAM	S, 2, F
	._SYMBOL	"slotID", P, 0x80000004, A, 10
	._SYMBOL	"channel", P, 0x80000002, A, 15
	._FPARAM	E
	._CONFIG	S, F, 1
	._LINE	0, 711
__DUXFXfindBufferForStaticSenderSlot:
L_395:
	STM	(R4,R5)
	ST	RP,@-SP
	ENTER	#8
;-------end_of_no_optimize_block
	._FUNCTION	"fp", "fp", 48
	._CONFIG	S, B
	._SYMBOL	"foundIndex", V, 0x80000003, A, -4
	._SYMBOL	"i", V, 0x80000003, A, -2
L_396:				// Pred: L_395
	._LINE	0, 712
	._LINE	0, 712
	LDI:8	#-1,R0
	EXTSB	R0
	STH	R0,@(FP,-4)	; _foundIndex
	._LINE	0, 715
	LDI:20	#_IO_LVD+3,R3
	BAND	#0xF7,@R3
	._LINE	0, 716
L_397:				// Pred: L_396
	._LINE	0, 716
	LDI	#0,R0
	STH	R0,@(FP,-2)	; _i
	LDUH	@(FP,-2),R0	; _i
	EXTSH	R0
	CMP	#1,R0
	BGE20	L_407,R12
L_398:				// Pred: L_397
	._LINE	0, 716
	LDI:20	#_typ_FLX_msgobj,R1
L_399:				// Pred: L_405 L_398
	._LINE	0, 717
	._LINE	0, 718
	BAND	#0xF7,@R3
	._LINE	0, 720
	LDUH	@(FP,-2),R0	; _i
	EXTSH	R0
	CMP	#6,R0
	BLT20	L_401,R12
L_400:				// Pred: L_399
	._LINE	0, 720
	BRA20	L_407,R12
L_401:				// Pred: L_399
	._LINE	0, 721
	LDUH	@(FP,-2),R2	; _i
	EXTSH	R2
	LSL	#4,R2
	MOV	R1,R0
	ADDN	R2,R0
	LDI	#2,R13
	LDUH	@(R0,R13),R0
	LDUH	@(FP,10),R2	; _slotID
	CMP	R2,R0
	BNE20	L_404,R12
L_402:				// Pred: L_401
	._LINE	0, 721
	LDUH	@(FP,-2),R2	; _i
	EXTSH	R2
	LSL	#4,R2
	MOV	R1,R0
	ADDN	R2,R0
	LDI	#1,R13
	LDUB	@(R0,R13),R0
	LDUB	@(FP,15),R2	; _channel
	CMP	R2,R0
	BNE20	L_404,R12
L_403:				// Pred: L_402
	._LINE	0, 722
	._LINE	0, 723
	LDUH	@(FP,-2),R0	; _i
	EXTSH	R0
	STH	R0,@(FP,-4)	; _foundIndex
	._LINE	0, 724
	BRA20	L_407,R12
L_404:				// Pred: L_402 L_401
	._LINE	0, 726
	LDUH	@(FP,-2),R0	; _i
	EXTSH	R0
	ADDN	#1,R0
	STH	R0,@(FP,-2)	; _i
L_405:				// Pred: L_404
	._LINE	0, 716
	LDUH	@(FP,-2),R0	; _i
	EXTSH	R0
	CMP	#1,R0
	BLT20	L_399,R12
L_406:				// Pred: L_405
	._LINE	0, 728
L_407:				// Pred: L_406 L_403 L_400 L_397
	._LINE	0, 728
	BAND	#0xF7,@R3
	._LINE	0, 729
	LDUH	@(FP,-4),R4	; _foundIndex
	EXTSH	R4
L_408:				// Pred: L_407
	._LINE	0, 729
	._CONFIG	E
	._LINE	0, 730
	LEAVE
	LD	@SP+,RP
	ADDSP	#8
	RET
	._CONFIG	E
	._SYMBOL	"_DUXFXfindBufferForDynamicSenderSlot", F, 0x80000003, S, "__DUXFXfindBufferForDynamicSenderSlot", F
	._FPARAM	S, 2, F
	._SYMBOL	"slotID", P, 0x80000004, A, 10
	._SYMBOL	"channel", P, 0x80000002, A, 15
	._FPARAM	E
	._CONFIG	S, F, 1
	._LINE	0, 735
__DUXFXfindBufferForDynamicSenderSlot:
L_410:
	STM	(R4,R5)
	ST	RP,@-SP
	ENTER	#8
;-------end_of_no_optimize_block
	._FUNCTION	"fp", "fp", 48
	._CONFIG	S, B
	._SYMBOL	"foundIndex", V, 0x80000003, A, -4
	._SYMBOL	"i", V, 0x80000003, A, -2
L_411:				// Pred: L_410
	._LINE	0, 736
	._LINE	0, 736
	LDI:8	#-1,R0
	EXTSB	R0
	STH	R0,@(FP,-4)	; _foundIndex
	._LINE	0, 739
	LDI:20	#_IO_LVD+3,R3
	BAND	#0xF7,@R3
	._LINE	0, 740
L_412:				// Pred: L_411
	._LINE	0, 740
	LDI	#1,R0
	STH	R0,@(FP,-2)	; _i
	LDUH	@(FP,-2),R0	; _i
	EXTSH	R0
	CMP	#3,R0
	BGE20	L_422,R12
L_413:				// Pred: L_412
	._LINE	0, 740
	LDI:20	#_typ_FLX_msgobj,R1
L_414:				// Pred: L_420 L_413
	._LINE	0, 741
	._LINE	0, 742
	BAND	#0xF7,@R3
	._LINE	0, 744
	LDUH	@(FP,-2),R0	; _i
	EXTSH	R0
	CMP	#6,R0
	BLT20	L_416,R12
L_415:				// Pred: L_414
	._LINE	0, 744
	BRA20	L_422,R12
L_416:				// Pred: L_414
	._LINE	0, 745
	LDUH	@(FP,-2),R2	; _i
	EXTSH	R2
	LSL	#4,R2
	MOV	R1,R0
	ADDN	R2,R0
	LDI	#2,R13
	LDUH	@(R0,R13),R0
	LDUH	@(FP,10),R2	; _slotID
	CMP	R2,R0
	BNE20	L_419,R12
L_417:				// Pred: L_416
	._LINE	0, 745
	LDUH	@(FP,-2),R2	; _i
	EXTSH	R2
	LSL	#4,R2
	MOV	R1,R0
	ADDN	R2,R0
	LDI	#1,R13
	LDUB	@(R0,R13),R0
	LDUB	@(FP,15),R2	; _channel
	CMP	R2,R0
	BNE20	L_419,R12
L_418:				// Pred: L_417
	._LINE	0, 746
	._LINE	0, 747
	LDUH	@(FP,-2),R0	; _i
	EXTSH	R0
	STH	R0,@(FP,-4)	; _foundIndex
	._LINE	0, 748
	BRA20	L_422,R12
L_419:				// Pred: L_417 L_416
	._LINE	0, 750
	LDUH	@(FP,-2),R0	; _i
	EXTSH	R0
	ADDN	#1,R0
	STH	R0,@(FP,-2)	; _i
L_420:				// Pred: L_419
	._LINE	0, 740
	LDUH	@(FP,-2),R0	; _i
	EXTSH	R0
	CMP	#3,R0
	BLT20	L_414,R12
L_421:				// Pred: L_420
	._LINE	0, 752
L_422:				// Pred: L_421 L_418 L_415 L_412
	._LINE	0, 752
	BAND	#0xF7,@R3
	._LINE	0, 753
	LDUH	@(FP,-4),R4	; _foundIndex
	EXTSH	R4
L_423:				// Pred: L_422
	._LINE	0, 753
	._CONFIG	E
	._LINE	0, 754
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
