missile_tab:
	db 1, 10000000b
	db 0, 11000000b
	db 0, 01100000b
	db 0, 00110000b
	db 0, 00011000b
	db 0, 00001100b
	db 0, 00000110b
	db 0, 00000011b

missile_y:	db	120;96

MissileMotion:
        lxi h, missile_y
        inr m
        ret

MissileSprite:
	lxi h, $c000
	lda missile_y
	mov l, a
	lda frame_scroll
	add l
	mov l, a
	lda player_column       ; missile has same y-position as player
	add h
	mov h, a

	xchg

	lxi h, missile_tab
	lda player_index
	ora a
	ral
	mov c, a
	mvi b, 0
	dad b
	mov b, m
	inx h
	mov c, m

	xchg
	lxi d, 0

	mov a, b                ; a = sprite bits (high)
	cma                     ; a = sprite mask
	mov e, m                ; e = *screen_ptr
	ana e                   ; mask current value
	cmp e                   ; masking changed masked bits? 
	jz .+4                  ; no, skip next instr
	inr d                   ; increment collision flag
	ora b                   ; set sprite bits in a
	mov m, a                ; store new value
	inr h                   ; next column

	mov a, c                ; a = sprite bits (low)
	cma 
	mov e, m
	ana e
	cmp e
	jz .+4
	inr d
	ora c
	mov m, a
	dcr l                   ; next row

	mov a, c
	cma 
	mov e, m
	ana e
	cmp e
	jz .+4
	inr d
	ora c
	mov m, a
	dcr h                   ; previous column

	mov a, b                ; a = sprite bits(high)
	cma 
	mov e, m
	ana e
	cmp e
	jz .+4
	inr d
	ora b
	mov m, a
	dcr l                   ; next row

	mov a, b                ; a = sprite bits(high)
	cma 
	mov e, m
	ana e
	cmp e
	jz .+4
	inr d
	ora b
	mov m, a
	inr h                   ; next column, etc

	mov a, c
	cma 
	mov e, m
	ana e
	cmp e
	jz .+4
	inr d
	ora c
	mov m, a
	dcr l

	mov a, c
	cma 
	mov e, m
	ana e
	cmp e
	jz .+4
	inr d
	ora c
	mov m, a
	dcr h

	mov a, b
	cma 
	mov e, m
	ana e
	cmp e
	jz .+4
	inr d
	ora b
	mov m, a
	dcr l

	mov a, b
	cma 
	mov e, m
	ana e
	cmp e
	jz .+4
	inr d
	ora b
	mov m, a
	inr h

	mov a, c
	cma 
	mov e, m
	ana e
	cmp e
	jz .+4
	inr d
	ora c
	mov m, a
	dcr l

	mov a, c
	cma 
	mov e, m
	ana e
	cmp e
	jz .+4
	inr d
	ora c
	mov m, a
	dcr h

	mov a, b
	cma 
	mov e, m
	ana e
	cmp e
	jz .+4
	inr d
	ora b
	mov m, a
	dcr l

	mov a, b
	cma 
	mov e, m
	ana e
	cmp e
	jz .+4
	inr d
	ora b
	mov m, a
	inr h

	mov a, c
	cma 
	mov e, m
	ana e
	cmp e
	jz .+4
	inr d
	ora c
	mov m, a
	dcr l

	mov a, c
	cma 
	mov e, m
	ana e
	cmp e
	jz .+4
	inr d
	ora c
	mov m, a
	dcr h

	mov a, b
	cma 
	mov e, m
	ana e
	cmp e
	jz .+4
	inr d
	ora b
	mov m, a
	dcr l


	ret

MissileWipe:
	lxi h, $c000
	lda missile_y
	mov l, a
	lda frame_scroll_prev
	add l
	mov l, a
	lda player_column       ; missile has same y-position as player
	add h
	mov h, a

	xchg

	lxi h, missile_tab
	lda player_index
	ora a
	ral
	mov c, a
	mvi b, 0
	dad b
	mov b, m
	inx h
	mov c, m

	xchg
	lxi d, 0

	mov a, b                ; a = sprite bits (high)
	cma                     ; a = sprite mask
	mov e, m                ; e = *screen_ptr
	ana e                   ; mask current value
	mov m, a                ; store new value
	inr h                   ; next column

	mov a, c                ; a = sprite bits (low)
	cma 
	mov e, m
	ana e
	mov m, a
	dcr l                   ; next row

	mov a, c
	cma 
	mov e, m
	ana e
	mov m, a
	dcr h                   ; previous column

	mov a, b                ; a = sprite bits(high)
	cma 
	mov e, m
	ana e
	mov m, a
	dcr l                   ; next row

	mov a, b                ; a = sprite bits(high)
	cma 
	mov e, m
	ana e
	mov m, a
	inr h                   ; next column, etc

	mov a, c
	cma 
	mov e, m
	ana e
	mov m, a
	dcr l

	mov a, c
	cma 
	mov e, m
	ana e
	mov m, a
	dcr h

	mov a, b
	cma 
	mov e, m
	ana e
	mov m, a
	dcr l

	mov a, b
	cma 
	mov e, m
	ana e
	mov m, a
	inr h

	mov a, c
	cma 
	mov e, m
	ana e
	mov m, a
	dcr l

	mov a, c
	cma 
	mov e, m
	ana e
	mov m, a
	dcr h

	mov a, b
	cma 
	mov e, m
	ana e
	mov m, a
	dcr l

	mov a, b
	cma 
	mov e, m
	ana e
	mov m, a
	inr h

	mov a, c
	cma 
	mov e, m
	ana e
	mov m, a
	dcr l

	mov a, c
	cma 
	mov e, m
	ana e
	mov m, a
	dcr h

	mov a, b
	cma 
	mov e, m
	ana e
	mov m, a
	dcr l

	ret



; vi:syntax=m80
; vi:ts=8
; vi:sts=8
