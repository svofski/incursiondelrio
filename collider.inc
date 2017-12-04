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
        jc cmf_victim_found
        lxi b, 8        ; next foe[]
        dad b
        lda cmf_yscan_ctr
        dcr a
        sta cmf_yscan_ctr
        jnz cmf_yscan

        ; must be just terrain
        ret

cmf_victim_found
        ;mvi m, FOEID_NONE       
        mov a, m
        ori FOEID_WIPE_FLAG
        mov m, a
        ret

        ; input h = & struct foe
        ; 
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

        ; hit if: foe.y1 <= missile.y1 <= foe.y2 ||
        ;         foe.y1 <= missile.y2 <= foe.y2
        ;
        ; condition 1a: foe.y1 <= missile.y1
        lda missile_hit_y
        cmp d           ; m.y1 - foe.y1 : must be +
        jp cmf_c1a_true
        jmp cmf_test_cond2
cmf_c1a_true
        cmp e           ; m.y1 - foe.y1 must be zero or neg
        jm cmf_intersects_y
        jz cmf_intersects_y
        jmp cmf_intersects_not

cmf_test_cond2
        ; condition 2
        adi 8           ; m.y2
        cmp d
        jm cmf_intersects_not    ; m.y2 - foe.y1 < 0, fail
        cmp e           ; m.y2 - foe.y2 should be minus or zero
        jm cmf_intersects_y
        jz cmf_intersects_y
        jmp cmf_intersects_not
        
cmf_intersects_y
        stc
        ret
cmf_intersects_not
        ora a
        ret

cmf_yscan_ctr   db 0
foe_height_tbl
        ;       0       1       2       3       4       5       6       7
        db      0,      8,      12,     12,     8,      0,      0,      0,
        ;       8       9       10      11      12      13      14      15
        db      0,      0,      0,      0,      0,      0,      0,      0,
        ;       16      17
        db      28,     24










cmf_height_found

        ; foeY = +4  
        lxi b, 4
        dad b

        

        lda missile_hit_y
        mov l, a
        lda frame_scroll
        add l                   ; a = absolute Y of missile
        mov d, a

        
        rrc
        rrc
        ani $38                 ; a = offset to foe block rel to foe_1

        mov c, a
        mvi b, 0
        lxi h, foe_1
        dad b                   ; h = foe block that we need
        shld foe_candidate_1_ptr

        ;;;;;;;;
        ;;jmp cmf_foe_ded
        ;;;;;;;;

        mov a, d
        rrc
        rrc
        adi 8
        ani $38                 ; foe[A+1]
        mov c, a
        lxi h, foe_1
        dad b
        shld foe_candidate_2_ptr

        lhld foe_candidate_2_ptr
        call cmf_try_foe_in_hl
        jc cmf_foe_ded
        lhld foe_candidate_1_ptr
        call cmf_try_foe_in_hl
        jc cmf_foe_ded
        ret

cmf_foe_ded
        jmp $
        mvi a, FOEID_WIPE_FLAG
        ora m
        mov m, a
        ; mvi m, FOEID_NONE
        ret

        

        ; inputs:
        ;       missile_hit_x   byte    missile X position
        ;       hl              pointer to foe block
        ; outputs:
        ;       hl              unmodified
        ;       CF              if foe ded
cmf_try_foe_in_hl
        ; load foe X position
        inx h                   ; h->foe.column
        mov a, m                ; a = column
        rlc 
        rlc
        rlc
        ani $f8
        inx h                   ; h->foe.index
        add m                   ; a = foe X
        sta foe_candidate_x1
        mov d, a
        ; normal foe has width 16 ($10)
        ; ship has width 28 ($1c)
        lxi b, $101c
        dcx h
        dcx h                   ; h->foe.id
        mov a, m
        cpi FOEID_SHIP
        jnz $+4                 ; skip next 1-byte instr
        mov b, c
        mov a, d
        add b                   ; a = foe_candidate_x2
        sta foe_candidate_x2
        mov e, a
        
        ; missile_x >= foe_candidate_x1 && missile_x <= foe_candidate_x2
        lda missile_hit_x
        inr a                   ; account for missile thickness (2)
        cmp e
        jz cmf_surehit1         ; missile_x == foe_candidate_x2
        jp cmf_surenot1         ; missile_x > foe_candidate_x2, miss
        dcr a                   ; missile_x
        cmp d                   ; foe_candidate_x1
        jz cmf_surehit1
        jm cmf_surenot1
cmf_surehit1    ; decidedly a hit
        ora a
        cmc
        ret
cmf_surenot1
        ora a
        ret
        
foe_candidate_1_ptr     dw 0
foe_candidate_2_ptr     dw 0
foe_candidate_x1        db 0
foe_candidate_x2        db 0


; vi:syntax=m80
; vi:ts=8
; vi:sts=8
