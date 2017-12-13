wipe_ship:
    lxi h, 0
    dad sp
    shld wipe_ship_ret+1
;; layer 0 (8000)
    xchg
    sphl
    lxi b, 0

    db $c5, $c5, $c5, $c5      ; (push b x 4) column 1
    lxi h, 256+8
    dad sp
    sphl
    db $c5, $c5, $c5, $c5      ; (push b x 4) column 2
    lxi h, 256+8
    dad sp
    sphl
    db $c5, $c5, $c5, $c5      ; (push b x 4) column 3
    lxi h, 256+8
    dad sp
    sphl
    db $c5, $c5, $c5, $c5      ; (push b x 4) column 4
    lxi h, 256+8
    dad sp
    sphl
    db $c5, $c5, $c5, $c5      ; (push b x 4) column 5

    lxi h, $1c08
    dad sp
    sphl        ; advance to layer $a000

    db $c5, $c5, $c5, $c5      ; (push b x 4) column 1
    lxi h, 256+8
    dad sp
    sphl
    db $c5, $c5, $c5, $c5      ; (push b x 4) column 2
    lxi h, 256+8
    dad sp
    sphl
    db $c5, $c5, $c5, $c5      ; (push b x 4) column 3
    lxi h, 256+8
    dad sp
    sphl
    db $c5, $c5, $c5, $c5      ; (push b x 4) column 4
    lxi h, 256+8
    dad sp
    sphl
    db $c5, $c5, $c5, $c5      ; (push b x 4) column 5

    lxi h, $1c08
    dad sp
    sphl        ; advance to layer $c000

    db $c5, $c5, $c5, $c5      ; (push b x 4) column 1
    lxi h, 256+8
    dad sp
    sphl
    db $c5, $c5, $c5, $c5      ; (push b x 4) column 2
    lxi h, 256+8
    dad sp
    sphl
    db $c5, $c5, $c5, $c5      ; (push b x 4) column 3
    lxi h, 256+8
    dad sp
    sphl
    db $c5, $c5, $c5, $c5      ; (push b x 4) column 4
    lxi h, 256+8
    dad sp
    sphl
    db $c5, $c5, $c5, $c5      ; (push b x 4) column 5


wipe_ship_ret:
    lxi sp, 0
    ret

wipe_copter
    mov a, e
    adi 4
    mov e, a
    lxi h, 0
    dad sp
    shld wipe_copter_ret+1
;; layer 0 (8000)
    xchg
    sphl
    lxi b, 0

    db $c5, $c5, $c5, $c5, $c5, $c5 ; (push b x 6) column 1
    lxi h, 256+12
    dad sp
    sphl
    db $c5, $c5, $c5, $c5, $c5, $c5 ; (push b x 6) column 2
    lxi h, 256+12
    dad sp
    sphl
    db $c5, $c5, $c5, $c5, $c5, $c5 ; (push b x 6) column 3

    lxi h, $1e0c
    dad sp
    sphl        ; advance to layer $a000

    db $c5, $c5, $c5, $c5, $c5, $c5 ; (push b x 6) column 1
    lxi h, 256+12
    dad sp
    sphl
    db $c5, $c5, $c5, $c5, $c5, $c5 ; (push b x 6) column 2
    lxi h, 256+12
    dad sp
    sphl
    db $c5, $c5, $c5, $c5, $c5, $c5 ; (push b x 6) column 3

    lxi h, $1e0c
    dad sp
    sphl        ; advance to layer $c000

    db $c5, $c5, $c5, $c5, $c5, $c5 ; (push b x 6) column 1
    lxi h, 256+12
    dad sp
    sphl
    db $c5, $c5, $c5, $c5, $c5, $c5 ; (push b x 6) column 2
    lxi h, 256+12
    dad sp
    sphl
    db $c5, $c5, $c5, $c5, $c5, $c5 ; (push b x 6) column 3

wipe_copter_ret:
    lxi sp, 0
    ret

wipe_jet
    mov a, e
    adi 4
    mov e, a
    lxi h, 0
    dad sp
    shld wipe_jet_ret+1

;; layer 2 (c000)
    lxi h, $4000
    dad d
    sphl
    lxi b, 0

    db $c5, $c5, $c5, $c5, $c5 ; (push b x 5) column 1
    lxi h, 256+10
    dad sp
    sphl
    db $c5, $c5, $c5, $c5, $c5 ; (push b x 5) column 2
    lxi h, 256+10
    dad sp
    sphl
    db $c5, $c5, $c5, $c5, $c5 ; (push b x 5) column 3

wipe_jet_ret:
    lxi sp, 0
    ret


    ; 8 columns, 14 rows, one layer only (c000)
wipe_bridge
    lxi h, 0
    dad sp
    shld wipe_bridge_ret+1
;; layer 2 (c000)
    lxi h, $4000
    dad d
    dcr h
    mov a, l
    adi 7+14
    mov l, a
    sphl
    lxi b, 0

    db $c5, $c5, $c5, $c5, $c5, $c5, $c5 ; (push b x 7) column 1
    db $c5, $c5, $c5, $c5, $c5, $c5, $c5 ; (push b x 7) column 1
    lxi h, 256+28
    dad sp
    sphl
    db $c5, $c5, $c5, $c5, $c5, $c5, $c5 ; (push b x 7) column 2
    db $c5, $c5, $c5, $c5, $c5, $c5, $c5 ; (push b x 7) column 2
    lxi h, 256+28
    dad sp
    sphl
    db $c5, $c5, $c5, $c5, $c5, $c5, $c5 ; (push b x 7) column 3
    db $c5, $c5, $c5, $c5, $c5, $c5, $c5 ; (push b x 7) column 3
    lxi h, 256+28
    dad sp
    sphl
    db $c5, $c5, $c5, $c5, $c5, $c5, $c5 ; (push b x 7) column 3
    db $c5, $c5, $c5, $c5, $c5, $c5, $c5 ; (push b x 7) column 4
    lxi h, 256+28
    dad sp
    sphl
    db $c5, $c5, $c5, $c5, $c5, $c5, $c5 ; (push b x 7) column 3
    db $c5, $c5, $c5, $c5, $c5, $c5, $c5 ; (push b x 7) column 5
    lxi h, 256+28
    dad sp
    sphl
    db $c5, $c5, $c5, $c5, $c5, $c5, $c5 ; (push b x 7) column 3
    db $c5, $c5, $c5, $c5, $c5, $c5, $c5 ; (push b x 7) column 6
    lxi h, 256+28
    dad sp
    sphl
    db $c5, $c5, $c5, $c5, $c5, $c5, $c5 ; (push b x 7) column 3
    db $c5, $c5, $c5, $c5, $c5, $c5, $c5 ; (push b x 7) column 7
    lxi h, 256+28
    dad sp
    sphl
    db $c5, $c5, $c5, $c5, $c5, $c5, $c5 ; (push b x 7) column 3
    db $c5, $c5, $c5, $c5, $c5, $c5, $c5 ; (push b x 7) column 8
    lxi h, 256+28
    dad sp
    sphl

wipe_bridge_ret:
    lxi sp, 0
    ret

; F  $a000  6 lines each character
; U  $c000
; E  $a000
; L  $c000
wipe_fuel
        lxi h, 0
        dad sp
        shld wipe_fuel_ret+1
;; begin with layer 2 (c000)
        lxi h, $2000
        dad d
        dcr h
        mov a, l
        adi 18
        mov l, a
        sphl
        lxi b, 0

        ; column 1
        db $c5, $c5, $c5    ; L in layer $c000
        lxi h, $2000
        dad sp
        sphl                ; switch to layer $a000
        db $c5, $c5, $c5    ; E in layer $a000
        lxi h, $e000
        dad sp
        sphl                ; switch to layer $c000
        db $c5, $c5, $c5    ; U in layer $c000
        lxi h, $2000
        dad sp
        sphl                ; switch to layer $a000
        db $c5, $c5, $c5    ; F in layer $a000

        lxi h, $e118        ; switch to layer $c and jump to the next colum
        dad sp
        sphl

        ; column 2
        db $c5, $c5, $c5    ; L in layer $c000
        lxi h, $2000
        dad sp
        sphl                ; switch to layer $a000
        db $c5, $c5, $c5    ; E in layer $a000
        lxi h, $e000
        dad sp
        sphl                ; switch to layer $c000
        db $c5, $c5, $c5    ; U in layer $c000
        lxi h, $2000
        dad sp
        sphl                ; switch to layer $a000
        db $c5, $c5, $c5    ; F in layer $a000

wipe_fuel_ret:
        lxi sp, 0
        ret

wipe_debris:
    mov a, e
    adi 4
    mov e, a
    lxi h, 0
    dad sp
    shld wipe_debris_ret+1
;; layer 3 (e000)
    lxi h, $6000
    dad d
    ;xchg
    sphl
    lxi b, 0

    db $c5, $c5, $c5, $c5, $c5, $c5 ; (push b x 6) column 1
    lxi h, 256+12
    dad sp
    sphl
    db $c5, $c5, $c5, $c5, $c5, $c5 ; (push b x 6) column 2
    lxi h, 256+12
    dad sp
    sphl
    db $c5, $c5, $c5, $c5, $c5, $c5 ; (push b x 6) column 3

wipe_debris_ret:
    lxi sp, 0
    ret

        ; de = starting position
wipe_fuel_gauge
        lxi h, 0
        dad sp
        shld wipe_fuel_gauge_ret+1

        ;; layer 3 (e000)
        lxi b, $ff00
        xchg
        mov m, c
        inr h
        mov m, c
        inr h
        mov m, c
        inr h
        mov m, c
        inr h
        mov m, c
        inr h
        mov m, c
        inr h
        mov m, c
        inr h
        mov m, c

        dcr l

        mov m, c
        dcr h
        mov m, c
        dcr h
        mov m, c
        dcr h
        mov m, c
        dcr h
        mov m, c
        dcr h
        mov m, c
        dcr h
        mov m, c
        dcr h
        mov m, c

        dcr l

        mov m, c
        inr h
        mov m, c
        inr h
        mov m, c
        inr h
        mov m, c
        inr h
        mov m, c
        inr h
        mov m, c
        inr h
        mov m, c
        inr h
        mov m, c

        dcr l

        mov m, c
        dcr h
        mov m, c
        dcr h
        mov m, c
        dcr h
        mov m, c
        dcr h
        mov m, c
        dcr h
        mov m, c
        dcr h
        mov m, c
        dcr h
        mov m, c

        dcr l

        mov m, b
        inr h
        mov m, b
        inr h
        mov m, b
        inr h
        mov m, b
        inr h
        mov m, b
        inr h
        mov m, b
        inr h
        mov m, b
        inr h
        mov m, b

        dcr l

        mov m, b
        dcr h
        mov m, b
        dcr h
        mov m, b
        dcr h
        mov m, b
        dcr h
        mov m, b
        dcr h
        mov m, b
        dcr h
        mov m, b
        dcr h
        mov m, b
        
;        ;; layer 3 (e000)
;        lxi h, $1b08
;        dad sp
;        sphl


wipe_fuel_gauge_ret
        lxi sp, 0
        ret 


; vi:syntax=m80
; vi:ts=8
; vi:sts=8

