//					FR Family SOFTUNE cpcom V65L06
	.program	"ports"
	.library	"lib911.lib"
	._LANGUAGE	C_FR20, N, U, F
	._FILE	"Y:\FlexRayDriver\Fujitsu_MB91F465X\flexray_startup\src\ports.c", 0
	._FILE	"Y:\FlexRayDriver\Fujitsu_MB91F465X\flexray_startup\src\..\IO_MB91465X_V01L03\mb91f465x.h", 1
	._FILE	"Y:\FlexRayDriver\Fujitsu_MB91F465X\flexray_startup\src\..\IO_MB91465X_V01L03\_fr.h", 2
	._FILE	"Y:\FlexRayDriver\Fujitsu_MB91F465X\flexray_startup\src\..\h_file\FLX_regist_defines.h", 3
	._FILE	"Y:\FlexRayDriver\Fujitsu_MB91F465X\flexray_startup\src\..\h_file\..\h_file\platform_types.h", 4
	._FILE	"Y:\FlexRayDriver\Fujitsu_MB91F465X\flexray_startup\src\..\h_file\ports.h", 5
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
	.section	CODE, CODE, align=2
	.global	_DUXPortsInit
	._SYMBOL	"DUXPortsInit", F, 0x8000000f, E, "_DUXPortsInit", F
	._FPARAM	S, 0, F
	._FPARAM	E
	._CONFIG	S, F, 1
	._LINE	0, 28
_DUXPortsInit:
L_20:
	ST	RP,@-SP
	ENTER	#4
;-------end_of_no_optimize_block
	._FUNCTION	"fp", "fp", 16
	._CONFIG	S, B
L_21:				// Pred: L_20
	._LINE	0, 30
	LDI	#255,R0
	MOV	R0,R13
	DMOVB	R13,@_IO_PDR14	; _IO_PDR14
	._LINE	0, 31
	LDI:20	#_IO_PORT2+142,R2
	LDI	#0,R1
	STB	R1,@R2	; _IO_PORT2
	._LINE	0, 32
	LDI:20	#_IO_PORT2+78,R2
	STB	R0,@R2	; _IO_PORT2
	._LINE	0, 35
	LDI	#63,R2
	MOV	R2,R13
	DMOVB	R13,@_IO_PDR15	; _IO_PDR15
	._LINE	0, 36
	LDI:20	#_IO_PORT2+143,R3
	STB	R1,@R3	; _IO_PORT2
	._LINE	0, 37
	LDI:20	#_IO_PORT2+79,R3
	STB	R2,@R3	; _IO_PORT2
	._LINE	0, 40
	MOV	R1,R13
	DMOVB	R13,@_IO_PDR16	; _IO_PDR16
	._LINE	0, 41
	LDI:20	#_IO_PORT2+144,R2
	STB	R1,@R2	; _IO_PORT2
	._LINE	0, 42
	LDI:20	#_IO_PORT2+80,R3
	LDI	#143,R2
	STB	R2,@R3	; _IO_PORT2
	._LINE	0, 45
	MOV	R0,R13
	DMOVB	R13,@_IO_PDR17	; _IO_PDR17
	._LINE	0, 46
	LDI:20	#_IO_PORT2+145,R2
	STB	R1,@R2	; _IO_PORT2
	._LINE	0, 47
	LDI:20	#_IO_PORT2+81,R2
	STB	R0,@R2	; _IO_PORT2
	._LINE	0, 50
	MOV	R1,R13
	DMOVB	R13,@_IO_PDR18	; _IO_PDR18
	._LINE	0, 51
	LDI:20	#_IO_PORT2+146,R2
	STB	R1,@R2	; _IO_PORT2
	._LINE	0, 52
	LDI:20	#_IO_PORT2+82,R2
	LDI	#119,R4
	STB	R4,@R2	; _IO_PORT2
	._LINE	0, 55
	LDI:20	#_IO_PORT2+150,R2
	LDI	#3,R3
	STB	R3,@R2	; _IO_PORT2
	._LINE	0, 58
	LDI:20	#_IO_PORT2+151,R2
	STB	R3,@R2	; _IO_PORT2
	._LINE	0, 61
	LDI:20	#_IO_PORT2+152,R2
	BAND	#0xDF,@R2
	._LINE	0, 62
	LDI:20	#_IO_PORT2+88,R2
	BAND	#0xDF,@R2
	._LINE	0, 65
	DMOVB	R13,@_IO_PDR27	; _IO_PDR27
	._LINE	0, 66
	LDI:20	#_IO_PORT2+155,R2
	STB	R1,@R2	; _IO_PORT2
	._LINE	0, 67
	LDI:20	#_IO_PORT2+91,R2
	LDI	#15,R3
	STB	R3,@R2	; _IO_PORT2
	._LINE	0, 70
	MOV	R0,R13
	DMOVB	R13,@_IO_PDR29	; _IO_PDR29
	._LINE	0, 71
	LDI:20	#_IO_PORT2+157,R2
	STB	R1,@R2	; _IO_PORT2
	._LINE	0, 72
	LDI:20	#_IO_PORT2+93,R2
	STB	R0,@R2	; _IO_PORT2
	._LINE	0, 81
	LDI:20	#_IO_PORT2+159,R0
	STB	R4,@R0	; _IO_PORT2
	._LINE	0, 82
	LDI:20	#_IO_PORT2+223,R0
	STB	R4,@R0	; _IO_PORT2
	._LINE	0, 83
	MOV	R1,R13
	DMOVB	R13,@_IO_PDR31	; _IO_PDR31
	._LINE	0, 84
	LDI:20	#_IO_PORT2+95,R0
	LDI	#51,R1
	STB	R1,@R0	; _IO_PORT2
	._LINE	0, 87
	LDI:20	#_IO_PORT2+156,R0
	BOR	#0x2,@R0
	._LINE	0, 88
	BOR	#0x4,@R0
	._LINE	0, 91
	LDI:20	#_IO_PORTEN,R0
	BOR	#0x1,@R0
L_22:				// Pred: L_21
	._LINE	0, 91
	._CONFIG	E
	._LINE	0, 92
	LEAVE
	LD	@SP+,RP
	RET
	._CONFIG	E
	.end	
