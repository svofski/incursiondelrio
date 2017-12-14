I8253_CONTROL		equ $8
I8253_CH0		equ $b
I8253_CH1		equ $a
I8253_CH2               equ $9
                        ;   00                  counter 0
                        ;     11                LSB then MSB
                        ;       011             mode 3
                        ;          0            not BCD
CH0_CTR_BEEP		equ 00110110b
CH0_CTR_SILENCE		equ 00110000b

                        ;   01                  counter 1
                        ;     11                LSB then MSB
                        ;       011             mode 3
                        ;          0            not BCD
CH1_CTR_BEEP 		equ 01110110b
CH1_CTR_SILENCE		equ 01110000b

CH2_CTR_BEEP 		equ 10110110b


snd_on:			db 0
snd_bell_count:		db 0
snd_bell_ptr:		dw snd_bell
snd_bell:			
					db $10, $10, $10, $10
					db $10, $9, $10, $9
					db $10, $10, $10, $10
					db $10, $9, $10, $9
					db $10, $10, $10, $10
					db $10, $9, $10, $9

					db $10, $10, $10, $10
					db $10, $10, $10, $10
					db $10, $10, $10, $0
					db $11, $0, $10, $0
snd_bell_end		equ .


SNDFX_REFUEL    equ 1
SNDFX_REFULL    equ 2
SNDFX_LOWFUEL   equ 3

SNDFX_MISSILE   equ 16

snd_fuel
        lxi h, snd_fuel_data
        shld snd_ch0_next
        ret

snd_full
        lxi h, snd_full_data
        shld snd_ch0_next
        ret

snd_player_ded
        lxi h, snd_ded_data
        shld snd_ch0_next
        ret

snd_foe_ded
        lxi h, snd_foe_ded_data
        shld snd_ch0_next
        ret

snd_bridge_ded
        lxi h, snd_bridge_ded_data
        shld snd_ch0_next
        ret

snd_ch0_state   db 0
snd_ch0_next    dw 0
snd_ch0_cur     dw 0
snd_ch1_next    dw 0
snd_ch1_cur     dw 0
snd_ch2_next    dw 0
snd_ch2_cur     dw 0

                ; pitch, time, pitch, time, 0, 0
snd_fuel_data:  
        db 14, 2
        db 0,  10
        db 0,  0

snd_full_data:
        db 7, 7
        db 0, 1
        db 0, 0

snd_ded_data:
        db 30, 1
        db 60, 1
        db 130, 2
        db 70, 1
        db 120, 1
        db 230, 2
        db 130, 1
        db 0, 0

snd_bridge_ded_data:
        db 20, 10
        db 0, 0

        db 20, 1
        db 30, 1
        db 40, 1
        db 70, 1
        db 120, 1
        db 230, 1
        db 130, 2
        db 0, 0

snd_foe_ded_data:
        db 30, 1
        db 60, 1
        db 130, 2
        db 70, 1
        db 120, 1
        db 230, 2
        db 130, 2
        db 0, 0

SoundInit:
	lxi h, snd_bell
	shld snd_bell_ptr
	mvi a, snd_bell_end - snd_bell-1
	sta snd_bell_count
	mvi a, 0
	sta snd_on

	mvi a, CH1_CTR_BEEP
	out I8253_CONTROL

        mvi a, 0
        out I8253_CH1
        mvi a, 255
        out I8253_CH1

;        di
;        mvi a, 1
;silup
;        xthl            ; (24*6 + 8 + 12) = 44
;        xthl
;        xthl
;        xthl
;        xthl
;        xthl
;        dcr a
;        jnz silup
;        ei
;
;	mvi a, CH2_CTR_BEEP
;	out I8253_CONTROL
;
;        mvi a, 0
;        out I8253_CH2
;        mvi a, 255
;        out I8253_CH2

	ret

SoundSound:
        call snd_ch0_frame
        ret

;	lda player_collision
;	ora a
;	jz ss_silence
;	mvi a, CH0_CTR_BEEP
;	out I8253_CONTROL
;	mvi a, $0
;	out I8253_CH0
;	mvi a, $10
;	out I8253_CH0
;	ret
;ss_silence:
;	mvi a, CH0_CTR_SILENCE
;	out I8253_CONTROL
;	mvi a, $ff
;	out I8253_CH0
;	out I8253_CH0
;	ret

snd_ch0_frame
        ; check if a beep is in progress, decrement and return if so
        lda snd_ch0_state
        ora a
        jz sch0_next_beep
        dcr a
        sta snd_ch0_state
        ret
sch0_next_beep
        ; load next beep from the current sound string
        lhld snd_ch0_cur
        mov c, m
        inx h
        mov a, m
        ora c
        jnz sch0_beep_load
        ; zero pitch and length, end of sound string
        ; take the next string, load it into cur, clear next and return
        lhld snd_ch0_next
        shld snd_ch0_cur
        xchg
        lxi h, 0
        shld snd_ch0_next
        
        mov a, d
        ora e
        jnz sch0_next_beep

        ; stfu
	mvi a, CH0_CTR_SILENCE
	out I8253_CONTROL
	mvi a, $ff
	out I8253_CH0
	out I8253_CH0

        ret

        ; continue playing current string
sch0_beep_load
        mov a, m                ; load duration again
        ; update the pointer
        inx h
        shld snd_ch0_cur
        ; c = pitch, a = duration
        sta snd_ch0_state
	mvi a, CH0_CTR_BEEP
	out I8253_CONTROL
        mvi a, $0
        out I8253_CH0
        mov a, c
        out I8253_CH0
        ret



;        ; this version sounds FANTASTIC on high speed, for a toy robot
;SoundNoise:
;	call nextRandomSnd
;	lda playerYspeed
;        ora a  
;        rlc
;	sui YSPEED_DEFAULT
;	cma
;	adi $80
;	mov b, a
;	;mvi b, $80
;	lda random_sndLo
;	ani $3f
;	add b
;	out I8253_CH1
;	ret


SoundNoise:
        call nextRandomSnd

	lda playerYspeed
        ora a
        rrc
        rrc
        ani $3f
	sui YSPEED_DEFAULT
	cma
	adi $80
        mov b, a

        lxi h, sn_counter
        lda playerYspeed
        ora a
        rar
        ;mov b, a
        ora a
        rar
        ;add b
        add m
        mov m, a
        jc sn_silence
sn_noise:
	mvi a, CH1_CTR_BEEP
	out I8253_CONTROL
        xra a
        out I8253_CH1
        mov a, b
	out I8253_CH1
        ret
sn_silence:
        mvi a, CH1_CTR_SILENCE
        out I8253_CONTROL
	ret

sn_counter:     db 0

SoundFadeOut:
	push d 

	lda snd_bell_count
	ora a
	jm sfo_shutup


	lda snd_on
	mov b, a

	lhld snd_bell_ptr
	mov a, m
	mov d, a
	ora a
	jnz sfo_snd

sfo_silence:
	mov a, b
	ora a
	jz sfo_done

	mvi a, CH0_CTR_SILENCE
	out I8253_CONTROL
	mvi a, $ff
	out I8253_CH0
	out I8253_CH0
	xra a
	sta snd_on
	jmp sfo_done

sfo_snd:
	mov a, b
	cmp d
	jz sfo_done 

	mvi a, CH0_CTR_BEEP
	out I8253_CONTROL
	mvi a, $0
	out I8253_CH0
	mov a, d
	;mvi a, $10
	out I8253_CH0
	mov a, d
	sta snd_on 
sfo_done:
	inx h
	shld snd_bell_ptr
	lxi h, snd_bell_count
	dcr m
	pop d
	ret
sfo_shutup:
	mvi a, CH0_CTR_SILENCE
	out I8253_CONTROL
	mvi a, $ff
	out I8253_CH0
	out I8253_CH0
	pop d
	ret

nextRandomSnd:

	lhld random_snd
	mov a, h 		; randomHi
   	rlc            
   	rlc            
   	rlc    
   	xra h
   	rlc
   	mov h, a
   	mov a, l
   	ral 
   	mov l, a
   	mov a, h
   	ral
	mov h, a
	shld random_snd
	ret

random_snd:
random_sndLo:	db $14
random_sndHi:	db $a8


; vi:syntax=m80
; vi:ts=8
; vi:sts=8
