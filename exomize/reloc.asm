	.org 100h
	di
	xra a
	out 10h
	lxi sp, datastart
	lxi h, 0A000h
	lxi d, 03000h ; size in words
puu1:	pop b
	mov m, c
	inx h
	mov m, b
	inx h
	dcx d
	mov a, d
	ora e
	jnz puu1
	lxi h, 100h
	sphl
	push h
	lxi d, 100h ; unpack here
	jmp 0a000h
datastart:	
	.end