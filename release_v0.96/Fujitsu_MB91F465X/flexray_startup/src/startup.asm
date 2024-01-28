;==============================================================
; FR60 MB91F465X sample program Ver.0.??? 
; Target board startup routine
; Sample program for initialization
;==============================================================

;--------------------------------------------------------------------------
; INCLUDE
;--------------------------------------------------------------------------

#include "..\IO_MB91465X_V01L03\_fr.h"
#include "..\h_file\system.h"

;--------------------------------------------------------------------------
; external declaration of symbols
;--------------------------------------------------------------------------

	.export	__start
	.import	_main
	.global	_RAM_INIT
	.global	_ROM_INIT

;--------------------------------------------------------------------------
; definition to stack area
; 
;--------------------------------------------------------------------------

#define STACK_SIZE	1*1024-4	; definition stack size, 2K bytes
;#define STACK_SIZE	0x400-8		; definition stack size, 2K bytes
	.section	STACK, stack, align=4
;	.section	stack_bits, stack, align=4
	.res.b		STACK_SIZE
stack_top:
	.res.w	1

;--------------------------------------------------------------------------
; definition to start address of data, const and code section
;--------------------------------------------------------------------------
	.section	DATA,	data,	align=4
	.section	INIT,	data,	align=4
	.section	CONST,	const,	align=4
	.section	CODE,	code,	align=2
	
;--------------------------------------------------------------------------
; start program
;--------------------------------------------------------------------------
__start

__sampletest:	; initial main

	
	ldi	#0xD50,r0;
	ldi	#0x0F,r1;
	stb	r1,@r0;
	ldi	#0x00,r1
	ldi	#0x01,r2
__sampleloop:
	ldi	#0x10,r0;
	stb	r1,@r0
	add r2,r1
	
	ldi	#0xfffff,r3
	__samplewait:
	
	;------------------------------------------
	; clear Hardware WatchDog Timer
	;------------------------------------------
	ldi	#0x4C7,r5
	ldi	#0x10,r6
	stb	r6,@r5

	
	sub r2,r3
;	beq	__sampleloopend
;	bra	__samplewait
;__sampleloopend
	nop
	ldi	#0xff,r4
	cmp	r4,r1
;	beq __sampleloop2
	
;	bra	__sampleloop
;__sampleloop2
	ldi	#0x00,r1
	nop
;	bra	__sampleloop
	




;--------------------------------------------------------------------------
; set stack pointer register
;--------------------------------------------------------------------------
	ldi #stack_top, sp

;--------------------------------------------------------------------------
; set TBR
;--------------------------------------------------------------------------
;Indispensable setting for monitor debugger
	ldi #tbrval, r0 		
	mov r0, tbr       		

;--------------------------------------------------------------------------
; zero clear of DATA section
;--------------------------------------------------------------------------
#macro	FILL04	src_addr
#local	L0, L1, L2, LE
	ldi:8	#0, r0
	ldi	#sizeof src_addr &~0x3, r1
	ldi	#src_addr, r13
	cmp	#0, r1
	beq	L1
L0:
	add2	#-4, r1
	bne:d	L0
	st	r0, @(r13, r1)
L1:
	ldi:8	#sizeof src_addr & 0x3, r1
	ldi	#src_addr + (sizeof src_addr & ~0x3), r13
	cmp	#0, r1
	beq	LE
L2:
	add2	#-1, r1
	bne:d	L2
	stb	r0, @(r13, r1)
LE:
#endm

	FILL04	DATA

;--------------------------------------------------------------------------
; INIT DATA copy
;--------------------------------------------------------------------------
	ldi	#_RAM_INIT, r0
	ldi	#_ROM_INIT, r1
	ldi	#sizeof INIT, r13
	cmp	#0, r13
	beq	data_cpy_end
data_cpy:
	add2	#-1, r13
	ldub	@(r13, r1), r12
	bne:d	data_cpy
	stb	r12, @(r13, r0)
data_cpy_end:

;--------------------------------------------------------------------------
; C library initialize
;--------------------------------------------------------------------------
;	call32	__stream_init, r12

;--------------------------------------------------------------
; Call main function
;--------------------------------------------------------------
start_main:
 call32 _main, r12

;--------------------------------------------------------------
; undefine external interupt (software reset)
;--------------------------------------------------------------
 .export __default_vect
__default_vect:
 ldi:32 #0x00000481, r0		;STCR
 ldub @r0, r1
 ldi:8 #0xEF, r2
 and r1, r2
 stb r2, @r0


end:
 .end __start
