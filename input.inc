JOYC1   equ     $0e
JOYC2   equ     $0f
JOYC3   equ     $2e
JOYC4   equ     $2f

        ;
InputInit:
        lxi h, joyc_neutral
        in JOYC1
        cma
        mov m, a

        inx h
        in JOYC2
        cma
        mov m, a

        inx h
        in JOYC3
        cma
        mov m, a

        inx h
        in JOYC4
        cma
        mov m, a

        ret

;; KeyboardScan
;;
;; Scan keyboard and update global struct "inputs"
;;
;; struct {
;;      uint8_t input_down;
;;      uint8_t input_right;
;;      uint8_t input_up;
;;      uint8_t input_left;
;;      uint8_t input_fire;
;;      uint8_t __align_dummy;
;; } inputs;
;;
KeyboardScan:
	lxi h, 0
	shld inputs
	shld inputs+2
        shld inputs+4

        lhld joyc_neutral       
        xchg                    ; neutral: d=joy0e, e=joy0f, h=joy2e, l=joy2f
        lhld joyc_neutral+2

        in $0e                  ; read joy 1
        xra d                   ; xor ~joy1_neutral
        mov c, a                ; keep in c
        in $0f                  ; read joy 2
        xra e                   ; xor ~joy2_neutral
        ana c                   ; and with previous value
        mov c, a                ; keep in c
        in $2e                  ; ... same for shadok joys
        xra h
        ana c
        mov c, a
        in $2f
        xra l
        ana c                   ; a = and(all joysticks)

        cma 

        mvi b, $ff
        lxi h, inputs+1 ; h = &inputs.right
        rar             ; cf = right
        jnc ksj_1
        mov m, b 
ksj_1:  inx h           ; 
        inx h           ; h = &inputs.left
        rar             ; cf = left
        jnc ksj_2
        mov m, b
ksj_2:  dcx h           ; h = &inputs.up
        rar             ; cf = up
        jnc ksj_3
        mov m, b
ksj_3:  dcx h
        dcx h           ; h = &inputs.down
        rar             ; cf = down
        jnc ksj_4
        mov m, b
ksj_4:  lxi h, inputs+4 ; h = &inputs.fire
        rar
        rar
        rar             ; cf = fire1
        jnc ksj_5
        mov m, b
ksj_5:
        rar             ; cf = fire2
        jnc ks_keyboard
        mov m, b

ks_keyboard:
	mvi a, 10001010b
	out 0
	mvi a, $fe ; row 0
	out 03
	in 02

	mvi b, $ff
	lxi h, inputs   ; hl = &inputs.down
	rlc
	jc ks_1
	mov m, b        ; down pressed 
ks_1:
	inx h           ; hl = &inputs.right
	rlc
	jc ks_2
	mov m, b        ; right pressed
ks_2:
	inx h           ; hl = &inputs.up
	rlc
	jc ks_3
	mov m, b
ks_3:
	inx h           ; hl = &inputs.left
	rlc
	jc ks_4
	mov m, b
ks_4:
	mvi a, $88
	out 0

        inx h           ; hl = &inputs.fire
        in 1            ; all the shift keys are fire
        rlc
        jnc ks_5
        rlc
        jnc ks_5
        rlc
        jnc ks_5
	ret
ks_5:   
        mov m, b
        ret

; vi:syntax=m80
; vi:ts=8
; vi:sts=8
