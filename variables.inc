frame_number:
    db 0
frame_scroll:
    db $ff; $10
frame_scroll_prev:      db $ff

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

pf_next_bridgeflag:     db 0
pf_next1_bridgeflag:    db 0

terrain_act:
terrain_act_left:       db 4
terrain_act_water:      db 24
terrain_act_islandwidth:db 0

; current block in level (max=BLOCKS_IN_LEVEL)
pf_blockcount:          db 1
pf_bridgeflag:          db 0
pf_roadflag:            db 0
pf_blockline:           db 0


foe_left:               db 0    ; leftmost position for a foe
foe_water:              db 0    ; how much water to travel right
foe_right:              db 0    ; unused?

; vertical clearance before next foe can be injected 
foe_clearance:          db 1

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

; game status
game_bridge:            db 0, 0, 0              ; unpacked bcd
game_lives:             db 3
game_score:             db 0,0,0,0,0,0          ; unpacked bcd
game_fuel_lo:           db 255
game_fuel_hi:           db 255                  ; warning at $40

; vi:syntax=m80
; vi:ts=8
; vi:sts=8
