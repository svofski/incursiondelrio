; River Raid for Vector-06C

        .binfile incursiondelrio.rom
        .nodump
        .nohex
                        
BOTTOM_HEIGHT           equ 60
TOP_HEIGHT              equ 16
SCREEN_WIDTH_BYTES      equ 32

FOE_MAX                 equ 8  
BLOCKS_IN_LEVEL         equ 16
BLOCK_HEIGHT            equ 64
HALFBRIDGE_WIDTH        equ 4
NARROWEST               equ 4   ; narrowest passage around an island
ENOUGH_FOR_ISLAND       equ 9   ; if water this wide, island fits

ROAD_WIDTH              equ 28
ROAD_BOTTOM             equ 23

; regular foe id's $00..$1f
FOEID_NONE              equ 0
FOEID_SHIP              equ 1
FOEID_COPTER            equ 2
FOEID_RCOPTER           equ 3
FOEID_JET               equ 4
FOEID_BRIDGE            equ 16
FOEID_FUEL              equ 17

FOEID_DEBRIS_1          equ 32
FOEID_DEBRIS_2          equ 33
FOEID_DEBRIS_3          equ 34
FOEID_DEBRIS_4          equ 35
FOEID_DEBRIS_END        equ 36

FOEID_WIPE_FLAG     equ $80 ; this bit set in id == foe needs to be wiped

CLEARANCE_DEFAULT   equ 14
CLEARANCE_BRIDGE    equ 32
CLEARANCE_FUEL      equ 40
CLEARANCE_BLOCK     equ 18

BRIDGE_COLUMN       equ 13

KEY_DOWN            equ $80
KEY_RIGHT           equ $40
KEY_UP              equ $20
KEY_LEFT            equ $10

        .org $100

clrscr:
    di
    lxi h, $8000
    ; good for seeing sprite scratch area 
    ; mvi b, $ff
    mvi b, 0
clearscreen:
    xra a
    mov m, b
    inx h
    ora h
    jnz clearscreen

    ; init stack pointer
    lxi sp, $100

    ; enable interrupts

    ; write ret to rst 7 vector 
    mvi a, $c9
    sta $38

    ; initial stuff
    ei
    hlt
    call setpalette
    call showlayers
    call SoundInit

jamas:
    mvi a, 10
    out 2

    ; write ret to rst 7 vector 
    mvi a, $c9
    sta $38

    ei
    hlt

    ; fuckup interceptor
    lxi h, $76f3
    shld $38

    xra a
    out 2

    call KeyboardScan
    call PlayerWipe
    call MissileWipe

    ; scroll
    mvi a, 88h
    out 0
    lda frame_scroll
    out 3

    cpi $80
    jnz jamas_1
    call SoundInit
jamas_1:
    call SoundSound
    call SoundNoise

    ; keep interrupts enabled to make errors obvious
    ei

    call AnimateSprites
    call PlayerMotion

    ; poop border  
    mvi a, 6    
    out 2

    call MissileMotion
    call MissileSprite

    mvi a, $e
    out 2
    ; if missile collided, is it with a foe or terrain and if a foe, which one?
    call CollisionMissileFoe
    ; could be just fuel, but usually ded
    call CollisionPlaneFoe
    ; --

    ; black border
    mvi a, 5
    out 2

    lxi d, foe_1
    call foe_in_de
    lxi d, foe_2
    call foe_in_de
    lxi d, foe_3
    call foe_in_de
    lxi d, foe_4
    call foe_in_de
    lxi d, foe_5
    call foe_in_de
    lxi d, foe_6
    call foe_in_de
    lxi d, foe_7
    call foe_in_de
    lxi d, foe_8
    call foe_in_de

    ; dkblue border
    mvi a, $e
    out 2
    call SoundNoise
    call PlayerSpeed

    ; pink border
    mvi a, 4
    out 2
    call DrawBlinds             ; cover 2 lines of PF at the bottom

    ; white border
    mvi a, 2
    out 2

    call PlayerSprite
    lda  frame_scroll
    sta frame_scroll_prev

    mvi a, 4
    out 2
    call PaintScore

    ; poop border
    mvi a, 6
    out 2


    call PlayFieldRoll

    ; black border
    mvi a, 5
    out 2
    call ClearBlinds            ; uncover 2 lines of PF at the top
    call SoundNoise

    mvi a, 8
    out 2

    lxi h, frame_number
    inr m
    jmp jamas

PlayFieldRoll:
    call ScrollAccu         ; d = number of lines to advance
    mov a, d
    ora a
    rz 
    dcr d
    push d

    ; update random
    ; create new pf block when needed
    ; create new foe
    call UpdateLine
    ; update one line of terrain
    call UpdateOneStep
    ; draw one line of terrain
    call ProduceLineMain

    lxi h, frame_scroll
    inr m
    call check_bridge_passing
    call fuel_burn
    pop d
    dcr d
    rm 

    ;;;; full speed: scroll more 
    call UpdateLine
    call UpdateOneStep
    call ProduceLineMain
    lxi h, frame_scroll
    inr m
    call check_bridge_passing
    call fuel_burn
    ;;;;;
    ret

check_bridge_passing
        lda player_until_bridge
        ora a
        rz
        dcr a
        sta player_until_bridge
        rnz
        jmp UpdateScore_BridgePass
        
fuel_burn
        lhld game_fuel_lo 
        lxi d, $ffec
        dad d
        shld game_fuel_lo
        ret
    ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
    ;;                   V A R I A B L E S
    ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
    .include variables.inc

    .include sound.inc

    .include player.inc
    .include missile.inc
    .include collider.inc

    .include input.inc

    ;; ---------------------------------------------- -   - 
    ;; Process foe with descriptor in DE
    ;; ----------------------------------------------------------
foe_in_de:
        push d

        lxi h, 0                        ; 12
        dad sp                          ; 12
        xchg                            ; 4     ; de = saved sp
        sphl                            ; 8  = 36
        pop h                           ; 12
        shld foeBlock + 0               ; 20
        pop h                           ; 12
        shld foeBlock + 2               ; 20
        pop h                           ; 12
        shld foeBlock + 4               ; 20
        pop h                           ; 12
        shld foeBlock + 6               ; 20
        xchg                            ; 4
        sphl                            ; 8     = 176

        call foe_byId

        ; copy foe block back
        ; only the first 4 bytes of foeBlock need to be copied back
        ; it's faster to do it by byte

        lhld foeBlock                   ; 20
        xchg                            ; 4
        pop h                           ; 12
        mov m, e                        ; 8
        inx h                           ; 8
        mov m, d                        ; 8
        inx h                           ; 8
        xchg                            ; 4
        lhld foeBlock+2                 ; 20
        xchg                            ; 4
        mov m, e                        ; 8
        inx h                           ; 8
        mov m, d                        ; 8   =120
        ret


setpalette:
    lxi h, palette_data+15
    mvi c, 16
palette_loop:
    mov a, c
    dcr a
    out $2
    mov a, m
    out $c
    dcr c
    dcx h
    jnz palette_loop
    ret

    ;; ---------------------------------------------- -   - 
    ;; Clear the blinds at the top, leave 16+16 of black at sides
    ;; ----------------------------------------------------------
ClearBlinds:
    lxi h, $e2ff-TOP_HEIGHT
    mvi e, 0
    mvi c, 7;14 ; 28
    lda frame_scroll
    add l
    mov l, a
    ; fill 2 lines in a meander-like pattern y,y+1,x+1,y+1
clearblinds_fill:
    mov m, e
    inr l    
    mov m, e 
    inr h
    mov m, e
    dcr l
    mov m, e
    inr h
    mov m, e
    inr l    
    mov m, e 
    inr h
    mov m, e
    dcr l
    mov m, e
    inr h
    dcr c   
    jnz clearblinds_fill
    ret 

    ;; ---------------------------------------------- -   - 
    ;; Draw 2 lines of black at the bottom of game field
    ;; ----------------------------------------------------------
DrawBlinds:

    lxi h, $8000 + BOTTOM_HEIGHT - 22 ; 22 ~ enemy height
    mvi e, $00
    ; wipe the first 3 layers with zeroes...
    mvi c, 4*3 ; 16*3 
    lda frame_scroll
    add l
    mov l, a
    call drawblinds_fill
    
    ; ...and the black layer with $ff
    mvi e, $ff 
    mvi c, 4 ; 16
    mov a, l
    adi 22
    mov l, a
    ; fill 2 lines in a meander-like pattern y,y+1,x+1,y+1
drawblinds_fill:
    mov m, e
    inr l    
    mov m, e 
    inr h
    mov m, e
    dcr l
    mov m, e
    inr h
    mov m, e
    inr l    
    mov m, e 
    inr h
    mov m, e
    dcr l
    mov m, e
    inr h
    mov m, e
    inr l    
    mov m, e 
    inr h
    mov m, e
    dcr l
    mov m, e
    inr h
    mov m, e
    inr l    
    mov m, e 
    inr h
    mov m, e
    dcr l
    mov m, e
    inr h
    dcr c   
    jnz drawblinds_fill
    ret 

    ;; ---------------------------------------------- -   - 
    ;; Create new foe
    ;; ----------------------------------------------------------
    ;  Modifies:
    ;       foe_clearance
    ;       foe_left
    ;       foe_water
    ;       foeTableIndex
    ;       foeTableIndex->contents
CreateNewFoe:
    push psw

    ; bridge?
    lda pf_roadflag
    ora a
    jz cnf_notabridge

    ; check that we're on the right line for bridge
    lda pf_blockline
    ani $f
    jz cnf_preparetableoffset
    ; do nothing if not
    jmp CreatenewFoe_Exit

    ; not a bridge
cnf_notabridge:
    ; store clearance in case no foe is to be created
    mvi a, CLEARANCE_DEFAULT
    sta foe_clearance

    ; regular foe
    lda randomHi
    mov b, a
    lda randomLo
    cpi $a0
    jnc CreateNewFoe_Exit

    ; update bounce boundaries
    lxi h, pf_tableft
    lda frame_scroll
    add l
    sui 8 ; offset to where the terrain is already generated
    mov l, a
    mov a, m
    mov d, a
    sta foe_left
    inr h ; --> pf_tabwater
    mov a, m
    mov e, a
    sta foe_water

    ; island?
    add d
    cpi SCREEN_WIDTH_BYTES/2
    jz cnf_doublewater
    ; foe_left = width - (left+water)
    mov d, a
    mov a, b
    lda randomLo
    ani $2
    jz cnf_preparetableoffset

    mov a, d
    cma
    inr a
    adi SCREEN_WIDTH_BYTES
    sta foe_left
    jmp cnf_preparetableoffset
cnf_doublewater:
    mov a, e
    ora a
    ral
    sta foe_water
    jmp cnf_preparetableoffset

cnf_preparetableoffset:
    ; get current foe index
    lxi h, foeTableIndex
    mov a, m
    mov b, a
    inr a           ; advance the index
    cpi FOE_MAX
    jnz cnf_L1
    xra a
cnf_L1:
    mov m, a
    ; use the original foeTableIndex
    mov a, b
    ; get offset foe_1 + foeTableIndex*8
    lxi h, foe_1
    ora a
    ral
    ral
    ral 
    mvi b, 0
    mov c, a
    dad b       
    ; hl = foe[foeTableIndex]: 
    ;   Id, Column, Index, Direction, Y, Left, Right

    lda pf_roadflag
    ora a
    jz cnf_regular_or_fuel

    ; create bridge
    lda pf_blockline
    cpi BLOCK_HEIGHT/2
    jnz CreateNewFoe_Exit

    mvi m, FOEID_BRIDGE
    inx h
    mvi m, BRIDGE_COLUMN ; = 13
    inx h
    mvi m, 0 ; index
    inx h
    mvi m, 0 ; direction
    inx h
    lda frame_scroll
    mov m, a ; y
    
    ; set bridge crossing count
    mvi a, 256-BOTTOM_HEIGHT-TOP_HEIGHT
    sta player_until_bridge

    mvi a, CLEARANCE_BRIDGE
    sta foe_clearance
    jmp CreateNewFoe_Exit

    ; create fuel or regular foe
cnf_regular_or_fuel:
    ;mvi a, CLEARANCE_DEFAULT
    ;sta foe_clearance

    lda randomHi
    mov b, a

    ; fuel maybe?
    cpi $d0
    mov a, b
    jc cnf_notfuel

    ; yes, fuel
    mvi a, CLEARANCE_FUEL
    sta foe_clearance

    mvi d, FOEID_FUEL
    jmp cnf_3

cnf_notfuel:
    ; a regular foe
    ani $3
    inr a
    mov d, a    ; d = foe id

cnf_3:
    ; width
    lda foe_water
    mov c, a
    mov a, d
    cpi FOEID_SHIP
    mov a, c
    jnz cnf_width_2
    sui 2
cnf_width_2:
    sui 1
    mov e, a
    ; now a = available width
    sui 2
    jz CreateNewFoe_Exit    ; bad luck: 
    jm CreateNewFoe_Exit    ;   passage too narrow for this foe

    call randomNormA        ; c = random less than a
    ; Column
    lda foe_left
    add c                   ; offset the foe right
    mov c, a

    ; check that if it's a fuel, it fits
    call check_fuel_fit
    ora a
    jz CreateNewFoe_AbortFuel

    mov m, d 
    inx h                   ; foe.Id = d

    inr c
    mov m, c                ; foe.Column = a
    inx h

    ; Index = 0
    mvi m, 0
    inx h

    ; Direction
    lda randomHi
    ani $8
    mvi a, $ff
    jz cnf_dir1
    mvi a, 1
cnf_dir1:
    mov m, a
    inx h

    ; Y = current
    lda frame_scroll
    mov m, a
    inx h
    ; Left
    lda foe_left
    dcr a
    mov m, a
    mov c, a
    inx h

    ; Right
    mov a, e
    add c
    mov m, a
CreateNewFoe_Exit:
    pop psw
    ret

CreateNewFoe_AbortFuel:
    lda CLEARANCE_DEFAULT
    sta foe_clearance
    jmp CreateNewFoe_Exit

    ; d = foe id
    ; c = column
check_fuel_fit:
    mov a, d
    cpi FOEID_FUEL
    rnz

    lda pf_blockline
    cpi BLOCK_HEIGHT-CLEARANCE_FUEL
    rnc

    push b
    push d

    ; left edge
    ; terrain_next_left > c: overlap
    lda terrain_next_left
    mov b, a
    cmp c
    mvi a, 0
    jp cff_pop
    mvi a, 1

    ; right edge
    ; terrain_next_left + terrain_next_water < c: overlap
    lda terrain_next_water
    add b
    cmp c
    mvi a, 1
    jp cff_pop
    mvi a, 0

cff_pop:
    pop d
    pop b
    ret

    ;; ---------------------------------------------- -   - 
    ;; Update line: terrain formation
    ;; ----------------------------------------------------------
    ;  Modifies:
    ;       randomHi, randomLo
    ;       pf_blockline
    ;       foe_clearance
    ;  Branches:
    ;       UpdateNewBlock
    ;       CreateNewFoe
UpdateLine:
    ; random(), result in randomHi/randomLo and HL
    call nextRandom16 
    ; update block line count
    lda pf_blockline
    dcr a
    jp ul_1
    mvi a, BLOCK_HEIGHT-1
ul_1:
    sta pf_blockline
    ora a   
    jnz ul_1_1

    lhld terrain_next
    shld terrain_act
    lda terrain_next_islandwidth
    sta terrain_act_islandwidth

    lda pf_next1_bridgeflag
    sta pf_bridgeflag
    lda pf_next_bridgeflag
    sta pf_next1_bridgeflag

    call UpdateNewBlock       ; this block has ran to its end
                              ; update terrain variables
                              ; for the next block 
ul_1_1:
    ; avoid creating sprites on roll overlap
    lda frame_scroll
    cpi $10
    jc UpdateLine_Exit

    ; crossing a road/bridge? 
    lda pf_bridgeflag ;pf_roadflag
    ora a
    jz  ul_2
    call CreateNewFoe   ; create bridge when it's time
    jmp UpdateLine_Exit
ul_2:
    lda foe_clearance
    dcr a
    sta foe_clearance
    cz CreateNewFoe     ; create a regular foe
UpdateLine_Exit:
    ret 

    ;;;;;;;;;;;;;;;;;;;;;;;;;;;;
    ; UpdateNewBlock
    .include updatenewblock.inc
    ;;;;;;;;;;;;;;;;;;;;;;;;;;;;

    ;; ---------------------------------------------- -   - 
    ;; Update one scanline of terrain
    ;; interpolate between current and next values
    ;; ----------------------------------------------------------
    ;  Modifies:
    ;       pf_roadflag
    ;       terrain_left
    ;       terrain_water
    ;       terrain_islandwidth
UpdateOneStep:
    lda frame_scroll
    ani $1
    rnz

    ; check if we need to set the road flag

    lda pf_bridgeflag
    sta pf_roadflag

    ; widen/narrow the banks
    lhld terrain_act
    xchg
    lhld terrain_current    ; d = next_left, e = next_width
    mov a, l
    cmp e
    jz uos_3
    jm uos_2
    dcr l       ; move left bank 1 left
    inr h       ; make water 1 wider
    shld terrain_current

    jmp uos_3
uos_2:
    inr l       ; move left bank 1 right
    dcr h       ; make water 1 narrower 
    shld terrain_current

uos_3:
    ; do the same with the island
    lda terrain_act_islandwidth
    mov b, a
    lda terrain_islandwidth
    cmp b
    jz  UpdateOneStep_Exit ; next == current, no update
    jp  uos_4
    ; move island wider, water narrower
    dcr h  ; less water
    inr a  ; more island
    shld terrain_current
    sta terrain_islandwidth
    jmp UpdateOneStep_Exit
uos_4:
    inr h  ; more water
    dcr a  ; less island
    shld terrain_current
    sta terrain_islandwidth
UpdateOneStep_Exit:
    ret

    ;; ---------------------------------------------- -   - 
    ;; Draw one line of terrain
    ;; ----------------------------------------------------------
ProduceLineMain:
    ; update boundary tables
    lxi h, pf_tableft
    lda frame_scroll
    add l
    mov l, a
    lda terrain_left
    mov m, a
    inr h
    lda terrain_water
    mov m, a

    ; if no road, just produce regular line
    lda pf_roadflag
    ora a
    jz produce_line_green

    lda pf_blockline
    cpi BLOCK_HEIGHT-ROAD_BOTTOM     ; bottom edge
    jz produce_line_road
    jp produce_line_green
    cpi BLOCK_HEIGHT-(ROAD_BOTTOM+ROAD_WIDTH)     ; top edge
    jp produce_line_road
    jz produce_line_road
    jmp produce_line_green

produce_line_road:
    ; if at the border
    jz plr_border
    ; bottom divider line
    cpi BLOCK_HEIGHT-(ROAD_BOTTOM+(ROAD_WIDTH/2)-1)
    jp plr_asphalt
    ; top divider line
    cpi BLOCK_HEIGHT-(ROAD_BOTTOM+(ROAD_WIDTH/2)+1)
    jm plr_asphalt
    jmp plr_yellow
plr_asphalt:
    lxi h, $c201   ; c+8 = cyan, c+a = near black
    mvi d, $c0+SCREEN_WIDTH_BYTES-2
    call produce_line_e2
    lxi h, $8201
    mvi d, $80+SCREEN_WIDTH_BYTES-2
    call produce_line_e2
    ret
plr_yellow:
    lxi h, $8201  ; 8+a = yellow
    mvi d, $80+SCREEN_WIDTH_BYTES-2
    call produce_line_e2
    lxi h, $a201
    mvi d, $a0+SCREEN_WIDTH_BYTES-2
    call produce_line_e2
    ret

plr_border:
    lxi h, $c201  
    mvi d, $c0+SCREEN_WIDTH_BYTES-2
    call produce_line_e2
    lxi h, $a201
    mvi d, $a0+SCREEN_WIDTH_BYTES-2
    call produce_line_e2
    ret

produce_line_green:
    ;lxi h, $80ff+2
    lxi h, $8201
    mvi d, $80+SCREEN_WIDTH_BYTES-2
produce_line_e2:
    lda frame_scroll
    add l
    mov l, a
    lxi b, $ff00
    lda terrain_left
    sui 2
produce_loop_leftbank:
    mov m, b
    inr h
    dcr a
    jnz produce_loop_leftbank

    lda terrain_water
    ora a
    jz produce_island
    mov m, c
    inr h
    mov m, c
    inr h
    mov m, c
    inr h
    mov m, c
    inr h
    sui 4
    jz produce_island
produce_loop_leftwater:
    mov m, c
    inr h
    dcr a
    jnz produce_loop_leftwater

produce_island:
    lda terrain_islandwidth
    ora a
    jz produce_rightwater
produce_loop_island:
    mov m, b
    inr h
    mov m, b
    inr h
    dcr a
    jnz produce_loop_island
produce_rightwater:
    lda terrain_water
    ora a
    jz produce_rightbank
    mov m, c
    inr h
    mov m, c
    inr h
    mov m, c
    inr h
    mov m, c
    inr h
    sui 4
    jz produce_rightbank
produce_loop_rightwater:
    mov m, c
    inr h
    dcr a
    jnz produce_loop_rightwater

produce_rightbank:
    mov a, d
    sub h
produce_loop_rightbank:
    mov m, b
    inr h
    dcr a
    jnz produce_loop_rightbank
    ret

    ;; ---------------------------------------------- -   - 
    ;; Animate sprites: propellers, explosions, wheels
    ;; Should be called once per frame, before the first sprite
    ;; ----------------------------------------------------------
AnimateSprites:
    ; animate the propeller
    lda frame_number
    ani $2
    jz  aspr_A
    lxi h, propellerB_ltr_dispatch
    lxi d, propellerB_rtl_dispatch
    jmp aspr_B
aspr_A:
    lxi h, propellerA_ltr_dispatch
    lxi d, propellerA_rtl_dispatch
aspr_B:
    shld foePropeller_LTR
    xchg
    shld foePropeller_RTL
    ret

foe_byId:
    lda foeBlock + foeId
    ; if (foe.Id == 0) return;
    ora a
    rz
    mov b, a                ; b = foe.id

    ; check if blow up flag is set
    ani $80
    jz foe_notblownup

    ; find out what kind of foe it was to wipe clean
    ; . .
    ; .. .
    ; . .  .   .
    mov a, b
    ani $3f
    cpi FOEID_SHIP
    jnz $+9
    lxi h, wipe_ship
    jmp foe_wipe_disp
    cpi FOEID_FUEL
    jnz $+9
    lxi h, wipe_fuel
    jmp foe_wipe_disp
    cpi FOEID_BRIDGE
    jnz $+9
    lxi h, wipe_bridge
    jmp foe_wipe_disp
    cpi FOEID_DEBRIS_END
    jz  foe_wipe_finalize
    lxi h, wipe_copter
foe_wipe_disp
    shld foe_frame_wipe_dispatch+1

    ; Clear foe ID (probably advance it to a kaboom sprite later)
    ;xra a
    mvi a, FOEID_DEBRIS_1
    sta foeBlock + foeId

    ; wipe the sprite area
    ; wtf lxi h, wipe_ship
foe_frame_wipe:
    lda foeBlock + foeColumn
    adi $80                 ; $80 + foeColumn (high of base addr)
    mov d, a
    lda foeBlock + foeY
    mov e, a
foe_frame_wipe_dispatch:
    jmp wipe_ship               ; modified code!

foe_wipe_finalize:              ; wipe out the debris and clear foe id
        xra a
        sta foeBlock + foeId
        lxi h, wipe_debris      ; because regular wipes don't wipe black
        shld foe_frame_wipe_dispatch+1
        jmp foe_frame_wipe
        
    
foe_notblownup:
    ; check Y and clear the foe if below the bottom line
    lda frame_scroll
    mov l, a
    lda foeBlock + foeY              
    sub l
    cpi BOTTOM_HEIGHT-8
    jnc foe_infield
    xra a
    sta foeBlock + foeId
    ret

foe_infield:
    ; prepare dispatches
    mov a, b
    dcr b
    jz  foe_byId_ship       ; 1 == ship
    dcr b
    jz  foe_byId_copter     ; 2 == copter
    dcr b
    jz  foe_byId_rcopter    ; 3 == redcopter
    dcr b
    jz  foe_byId_jet        ; 4 == jet
    ; specials
    cpi FOEID_FUEL
    jz  fuel_frame
    cpi FOEID_BRIDGE
    jz  bridge_frame
    ; so this is perhaps DEBRIS ? 32 to 35, 36 ends
    cpi FOEID_DEBRIS_1
    jp debris_frame
    ; default: return  
    ret

foe_byId_ship:
    lxi h, ship_ltr_dispatch
    shld foeBlock_LTR
    lxi h, ship_rtl_dispatch
    shld foeBlock_RTL
    jmp foe_frame

foe_byId_jet:
    lxi h, jet_ltr_dispatch
    shld foeBlock_LTR
    lxi h, jet_rtl_dispatch
    shld foeBlock_RTL
    jmp jet_frame           ; jet has a separate handler

foe_byId_rcopter:
    ; draw the copter body
    lxi h, redcopter_ltr_dispatch
    shld foeBlock_LTR
    lxi h, redcopter_rtl_dispatch
    shld foeBlock_RTL
    call foe_frame
    jmp foe_byId_copterpropeller
foe_byId_copter:
    ; draw the copter body
    lxi h, copter_ltr_dispatch
    shld foeBlock_LTR
    lxi h, copter_rtl_dispatch
    shld foeBlock_RTL
    call foe_frame
foe_byId_copterpropeller:
    ; load animated propeller
    lhld foePropeller_LTR
    shld foeBlock_LTR
    lhld foePropeller_RTL
    shld foeBlock_RTL

    ; offset propeller Y position
    lda foeBlock + foeY ; 16
    adi 4               ; 8
    sta foeBlock + foeY ; 16
    ; draw propeller
    call foe_paint_preload 
    ret

    ;; ---------------------------------------------- -   - 
    ;; Bridge: prepare and draw
    ;; ----------------------------------------------------------
bridge_frame:
    lxi h, bridgeBottom_ltr_dispatch
    shld foeBlock_LTR
    shld foeBlock_RTL
    mvi e, 12
    lda foeBlock + foeY
    adi 7
    sta foeBlock + foeY
    mvi h, 1
    mvi c, 0
    call foe_paint

    lxi h, bridgeTop_ltr_dispatch
    shld foeBlock_LTR
    shld foeBlock_RTL
    mvi e, 12
    lda foeBlock + foeY
    adi 14
    sta foeBlock + foeY
    mvi h, 1
    mvi c, 0
    call foe_paint
    ret

        ;; ---------------------------------------------- -   - 
        ;; Fuel: prepare and draw (call directly bypassing dispatch)
        ;; ----------------------------------------------------------
fuel_frame:
        lda foeBlock + foeColumn
        adi $7f                         ; FIXME should be $80
        mov d, a
        lda foeBlock + foeY

        mov e, a                        ; de == base addr
        push d
        adi 6
        mov e, a
        push d
        adi 6
        mov e, a
        push d
        adi 6
        mov e, a

        lxi b, 0
        call fuuuu_ltr0
        pop d
        call uuuuu_ltr0
        pop d 
        call euuuu_ltr0
        pop d
        call luuuu_ltr0

        ret

    ;; ---------------------------------------------- -   - 
    ;; Jet: prepare and draw
    ;; ----------------------------------------------------------
jet_frame:
    ; load Column to e

    lhld foeBlock + foeColumn
    mov e, l ; e = foeColumn
    mov b, h ; b = foeIndex
    mvi h, 0 ; bounce = 0

    lda foeBlock + foeDirection
    mov c, a   ; keep direction in c
    ral
    mvi a, 4
    jnc jet_move_diradd
    mvi a, $fc ; -4
jet_move_diradd:
    add b
    mov b, c   ; restore direction in b
    ; if (Index < 0  
    ora a
    jm jet_move_indexoverrun
    ;     || Index == 8)
    cpi $8
    jz jet_move_indexoverrun

    ; for right screen limit 
    ; a here can be only 0 or 4 (we're looking for 4)
    ; so check if a + 30 == 34
    mov c, a
    add e
    cpi 34
    jnz jet_move_normal
    xra a
    jmp jet_move_reset_to_a

jet_move_normal:
    ; index within column boundary
    ; save Index, update c
    mov a, c
    sta foeBlock + foeIndex
    ; all done, paint
    jmp foe_paint

jet_move_indexoverrun:
    ; {
    ; Index = Index % 8
    ani $7
    ; save Index, update c
    sta foeBlock + foeIndex
    mov c, a
    ; Column = Column + Direction 
    ; column in e
    mov a, b
    add e
    sta foeBlock + foeColumn
    mov e, a
    ; }
jet_move_checklimits:
    ; check for left screen limit
    ; we are here if Index == 0 || Index == 7
    ; e = Column
    ora a       ; if (a >= 0) 
    mvi a, 29
    jp jet_move_continue ; -->
jet_move_reset_to_a:
    sta foeBlock + foeColumn
    mov e, a
jet_move_continue:
    jmp foe_paint

    ;; ---------------------------------------------- -   - 
    ;; Frame routine for a regular foe: ship, copters
    ;; ----------------------------------------------------------
foe_frame:
    mvi h, 0 ; bounce flag in h
foe_Move:
    ; load Column to e
    lda foeBlock + foeColumn
    mov e, a    
    ; index = index + direction
    lda foeBlock + foeDirection
    mov b, a
    lda foeBlock + foeIndex
    add b
    ; if (Index == -1  
    ;ora a
    jm foe_move_indexoverrun
    ;     || Index == 8)
    cpi $8
    jz foe_move_indexoverrun

    ; index within column boundary
    ; save Index, update c
    sta foeBlock + foeIndex
    mov c, a
    ; not at column boundary -> skip bounce check
    jmp foe_paint

foe_move_indexoverrun:
    ; {
    ; Index = Index % 8
    ani $7
    ; save Index, update c
    sta foeBlock + foeIndex
    mov c, a
    ; Column = Column + Direction
    ; column in e
    mov a, b
    add e
    sta foeBlock + foeColumn
    mov e, a
    ; }
foe_move_CheckBounce:
    ; check for bounce
    ; we are here if Index == 0 || Index == 7
    ; e = Column
    lda foeBlock + foeRightStop
    cmp e
    jz foe_move_yes_bounce

    ; emergency door stopper
    jp fm_noemergency
    dcr e
    mov a, e
    sta foeBlock + foeColumn
    xra a
    sta foeBlock + foeDirection
    sta foeBlock + foeIndex
fm_noemergency:
    lda foeBlock + foeLeftStop
    cmp e
    jnz foe_paint
    ; yes, bounce
foe_move_yes_bounce:
    ; Bounce = 1
    mvi h, 1 
    ; Direction = -Direction
    mov a, b
    cma 
    inr a
    sta foeBlock + foeDirection
    ; do the Move() once again
    jmp foe_Move

    ;; additional entry point 
    ;; for sprites with precalculated position
    ;; used for propellers
foe_paint_preload:
    lhld foeBlock + foeColumn
    mov e, l ; e = foeColumn
    mov c, h ; c = foeIndex
    mvi h, 0 ; bounce = 0
    lda foeBlock + foeDirection
    mov b, a
    mvi h, 1 ; 
    ;; foeBlock movement calculation ends here

    ;; actual paint
    ;; Input e = column
foe_paint:
    ;; paint foe
    ; e contains column
    mov a, e

    ; de = base addr ($8000 + foe.Y)
    adi $80
    mov d, a
    lda foeBlock + foeY
    mov e, a

    ; de == base address
    ; c == index
    ; b == Direction
    xra a
    ora b
    jm  sprite_rtl
    ; fallthrough to sprite_ltr

    ;; c = Index
    ;; de = column base address
    ;; h = bounce
sprite_ltr:
    ; if (index != 0 || Bounce) regular();
    xra a
    ora c
    ora h
    jnz sprite_ltr_regular

    ; Index == 0, no bounce -> wipe previous column
    dcr d
    ; load dispatch table   
    lhld foeBlock_LTR
    jmp sprite_ltr_rtl_dispatchjump

    ;; Draw ship without prepending column for wiping
sprite_ltr_regular:
    ; load dispatch table   
    lhld foeBlock_LTR
    ; index 0..7 -> 1..8
    inr c
    jmp sprite_ltr_rtl_dispatchjump

    ;; c = offset
    ;; de = column base address
sprite_rtl:
sprite_rtl_regular:
    lhld foeBlock_RTL

sprite_ltr_rtl_dispatchjump:
    mvi b, 0
    mov a, c
    rlc
    mov c, a
    dad b       
    ;jmp [h]
    mov a, m
    inx h
    mov h, m
    mov l, a
    lxi b, 0        ; b is a zero source
    pchl

        ; Animate explosion debris
        ; Called first after the main sprite has just been wiped out
        ; After the animation cycle ends, sets $80 bit to signal the main
        ; loop that the debris should also be wiped and the block freed.
debris_frame:
        lda frame_scroll                ; slow down the animation, skip frames
        rrc
        rc
        lxi h, foeBlock+foeDirection    
        mvi m, 0
        lxi h, foeBlock
        mov a, m
        cpi FOEID_DEBRIS_1
        lxi h, debris1_ltr_dispatch
        jz debfr_loadfb
        lxi h, debris2_ltr_dispatch
        cpi FOEID_DEBRIS_2
        jz debfr_loadfb
        lxi h, debris3_ltr_dispatch
        cpi FOEID_DEBRIS_3
        jz debfr_loadfb
        lxi h, debris4_ltr_dispatch
debfr_loadfb
        shld foeBlock_LTR
        shld foeBlock_RTL
        call foe_frame
        lxi h, foeBlock
        mov a, m
        inr a
        cpi FOEID_DEBRIS_END
        jnz $+5
        ori $80                 ; set blow up flag again: see [foe_infield]
        mov m, a
        ret

dispatch_digit_tbl
        dw char_0_ltr0
        dw char_1_ltr0
        dw char_2_ltr0
        dw char_3_ltr0
        dw char_4_ltr0
        dw char_5_ltr0
        dw char_6_ltr0
        dw char_7_ltr0
        dw char_8_ltr0
        dw char_9_ltr0
dispatch_digit
        cpi $f
        rz
        ora a
        ral 
        mov c, a
        mvi b, 0
        lxi h, dispatch_digit_tbl
        dad b           

        mov a, m
        inx h
        mov h, m
        mov l, a
        pchl

SCORE_BASELINE  equ 20

        
PaintScore:
        lda frame_scroll
        adi SCORE_BASELINE+7
        mov e, a
        mvi d, $88
 
        ; find first nonzero
        lxi h, game_score       ; h = &score[msb]
        mvi c, 5
        mvi b, $f
ps_findlead_loop
        mov a, m                ; b = score[msb]
        ora a
        jz $+5
        mvi b, 0
        ora b
        push d
        push psw
        inx h
        inr d                   ; next column
        dcr c
        jnz ps_findlead_loop
        mov a, m
        call dispatch_digit
        pop psw
        pop d
        call dispatch_digit
        pop psw
        pop d
        call dispatch_digit
        pop psw
        pop d
        call dispatch_digit
        pop psw
        pop d
        call dispatch_digit
        pop psw
        pop d
        call dispatch_digit

        ; display "BRIDGE"
        lda frame_scroll
        adi SCORE_BASELINE+10
        mov e, a
        mvi d, $95
        call bridgeword_ltr0

        ; display bridge count
        lda frame_scroll
        adi SCORE_BASELINE
        mov e, a
        mvi d, $96

        ; find first nonzero
        lxi h, game_bridge
        mvi b, $f
        mvi c, 0

        mov a, m
        ora a
        jz $+4
        mov b, c
        ora b
        push d 
        push psw
        inx h
        inr d

        mov a, m
        ora a
        jz $+4
        mov b, c
        ora b
        push d
        push psw
        inx h
        inr d
        mov a, m
        call dispatch_digit
        pop psw
        pop d
        call dispatch_digit
        pop psw
        pop d
        call dispatch_digit

        lda frame_scroll
        adi SCORE_BASELINE+20
        mov e, a
        mvi d, $96
        call playericon_ltr0

        ;ret

PaintFuel
        ; 8 columns wide = 64 positions, thick bar
        ; clear all 8 columns in the layer $e000
        ; clear all 8 columns in the layer $c000
        ; draw a white bar at game_fuel_hi >> 2:
        ;       column = game_fuel_hi >> 5
        ;       index  = (game_fuel_hi >> 2) & 7

        lda frame_scroll
        adi SCORE_BASELINE+18
        mov e, a
        mvi d, 0x8c + 0x60
        push d

        call wipe_fuel_gauge

        pop h

        lda game_fuel_hi
        rlc
        rlc
        rlc
        ani $7
        adi 0x8c + 0x40     ; white layer $80 + $40 = $c
        mov h, a

        lda game_fuel_hi
        rrc
        rrc
        ani $7
        
        mov c, a
        inr c
        xra a
        stc                     ; start with a thin bar
paintfuel_l1
        rar
        dcr c
        jnz paintfuel_l1

        ; enthicken!

        mov d, a
        mov c, a
        mvi b, 0

        ora a
        mov a, c
        ral 
        mov c, a
        mov a, b
        ral
        mov b, a                ; [b,c] = [0,a] << 1

        mov a, c
        ora d
        mov c, a                ; [b,c] = [0,a] << 1 | [0,a]

        xra a

        ; prev column
        dcr h
        mov m, b
        dcr l
        mov m, b
        dcr l
        mov m, b
        dcr l
        mov m, b

        ; current column
        inr h
        mov m, c
        inr l
        mov m, c 
        inr l
        mov m, c
        inr l
        mov m, c

        ; next column
        inr h
        mov m, a
        dcr l
        mov m, a
        dcr l
        mov m, a
        dcr l
        mov m, a
        dcr l
        mov m, a
        dcr l
        mov m, a

        ; lower two lines of first two columns
        dcr h
        mov m, a
        inr l
        mov m, a
        dcr h
        mov m, a
        dcr l
        mov m, a
        dcr h
        mov m, a
        inr l
        mov m, a


        ret

score_tbl
        ;       NONE    SHIP    COPTER  COPTER  JET
        db      0,      3,      6,      6,     $10,    0,      0,      0,
        db      0,      0,      0,      0,      0,    0,      0,      0,
        ;       BRIDGE  FUEL
        db      $50,     8 

UpdateScore_BridgePass
        lxi h, game_bridge + 2
        lxi d, 0xa00            ; d = 10, e = 0
        
        mov a, m
        inr a
        cmp d
        jc $+4                  ; store as is
        sub d
        cmc
        mov m, a
        ; next digit
        dcx h
        mov a, m
        adc e
        cmp d
        jc $+4
        sub d
        cmc
        mov m, a
        ; next digit
        dcx h
        mov a, m
        adc e
        cmp d
        jc $+4
        sub d
        cmc
        mov m, a

        ret
        ;
        ; Update score for a kill of a foe with id in A
        ;
UpdateScore_KillA
        cpi 18
        rp
        lxi h, score_tbl
        mov c, a
        mvi b, 0
        dad b
        mov a, m                ; 2 digits 
        ani $f
        mov c, a                ; lowest digit in c
        mov a, m
        rrc
        rrc
        rrc
        rrc
        ani $f
        mov b, a                ; second digit in b

        ;mvi d, 10
        lxi d, 0xa00            ; d = 10, e = 0
        
        lxi h, game_score+4     ; the last digit is always 0, inflation
        mov a, m
        add c
        cmp d
        jc $+4
        sub d
        cmc
        ; next 
        mov m, a
        dcx h                   ; m = &game_score[3]
        mov a, m
        adc b                   ; second digit in b
        cmp d
        jc $+4
        sub d
        cmc
        ; next
        mov m, a
        dcx h                   ; m = &game_score[2]
        mov a, m
        adc e                   ; aci 0
        cmp d
        jc $+4
        sub d
        cmc
        ; next
        mov m, a
        dcx h                   ; m = &game_score[1]
        mov a, m
        adc e                   ; aci 0
        cmp d
        jc $+4
        sub d
        cmc
        ; next
        mov m, a
        dcx h                   ; m = &game_score[0]
        mov a, m
        adc e                   ; aci 0
        cmp d
        jc $+4
        sub d
        cmc
        ; 
        mov m, a
        ret

    .include random.inc
    .include palette.inc
    .include ship.inc
    .include wipes.inc
    ;; Depuración y basura
    ; pintar los colores
showlayers:
    lxi h, $ffff
    ; 1 0 0 0
    shld $81fe 

    ; 0 1 0 0 
    shld $a2fe

    ; 1 1 0 0
    shld $83fe
    shld $a3fe

    ; 0 0 1 0
    shld $c4fe

    ; 1 0 1 0
    shld $85fe  
    shld $c5fe

    ; 0 1 1 0
    shld $a6fe  
    shld $c6fe

    ; 1 1 1 0
    shld $87fe  
    shld $a7fe
    shld $c7fe

    ; x x x 1
    shld $e8fe  

    ; test bounds
    shld $8306
    shld $8308
    shld $830a
    shld $830c
    shld $830e
    shld $8310
    shld $8312

    shld $9306
    shld $9308
    shld $930a
    shld $930c
    shld $930e
    shld $9310
    shld $9312

    ; time marks
    lxi h, $c0c0
    shld $e000
    shld $e010
    shld $e020
    shld $e030
    shld $e040
    shld $e050
    shld $e060
    shld $e070
    shld $e080
    shld $e090
    shld $e0a0
    shld $e0b0
    shld $e0c0
    shld $e0d0
    shld $e0e0
    shld $e0f0
    shld $e0fe
    ret

pf_tableft      equ $7800
pf_tabwater     equ $7900
;pf_tableft:                    
;                           .org .+$100
;pf_tabwater:
;                           .org .+$100


; vi:syntax=m80
; vi:ts=8
; vi:sts=8

