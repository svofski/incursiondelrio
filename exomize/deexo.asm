;Распаковщик для архиватора Exomizer2
;Рекомпиляция Z80->КР580ВМ80 и ->КР580ВМ1 Иван Городецкий, 2009
;HL - адрес упакованных данных
;DE - куда распаковывать

			.org 0a000h
;#define	VM1 	;для того чтобы транслировать вариант, оптимизированный для ВМ1, эту строку нужно раскомментировать

deexo:
#ifdef VM1
			lxi	h1,exo_mapbasebits
#else
;Инициализация IY для варианта КР580ВМ80
			lxi 	h, packed_data
			push	h			; ld	  IY, exo_mapbasebits
			lxi	h, exo_mapbasebits;
			shld	IY	  		;
			pop	h			;
;если распаковщик вызывается только один раз, то инициализацию IY для КР580ВМ80 можно убрать
#endif
			mov	a, m
			inx	h
			sta	IXH+1	 		; ld	  IXH, A
			mvi	b, 034h
			push	d
exo_initbits:	mov	a, b
			sui	004h
			ani	00Fh
			jnz	exo_node1		; jr	  nz, exo_node1
			lxi	d, 1
exo_node1:		mvi	c, 010h
exo_get4bits:	call	exo_getbit
			mov	a, c			; rl	  C
			ral				;
			mov	c, a			;
			jnc	exo_get4bits	; jr	  nc, exo_get4bits
			push	h
#ifdef VM1
			mov	m1,c
#else
			lhld	IY			; ld	  (IY+000h), C
			mov	m, c			;
#endif
			inr	c
			lxi	h, 0
			stc
exo_setbit:
#ifdef VM1
			cs\ dad h
#else
			jc	AdcC			; adc	  HL, HL
			dad	h
			jmp	AdcEx
AdcC:			dad	h
			inx	h
AdcEx:
#endif
			dcr	c
			jnz	exo_setbit		; jr	  nz, exo_setbit
#ifdef VM1
			push	h1
			xthl
			push	b
			lxi	b,34h
			dad	b
			mov	m,e
			dad	b
			pop	b
			mov	m,d
			pop	h
			inx	h1
#else
			push	h			; ld	  (IY+034h), E
			push	b
			lhld	IY			;
			inx	h			; inc	  IY (переставил сюда)
			shld	IY			;
			lxi	b, 00033h		;
			dad	b			;
			mov	m, e			;
			inr	c			; ld	  (IY+068h), D
			dad	b			;
			mov	m, d			;
			pop	b			;
			pop	h			;
#endif
			dad	d
			xchg
			pop	h
			dcr	b			; djnz  exo_initbits
			jnz	exo_initbits
			pop	d
exo_mainloop:	mvi	c, 001h
			call	exo_getbit
			jc	exo_literalcopy	; jr	  c, exo_literalcopy
			mvi	c, 0FFh
exo_getindex:	inr	c
			call	exo_getbit
			jnc	exo_getindex	; jr	  nc, exo_getindex
			mov	a, c
			cpi	010h
			rz
			jc	exo_continue	; jr	  c, exo_continue
			push	d
			mvi	d, 010h
			call	exo_getbits
			pop	d
exo_literalcopy:
			call	Ldir
			jmp	exo_mainloop	; jr	  exo_mainloop
exo_continue:	push	d
			call	exo_getpair
			push	b			; ld	  (exo_lenght+1), BC
			xthl				;
			shld	exo_lenght+1	;
			pop	h			;
			lxi	d, 00230h
			dcx	b
			mov	a, b
			ora	c
			jz	exo_goforit		; jr	  z, exo_goforit
			lxi	d, 00420h
			dcx	b
			mov	a, b
			ora	c
			jz	exo_goforit		; jr	  z, exo_goforit
			mvi	e, 010h
exo_goforit:	call	exo_getbits
			mov	a, e
			add	c
			mov	c, a
			call	exo_getpair
			pop	d
			push	h
			mov	h, d
			mov	l, e
#ifdef VM1
			cs\ dsub b
#else
			mov	a, l			; sbc	  HL, BC
			sbb	c			;
			mov	l, a			;
			mov	a, h			;
			sbb	b			;
			mov	h, a			;
#endif
exo_lenght:		lxi	b, 0
			call	Ldir
			pop	h
			jmp	exo_mainloop	; jr	  exo_mainloop
exo_getpair:
#ifdef VM1
			lxi	h1,exo_mapbasebits
			mvi	b,0
			rs\ dad b
			mov	d,m1
			call	exo_getbits
			push	h1
			xthl
			push	b
			lxi	b,34h
			dad	b
			mov	a,m
			dad	b
			pop	b
			mov	h,m
			mov	l,a
			dad	b
			mov	b,h
			mov	c,l
			pop	h
#else
			push	h			; ld	  IY, exo_mapbasebits
			lxi	h, exo_mapbasebits;
			mvi	b, 000h
			dad	b			; add	  IY, BC
			shld	IY			;
			mov	d, m			; ld	  D, (IY+000h)
			pop	h			;
			call	exo_getbits
			push	h
			lhld	IY
			push	b
			lxi	b,34h
			dad	b
			mov	a,m
			dad	b
			pop	b
			mov	h,m
			mov	l,a
			dad	b
			mov	b,h
			mov	c,l
			pop	h
#endif
			ret
exo_getbits:	lxi	b, 0
exo_gettingbits:	dcr	d
			rm
			call	exo_getbit
			mov	a, c			; rl	  C
			ral				;
			mov	c, a			;
			mov	a, b			; rl	  B
			ral				;
			mov	b, a			;
			jmp	exo_gettingbits	; jr	  exo_gettingbits
exo_getbit:
IXH:			mvi	a,0			; ld	  A, IXH
			ora	a			; srl	  A
			rar				;
			sta	IXH+1			; ld	  IXH, A
;чтобы корректно обрабатывать флаг Z
			push	psw
			ora	a
			jz	Zero
			pop	psw
			ret
Zero:			pop	psw
			mov	a, m
			inx	h
			rar
			sta	IXH+1			; ld	  IXH, A
			ret
Ldir:
			mov	a, m			; ldir
			stax	d			;
			inx	h			;
			inx	d			;
			dcx	b			;
			mov	a, b			;
			ora	c			;
			jnz	$-7			;
			ret

;exo_mapbasebits	.ds	156			;чтобы уменьшить размер результирующего файла, можно задавать адрес exo_mapbasebits с помощью .equ
exo_mapbasebits		.equ 	0e000h			
#ifndef VM1
IY			.dw	exo_mapbasebits
#endif
packed_data:
			.end