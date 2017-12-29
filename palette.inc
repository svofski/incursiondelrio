
c_black     equ $00
c_blue      equ $c2
c_green     equ $6a ; $73 ; 01 110 011
c_yellow    equ $bf ; 
c_magenta   equ $57 ;$94 ; $8d ;
c_white     equ $f6
c_grey      equ $09 ; 00 010 010  -- also $52 the darkest neutral gray
c_cyan      equ $ac ; $ab ; $ad ; $f4 ; 10 011 001 - $ad is neutral gray
c_dkblue    equ $81 ; 10 010 001

c_purple        equ     0114q

palette_data:
        db      c_blue,         c_black,        c_white,      c_black
        db      c_magenta,      c_black,        c_grey,       c_black
        db      c_green,        c_black,        c_cyan,       c_black
        db      c_yellow,       c_black,        c_dkblue,     c_black

palette_love_data:
        db      c_purple,       c_black,        c_white,      c_black
        db      c_magenta,      c_black,        c_grey,       c_black
        db      c_green,        c_black,        c_cyan,       c_black
        db      c_yellow,       c_black,        c_dkblue,     c_black


palette_goth_data:
        db      c_black,        c_black,        c_black,      c_black
        db      c_black,        c_black,        c_black,      c_black
        db      c_black,        c_black,        c_black,      c_black
        db      c_black,        c_black,        c_black,      c_black

palette_fx_ctr  db 0

select_palette_normal
        lxi h, palette_data+15
        shld prog_palette_load+1
        ret

select_palette_goth
        lxi h, palette_goth_data+15
        shld prog_palette_load+1
        ret

select_palette_rhythm_of_love
        lxi h, palette_love_data+15
        shld prog_palette_load+1
        ret

        ; one of a kind palette effect, initiated when bridge is exploded
rhythm_of_love
        mvi a, 16
        sta palette_fx_ctr
        jmp select_palette_rhythm_of_love

program_palette
        lxi h, palette_fx_ctr
        mov a, m
        ora a
        jz prog_palette_load
        dcr a
        mov m, a
        cz select_palette_normal
        rar
        rar
        jc prog_palette_load
        lxi h, palette_data+15
        jmp prog_palette_load+3
prog_palette_load:
        lxi h, palette_data+15          ; self-modifying code
        mvi c, 16
palette_loop:
        mov a, c
        dcr a
        out $2
        mov a, m
        out $c
        out $c
        out $c
        out $c
        dcr c
        out $c
        out $c
        dcx h
        out $c
        out $c
        jnz palette_loop

        mvi a, 5                        ; black border
        out 2
        ret



; vi:syntax=m80
; vi:ts=8
; vi:sts=8

