    ;; ---------------------------------------- -   - 
    ;;  calculate terrain for the next block
    ;; -----------------------------------------------------
    ;  Modifies:
    ;       foe_clearance
    ;       pf_next_bridgeflag
    ;       pf_blockcount
    ;       terrain_next_left
    ;       terrain_next_water
    ;       terrain_next_islandwidth
UpdateNewBlock:
    lda foe_clearance
    cpi CLEARANCE_BLOCK
    jp unb_clearanceok
    mvi a, CLEARANCE_BLOCK
    sta foe_clearance
unb_clearanceok:
    ; update block count
    xra a
    sta pf_next_bridgeflag
    lda pf_blockcount
    dcr a
    sta pf_blockcount
    jz unb_setbridge
    cpi 1
    jnz unb_nosetbridge
    sta pf_next_bridgeflag
    jmp unb_nosetbridge

unb_setbridge:
    ; end the island and set passage to bridge width
    mvi a, BLOCKS_IN_LEVEL
    sta pf_blockcount
    mvi a, HALFBRIDGE_WIDTH
    sta terrain_next_water
    mvi a, SCREEN_WIDTH_BYTES/2 - HALFBRIDGE_WIDTH
    sta terrain_next_left
    jmp UpdateNewBlock_Exit

unb_nosetbridge:
    lhld random
    mov a, h
    ani $7
    adi 3
    sta terrain_next_left
    ral
    mov b, a
    mvi a, SCREEN_WIDTH_BYTES
    sub b
    ; divide water/2
    ora a
    rar 
    sta terrain_next_water

    ; if we're to terminate the island, 
    ; make sure that the passage is wide enough
    ; water - island - 6 >= 0
    mov b, a  ; b = terrain_next_water
    lda terrain_act_islandwidth
    ora a
    jz unb_A
    mov c, a  ; c = terrain_islandwidth
    mov a, b
    sub c
    sbi NARROWEST
    jp  unb_A 
    ; terrain_next_left = screen/2 - island - 6
    ; water_next_left = 6
    mvi a, NARROWEST
    sta terrain_next_water
    lda terrain_next_left
    mvi a, 16
    sub c
    sbi NARROWEST
    sta terrain_next_left
unb_A:
    ; force terminate the island before the bridge
    lda pf_next_bridgeflag
    ora a
    jnz unb_noisland
    ; if not enough water, no island
    lda terrain_next_water
    cpi ENOUGH_FOR_ISLAND ;9
    jc unb_noisland

    ; we have enough room for island
unb_makeisland:
    mov a, l
    rar
    rar
    ani $7
    adi $2
    ; make sure that water - island > NARROWEST
    mov b, a
    lda terrain_act_water 
    sub b
    sbi NARROWEST
    jm  unb_island_morewater
    jz  unb_island_morewater
    lda terrain_next_water
    sub b
    sbi NARROWEST
    jm  unb_island_morewater
    jz  unb_island_morewater
    ; the passage needs no tuning
    jmp unb_island_ok
unb_island_morewater:
    ; d = max(terrain_left, terrain_next_left)
    lda terrain_act_left 
    mov d, a
    lda terrain_next_left
    cmp d
    jm .+4 
    mov d, a
 
    ; make passage NARROWEST wide: 
    ; water = NARROWEST; island = screen/2 - (water+left)
    mvi a, NARROWEST
    sta terrain_next_water
    mov c, a
    mov a, d
    add c   
    mov c, a  ; c = next_water + current_left
    mvi a, 16
    sub c 
    mov b, a
unb_island_ok:
    ; check that island width is > 0
    mov a, b
    ora a
    jm unb_noisland
    sta terrain_next_islandwidth
    jmp UpdateNewBlock_Exit

unb_noisland:
    xra a
    sta terrain_next_islandwidth
UpdateNewBlock_Exit:
    ret

; vi:syntax=m80
; vi:ts=8
; vi:sts=8

