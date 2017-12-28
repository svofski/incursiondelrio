        ; helpful but miserable stuff


        ; Paint game logo sprites in the game intro screen
        ; 
        ; hl -> blit sprite inverted, de -> screen
        ; 
        ; This sub assumes that the sprite is columns, 8 lines
        ; It uses the sprite to mask out layer $8000, then applies inverse
        ; to layer $c000, which works for white text on green background.
        ;
paint_logosprite:
        mov b, h
        mov c, l
        lxi h, 0
        dad sp
        shld paint_logosprite_ret+1
        mov h, b
        mov l, c
        sphl
        xchg

        mvi c, 8
        mvi b, $40
plgspr_l1:
        pop d           ; get two bytes
        mov a, m        ; load screen at $80
        ana d           ; mask
        mov m, a        ; store
        mov a, h        ; shuttle to layer $c0
        add b
        mov h, a
        mov a, d        ; get positive bitmap
        cma
        mov m, a        ; store in layer $c0
        mov a, h        ; shuttle back to $80
        sub b
        mov h, a
        dcr l

        mov a, m        ; load screen at $80
        ana e           ; mask
        mov m, a        ; store
        mov a, h        ; shuttle to layer $c0
        add b
        mov h, a
        mov a, e        ; get positive bitmap
        cma
        mov m, a        ; store in layer $c0
        mov a, h        ; shuttle back to $80
        sub b
        mov h, a
        dcr l

        pop d           ; get two bytes
        mov a, m        ; load screen at $80
        ana d           ; mask
        mov m, a        ; store
        mov a, h        ; shuttle to layer $c0
        add b
        mov h, a
        mov a, d        ; get positive bitmap
        cma
        mov m, a        ; store in layer $c0
        mov a, h        ; shuttle back to $80
        sub b
        mov h, a
        dcr l

        mov a, m        ; load screen at $80
        ana e           ; mask
        mov m, a        ; store
        mov a, h        ; shuttle to layer $c0
        add b
        mov h, a
        mov a, e        ; get positive bitmap
        cma
        mov m, a        ; store in layer $c0
        mov a, h        ; shuttle back to $80
        sub b
        mov h, a
        dcr l

        pop d           ; get two bytes
        mov a, m        ; load screen at $80
        ana d           ; mask
        mov m, a        ; store
        mov a, h        ; shuttle to layer $c0
        add b
        mov h, a
        mov a, d        ; get positive bitmap
        cma
        mov m, a        ; store in layer $c0
        mov a, h        ; shuttle back to $80
        sub b
        mov h, a
        dcr l

        mov a, m        ; load screen at $80
        ana e           ; mask
        mov m, a        ; store
        mov a, h        ; shuttle to layer $c0
        add b
        mov h, a
        mov a, e        ; get positive bitmap
        cma
        mov m, a        ; store in layer $c0
        mov a, h        ; shuttle back to $80
        sub b
        mov h, a
        dcr l

        pop d           ; get two bytes
        mov a, m        ; load screen at $80
        ana d           ; mask
        mov m, a        ; store
        mov a, h        ; shuttle to layer $c0
        add b
        mov h, a
        mov a, d        ; get positive bitmap
        cma
        mov m, a        ; store in layer $c0
        mov a, h        ; shuttle back to $80
        sub b
        mov h, a
        dcr l

        mov a, m        ; load screen at $80
        ana e           ; mask
        mov m, a        ; store
        mov a, h        ; shuttle to layer $c0
        add b
        mov h, a
        mov a, e        ; get positive bitmap
        cma
        mov m, a        ; store in layer $c0
        mov a, h        ; shuttle back to $80
        sub b
        mov h, a
        dcr l

        mov a, l
        adi 8
        mov l, a
        inr h

        dcr c
        jnz plgspr_l1

paint_logosprite_ret
        lxi sp, 0
        ret 

; vi:syntax=m80
; vi:ts=8
; vi:sts=8

