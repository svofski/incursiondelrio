;; Player Y position (fixed)
PLAYER_Y	        equ 64+20

player_collision:	db 0

;; Player X position as column + index offset within the column
player_column:		db 15
player_index:   	db 4

player_dir:	        db 0

player_ptr:	        dw player_bank_ltr_dispatch + 2; player_up_ltr_dispatch+2

playerXspeed:		db 0
playerXaccu:		db 255	

YSPEED_DEFAULT		equ 76
YSPEED_MAX	        equ 128
YSPEED_MIN	        equ 48

playerYspeed:		db YSPEED_DEFAULT
playerYaccu:		db 0

ScrollAccu:
	mvi d, 0
	lda playerYspeed
	mov b, a
	lda playerYaccu
	add b
	jnc saccu_1
	inr d
saccu_1:
	add b
	jnc saccu_2
	inr d
saccu_2:
	add b
	jnc saccu_3
	inr d
saccu_3:
	add b
	jnc saccu_4
	inr d
saccu_4:
	sta playerYaccu
	ret


PlayerSpeed:
	lda input_up
	ora a
	jnz ps_throttle
	lda input_down
	ora a
	jnz ps_brake
ps_spring:
	lda playerYspeed
	cpi YSPEED_DEFAULT
	mvi b, 0
	jz  ps_spring_add
	mvi b, $1; $4 ; $8
	jm 	ps_spring_add
	mvi b, $ff; $fc ; $f8
ps_spring_add:
	add b
	jmp ps_exit_sta

ps_throttle:
	lda playerYspeed
	cpi YSPEED_MAX
	jm ps_throttle_1
	jmp ps_exit
ps_throttle_1:
	adi 1; 4; 8
	sta playerYspeed
	jmp ps_exit

ps_brake:
	lda playerYspeed
	cpi YSPEED_MIN
	jnc  ps_brake_1
	;jnz ps_brake_1
	jmp ps_exit
ps_brake_1:
	sui 1;4; 8
ps_exit_sta:
	sta playerYspeed
ps_exit:
	ret

PlayerMotion:
	mvi d, $ff
	lda input_left
	ora a
	jnz pm_input_leftright
	mvi d, 1
	lda input_right
	ora a
	jnz pm_input_leftright
	
	; joystick left/right released, clear X speed
	xra a
	sta playerXspeed
	dcr a
	sta playerXaccu
	
	; set the plane straight
	lxi h, player_up_ltr_dispatch+2
	shld player_ptr
	jmp pm_Exit

pm_input_leftright:
	lda playerXspeed
	cpi $80 			; X speed maxed out?
	jz pm_x_accumulate	; yes, no change
	adi $4 				; increase speed
	sta playerXspeed
pm_x_accumulate:
	mov b, a
	mvi c, 0
	lda playerXaccu
	add b
	jnc pm_ilr_1
	dcr c
pm_ilr_1:
	add b
	sta playerXaccu
	jc  pm_playerXstep
	mov a, c
	ora a
	jm  pm_playerXstep
	jmp pm_Exit

	; perform X step, d = direction
pm_playerXstep:
	mov a, d
	ora a
	jm pm_left
	jmp pm_right

pm_left:
	lxi h, player_bank_rtl_dispatch
	shld player_ptr

	lxi h, player_index
	mov a, m
	sui 2 				; move in steps of 2
	jp pm_left_m1
	adi 8
	mov m, a
	dcx h
	dcr m  				; decrement column
	jmp pm_Exit
pm_left_m1:
	mov m, a
	jmp pm_Exit

pm_right:
	lxi h, player_bank_ltr_dispatch+2
	shld player_ptr

	lxi h, player_index
	mov a, m
	adi 2 				; move in steps of 2
	cpi 8
	jm pm_right_m1
	sui 8
	mov m, a
	dcx h
	inr m
	jmp pm_Exit
pm_right_m1:
	mov m, a
pm_Exit:
	ret

PlayerSprite:
        ; Precalculate player bitmap in d
        lhld player_ptr         ; load player base pointer
        mvi d, 0
        lda player_index        ; player column offset
        ora a
        ral
        mov e, a
        dad d                   ; hl = player_ptr[player_index]
        mov e, m        
        inx h
        mov d, m                ; de = &bitmap
        
        push d                  ; will need it three times
        push d

	lxi h, $8000
	shld psw_layer+1
	call PlayerSprite_W     ; mask non-player layers (FUEL) and collision
	mov a, d
	sta player_collision

	lxi h, $a000
	shld psw_layer+1
        pop d                   ; bitmap in d
	call PlayerSprite_W

        xra a
        ora d
        jz $+6
        sta player_collision

	lxi h, $c000
	shld psx_layer+1
        pop d                   ; bitmap in d
	call PlayerSprite_X     ; draw and detect collision
        xra a
        ora d
        rz
        sta player_collision
	ret

PlayerWipe:
	lxi h, $c000
	shld psc_layer+1
	lda frame_scroll_prev
	mov b, a
	call PlayerSprite_C
	ret

        ; Mask out bits in layer psw_layer+1 (e.g. for flying over FUEL)
        ; Also detect collisions
        ; Inputs: 
        ;         de = pointer to bitmap
PlayerSprite_W:
	lxi h, 0
	dad sp 
	shld psw_restoreSP+1

psw_layer:
	lxi h, $c000
	lda player_column
	add h
	mov h, a

        lda frame_scroll
        adi PLAYER_Y
	mov l, a
	; hl -> screen location

	xchg	
	sphl
	xchg

	mvi d, 0

	mov e, l
	;; le big pop
	pop b
        mov a, m                
        ana b                   ; a = m & mask
        cmp m                   ; m != (m & mask) ?
	jz .+4                  
	inr d                   ; not equal, collision
	mov m, a
	dcr l
        mov a, m
        ana c
        cmp m
	jz .+4
	inr d
	mov m, a
	dcr l
        ;
	pop b
        mov a, m                
        ana b                   ; a = m & mask
        cmp m                   ; m != (m & mask) ?
	jz .+4                  
	inr d                   ; not equal, collision
	mov m, a
	dcr l
        mov a, m
        ana c
        cmp m
	jz .+4
	inr d
	mov m, a
	dcr l
        ;
	pop b
        mov a, m                
        ana b                   ; a = m & mask
        cmp m                   ; m != (m & mask) ?
	jz .+4                  
	inr d                   ; not equal, collision
	mov m, a
	dcr l
        mov a, m
        ana c
        cmp m
	jz .+4
	inr d
	mov m, a
	dcr l
        ;
	pop b
        mov a, m                
        ana b                   ; a = m & mask
        cmp m                   ; m != (m & mask) ?
	jz .+4                  
	inr d                   ; not equal, collision
	mov m, a
	dcr l
        mov a, m
        ana c
        cmp m
	jz .+4
	inr d
	mov m, a
	dcr l
        ;
	pop b
        mov a, m                
        ana b                   ; a = m & mask
        cmp m                   ; m != (m & mask) ?
	jz .+4                  
	inr d                   ; not equal, collision
	mov m, a
	dcr l
        mov a, m
        ana c
        cmp m
	jz .+4
	inr d
	mov m, a
	dcr l
        ;
	pop b
        mov a, m                
        ana b                   ; a = m & mask
        cmp m                   ; m != (m & mask) ?
	jz .+4                  
	inr d                   ; not equal, collision
	mov m, a
	dcr l
        mov a, m
        ana c
        cmp m
	jz .+4
	inr d
	mov m, a
	dcr l
        ;
	inr h
	mov l, e
	; column end

	;; le big pop
	pop b
        mov a, m                
        ana b                   ; a = m & mask
        cmp m                   ; m != (m & mask) ?
	jz .+4                  
	inr d                   ; not equal, collision
	mov m, a
	dcr l
        mov a, m
        ana c
        cmp m
	jz .+4
	inr d
	mov m, a
	dcr l
        ;
	pop b
        mov a, m                
        ana b                   ; a = m & mask
        cmp m                   ; m != (m & mask) ?
	jz .+4                  
	inr d                   ; not equal, collision
	mov m, a
	dcr l
        mov a, m
        ana c
        cmp m
	jz .+4
	inr d
	mov m, a
	dcr l
        ;
	pop b
        mov a, m                
        ana b                   ; a = m & mask
        cmp m                   ; m != (m & mask) ?
	jz .+4                  
	inr d                   ; not equal, collision
	mov m, a
	dcr l
        mov a, m
        ana c
        cmp m
	jz .+4
	inr d
	mov m, a
	dcr l
        ;
	pop b
        mov a, m                
        ana b                   ; a = m & mask
        cmp m                   ; m != (m & mask) ?
	jz .+4                  
	inr d                   ; not equal, collision
	mov m, a
	dcr l
        mov a, m
        ana c
        cmp m
	jz .+4
	inr d
	mov m, a
	dcr l
        ;
	pop b
        mov a, m                
        ana b                   ; a = m & mask
        cmp m                   ; m != (m & mask) ?
	jz .+4                  
	inr d                   ; not equal, collision
	mov m, a
	dcr l
        mov a, m
        ana c
        cmp m
	jz .+4
	inr d
	mov m, a
	dcr l
        ;
	pop b
        mov a, m                
        ana b                   ; a = m & mask
        cmp m                   ; m != (m & mask) ?
	jz .+4                  
	inr d                   ; not equal, collision
	mov m, a
	dcr l
        mov a, m
        ana c
        cmp m
	jz .+4
	inr d
	mov m, a
	dcr l
 
        ;; --
	inr h
	mov l, e
	; column end
	;; le big pop
	pop b
        mov a, m                
        ana b                   ; a = m & mask
        cmp m                   ; m != (m & mask) ?
	jz .+4                  
	inr d                   ; not equal, collision
	mov m, a
	dcr l
        mov a, m
        ana c
        cmp m
	jz .+4
	inr d
	mov m, a
	dcr l
        ;
	pop b
        mov a, m                
        ana b                   ; a = m & mask
        cmp m                   ; m != (m & mask) ?
	jz .+4                  
	inr d                   ; not equal, collision
	mov m, a
	dcr l
        mov a, m
        ana c
        cmp m
	jz .+4
	inr d
	mov m, a
	dcr l
        ;
	pop b
        mov a, m                
        ana b                   ; a = m & mask
        cmp m                   ; m != (m & mask) ?
	jz .+4                  
	inr d                   ; not equal, collision
	mov m, a
	dcr l
        mov a, m
        ana c
        cmp m
	jz .+4
	inr d
	mov m, a
	dcr l
        ;
	pop b
        mov a, m                
        ana b                   ; a = m & mask
        cmp m                   ; m != (m & mask) ?
	jz .+4                  
	inr d                   ; not equal, collision
	mov m, a
	dcr l
        mov a, m
        ana c
        cmp m
	jz .+4
	inr d
	mov m, a
	dcr l
        ;
	pop b
        mov a, m                
        ana b                   ; a = m & mask
        cmp m                   ; m != (m & mask) ?
	jz .+4                  
	inr d                   ; not equal, collision
	mov m, a
	dcr l
        mov a, m
        ana c
        cmp m
	jz .+4
	inr d
	mov m, a
	dcr l
        ;
	pop b
        mov a, m                
        ana b                   ; a = m & mask
        cmp m                   ; m != (m & mask) ?
	jz .+4                  
	inr d                   ; not equal, collision
	mov m, a
	dcr l
        mov a, m
        ana c
        cmp m
	jz .+4
	inr d
	mov m, a

psw_restoreSP:
	lxi sp, 0
	ret


        ; Draw the main sprite and detect collision
        ; Inputs:
        ;       de = pointer to bitmap
PlayerSprite_X:
	lxi h, 0
	dad sp 
	shld psx_restoreSP+1

psx_layer:
	lxi h, $c000
	lda player_column
	add h
	mov h, a
        
        lda frame_scroll
        adi PLAYER_Y
	mov l, a
	; hl -> screen location

	xchg	
	sphl
	xchg

	mov e, l
	mvi d, 0
	;; le big pop
	pop b
        mov a, m
        ana b
        cmp m
	jz .+4
	inr d
        cma
        xra b
	mov m, a
	dcr l
	mov a, m
	ana c
	cmp m
	jz .+4
	inr d
        cma
        xra c
	mov m, a
	dcr l
        ;
	pop b
        mov a, m
        ana b
        cmp m
	jz .+4
	inr d
        cma
        xra b
	mov m, a
	dcr l
	mov a, m
	ana c
	cmp m
	jz .+4
	inr d
        cma
        xra c
	mov m, a
	dcr l
        ;
	pop b
        mov a, m
        ana b
        cmp m
	jz .+4
	inr d
        cma
        xra b
	mov m, a
	dcr l
	mov a, m
	ana c
	cmp m
	jz .+4
	inr d
        cma
        xra c
	mov m, a
	dcr l
        ;
	pop b
        mov a, m
        ana b
        cmp m
	jz .+4
	inr d
        cma
        xra b
	mov m, a
	dcr l
	mov a, m
	ana c
	cmp m
	jz .+4
	inr d
        cma
        xra c
	mov m, a
	dcr l
        ;
	pop b
        mov a, m
        ana b
        cmp m
	jz .+4
	inr d
        cma
        xra b
	mov m, a
	dcr l
	mov a, m
	ana c
	cmp m
	jz .+4
	inr d
        cma
        xra c
	mov m, a
	dcr l
        ;
	pop b
        mov a, m
        ana b
        cmp m
	jz .+4
	inr d
        cma
        xra b
	mov m, a
	dcr l
	mov a, m
	ana c
	cmp m
	jz .+4
	inr d
        cma
        xra c
	mov m, a
	dcr l
        ;

	inr h
	mov l, e
	; column end

	;; le big pop
	pop b
        mov a, m
        ana b
        cmp m
	jz .+4
	inr d
        cma
        xra b
	mov m, a
	dcr l
	mov a, m
	ana c
	cmp m
	jz .+4
	inr d
        cma
        xra c
	mov m, a
	dcr l
        ;
	pop b
        mov a, m
        ana b
        cmp m
	jz .+4
	inr d
        cma
        xra b
	mov m, a
	dcr l
	mov a, m
	ana c
	cmp m
	jz .+4
	inr d
        cma
        xra c
	mov m, a
	dcr l
        ;
	pop b
        mov a, m
        ana b
        cmp m
	jz .+4
	inr d
        cma
        xra b
	mov m, a
	dcr l
	mov a, m
	ana c
	cmp m
	jz .+4
	inr d
        cma
        xra c
	mov m, a
	dcr l
        ;
	pop b
        mov a, m
        ana b
        cmp m
	jz .+4
	inr d
        cma
        xra b
	mov m, a
	dcr l
	mov a, m
	ana c
	cmp m
	jz .+4
	inr d
        cma
        xra c
	mov m, a
	dcr l
        ;
	pop b
        mov a, m
        ana b
        cmp m
	jz .+4
	inr d
        cma
        xra b
	mov m, a
	dcr l
	mov a, m
	ana c
	cmp m
	jz .+4
	inr d
        cma
        xra c
	mov m, a
	dcr l
        ;
	pop b
        mov a, m
        ana b
        cmp m
	jz .+4
	inr d
        cma
        xra b
	mov m, a
	dcr l
	mov a, m
	ana c
	cmp m
	jz .+4
	inr d
        cma
        xra c
	mov m, a
	dcr l
        ;

	inr h
	mov l, e
	; column end

	;; le big pop
	pop b
        mov a, m
        ana b
        cmp m
	jz .+4
	inr d
        cma
        xra b
	mov m, a
	dcr l
	mov a, m
	ana c
	cmp m
	jz .+4
	inr d
        cma
        xra c
	mov m, a
	dcr l
        ;
	pop b
        mov a, m
        ana b
        cmp m
	jz .+4
	inr d
        cma
        xra b
	mov m, a
	dcr l
	mov a, m
	ana c
	cmp m
	jz .+4
	inr d
        cma
        xra c
	mov m, a
	dcr l
        ;
	pop b
        mov a, m
        ana b
        cmp m
	jz .+4
	inr d
        cma
        xra b
	mov m, a
	dcr l
	mov a, m
	ana c
	cmp m
	jz .+4
	inr d
        cma
        xra c
	mov m, a
	dcr l
        ;
	pop b
        mov a, m
        ana b
        cmp m
	jz .+4
	inr d
        cma
        xra b
	mov m, a
	dcr l
	mov a, m
	ana c
	cmp m
	jz .+4
	inr d
        cma
        xra c
	mov m, a
	dcr l
        ;
	pop b
        mov a, m
        ana b
        cmp m
	jz .+4
	inr d
        cma
        xra b
	mov m, a
	dcr l
	mov a, m
	ana c
	cmp m
	jz .+4
	inr d
        cma
        xra c
	mov m, a
	dcr l
        ;
	pop b
        mov a, m
        ana b
        cmp m
	jz .+4
	inr d
        cma
        xra b
	mov m, a
	dcr l
	mov a, m
	ana c
	cmp m
	jz .+4
	inr d
        cma
        xra c
	mov m, a
	dcr l
        ;

	inr h
	mov l, e
	; column end

psx_restoreSP:
	lxi sp, 0
	ret


        ; Clear the player sprite from layer $c000
PlayerSprite_C:

	; hl -> player_ptr
	lhld player_ptr
	mvi d, 0
	lda player_index
	ora a
	ral 
	mov e, a
	dad d
	; hl -> player_ptr[player_index]

	mov e, m
	inx h
	mov d, m
	; de -> &bits

	lxi h, 0
	dad sp 
	shld psc_restoreSP+1

psc_layer:
	lxi h, $c000
	lda player_column
	add h
	mov h, a

	mvi a, PLAYER_Y
	add b  ; frame_scroll in b
	mov l, a
	; hl -> screen location

	xchg	
	sphl
	xchg

	mov e, l
	;; le big pop
	pop b
        mov a, m
        ana b
	mov m, a
	dcr l
        mov a, m
        ana c
        mov m, a
	dcr l
	;
	pop b
        mov a, m
        ana b
	mov m, a
	dcr l
        mov a, m
        ana c
        mov m, a
	dcr l
	;
	pop b
        mov a, m
        ana b
	mov m, a
	dcr l
        mov a, m
        ana c
        mov m, a
	dcr l
	;
	pop b
        mov a, m
        ana b
	mov m, a
	dcr l
        mov a, m
        ana c
        mov m, a
	dcr l
	;
	pop b
        mov a, m
        ana b
	mov m, a
	dcr l
        mov a, m
        ana c
        mov m, a
	dcr l
	;
	pop b
        mov a, m
        ana b
	mov m, a
	dcr l
        mov a, m
        ana c
        mov m, a
	dcr l
	;

	inr h
	mov l, e
	; column end

	;; le big pop
	pop b
        mov a, m
        ana b
	mov m, a
	dcr l
        mov a, m
        ana c
        mov m, a
	dcr l
	;
	pop b
        mov a, m
        ana b
	mov m, a
	dcr l
        mov a, m
        ana c
        mov m, a
	dcr l
	;
	pop b
        mov a, m
        ana b
	mov m, a
	dcr l
        mov a, m
        ana c
        mov m, a
	dcr l
	;
	pop b
        mov a, m
        ana b
	mov m, a
	dcr l
        mov a, m
        ana c
        mov m, a
	dcr l
	;
	pop b
        mov a, m
        ana b
	mov m, a
	dcr l
        mov a, m
        ana c
        mov m, a
	dcr l
	;
	pop b
        mov a, m
        ana b
	mov m, a
	dcr l
        mov a, m
        ana c
        mov m, a
	dcr l
	;

	inr h
	mov l, e
	; column end

	;; le big pop
	pop b
        mov a, m
        ana b
	mov m, a
	dcr l
        mov a, m
        ana c
        mov m, a
	dcr l
	;
	pop b
        mov a, m
        ana b
	mov m, a
	dcr l
        mov a, m
        ana c
        mov m, a
	dcr l
	;
	pop b
        mov a, m
        ana b
	mov m, a
	dcr l
        mov a, m
        ana c
        mov m, a
	dcr l
	;
	pop b
        mov a, m
        ana b
	mov m, a
	dcr l
        mov a, m
        ana c
        mov m, a
	dcr l
	;
	pop b
        mov a, m
        ana b
	mov m, a
	dcr l
        mov a, m
        ana c
        mov m, a
	dcr l
	;
	pop b
        mov a, m
        ana b
	mov m, a
	dcr l
        mov a, m
        ana c
        mov m, a
	dcr l
        ; column end


psc_restoreSP:
	lxi sp, 0
	ret

; vi:syntax=m80
; vi:ts=8
; vi:sts=8
