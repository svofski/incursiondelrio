KeyboardScan:
	mvi a, 10001010b
	out 0
	mvi a, $fe ; row 0
	out 03
	in 02
	lxi h, 0
	shld inputs
	shld inputs+2

	mvi b, $ff
	lxi h, inputs
	rlc
	jc ks_1
	mov m, b
ks_1:
	inx h
	rlc
	jc ks_2
	mov m, b
ks_2:
	inx h
	rlc
	jc ks_3
	mov m, b
ks_3:
	inx h
	rlc
	jc ks_4
	mov m, b
ks_4:
	mvi a, $88
	out 0
	ret