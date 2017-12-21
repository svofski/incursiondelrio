collision_x     db 0
collision_y     db 0
collision_width db 2

        ; Handle collision of missile with a foe
CollisionMissileFoe:
        lda missile_hit
        ora a
        rz                      ; no hit in sight

        mvi a, 1
        sta collision_width

        ; the flag will be cleared by MissileWipe
        ;xra a                   ; clear the flag 
        ;sta missile_hit

        ; Hit, check every foe: if it's in that general region, that must be it

        ; precalculate missile X
        lxi h, missile_hit_column
        call x_from_column_index

        ; store input parameters for collision checker
        sta collision_x
        lda missile_hit_y
        sta collision_y

        call find_foe_at_xy
        rnc                     ; if not found it's probably terrain

        mov a, m
        push h
        call UpdateScore_KillA  ; update the score according to kill id
        pop h
        mov a, m
        mov b, a
        ori FOEID_WIPE_FLAG
        mov m, a
        mov a, b
        cpi FOEID_BRIDGE
        jnz snd_foe_ded
        call rhythm_of_love
        jmp snd_bridge_ded

        ;
        ; Find a foe at collision_x, collision_y
        ;
        ; Return: if found, CY and HL points to the found foe 
        ;         otherwise NC
find_foe_at_xy        
        ; find foe by Y position
        mvi a, 8
        sta ffxy_yscan_ctr
        lxi h, foe_1
ffxy_yscan
        push h
        call ffxy_check_foe_y
        pop h
        push h
        cc ffxy_check_foe_x     ; x-coordinate must also match
        pop h
        jc ffxy_found           ; if cmf_verify_x returns C, definitely ded
        lxi b, 8                ; he's fine, next foe[]
        dad b
        lda ffxy_yscan_ctr
        dcr a
        sta ffxy_yscan_ctr
        jnz ffxy_yscan
        ora a
        ; must be just terrain
        ret
ffxy_found
        stc
        ret
ffxy_yscan_ctr  db 0
        

        ; input h = & struct foe
        ; return CY if Y coordinates intersect
ffxy_check_foe_y
        mov c, m        ; foeid to infer foe height
        xra a
        ora c 
        rz              ; foe.id == 0, nothing in this slot

        ; get foe height
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


        lda collision_y
        mov h, a
        adi 8
        mov l, a
        xchg
        jmp intersects_test
        ; end of ffxy_check_foe_y

        ; check x coordinate intersection
        ; input h = & struct foe
        ; return CY if X coordinates intersect
ffxy_check_foe_x
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
        lda collision_x

        ; this is weird but missile x seems to be offset relative to foes?
        adi 16

        mov d, a
        ;inr a
        ;adi 16          ; ###
        lda collision_width
        add d
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


foe_height_tbl
        ;       0       1       2       3       4       5       6       7
        db      0,      8,      12,     12,     8,      0,      0,      0,
        ;       8       9       10      11      12      13      14      15
        db      0,      0,      0,      0,      0,      0,      0,      0,
        ;       16      17
        db      28,     30

foe_width_tbl
        ;       NONE    SHIP    COPTER  COPTER  JET
        db      0,      40,     24,     24,     24,     0,      0,      0,
        db      0,      0,      0,      0,      0,      0,      0,      0,
        ;       BRIDGE  FUEL
        db      64,     20

        ; Input: hl points to column, index in memory
        ; Output: a = X coordinate
x_from_column_index
        mov a, m
        rlc
        rlc
        rlc 
        ani $f8
        inx h
        add m   
        ret

CollisionPlaneFoe
        lda player_collision
        ora a
        rz

        mvi a, 16
        sta collision_width

        ; precalculate player X
        lxi h, player_column
        call x_from_column_index
        sui 8                   ; offset for plane centre
        sta collision_x

        lda frame_scroll
        adi PLAYER_Y
        sta collision_y
        call find_foe_at_xy

        jnc player_ded          ; if not found it's probably terrain

        mov a, m
        cpi FOEID_FUEL
        jnz player_ded

        ; charge +1 of fuel_hi
        lhld game_fuel_lo
        mvi l, 255              ; round up the fracional part
        inr h
        jz fuel_charge_saturate
        inr h
        jz fuel_charge_saturate
        shld game_fuel_lo
        jmp snd_fuel
fuel_charge_saturate
        dcr h
        shld game_fuel_lo
        jmp snd_full

player_ded
        ; for the time being it's something else that's ded
        push h
        call UpdateScore_KillA  ; update the score according to kill id
        pop h
        mov a, m
        ori FOEID_WIPE_FLAG
        mov m, a

        call snd_player_ded
        stc
        ret


        ;



; vi:syntax=m80
; vi:ts=8
; vi:sts=8
