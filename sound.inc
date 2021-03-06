I8253_CONTROL		equ $8
I8253_CH0		equ $b
I8253_CH1		equ $a
I8253_CH2               equ $9
                        ;   00                  counter 0
                        ;     11                LSB then MSB
                        ;       011             mode 3
                        ;          0            not BCD
CH0_CTR_BEEP		equ 00110110b
CH0_CTR_STFU		equ 00110000b

                        ;   01                  counter 1
                        ;     11                LSB then MSB
                        ;       011             mode 3
                        ;          0            not BCD
CH1_CTR_BEEP 		equ 01110110b
CH1_CTR_STFU		equ 01110000b

CH2_CTR_BEEP 		equ 10110110b
CH2_CTR_STFU		equ 10110000b

SNDFX_REFUEL    equ 1
SNDFX_REFULL    equ 2
SNDFX_LOWFUEL   equ 3

SNDFX_MISSILE   equ 16

snd_missile_on
        mvi a, 10
        sta snd_missile
        ret

snd_missile_off
        mvi a, 1
        sta snd_missile
        ret

snd_missile     db 0

snd_life
        lxi h, snd16_life_data
        shld snd_extralife_ptr
        lxi h, snd8_life_data
        shld snd_ch2_next
        ret

snd_fuel
        lxi h, snd_fuel_data
        shld snd_ch0_next
        lxi h, snd_fuel2_data
        shld snd_ch2_next
        ret

snd_fuel_low
        mvi a, 40
        sta snd_fwarn_ctr_next
        ret

snd_full
        lxi h, snd_full_data
        shld snd_ch0_next
        lxi h, snd_full2_data
        shld snd_ch2_next
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
        lxi h, snd_bridge_ded2_data
        shld snd_ch2_next
        ret

snd_ch0_state   db 0
snd_ch0_next    dw 0
snd_ch0_cur     dw 0

snd_ch2_state   db 0
snd_ch2_next    dw 0
snd_ch2_cur     dw 0

snd_fwarn_ctr_next      db 0
snd_fwarn_ctr           dw 0

; 16-bit sound for extra life ditty
snd_extralife_ptr dw 0
snd_extralife_ctr db 0


                ; pitch, time, pitch, time, 0, 0
snd_fuel_data:  
        db 14, 2
        db 0,  5
        db 0,  0

snd_fuel2_data:  
        db 14, 1
        db 0,  6
        db 0,  0

snd_full_data:
        db 7, 7
        db 0, 1
        db 0, 0

snd_full2_data
        db 7, 4
        db 0, 4
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
        db 5, 5
        db 200, 20
        db 30, 1
        db 60, 1
        db 130, 2
        db 70, 1
        db 120, 1
        db 230, 2
        db 130, 1
        db 0, 0

snd_bridge_ded2_data:
        db 20, 1
        db 30, 1
        db 40, 1
        db 70, 1
        db 120, 1
        db 208, 20
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

snd_fuel_lo_data:
        db 120, 4
        db 60, 4
        db 30, 4
        db 15, 4
        db 0, 20
        db 0, 0

snd16_life_data:
        ; approximate a minor chord in C: 
        ; 130.83 - 155.56 - 196.0 - 261.63 (yeah right)
        dw 0
        db 25
        dw 1500000/130/2
        db 10
        dw 0
        db 4
        dw 1500000/155/2
        db 10
        dw 0
        db 4
        dw 1500000/196/2
        db 10
        dw 0
        db 4
        dw 1500000/261/2
        db 15
        dw 0
        db 0

snd8_life_data:
        ; approximate a minor chord in C: 
        ; 130.83 - 155.56 - 196.0 - 261.63 (yeah right)
        db 0, 25
        db 1500000/130/2/256, 4
        db 0, 10
        db 1500000/155/2/256, 4
        db 0, 10
        db 1500000/196/2/256, 4
        db 0, 10
        db 1500000/261/2/256, 3
        db 0, 0



snd_empty_data:
        db 0, 0

SoundInit:
        lxi h,0
        shld snd_ch0_cur
        shld snd_ch2_cur
        shld snd_ch0_next
        shld snd_ch2_next
        shld snd_fwarn_ctr
        shld snd_extralife_ptr
        mvi a, 0
        sta snd_ch0_state
        sta snd_ch2_state
        sta snd_fwarn_ctr_next
        sta snd_extralife_ctr
        jmp SoundSound

SoundSound:
        call snd_ch0_frame      ; kaboom
        call snd_ch1_frame      ; engine noise
        call snd_ch2_frame      ; piu piu
        ret

snd_ch2_missile
        lda snd_missile
        cpi 1
        jz smiss_silent
        ora a
        rz
        mov b, a
        mvi a, CH2_CTR_BEEP
        out I8253_CONTROL
        xra a
        out I8253_CH2
        mov a, b
        out I8253_CH2
        inr a
        sta snd_missile
        ret
smiss_silent
        dcr a
        sta snd_missile
	mvi a, CH2_CTR_STFU
	out I8253_CONTROL
        ret

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
        mov a, h
        ora l
        jz sch0_load_next
        mov c, m
        inx h
        mov a, m
        ora c
        jnz sch0_beep_load
sch0_load_next
        ; zero pitch and length, end of sound string
        ; take the next string, load it into cur, clear next and reenter
        lhld snd_ch0_next
        shld snd_ch0_cur
        xchg
        lxi h, 0
        shld snd_ch0_next
        
        mov a, d
        ora e
        jnz sch0_next_beep

        ; stfu
	mvi a, CH0_CTR_STFU
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

        mov a, c
        ora a
        jz sch0_beep_silent
        ; proper sound
	mvi a, CH0_CTR_BEEP
	out I8253_CONTROL
        mvi a, $0
        out I8253_CH0
        mov a, c
        out I8253_CH0
        ret

sch0_beep_silent
        mvi a, CH0_CTR_STFU
        out I8253_CONTROL
        ret

; ---------
; CH2 string player: if no string, then missile
; ----------
snd_ch2_frame
        ; check if a beep is in progress, decrement and return if so
        lda snd_ch2_state
        ora a
        jz sch2_next_beep
        dcr a
        sta snd_ch2_state
        jmp snd_ch2_missile
sch2_next_beep
        ; load next beep from the current sound string
        lhld snd_ch2_cur
        mov a, h
        ora l
        jz sch2_load_next
        mov c, m
        inx h
        mov a, m
        ora c
        jnz sch2_beep_load
sch2_load_next
        ; zero pitch and length, end of sound string
        ; take the next string, load it into cur, clear next and return
        lhld snd_ch2_next
        shld snd_ch2_cur
        xchg
        lxi h, 0
        shld snd_ch2_next
        
        mov a, d
        ora e
        jnz sch2_next_beep

	mvi a, CH2_CTR_STFU
	out I8253_CONTROL
	mvi a, $ff
	out I8253_CH2
	out I8253_CH2

        jmp snd_ch2_missile

        ; continue playing current string
sch2_beep_load
        mov a, m                ; load duration again
        ; update the pointer
        inx h
        shld snd_ch2_cur
        ; c = pitch, a = duration
        sta snd_ch2_state
        mov a, c
        ora a
        jz sch2_beep_silent
        ; normal beep
	mvi a, CH2_CTR_BEEP
	out I8253_CONTROL
        mvi a, $0
        out I8253_CH2
        mov a, c
        out I8253_CH2
        ret

sch2_beep_silent
        mvi a, CH2_CTR_STFU
        out I8253_CONTROL
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


snd_ch1_frame:
        ; engine noise must stop but other sounds should go on
        lda pause_flag
        ora a
        jnz snd_ch1_fuelcheck

        ; engine noise
        lxi h, sn_counter
        lda playerYspeed
        ora a
        rar
        add m
        mov m, a
        mvi a, 0
        ral
        out 1

snd_ch1_fuelcheck:
        ; fuel warning
        lhld snd_fwarn_ctr
        mov a, h
        ora l
        jz sch1_fwarn_next
        lxi d, $ff80
        dad d
        shld snd_fwarn_ctr
        mov a, h
        cpi 5
        jc sch1_fwarn_next
        cpi 14
        jc sch1_fwarn_silent
        mvi a, CH1_CTR_BEEP
        out I8253_CONTROL
        mov a, l
        out I8253_CH1
        mov a, h
        out I8253_CH1
        ret
sch1_fwarn_next
        lxi h, snd_fwarn_ctr_next
        mov a, m
        ora a
        jz sch1_fwarn_silent
        mvi m, 0
        mov h, a
        mvi l, 0
        shld snd_fwarn_ctr
        
sch1_fwarn_silent
        ; extra life sound maybe then?

        lxi h, snd_extralife_ctr
        mov a, m
        ora a
        jz sch1_extralife_next  ; current sound over, next
        dcr a
        mov m, a                ; just sounding the current sound
        ret

sch1_extralife_next
        lhld snd_extralife_ptr
        mov a, h
        ora l
        jz sch1_total_silent    ; 0, no extra life ditty
        
        ; otherwise!
        mov e, m
        inx h
        mov d, m                ; de = divider
        inx h
        mov a, m                ; a = duration, 0 = end
        inx h
        ora a
        jnz sch1_extralife_nextpitch     ; play next pitch
        lxi h, 0                
        shld snd_extralife_ptr  ; ditty ptr = 0
        jmp sch1_total_silent   ; stfu

sch1_extralife_nextpitch
        shld snd_extralife_ptr
        sta snd_extralife_ctr
        mvi a, CH1_CTR_BEEP
        out I8253_CONTROL
        ; if 0, stfu rather than fart
        mov a, e
        ora d
        jz sch1_total_silent
        ; otherwise play
        mov a, e
        out I8253_CH1
        mov a, d
        out I8253_CH1
        ret

sch1_total_silent
        mvi a, CH1_CTR_STFU
        out I8253_CONTROL
        ret

sn_counter:     db 0


; vi:syntax=m80
; vi:ts=8
; vi:sts=8
