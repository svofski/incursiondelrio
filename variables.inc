    ;; Foe table offsets
foeId           equ 0           ; ref: FOE_ID
foeColumn       equ 1           ; X column
foeIndex        equ 2           ; X offset 0..7
foeDirection    equ 3           ; 1 = LTR, -1 RTL, 0 = not moving
foeY            equ 4           ; Y position of sprite start
foeLeftStop     equ 5           ; column # of left limit
foeRightStop    equ 6           ; column # of right limit
foeBounce       equ 7           ; bounce flag
foeSizeOf       equ 8

    ;; Foe parameter block
foeBlock:
    db 0                        ; id
    db 5,0,1,0,$10,3,15
foeBlock_LTR:   
    dw 0                        ; dispatch to sprite LTR 
foeBlock_RTL:
    dw 0                        ; dispatch to sprite RTL

foePropeller_LTR:
    dw 0
foePropeller_RTL:
    dw 0

foeTableIndex:
    db 0

foe_1:
    db 0 ;FOEID_SHIP
    db 5,0,1,$10,   3,8,0
foe_2:
    db 0 ; FOEID_COPTER
    db 6,0,1,$30,   3,10,0
foe_3:
    db 0; FOEID_JET
    db 5,0,$ff,$50, 3,25,0
foe_4:
    db 0; FOEID_RCOPTER
    db 8,0,1,$70,   3,10,0
foe_5:
    db 0; FOEID_SHIP
    db 19,0,1,$90,  19,24,0
foe_6:
    db 0; FOEID_JET
    db 5,0,1,$b0,   0,0,0
foe_7:
    db 0; FOEID_SHIP
    db 21,0,1,$d0,  19,24,0
foe_8:
    db 0; FOEID_COPTER
    db 9,0,1,$f0,   3,10,0
foe_end

foe_left:               db 0    ; leftmost position for a foe
foe_water:              db 0    ; how much water to travel right
foe_right:              db 0    ; unused?

                        ;
                        ; input map: $ff = key/button down
                        ; sizeof(inputs) = 6
inputs:                     
input_down:             db 0
input_right:            db 0
input_up:               db 0
input_left:             db 0
input_fire:             db 0
input_dummy:            db 0


tmp16                   dw 0

; Initial game state
game_initial_state_aligned      equ (.+8) and 0xfff8
                        .org game_initial_state_aligned
game_initial_state
initial_bridge          db 0, 0, 0
initial_bridge_bin      db 0
initial_lives           db 3
initial_score           db 0, 0, 0, 0, 0, 0
initial_fuel            dw 65535
initial_random          dw $a814
initial_frame_number    db 0
initial_frame_scroll    db $ff
initial_scroll_prev     db $ff

    ; terrain data
    ; terrain_left, terrain_water must be one word
initial_terrain_current:            
initial_terrain_left:           db SCREEN_WIDTH_BYTES/2 - HALFBRIDGE_WIDTH
initial_terrain_water:          db HALFBRIDGE_WIDTH
initial_terrain_islandwidth:    db 0

initial_terrain_next:
initial_terrain_next_left:          db SCREEN_WIDTH_BYTES/2 - HALFBRIDGE_WIDTH
initial_terrain_next_water:         db HALFBRIDGE_WIDTH
initial_terrain_next_islandwidth:   db 0

initial_terrain_act:
initial_terrain_act_left:       db SCREEN_WIDTH_BYTES/2 - HALFBRIDGE_WIDTH
initial_terrain_act_water:      db HALFBRIDGE_WIDTH
initial_terrain_act_islandwidth:db 0

initial_next_bridge:    db 0
initial_next1_bridge:   db 0
initial_blockcount:     db 2    ; prepare for the entrance at bridge 1
initial_bridgeflag:     db 0
initial_roadflag:       db 0
initial_blockline:      db 0

initial_collision:      db 0
;; Player X position as column + index offset within the column
initial_player_col:	db 15
initial_player_idx:   	db 4
initial_player_dir:     db 0
initial_playerXspeed:   db 0
initial_playerXaccu:    db 255	
initial_playerYspeed:   db YSPEED_DEFAULT
initial_playerYaccu:    db 0
initial_until_bridge:   db 0    ; lines until the bridge crossing is registered
initial_foe_clearance:  db 0
initial_deathroll:      db 0
initial_preroll:        db 1

; Complete game state
game_state_aligned      equ (.+8) and 0xfff8
                        .org game_state_aligned
game_state
game_bridge:            db 0, 0, 0              ; unpacked bcd
game_bridge_bin:        db 0                    ; binary bridge # for logic
game_lives:             db 3
game_score:             db 0,0,0,0,0,0          ; unpacked bcd
game_fuel_lo:           db 255
game_fuel_hi:           db 255                  ; warning at $40
random:
randomLo:	        db $14
randomHi:	        db $a8
frame_number:           db 0
frame_scroll:           db $ff
frame_scroll_prev:      db $ff

    ; terrain data
    ; terrain_left, terrain_water must be one word
terrain_current:            
terrain_left:           db 4
terrain_water:          db 12 ; 24
terrain_islandwidth:    db 0

terrain_next:
terrain_next_left:          db 4
terrain_next_water:         db 24
terrain_next_islandwidth:   db 0


terrain_act:
terrain_act_left:       db 4
terrain_act_water:      db 24
terrain_act_islandwidth:db 0


pf_next_bridgeflag:     db 0
pf_next1_bridgeflag:    db 0
; current block in level (max=BLOCKS_IN_LEVEL)
pf_blockcount:          db 1
pf_bridgeflag:          db 0
pf_roadflag:            db 0
pf_blockline:           db 0

player_collision:       db 0
;; Player X position as column + index offset within the column
player_column:		db 15
player_index:   	db 4
player_dir:	        db 0
playerXspeed:		db 0
playerXaccu:		db 255	
playerYspeed:		db YSPEED_DEFAULT
playerYaccu:		db 0
player_until_bridge     db 0    ; lines until the bridge crossing is registered

; vertical clearance before next foe can be injected 
foe_clearance:          db 1
deathroll:              db 0
preroll:                db 0

game_state_end_aligned  equ (.+8) and 0xfff8
                        .org game_state_end_aligned 
game_state_end

                        ; Reset the game to its initial state
GameReset
                        lxi h, game_initial_state
                        lxi d, game_state
                        mvi c, game_state_end - game_state
gamereset_memcpy
                        mov a, m
                        stax d
                        inx h
                        inx d
                        dcr c
                        jnz gamereset_memcpy

                        call ClearFoeTable
                        ret

ClearFoeTable
                        ; Clear foe table
                        lxi h, 0
                        shld foeTableIndex
                        lxi h, foe_1
                        mvi c, foe_end - foe_1
                        xra a
gamereset_foe_zero
                        mov m, a
                        inx h
                        dcr c
                        jnz gamereset_foe_zero
                        ret

                        ; save game state in case a plane is lost
                        ; pick memento_a or memento_b depending on bridge number
                        ; bridge&1 == 0: save to memento b
                        ;                restore from memento a
                        ; bridge&1 == 1: save to memento a
                        ;                restore from memento b
                        ; scenario A:
                        ;  1. bridge&1 == 0 appears, game state gets saved to b
                        ;  2. plane dies, memento a (previous) restored
                        ; scenario B:
                        ;  1. bridge&1 == 0 appears, game state saved to b
                        ;  2. plane crosses the bridge, bridge&1 == 1
                        ;  3. plane dies, memento b restored
GameSaveAtBridge
                        lxi h, 0
                        dad sp
                        shld gsab_return+1

                        lxi sp, game_state
                        lxi h, state_memento_a
                        lda game_bridge+2 ; it's bcd, but lsb 0 is good for odd/even
                        rar
                        jc $+6                  ; bridge&1 == 1 -> save to a
                        lxi h, state_memento_b  ; bridge&1 == 0 -> save to b
gsab_loop_begin
                        mvi a, (game_state_end-game_state)>>3
gsab_loop
                        pop b
                        mov m, c
                        inx h
                        mov m, b
                        inx h

                        pop b
                        mov m, c
                        inx h
                        mov m, b
                        inx h

                        pop b
                        mov m, c
                        inx h
                        mov m, b
                        inx h

                        pop b
                        mov m, c
                        inx h
                        mov m, b
                        inx h

                        dcr a
                        jnz gsab_loop

gsab_return             lxi sp, 0
                        ret
GameResetToBridge
                        call ClearFoeTable
                        call grtb_copy_state

                        ; reset player position
                        lhld initial_player_col
                        shld player_column ; column and index

                        ret

grtb_copy_state
                        lxi h, 0
                        dad sp
                        shld gsab_return+1

                        ; bridge&1 == 0: restore from a
                        lxi h, game_state
                        lxi sp, state_memento_b
                        lda game_bridge+2 ; it's bcd, but lsb 0 is good for odd/even
                        rar
                        jc $+6                   ; bridge&1 == 1 -> restore from b
                        lxi sp, state_memento_a  ; bridge&1 == 0 -> restore from a
                        jmp gsab_loop_begin


; vi:syntax=m80
; vi:ts=8
; vi:sts=8
