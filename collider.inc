        ; Handle collision of missile with a foe
CollisionMissileFoe:
        lda missile_hit
        ora a
        rz                      ; no hit in sight

        ; the flag will be cleared by MissileWipe
        ;xra a                   ; clear the flag 
        ;sta missile_hit

        ; Hit, check every foe: if it's in that general region, that must be it

        ; precalculate missile X
        lxi h, missile_hit_column
        mov a, m
        rlc
        rlc
        rlc 
        ani $f8
        inx h
        add m
        sta missile_hit_x

        ; every foe has a fixed Y position, just find which one is this
        mvi a, 8
        sta cmf_yscan_ctr
        lxi h, foe_1
cmf_yscan
        push h
        call cmf_check_foe_y
        pop h
        push h
        cc cmf_check_foe_x      ; x-coordinate must also match
        pop h
        jc cmf_victim_found     ; if cmf_verify_x returns C, definitely ded
        lxi b, 8                ; he's fine, next foe[]
        dad b
        lda cmf_yscan_ctr
        dcr a
        sta cmf_yscan_ctr
        jnz cmf_yscan

        ; must be just terrain
        ret

cmf_victim_found
        mov a, m
        push h
        call UpdateScore_KillA
        pop h
        mov a, m
        ori FOEID_WIPE_FLAG
        mov m, a
        ret

        ; input h = & struct foe
        ; return CY if Y coordinates intersect
cmf_check_foe_y
        mov c, m        ; foeid to infer foe height
        xra a
        ora c 
        rz              ; foe.id == 0, nothing in this slot

cmf_getheight        
        xchg
        lxi h, foe_height_tbl
        mvi b, 0
        dad b
        mov c, m        ; c = foe height
        xchg            ; restore hl
        lxi d, 4
        dad d           ; foe.y
        mov a, m        ; 
        mov d, a        ; a = d = foe.y
        add c
        mov e, a        ; e = foe.y + height[foe.id]

        ; glory! de = [y1, y2]


        lda missile_hit_y
        mov h, a
        adi 8
        mov l, a
        xchg
        jmp intersects_test
        ; end of cmf_check_foe_y

        ; check x coordinate intersection
        ; input h = & struct foe
        ; return CY if X coordinates intersect
cmf_check_foe_x
        ; get foe width
        mov c, m
        mvi b, 0
        xchg            ; save h
        lxi h, foe_width_tbl
        dad b
        mov c, m        ; c = foe width
        xchg            ; restore h
        ; get foe x position
        inx h
        mov a, m        ; column
        rlc
        rlc
        rlc 
        ani $f8         ; column * 8
        inx h           
        add m           ; a = foe.x = foe.column * 8 + foe.index

        mov h, a        ; h = foe.x1
        add c           ; foe width
        mov l, a        ; l = foe.x2
        lda missile_hit_x

        ; this is weird but missile x seems to be offset relative to foes?
        adi 16

        mov d, a
        inr a
        mov e, a        ; de = missile.x1, missile.x2
        jmp intersects_test

        ; check intersection of two intervals
        ; True if:
        ; a1 --- a2
        ;     b1 --- b2
        ; or
        ;         a1 --- a2
        ;     b1 --- b2
        ; Input: D=a1 E=a2
        ;        H=b1 L=b2
        ; Returns:
        ;       CY if intervals intersect
intersects_test
        mov a, d        
        cmp h                   ; a1 - b1 must be +
        jp $+6
        jmp xt_cond2
        cmp l                   ; a1 - b2 must be - or 0  
        jm xt_true
        jz xt_true
        ; condition 1 is false, check condition 2
xt_cond2
        mov a, e                ; a = a2
        cmp h                   ; 
        jm xt_false             ; a2 - b1 < 0, fail
        cmp l                   ; a2 - b2 <= 0
        jm xt_true
        jz xt_true
xt_false
        ora a
        ret
xt_true
        stc
        ret

        ret


cmf_yscan_ctr   db 0
foe_height_tbl
        ;       0       1       2       3       4       5       6       7
        db      0,      8,      12,     12,     8,      0,      0,      0,
        ;       8       9       10      11      12      13      14      15
        db      0,      0,      0,      0,      0,      0,      0,      0,
        ;       16      17
        db      28,     24

foe_width_tbl
        ;       NONE    SHIP    COPTER  COPTER  JET
        db      0,      40,     24,     24,     24,     0,      0,      0,
        db      0,      0,      0,      0,      0,      0,      0,      0,
        ;       BRIDGE  FUEL
        db      64,     16



; vi:syntax=m80
; vi:ts=8
; vi:sts=8
