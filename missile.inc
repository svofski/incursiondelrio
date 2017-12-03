MISSILE_START_ROW       equ 94

missile_tab:
	db 1, 10000000b
	db 0, 11000000b
	db 0, 01100000b
	db 0, 00110000b
	db 0, 00011000b
	db 0, 00001100b
	db 0, 00000110b
	db 0, 00000011b

missile_onscreen:       db 0    ; 1 = missile is on screen
missile_y:	        db 0    ; missile position
missile_hit:            db 0    ; 1 = hit detected

MissileMotion:
        lxi h, missile_onscreen ; missile flying already?
        mov a, m
        ora a
        jnz mm_move

        lda input_fire          ; fire button down? 
        ora a
        jz mm_return

mm_fire:                        ; new missile
        inr m                   ; missile_onscreen = 1

        inx h                   ; h = &missile_y
        mvi m, MISSILE_START_ROW; missile_y = MISSILE_START_ROW

mm_move:                        ; propel the missile forward
        lxi h, missile_y
        inr m                   ; 2 lines / frame seems to be fine
        inr m                   ; as long as MISSILE_START_ROW is even
        rnz                     ; this check should be fine
        dcx h                   ; h = &missile_onscreen
        dcr m                   ; missile_onscreen = 0

mm_return:
        ret

MissileSprite:
        lda missile_onscreen    ; if missile is not there, return right away
        ora a
        rz

        lxi h, $a000            ; test collision on layer $a000
        call MissileTest
        mov a, d
        ora a 
        jnz missl_collision_test; if test positive, kaboom to do, exit early

        lxi h, $8000            ; test collision on layer $8000
        call MissileTest
        mov a, d
        ora a
        jnz missl_collision_test; if test positive, kaboom ahead, exit early

	lxi h, $c000            ; draw on layer $c000, also test collision
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

missl_collision_test:
        mov a, d
        sta missile_hit
        ora a
        rz
        ; enable next missile 
        xra a
        sta missile_onscreen

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


        ; Only test collision on layer in hl ($8000, a0000)
        ; $c000 layer is tested in the drawing part
        ; input: HL = layer
        ; return d != 0 if collision detected
MissileTest:
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
	lxi d, $100             ; d = 1, assume collision

	mov a, b                ; a = sprite bits (high)
	cma                     ; a = sprite mask
	mov e, m                ; e = *screen_ptr
	ana e                   ; mask current value
	cmp e                   ; masking changed masked bits? 
	rnz                     ; if different, collision: return with d = 1
	inr h                   ; next column

	mov a, c                ; a = sprite bits (low)
	cma 
	mov e, m
	ana e
	cmp e
        rnz
	dcr l                   ; next row

	mov a, c
	cma 
	mov e, m
	ana e
	cmp e
        rnz
	dcr h                   ; previous column

	mov a, b                ; a = sprite bits(high)
	cma 
	mov e, m
	ana e
	cmp e
        rnz
	dcr l                   ; next row

	mov a, b                ; a = sprite bits(high)
	cma 
	mov e, m
	ana e
	cmp e
        rnz
	inr h                   ; next column, etc

	mov a, c
	cma 
	mov e, m
	ana e
	cmp e
        rnz
	dcr l

	mov a, c
	cma 
	mov e, m
	ana e
	cmp e
        rnz
	dcr h

	mov a, b
	cma 
	mov e, m
	ana e
	cmp e
        rnz
	dcr l

	mov a, b
	cma 
	mov e, m
	ana e
	cmp e
        rnz
	inr h

	mov a, c
	cma 
	mov e, m
	ana e
	cmp e
        rnz
	dcr l

	mov a, c
	cma 
	mov e, m
	ana e
	cmp e
        rnz
	dcr h

	mov a, b
	cma 
	mov e, m
	ana e
	cmp e
        rnz
	dcr l

	mov a, b
	cma 
	mov e, m
	ana e
	cmp e
        rnz
	inr h

	mov a, c
	cma 
	mov e, m
	ana e
	cmp e
        rnz
	dcr l

	mov a, c
	cma 
	mov e, m
	ana e
	cmp e
        rnz
	dcr h

	mov a, b
	cma 
	mov e, m
	ana e
	cmp e
        rnz
	dcr d                   ; no collisions, return d = 0
	ret


; vi:syntax=m80
; vi:ts=8
; vi:sts=8
