
c_black     equ $00
c_blue      equ $c2
c_green     equ $6a ; $73 ; 01 110 011
c_yellow    equ $bf ; 
c_magenta   equ $57 ;$94 ; $8d ;
c_white     equ $f6
c_grey      equ $09 ; 00 010 010  -- also $52 the darkest neutral gray
c_cyan      equ $ac ; $ab ; $ad ; $f4 ; 10 011 001 - $ad is neutral gray
c_dkblue    equ $81 ; 10 010 001

palette_data:
    db c_blue,      c_black,  c_white,      c_black
    db c_magenta,   c_black,  c_grey,       c_black
    db c_green,     c_black,  c_cyan,       c_black
    db c_yellow,    c_black,  c_dkblue,     c_black
