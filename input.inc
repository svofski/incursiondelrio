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
	mvi a, 10001010b
	out 0
	mvi a, $fe ; row 0
	out 03
	in 02
	lxi h, 0
	shld inputs
	shld inputs+2
        shld inputs+4

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
