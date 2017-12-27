;; Automatically generated file
;; see makesprites.py
ship_ltr_dispatch:
	dw ship_ltr_inf
	dw ship_ltr0
	dw ship_ltr1
	dw ship_ltr2
	dw ship_ltr3
	dw ship_ltr4
	dw ship_ltr5
	dw ship_ltr6
	dw ship_ltr7
ship_ltr_spritegroup:
ship_ltr_inf:
	lxi h, 0
	dad sp
	shld ship_ltr_inf_ret+1
	.nolist
;; layer 0 (8000)
	mov h, d
	mov l, e
	sphl
;[                      6666              ] 0000000000
;[                      6666              ] 0000000000
;[                  66666666              ] 0000000000
;[              6666666666666666          ] 0000000000
;[        22222222222222222222222222222222] 0000000000
;[        222222222222222222222222222222  ] 0000000000
;[        55555555555555555555555555      ] 00ffffffc0
;[            555555555555555555          ] 000ffffc00
; stripped pairs: leading: 3 trailing: 0
	lxi h, $fffa
	dad sp
	sphl
	push b
	lxi h, 256+2
	dad sp
	sphl
	lxi h, $ff0f
	push h
	lxi h, 256+2
	dad sp
	sphl
	lxi h, $ffff
	push h
	lxi h, 256+2
	dad sp
	sphl
	lxi h, $fffc
	push h
	lxi h, 256+2
	dad sp
	sphl
	lxi h, $c000
	push h

;; layer 1 (a000)
	lxi h, $2000
	dad d
	sphl
;[                      6666              ] 000003c000
;[                      6666              ] 000003c000
;[                  66666666              ] 00003fc000
;[              6666666666666666          ] 0003fffc00
;[        22222222222222222222222222222222] 00ffffffff
;[        222222222222222222222222222222  ] 00fffffffc
;[        55555555555555555555555555      ] 0000000000
;[            555555555555555555          ] 0000000000
; stripped pairs: leading: 0 trailing: 1
	push b
	push b
	push b
	lxi h, 256+6
	dad sp
	sphl
	push b
	lxi h, $0003
	push h
	lxi h, $ffff
	push h
	lxi h, 256+6
	dad sp
	sphl
	lxi h, $0303
	push h
	lxi h, $3fff
	push h
	lxi h, $ffff
	push h
	lxi h, 256+6
	dad sp
	sphl
	lxi h, $c0c0
	push h
	lxi h, $c0fc
	push h
	lxi h, $ffff
	push h
	lxi h, 256+6
	dad sp
	sphl
	push b
	push b
	lxi h, $fffc
	push h

;; layer 2 (c000)
	lxi h, $4000
	dad d
	sphl
;[                      6666              ] 000003c000
;[                      6666              ] 000003c000
;[                  66666666              ] 00003fc000
;[              6666666666666666          ] 0003fffc00
;[        22222222222222222222222222222222] 0000000000
;[        222222222222222222222222222222  ] 0000000000
;[        55555555555555555555555555      ] 00ffffffc0
;[            555555555555555555          ] 000ffffc00
; stripped pairs: leading: 0 trailing: 0
	push b
	push b
	push b
	push b
	lxi h, 256+8
	dad sp
	sphl
	push b
	lxi h, $0003
	push h
	push b
	lxi h, $ff0f
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $0303
	push h
	lxi h, $3fff
	push h
	push b
	lxi h, $ffff
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $c0c0
	push h
	lxi h, $c0fc
	push h
	push b
	lxi h, $fffc
	push h
	lxi h, 256+8
	dad sp
	sphl
	push b
	push b
	push b
	lxi h, $c000
	push h

ship_ltr_inf_ret:
	lxi sp, 0
	ret
ship_ltr0:
	lxi h, 0
	dad sp
	shld ship_ltr0_ret+1
	.nolist
;; layer 0 (8000)
	mov h, d
	mov l, e
	sphl
;[              6666              ] 0000000000
;[              6666              ] 0000000000
;[          66666666              ] 0000000000
;[      6666666666666666          ] 0000000000
;[22222222222222222222222222222222] 0000000000
;[222222222222222222222222222222  ] 0000000000
;[55555555555555555555555555      ] 00ffffffc0
;[    555555555555555555          ] 000ffffc00
; stripped pairs: leading: 3 trailing: 0
	lxi h, $fffa
	dad sp
	sphl
	lxi h, $ff0f
	push h
	lxi h, 256+2
	dad sp
	sphl
	lxi h, $ffff
	push h
	lxi h, 256+2
	dad sp
	sphl
	lxi h, $fffc
	push h
	lxi h, 256+2
	dad sp
	sphl
	lxi h, $c000
	push h

;; layer 1 (a000)
	lxi h, $2000
	dad d
	sphl
;[              6666              ] 000003c000
;[              6666              ] 000003c000
;[          66666666              ] 00003fc000
;[      6666666666666666          ] 0003fffc00
;[22222222222222222222222222222222] 00ffffffff
;[222222222222222222222222222222  ] 00fffffffc
;[55555555555555555555555555      ] 0000000000
;[    555555555555555555          ] 0000000000
; stripped pairs: leading: 0 trailing: 1
	push b
	lxi h, $0003
	push h
	lxi h, $ffff
	push h
	lxi h, 256+6
	dad sp
	sphl
	lxi h, $0303
	push h
	lxi h, $3fff
	push h
	lxi h, $ffff
	push h
	lxi h, 256+6
	dad sp
	sphl
	lxi h, $c0c0
	push h
	lxi h, $c0fc
	push h
	lxi h, $ffff
	push h
	lxi h, 256+6
	dad sp
	sphl
	push b
	push b
	lxi h, $fffc
	push h

;; layer 2 (c000)
	lxi h, $4000
	dad d
	sphl
;[              6666              ] 000003c000
;[              6666              ] 000003c000
;[          66666666              ] 00003fc000
;[      6666666666666666          ] 0003fffc00
;[22222222222222222222222222222222] 0000000000
;[222222222222222222222222222222  ] 0000000000
;[55555555555555555555555555      ] 00ffffffc0
;[    555555555555555555          ] 000ffffc00
; stripped pairs: leading: 0 trailing: 0
	push b
	lxi h, $0003
	push h
	push b
	lxi h, $ff0f
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $0303
	push h
	lxi h, $3fff
	push h
	push b
	lxi h, $ffff
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $c0c0
	push h
	lxi h, $c0fc
	push h
	push b
	lxi h, $fffc
	push h
	lxi h, 256+8
	dad sp
	sphl
	push b
	push b
	push b
	lxi h, $c000
	push h

ship_ltr0_ret:
	lxi sp, 0
	ret
ship_ltr1:
	lxi h, 0
	dad sp
	shld ship_ltr1_ret+1
	.nolist
;; layer 0 (8000)
	mov h, d
	mov l, e
	sphl
;[               6666                     ] 0000000000
;[               6666                     ] 0000000000
;[           66666666                     ] 0000000000
;[       6666666666666666                 ] 0000000000
;[ 22222222222222222222222222222222       ] 0000000000
;[ 222222222222222222222222222222         ] 0000000000
;[ 55555555555555555555555555             ] 7fffffe000
;[     555555555555555555                 ] 07fffe0000
; stripped pairs: leading: 3 trailing: 0
	lxi h, $fffa
	dad sp
	sphl
	lxi h, $7f07
	push h
	lxi h, 256+2
	dad sp
	sphl
	lxi h, $ffff
	push h
	lxi h, 256+2
	dad sp
	sphl
	lxi h, $fffe
	push h
	lxi h, 256+2
	dad sp
	sphl
	lxi h, $e000
	push h
	lxi h, 256+2
	dad sp
	sphl
	push b

;; layer 1 (a000)
	lxi h, $2000
	dad d
	sphl
;[               6666                     ] 0001e00000
;[               6666                     ] 0001e00000
;[           66666666                     ] 001fe00000
;[       6666666666666666                 ] 01fffe0000
;[ 22222222222222222222222222222222       ] 7fffffff80
;[ 222222222222222222222222222222         ] 7ffffffe00
;[ 55555555555555555555555555             ] 0000000000
;[     555555555555555555                 ] 0000000000
; stripped pairs: leading: 0 trailing: 1
	push b
	lxi h, $0001
	push h
	lxi h, $7f7f
	push h
	lxi h, 256+6
	dad sp
	sphl
	lxi h, $0101
	push h
	lxi h, $1fff
	push h
	lxi h, $ffff
	push h
	lxi h, 256+6
	dad sp
	sphl
	lxi h, $e0e0
	push h
	lxi h, $e0fe
	push h
	lxi h, $ffff
	push h
	lxi h, 256+6
	dad sp
	sphl
	push b
	push b
	lxi h, $fffe
	push h
	lxi h, 256+6
	dad sp
	sphl
	push b
	push b
	lxi h, $8000
	push h

;; layer 2 (c000)
	lxi h, $4000
	dad d
	sphl
;[               6666                     ] 0001e00000
;[               6666                     ] 0001e00000
;[           66666666                     ] 001fe00000
;[       6666666666666666                 ] 01fffe0000
;[ 22222222222222222222222222222222       ] 0000000000
;[ 222222222222222222222222222222         ] 0000000000
;[ 55555555555555555555555555             ] 7fffffe000
;[     555555555555555555                 ] 07fffe0000
; stripped pairs: leading: 0 trailing: 0
	push b
	lxi h, $0001
	push h
	push b
	lxi h, $7f07
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $0101
	push h
	lxi h, $1fff
	push h
	push b
	lxi h, $ffff
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $e0e0
	push h
	lxi h, $e0fe
	push h
	push b
	lxi h, $fffe
	push h
	lxi h, 256+8
	dad sp
	sphl
	push b
	push b
	push b
	lxi h, $e000
	push h
	lxi h, 256+8
	dad sp
	sphl
	push b
	push b
	push b
	push b

ship_ltr1_ret:
	lxi sp, 0
	ret
ship_ltr2:
	lxi h, 0
	dad sp
	shld ship_ltr2_ret+1
	.nolist
;; layer 0 (8000)
	mov h, d
	mov l, e
	sphl
;[                6666                    ] 0000000000
;[                6666                    ] 0000000000
;[            66666666                    ] 0000000000
;[        6666666666666666                ] 0000000000
;[  22222222222222222222222222222222      ] 0000000000
;[  222222222222222222222222222222        ] 0000000000
;[  55555555555555555555555555            ] 3ffffff000
;[      555555555555555555                ] 03ffff0000
; stripped pairs: leading: 3 trailing: 0
	lxi h, $fffa
	dad sp
	sphl
	lxi h, $3f03
	push h
	lxi h, 256+2
	dad sp
	sphl
	lxi h, $ffff
	push h
	lxi h, 256+2
	dad sp
	sphl
	lxi h, $ffff
	push h
	lxi h, 256+2
	dad sp
	sphl
	lxi h, $f000
	push h
	lxi h, 256+2
	dad sp
	sphl
	push b

;; layer 1 (a000)
	lxi h, $2000
	dad d
	sphl
;[                6666                    ] 0000f00000
;[                6666                    ] 0000f00000
;[            66666666                    ] 000ff00000
;[        6666666666666666                ] 00ffff0000
;[  22222222222222222222222222222222      ] 3fffffffc0
;[  222222222222222222222222222222        ] 3fffffff00
;[  55555555555555555555555555            ] 0000000000
;[      555555555555555555                ] 0000000000
; stripped pairs: leading: 0 trailing: 1
	push b
	push b
	lxi h, $3f3f
	push h
	lxi h, 256+6
	dad sp
	sphl
	push b
	lxi h, $0fff
	push h
	lxi h, $ffff
	push h
	lxi h, 256+6
	dad sp
	sphl
	lxi h, $f0f0
	push h
	lxi h, $f0ff
	push h
	lxi h, $ffff
	push h
	lxi h, 256+6
	dad sp
	sphl
	push b
	push b
	lxi h, $ffff
	push h
	lxi h, 256+6
	dad sp
	sphl
	push b
	push b
	lxi h, $c000
	push h

;; layer 2 (c000)
	lxi h, $4000
	dad d
	sphl
;[                6666                    ] 0000f00000
;[                6666                    ] 0000f00000
;[            66666666                    ] 000ff00000
;[        6666666666666666                ] 00ffff0000
;[  22222222222222222222222222222222      ] 0000000000
;[  222222222222222222222222222222        ] 0000000000
;[  55555555555555555555555555            ] 3ffffff000
;[      555555555555555555                ] 03ffff0000
; stripped pairs: leading: 0 trailing: 0
	push b
	push b
	push b
	lxi h, $3f03
	push h
	lxi h, 256+8
	dad sp
	sphl
	push b
	lxi h, $0fff
	push h
	push b
	lxi h, $ffff
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $f0f0
	push h
	lxi h, $f0ff
	push h
	push b
	lxi h, $ffff
	push h
	lxi h, 256+8
	dad sp
	sphl
	push b
	push b
	push b
	lxi h, $f000
	push h
	lxi h, 256+8
	dad sp
	sphl
	push b
	push b
	push b
	push b

ship_ltr2_ret:
	lxi sp, 0
	ret
ship_ltr3:
	lxi h, 0
	dad sp
	shld ship_ltr3_ret+1
	.nolist
;; layer 0 (8000)
	mov h, d
	mov l, e
	sphl
;[                 6666                   ] 0000000000
;[                 6666                   ] 0000000000
;[             66666666                   ] 0000000000
;[         6666666666666666               ] 0000000000
;[   22222222222222222222222222222222     ] 0000000000
;[   222222222222222222222222222222       ] 0000000000
;[   55555555555555555555555555           ] 1ffffff800
;[       555555555555555555               ] 01ffff8000
; stripped pairs: leading: 3 trailing: 0
	lxi h, $fffa
	dad sp
	sphl
	lxi h, $1f01
	push h
	lxi h, 256+2
	dad sp
	sphl
	lxi h, $ffff
	push h
	lxi h, 256+2
	dad sp
	sphl
	lxi h, $ffff
	push h
	lxi h, 256+2
	dad sp
	sphl
	lxi h, $f880
	push h
	lxi h, 256+2
	dad sp
	sphl
	push b

;; layer 1 (a000)
	lxi h, $2000
	dad d
	sphl
;[                 6666                   ] 0000780000
;[                 6666                   ] 0000780000
;[             66666666                   ] 0007f80000
;[         6666666666666666               ] 007fff8000
;[   22222222222222222222222222222222     ] 1fffffffe0
;[   222222222222222222222222222222       ] 1fffffff80
;[   55555555555555555555555555           ] 0000000000
;[       555555555555555555               ] 0000000000
; stripped pairs: leading: 0 trailing: 1
	push b
	push b
	lxi h, $1f1f
	push h
	lxi h, 256+6
	dad sp
	sphl
	push b
	lxi h, $077f
	push h
	lxi h, $ffff
	push h
	lxi h, 256+6
	dad sp
	sphl
	lxi h, $7878
	push h
	lxi h, $f8ff
	push h
	lxi h, $ffff
	push h
	lxi h, 256+6
	dad sp
	sphl
	push b
	lxi h, $0080
	push h
	lxi h, $ffff
	push h
	lxi h, 256+6
	dad sp
	sphl
	push b
	push b
	lxi h, $e080
	push h

;; layer 2 (c000)
	lxi h, $4000
	dad d
	sphl
;[                 6666                   ] 0000780000
;[                 6666                   ] 0000780000
;[             66666666                   ] 0007f80000
;[         6666666666666666               ] 007fff8000
;[   22222222222222222222222222222222     ] 0000000000
;[   222222222222222222222222222222       ] 0000000000
;[   55555555555555555555555555           ] 1ffffff800
;[       555555555555555555               ] 01ffff8000
; stripped pairs: leading: 0 trailing: 0
	push b
	push b
	push b
	lxi h, $1f01
	push h
	lxi h, 256+8
	dad sp
	sphl
	push b
	lxi h, $077f
	push h
	push b
	lxi h, $ffff
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $7878
	push h
	lxi h, $f8ff
	push h
	push b
	lxi h, $ffff
	push h
	lxi h, 256+8
	dad sp
	sphl
	push b
	lxi h, $0080
	push h
	push b
	lxi h, $f880
	push h
	lxi h, 256+8
	dad sp
	sphl
	push b
	push b
	push b
	push b

ship_ltr3_ret:
	lxi sp, 0
	ret
ship_ltr4:
	lxi h, 0
	dad sp
	shld ship_ltr4_ret+1
	.nolist
;; layer 0 (8000)
	mov h, d
	mov l, e
	sphl
;[                  6666                  ] 0000000000
;[                  6666                  ] 0000000000
;[              66666666                  ] 0000000000
;[          6666666666666666              ] 0000000000
;[    22222222222222222222222222222222    ] 0000000000
;[    222222222222222222222222222222      ] 0000000000
;[    55555555555555555555555555          ] 0ffffffc00
;[        555555555555555555              ] 00ffffc000
; stripped pairs: leading: 3 trailing: 0
	lxi h, $fffa
	dad sp
	sphl
	lxi h, $0f00
	push h
	lxi h, 256+2
	dad sp
	sphl
	lxi h, $ffff
	push h
	lxi h, 256+2
	dad sp
	sphl
	lxi h, $ffff
	push h
	lxi h, 256+2
	dad sp
	sphl
	lxi h, $fcc0
	push h
	lxi h, 256+2
	dad sp
	sphl
	push b

;; layer 1 (a000)
	lxi h, $2000
	dad d
	sphl
;[                  6666                  ] 00003c0000
;[                  6666                  ] 00003c0000
;[              66666666                  ] 0003fc0000
;[          6666666666666666              ] 003fffc000
;[    22222222222222222222222222222222    ] 0ffffffff0
;[    222222222222222222222222222222      ] 0fffffffc0
;[    55555555555555555555555555          ] 0000000000
;[        555555555555555555              ] 0000000000
; stripped pairs: leading: 0 trailing: 1
	push b
	push b
	lxi h, $0f0f
	push h
	lxi h, 256+6
	dad sp
	sphl
	push b
	lxi h, $033f
	push h
	lxi h, $ffff
	push h
	lxi h, 256+6
	dad sp
	sphl
	lxi h, $3c3c
	push h
	lxi h, $fcff
	push h
	lxi h, $ffff
	push h
	lxi h, 256+6
	dad sp
	sphl
	push b
	lxi h, $00c0
	push h
	lxi h, $ffff
	push h
	lxi h, 256+6
	dad sp
	sphl
	push b
	push b
	lxi h, $f0c0
	push h

;; layer 2 (c000)
	lxi h, $4000
	dad d
	sphl
;[                  6666                  ] 00003c0000
;[                  6666                  ] 00003c0000
;[              66666666                  ] 0003fc0000
;[          6666666666666666              ] 003fffc000
;[    22222222222222222222222222222222    ] 0000000000
;[    222222222222222222222222222222      ] 0000000000
;[    55555555555555555555555555          ] 0ffffffc00
;[        555555555555555555              ] 00ffffc000
; stripped pairs: leading: 0 trailing: 0
	push b
	push b
	push b
	lxi h, $0f00
	push h
	lxi h, 256+8
	dad sp
	sphl
	push b
	lxi h, $033f
	push h
	push b
	lxi h, $ffff
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $3c3c
	push h
	lxi h, $fcff
	push h
	push b
	lxi h, $ffff
	push h
	lxi h, 256+8
	dad sp
	sphl
	push b
	lxi h, $00c0
	push h
	push b
	lxi h, $fcc0
	push h
	lxi h, 256+8
	dad sp
	sphl
	push b
	push b
	push b
	push b

ship_ltr4_ret:
	lxi sp, 0
	ret
ship_ltr5:
	lxi h, 0
	dad sp
	shld ship_ltr5_ret+1
	.nolist
;; layer 0 (8000)
	mov h, d
	mov l, e
	sphl
;[                   6666                 ] 0000000000
;[                   6666                 ] 0000000000
;[               66666666                 ] 0000000000
;[           6666666666666666             ] 0000000000
;[     22222222222222222222222222222222   ] 0000000000
;[     222222222222222222222222222222     ] 0000000000
;[     55555555555555555555555555         ] 07fffffe00
;[         555555555555555555             ] 007fffe000
; stripped pairs: leading: 3 trailing: 0
	lxi h, $fffa
	dad sp
	sphl
	lxi h, $0700
	push h
	lxi h, 256+2
	dad sp
	sphl
	lxi h, $ff7f
	push h
	lxi h, 256+2
	dad sp
	sphl
	lxi h, $ffff
	push h
	lxi h, 256+2
	dad sp
	sphl
	lxi h, $fee0
	push h
	lxi h, 256+2
	dad sp
	sphl
	push b

;; layer 1 (a000)
	lxi h, $2000
	dad d
	sphl
;[                   6666                 ] 00001e0000
;[                   6666                 ] 00001e0000
;[               66666666                 ] 0001fe0000
;[           6666666666666666             ] 001fffe000
;[     22222222222222222222222222222222   ] 07fffffff8
;[     222222222222222222222222222222     ] 07ffffffe0
;[     55555555555555555555555555         ] 0000000000
;[         555555555555555555             ] 0000000000
; stripped pairs: leading: 0 trailing: 1
	push b
	push b
	lxi h, $0707
	push h
	lxi h, 256+6
	dad sp
	sphl
	push b
	lxi h, $011f
	push h
	lxi h, $ffff
	push h
	lxi h, 256+6
	dad sp
	sphl
	lxi h, $1e1e
	push h
	lxi h, $feff
	push h
	lxi h, $ffff
	push h
	lxi h, 256+6
	dad sp
	sphl
	push b
	lxi h, $00e0
	push h
	lxi h, $ffff
	push h
	lxi h, 256+6
	dad sp
	sphl
	push b
	push b
	lxi h, $f8e0
	push h

;; layer 2 (c000)
	lxi h, $4000
	dad d
	sphl
;[                   6666                 ] 00001e0000
;[                   6666                 ] 00001e0000
;[               66666666                 ] 0001fe0000
;[           6666666666666666             ] 001fffe000
;[     22222222222222222222222222222222   ] 0000000000
;[     222222222222222222222222222222     ] 0000000000
;[     55555555555555555555555555         ] 07fffffe00
;[         555555555555555555             ] 007fffe000
; stripped pairs: leading: 0 trailing: 0
	push b
	push b
	push b
	lxi h, $0700
	push h
	lxi h, 256+8
	dad sp
	sphl
	push b
	lxi h, $011f
	push h
	push b
	lxi h, $ff7f
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $1e1e
	push h
	lxi h, $feff
	push h
	push b
	lxi h, $ffff
	push h
	lxi h, 256+8
	dad sp
	sphl
	push b
	lxi h, $00e0
	push h
	push b
	lxi h, $fee0
	push h
	lxi h, 256+8
	dad sp
	sphl
	push b
	push b
	push b
	push b

ship_ltr5_ret:
	lxi sp, 0
	ret
ship_ltr6:
	lxi h, 0
	dad sp
	shld ship_ltr6_ret+1
	.nolist
;; layer 0 (8000)
	mov h, d
	mov l, e
	sphl
;[                    6666                ] 0000000000
;[                    6666                ] 0000000000
;[                66666666                ] 0000000000
;[            6666666666666666            ] 0000000000
;[      22222222222222222222222222222222  ] 0000000000
;[      222222222222222222222222222222    ] 0000000000
;[      55555555555555555555555555        ] 03ffffff00
;[          555555555555555555            ] 003ffff000
; stripped pairs: leading: 3 trailing: 0
	lxi h, $fffa
	dad sp
	sphl
	lxi h, $0300
	push h
	lxi h, 256+2
	dad sp
	sphl
	lxi h, $ff3f
	push h
	lxi h, 256+2
	dad sp
	sphl
	lxi h, $ffff
	push h
	lxi h, 256+2
	dad sp
	sphl
	lxi h, $fff0
	push h
	lxi h, 256+2
	dad sp
	sphl
	push b

;; layer 1 (a000)
	lxi h, $2000
	dad d
	sphl
;[                    6666                ] 00000f0000
;[                    6666                ] 00000f0000
;[                66666666                ] 0000ff0000
;[            6666666666666666            ] 000ffff000
;[      22222222222222222222222222222222  ] 03fffffffc
;[      222222222222222222222222222222    ] 03fffffff0
;[      55555555555555555555555555        ] 0000000000
;[          555555555555555555            ] 0000000000
; stripped pairs: leading: 0 trailing: 1
	push b
	push b
	lxi h, $0303
	push h
	lxi h, 256+6
	dad sp
	sphl
	push b
	lxi h, $000f
	push h
	lxi h, $ffff
	push h
	lxi h, 256+6
	dad sp
	sphl
	lxi h, $0f0f
	push h
	lxi h, $ffff
	push h
	push h
	lxi h, 256+6
	dad sp
	sphl
	push b
	lxi h, $00f0
	push h
	lxi h, $ffff
	push h
	lxi h, 256+6
	dad sp
	sphl
	push b
	push b
	lxi h, $fcf0
	push h

;; layer 2 (c000)
	lxi h, $4000
	dad d
	sphl
;[                    6666                ] 00000f0000
;[                    6666                ] 00000f0000
;[                66666666                ] 0000ff0000
;[            6666666666666666            ] 000ffff000
;[      22222222222222222222222222222222  ] 0000000000
;[      222222222222222222222222222222    ] 0000000000
;[      55555555555555555555555555        ] 03ffffff00
;[          555555555555555555            ] 003ffff000
; stripped pairs: leading: 0 trailing: 0
	push b
	push b
	push b
	lxi h, $0300
	push h
	lxi h, 256+8
	dad sp
	sphl
	push b
	lxi h, $000f
	push h
	push b
	lxi h, $ff3f
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $0f0f
	push h
	lxi h, $ffff
	push h
	push b
	push h
	lxi h, 256+8
	dad sp
	sphl
	push b
	lxi h, $00f0
	push h
	push b
	lxi h, $fff0
	push h
	lxi h, 256+8
	dad sp
	sphl
	push b
	push b
	push b
	push b

ship_ltr6_ret:
	lxi sp, 0
	ret
ship_ltr7:
	lxi h, 0
	dad sp
	shld ship_ltr7_ret+1
	.nolist
;; layer 0 (8000)
	mov h, d
	mov l, e
	sphl
;[                     6666               ] 0000000000
;[                     6666               ] 0000000000
;[                 66666666               ] 0000000000
;[             6666666666666666           ] 0000000000
;[       22222222222222222222222222222222 ] 0000000000
;[       222222222222222222222222222222   ] 0000000000
;[       55555555555555555555555555       ] 01ffffff80
;[           555555555555555555           ] 001ffff800
; stripped pairs: leading: 3 trailing: 0
	lxi h, $fffa
	dad sp
	sphl
	lxi h, $0100
	push h
	lxi h, 256+2
	dad sp
	sphl
	lxi h, $ff1f
	push h
	lxi h, 256+2
	dad sp
	sphl
	lxi h, $ffff
	push h
	lxi h, 256+2
	dad sp
	sphl
	lxi h, $fff8
	push h
	lxi h, 256+2
	dad sp
	sphl
	lxi h, $8000
	push h

;; layer 1 (a000)
	lxi h, $2000
	dad d
	sphl
;[                     6666               ] 0000078000
;[                     6666               ] 0000078000
;[                 66666666               ] 00007f8000
;[             6666666666666666           ] 0007fff800
;[       22222222222222222222222222222222 ] 01fffffffe
;[       222222222222222222222222222222   ] 01fffffff8
;[       55555555555555555555555555       ] 0000000000
;[           555555555555555555           ] 0000000000
; stripped pairs: leading: 0 trailing: 1
	push b
	push b
	lxi h, $0101
	push h
	lxi h, 256+6
	dad sp
	sphl
	push b
	lxi h, $0007
	push h
	lxi h, $ffff
	push h
	lxi h, 256+6
	dad sp
	sphl
	lxi h, $0707
	push h
	lxi h, $7fff
	push h
	lxi h, $ffff
	push h
	lxi h, 256+6
	dad sp
	sphl
	lxi h, $8080
	push h
	lxi h, $80f8
	push h
	lxi h, $ffff
	push h
	lxi h, 256+6
	dad sp
	sphl
	push b
	push b
	lxi h, $fef8
	push h

;; layer 2 (c000)
	lxi h, $4000
	dad d
	sphl
;[                     6666               ] 0000078000
;[                     6666               ] 0000078000
;[                 66666666               ] 00007f8000
;[             6666666666666666           ] 0007fff800
;[       22222222222222222222222222222222 ] 0000000000
;[       222222222222222222222222222222   ] 0000000000
;[       55555555555555555555555555       ] 01ffffff80
;[           555555555555555555           ] 001ffff800
; stripped pairs: leading: 0 trailing: 0
	push b
	push b
	push b
	lxi h, $0100
	push h
	lxi h, 256+8
	dad sp
	sphl
	push b
	lxi h, $0007
	push h
	push b
	lxi h, $ff1f
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $0707
	push h
	lxi h, $7fff
	push h
	push b
	lxi h, $ffff
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $8080
	push h
	lxi h, $80f8
	push h
	push b
	lxi h, $fff8
	push h
	lxi h, 256+8
	dad sp
	sphl
	push b
	push b
	push b
	lxi h, $8000
	push h

ship_ltr7_ret:
	lxi sp, 0
	ret
;; end of sprite group ship
ship_rtl_dispatch:
	dw ship_rtl0
	dw ship_rtl1
	dw ship_rtl2
	dw ship_rtl3
	dw ship_rtl4
	dw ship_rtl5
	dw ship_rtl6
	dw ship_rtl7
ship_rtl_spritegroup:
ship_rtl0:
	lxi h, 0
	dad sp
	shld ship_rtl0_ret+1
	.nolist
;; layer 0 (8000)
	mov h, d
	mov l, e
	sphl
;[              6666                      ] 0000000000
;[              6666                      ] 0000000000
;[              66666666                  ] 0000000000
;[          6666666666666666              ] 0000000000
;[22222222222222222222222222222222        ] 0000000000
;[  222222222222222222222222222222        ] 0000000000
;[      55555555555555555555555555        ] 03ffffff00
;[          555555555555555555            ] 003ffff000
; stripped pairs: leading: 3 trailing: 0
	lxi h, $fffa
	dad sp
	sphl
	lxi h, $0300
	push h
	lxi h, 256+2
	dad sp
	sphl
	lxi h, $ff3f
	push h
	lxi h, 256+2
	dad sp
	sphl
	lxi h, $ffff
	push h
	lxi h, 256+2
	dad sp
	sphl
	lxi h, $fff0
	push h
	lxi h, 256+2
	dad sp
	sphl
	push b

;; layer 1 (a000)
	lxi h, $2000
	dad d
	sphl
;[              6666                      ] 0003c00000
;[              6666                      ] 0003c00000
;[              66666666                  ] 0003fc0000
;[          6666666666666666              ] 003fffc000
;[22222222222222222222222222222222        ] ffffffff00
;[  222222222222222222222222222222        ] 3fffffff00
;[      55555555555555555555555555        ] 0000000000
;[          555555555555555555            ] 0000000000
; stripped pairs: leading: 0 trailing: 1
	push b
	push b
	lxi h, $ff3f
	push h
	lxi h, 256+6
	dad sp
	sphl
	lxi h, $0303
	push h
	lxi h, $033f
	push h
	lxi h, $ffff
	push h
	lxi h, 256+6
	dad sp
	sphl
	lxi h, $c0c0
	push h
	lxi h, $fcff
	push h
	lxi h, $ffff
	push h
	lxi h, 256+6
	dad sp
	sphl
	push b
	lxi h, $00c0
	push h
	lxi h, $ffff
	push h
	lxi h, 256+6
	dad sp
	sphl
	push b
	push b
	push b

;; layer 2 (c000)
	lxi h, $4000
	dad d
	sphl
;[              6666                      ] 0003c00000
;[              6666                      ] 0003c00000
;[              66666666                  ] 0003fc0000
;[          6666666666666666              ] 003fffc000
;[22222222222222222222222222222222        ] 0000000000
;[  222222222222222222222222222222        ] 0000000000
;[      55555555555555555555555555        ] 03ffffff00
;[          555555555555555555            ] 003ffff000
; stripped pairs: leading: 0 trailing: 0
	push b
	push b
	push b
	lxi h, $0300
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $0303
	push h
	lxi h, $033f
	push h
	push b
	lxi h, $ff3f
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $c0c0
	push h
	lxi h, $fcff
	push h
	push b
	lxi h, $ffff
	push h
	lxi h, 256+8
	dad sp
	sphl
	push b
	lxi h, $00c0
	push h
	push b
	lxi h, $fff0
	push h
	lxi h, 256+8
	dad sp
	sphl
	push b
	push b
	push b
	push b

ship_rtl0_ret:
	lxi sp, 0
	ret
ship_rtl1:
	lxi h, 0
	dad sp
	shld ship_rtl1_ret+1
	.nolist
;; layer 0 (8000)
	mov h, d
	mov l, e
	sphl
;[               6666                     ] 0000000000
;[               6666                     ] 0000000000
;[               66666666                 ] 0000000000
;[           6666666666666666             ] 0000000000
;[ 22222222222222222222222222222222       ] 0000000000
;[   222222222222222222222222222222       ] 0000000000
;[       55555555555555555555555555       ] 01ffffff80
;[           555555555555555555           ] 001ffff800
; stripped pairs: leading: 3 trailing: 0
	lxi h, $fffa
	dad sp
	sphl
	lxi h, $0100
	push h
	lxi h, 256+2
	dad sp
	sphl
	lxi h, $ff1f
	push h
	lxi h, 256+2
	dad sp
	sphl
	lxi h, $ffff
	push h
	lxi h, 256+2
	dad sp
	sphl
	lxi h, $fff8
	push h
	lxi h, 256+2
	dad sp
	sphl
	lxi h, $8000
	push h

;; layer 1 (a000)
	lxi h, $2000
	dad d
	sphl
;[               6666                     ] 0001e00000
;[               6666                     ] 0001e00000
;[               66666666                 ] 0001fe0000
;[           6666666666666666             ] 001fffe000
;[ 22222222222222222222222222222222       ] 7fffffff80
;[   222222222222222222222222222222       ] 1fffffff80
;[       55555555555555555555555555       ] 0000000000
;[           555555555555555555           ] 0000000000
; stripped pairs: leading: 0 trailing: 1
	push b
	push b
	lxi h, $7f1f
	push h
	lxi h, 256+6
	dad sp
	sphl
	lxi h, $0101
	push h
	lxi h, $011f
	push h
	lxi h, $ffff
	push h
	lxi h, 256+6
	dad sp
	sphl
	lxi h, $e0e0
	push h
	lxi h, $feff
	push h
	lxi h, $ffff
	push h
	lxi h, 256+6
	dad sp
	sphl
	push b
	lxi h, $00e0
	push h
	lxi h, $ffff
	push h
	lxi h, 256+6
	dad sp
	sphl
	push b
	push b
	lxi h, $8080
	push h

;; layer 2 (c000)
	lxi h, $4000
	dad d
	sphl
;[               6666                     ] 0001e00000
;[               6666                     ] 0001e00000
;[               66666666                 ] 0001fe0000
;[           6666666666666666             ] 001fffe000
;[ 22222222222222222222222222222222       ] 0000000000
;[   222222222222222222222222222222       ] 0000000000
;[       55555555555555555555555555       ] 01ffffff80
;[           555555555555555555           ] 001ffff800
; stripped pairs: leading: 0 trailing: 0
	push b
	push b
	push b
	lxi h, $0100
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $0101
	push h
	lxi h, $011f
	push h
	push b
	lxi h, $ff1f
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $e0e0
	push h
	lxi h, $feff
	push h
	push b
	lxi h, $ffff
	push h
	lxi h, 256+8
	dad sp
	sphl
	push b
	lxi h, $00e0
	push h
	push b
	lxi h, $fff8
	push h
	lxi h, 256+8
	dad sp
	sphl
	push b
	push b
	push b
	lxi h, $8000
	push h

ship_rtl1_ret:
	lxi sp, 0
	ret
ship_rtl2:
	lxi h, 0
	dad sp
	shld ship_rtl2_ret+1
	.nolist
;; layer 0 (8000)
	mov h, d
	mov l, e
	sphl
;[                6666                    ] 0000000000
;[                6666                    ] 0000000000
;[                66666666                ] 0000000000
;[            6666666666666666            ] 0000000000
;[  22222222222222222222222222222222      ] 0000000000
;[    222222222222222222222222222222      ] 0000000000
;[        55555555555555555555555555      ] 00ffffffc0
;[            555555555555555555          ] 000ffffc00
; stripped pairs: leading: 3 trailing: 0
	lxi h, $fffa
	dad sp
	sphl
	push b
	lxi h, 256+2
	dad sp
	sphl
	lxi h, $ff0f
	push h
	lxi h, 256+2
	dad sp
	sphl
	lxi h, $ffff
	push h
	lxi h, 256+2
	dad sp
	sphl
	lxi h, $fffc
	push h
	lxi h, 256+2
	dad sp
	sphl
	lxi h, $c000
	push h

;; layer 1 (a000)
	lxi h, $2000
	dad d
	sphl
;[                6666                    ] 0000f00000
;[                6666                    ] 0000f00000
;[                66666666                ] 0000ff0000
;[            6666666666666666            ] 000ffff000
;[  22222222222222222222222222222222      ] 3fffffffc0
;[    222222222222222222222222222222      ] 0fffffffc0
;[        55555555555555555555555555      ] 0000000000
;[            555555555555555555          ] 0000000000
; stripped pairs: leading: 0 trailing: 1
	push b
	push b
	lxi h, $3f0f
	push h
	lxi h, 256+6
	dad sp
	sphl
	push b
	lxi h, $000f
	push h
	lxi h, $ffff
	push h
	lxi h, 256+6
	dad sp
	sphl
	lxi h, $f0f0
	push h
	lxi h, $ffff
	push h
	push h
	lxi h, 256+6
	dad sp
	sphl
	push b
	lxi h, $00f0
	push h
	lxi h, $ffff
	push h
	lxi h, 256+6
	dad sp
	sphl
	push b
	push b
	lxi h, $c0c0
	push h

;; layer 2 (c000)
	lxi h, $4000
	dad d
	sphl
;[                6666                    ] 0000f00000
;[                6666                    ] 0000f00000
;[                66666666                ] 0000ff0000
;[            6666666666666666            ] 000ffff000
;[  22222222222222222222222222222222      ] 0000000000
;[    222222222222222222222222222222      ] 0000000000
;[        55555555555555555555555555      ] 00ffffffc0
;[            555555555555555555          ] 000ffffc00
; stripped pairs: leading: 0 trailing: 0
	push b
	push b
	push b
	push b
	lxi h, 256+8
	dad sp
	sphl
	push b
	lxi h, $000f
	push h
	push b
	lxi h, $ff0f
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $f0f0
	push h
	lxi h, $ffff
	push h
	push b
	push h
	lxi h, 256+8
	dad sp
	sphl
	push b
	lxi h, $00f0
	push h
	push b
	lxi h, $fffc
	push h
	lxi h, 256+8
	dad sp
	sphl
	push b
	push b
	push b
	lxi h, $c000
	push h

ship_rtl2_ret:
	lxi sp, 0
	ret
ship_rtl3:
	lxi h, 0
	dad sp
	shld ship_rtl3_ret+1
	.nolist
;; layer 0 (8000)
	mov h, d
	mov l, e
	sphl
;[                 6666                   ] 0000000000
;[                 6666                   ] 0000000000
;[                 66666666               ] 0000000000
;[             6666666666666666           ] 0000000000
;[   22222222222222222222222222222222     ] 0000000000
;[     222222222222222222222222222222     ] 0000000000
;[         55555555555555555555555555     ] 007fffffe0
;[             555555555555555555         ] 0007fffe00
; stripped pairs: leading: 3 trailing: 0
	lxi h, $fffa
	dad sp
	sphl
	push b
	lxi h, 256+2
	dad sp
	sphl
	lxi h, $7f07
	push h
	lxi h, 256+2
	dad sp
	sphl
	lxi h, $ffff
	push h
	lxi h, 256+2
	dad sp
	sphl
	lxi h, $fffe
	push h
	lxi h, 256+2
	dad sp
	sphl
	lxi h, $e000
	push h

;; layer 1 (a000)
	lxi h, $2000
	dad d
	sphl
;[                 6666                   ] 0000780000
;[                 6666                   ] 0000780000
;[                 66666666               ] 00007f8000
;[             6666666666666666           ] 0007fff800
;[   22222222222222222222222222222222     ] 1fffffffe0
;[     222222222222222222222222222222     ] 07ffffffe0
;[         55555555555555555555555555     ] 0000000000
;[             555555555555555555         ] 0000000000
; stripped pairs: leading: 0 trailing: 1
	push b
	push b
	lxi h, $1f07
	push h
	lxi h, 256+6
	dad sp
	sphl
	push b
	lxi h, $0007
	push h
	lxi h, $ffff
	push h
	lxi h, 256+6
	dad sp
	sphl
	lxi h, $7878
	push h
	lxi h, $7fff
	push h
	lxi h, $ffff
	push h
	lxi h, 256+6
	dad sp
	sphl
	push b
	lxi h, $80f8
	push h
	lxi h, $ffff
	push h
	lxi h, 256+6
	dad sp
	sphl
	push b
	push b
	lxi h, $e0e0
	push h

;; layer 2 (c000)
	lxi h, $4000
	dad d
	sphl
;[                 6666                   ] 0000780000
;[                 6666                   ] 0000780000
;[                 66666666               ] 00007f8000
;[             6666666666666666           ] 0007fff800
;[   22222222222222222222222222222222     ] 0000000000
;[     222222222222222222222222222222     ] 0000000000
;[         55555555555555555555555555     ] 007fffffe0
;[             555555555555555555         ] 0007fffe00
; stripped pairs: leading: 0 trailing: 0
	push b
	push b
	push b
	push b
	lxi h, 256+8
	dad sp
	sphl
	push b
	lxi h, $0007
	push h
	push b
	lxi h, $7f07
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $7878
	push h
	lxi h, $7fff
	push h
	push b
	lxi h, $ffff
	push h
	lxi h, 256+8
	dad sp
	sphl
	push b
	lxi h, $80f8
	push h
	push b
	lxi h, $fffe
	push h
	lxi h, 256+8
	dad sp
	sphl
	push b
	push b
	push b
	lxi h, $e000
	push h

ship_rtl3_ret:
	lxi sp, 0
	ret
ship_rtl4:
	lxi h, 0
	dad sp
	shld ship_rtl4_ret+1
	.nolist
;; layer 0 (8000)
	mov h, d
	mov l, e
	sphl
;[                  6666                  ] 0000000000
;[                  6666                  ] 0000000000
;[                  66666666              ] 0000000000
;[              6666666666666666          ] 0000000000
;[    22222222222222222222222222222222    ] 0000000000
;[      222222222222222222222222222222    ] 0000000000
;[          55555555555555555555555555    ] 003ffffff0
;[              555555555555555555        ] 0003ffff00
; stripped pairs: leading: 3 trailing: 0
	lxi h, $fffa
	dad sp
	sphl
	push b
	lxi h, 256+2
	dad sp
	sphl
	lxi h, $3f03
	push h
	lxi h, 256+2
	dad sp
	sphl
	lxi h, $ffff
	push h
	lxi h, 256+2
	dad sp
	sphl
	lxi h, $ffff
	push h
	lxi h, 256+2
	dad sp
	sphl
	lxi h, $f000
	push h

;; layer 1 (a000)
	lxi h, $2000
	dad d
	sphl
;[                  6666                  ] 00003c0000
;[                  6666                  ] 00003c0000
;[                  66666666              ] 00003fc000
;[              6666666666666666          ] 0003fffc00
;[    22222222222222222222222222222222    ] 0ffffffff0
;[      222222222222222222222222222222    ] 03fffffff0
;[          55555555555555555555555555    ] 0000000000
;[              555555555555555555        ] 0000000000
; stripped pairs: leading: 0 trailing: 1
	push b
	push b
	lxi h, $0f03
	push h
	lxi h, 256+6
	dad sp
	sphl
	push b
	lxi h, $0003
	push h
	lxi h, $ffff
	push h
	lxi h, 256+6
	dad sp
	sphl
	lxi h, $3c3c
	push h
	lxi h, $3fff
	push h
	lxi h, $ffff
	push h
	lxi h, 256+6
	dad sp
	sphl
	push b
	lxi h, $c0fc
	push h
	lxi h, $ffff
	push h
	lxi h, 256+6
	dad sp
	sphl
	push b
	push b
	lxi h, $f0f0
	push h

;; layer 2 (c000)
	lxi h, $4000
	dad d
	sphl
;[                  6666                  ] 00003c0000
;[                  6666                  ] 00003c0000
;[                  66666666              ] 00003fc000
;[              6666666666666666          ] 0003fffc00
;[    22222222222222222222222222222222    ] 0000000000
;[      222222222222222222222222222222    ] 0000000000
;[          55555555555555555555555555    ] 003ffffff0
;[              555555555555555555        ] 0003ffff00
; stripped pairs: leading: 0 trailing: 0
	push b
	push b
	push b
	push b
	lxi h, 256+8
	dad sp
	sphl
	push b
	lxi h, $0003
	push h
	push b
	lxi h, $3f03
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $3c3c
	push h
	lxi h, $3fff
	push h
	push b
	lxi h, $ffff
	push h
	lxi h, 256+8
	dad sp
	sphl
	push b
	lxi h, $c0fc
	push h
	push b
	lxi h, $ffff
	push h
	lxi h, 256+8
	dad sp
	sphl
	push b
	push b
	push b
	lxi h, $f000
	push h

ship_rtl4_ret:
	lxi sp, 0
	ret
ship_rtl5:
	lxi h, 0
	dad sp
	shld ship_rtl5_ret+1
	.nolist
;; layer 0 (8000)
	mov h, d
	mov l, e
	sphl
;[                   6666                 ] 0000000000
;[                   6666                 ] 0000000000
;[                   66666666             ] 0000000000
;[               6666666666666666         ] 0000000000
;[     22222222222222222222222222222222   ] 0000000000
;[       222222222222222222222222222222   ] 0000000000
;[           55555555555555555555555555   ] 001ffffff8
;[               555555555555555555       ] 0001ffff80
; stripped pairs: leading: 3 trailing: 0
	lxi h, $fffa
	dad sp
	sphl
	push b
	lxi h, 256+2
	dad sp
	sphl
	lxi h, $1f01
	push h
	lxi h, 256+2
	dad sp
	sphl
	lxi h, $ffff
	push h
	lxi h, 256+2
	dad sp
	sphl
	lxi h, $ffff
	push h
	lxi h, 256+2
	dad sp
	sphl
	lxi h, $f880
	push h

;; layer 1 (a000)
	lxi h, $2000
	dad d
	sphl
;[                   6666                 ] 00001e0000
;[                   6666                 ] 00001e0000
;[                   66666666             ] 00001fe000
;[               6666666666666666         ] 0001fffe00
;[     22222222222222222222222222222222   ] 07fffffff8
;[       222222222222222222222222222222   ] 01fffffff8
;[           55555555555555555555555555   ] 0000000000
;[               555555555555555555       ] 0000000000
; stripped pairs: leading: 0 trailing: 1
	push b
	push b
	lxi h, $0701
	push h
	lxi h, 256+6
	dad sp
	sphl
	push b
	lxi h, $0001
	push h
	lxi h, $ffff
	push h
	lxi h, 256+6
	dad sp
	sphl
	lxi h, $1e1e
	push h
	lxi h, $1fff
	push h
	lxi h, $ffff
	push h
	lxi h, 256+6
	dad sp
	sphl
	push b
	lxi h, $e0fe
	push h
	lxi h, $ffff
	push h
	lxi h, 256+6
	dad sp
	sphl
	push b
	push b
	lxi h, $f8f8
	push h

;; layer 2 (c000)
	lxi h, $4000
	dad d
	sphl
;[                   6666                 ] 00001e0000
;[                   6666                 ] 00001e0000
;[                   66666666             ] 00001fe000
;[               6666666666666666         ] 0001fffe00
;[     22222222222222222222222222222222   ] 0000000000
;[       222222222222222222222222222222   ] 0000000000
;[           55555555555555555555555555   ] 001ffffff8
;[               555555555555555555       ] 0001ffff80
; stripped pairs: leading: 0 trailing: 0
	push b
	push b
	push b
	push b
	lxi h, 256+8
	dad sp
	sphl
	push b
	lxi h, $0001
	push h
	push b
	lxi h, $1f01
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $1e1e
	push h
	lxi h, $1fff
	push h
	push b
	lxi h, $ffff
	push h
	lxi h, 256+8
	dad sp
	sphl
	push b
	lxi h, $e0fe
	push h
	push b
	lxi h, $ffff
	push h
	lxi h, 256+8
	dad sp
	sphl
	push b
	push b
	push b
	lxi h, $f880
	push h

ship_rtl5_ret:
	lxi sp, 0
	ret
ship_rtl6:
	lxi h, 0
	dad sp
	shld ship_rtl6_ret+1
	.nolist
;; layer 0 (8000)
	mov h, d
	mov l, e
	sphl
;[                    6666                ] 0000000000
;[                    6666                ] 0000000000
;[                    66666666            ] 0000000000
;[                6666666666666666        ] 0000000000
;[      22222222222222222222222222222222  ] 0000000000
;[        222222222222222222222222222222  ] 0000000000
;[            55555555555555555555555555  ] 000ffffffc
;[                555555555555555555      ] 0000ffffc0
; stripped pairs: leading: 3 trailing: 0
	lxi h, $fffa
	dad sp
	sphl
	push b
	lxi h, 256+2
	dad sp
	sphl
	lxi h, $0f00
	push h
	lxi h, 256+2
	dad sp
	sphl
	lxi h, $ffff
	push h
	lxi h, 256+2
	dad sp
	sphl
	lxi h, $ffff
	push h
	lxi h, 256+2
	dad sp
	sphl
	lxi h, $fcc0
	push h

;; layer 1 (a000)
	lxi h, $2000
	dad d
	sphl
;[                    6666                ] 00000f0000
;[                    6666                ] 00000f0000
;[                    66666666            ] 00000ff000
;[                6666666666666666        ] 0000ffff00
;[      22222222222222222222222222222222  ] 03fffffffc
;[        222222222222222222222222222222  ] 00fffffffc
;[            55555555555555555555555555  ] 0000000000
;[                555555555555555555      ] 0000000000
; stripped pairs: leading: 0 trailing: 1
	push b
	push b
	lxi h, $0300
	push h
	lxi h, 256+6
	dad sp
	sphl
	push b
	push b
	lxi h, $ffff
	push h
	lxi h, 256+6
	dad sp
	sphl
	lxi h, $0f0f
	push h
	lxi h, $0fff
	push h
	lxi h, $ffff
	push h
	lxi h, 256+6
	dad sp
	sphl
	push b
	lxi h, $f0ff
	push h
	lxi h, $ffff
	push h
	lxi h, 256+6
	dad sp
	sphl
	push b
	push b
	lxi h, $fcfc
	push h

;; layer 2 (c000)
	lxi h, $4000
	dad d
	sphl
;[                    6666                ] 00000f0000
;[                    6666                ] 00000f0000
;[                    66666666            ] 00000ff000
;[                6666666666666666        ] 0000ffff00
;[      22222222222222222222222222222222  ] 0000000000
;[        222222222222222222222222222222  ] 0000000000
;[            55555555555555555555555555  ] 000ffffffc
;[                555555555555555555      ] 0000ffffc0
; stripped pairs: leading: 0 trailing: 0
	push b
	push b
	push b
	push b
	lxi h, 256+8
	dad sp
	sphl
	push b
	push b
	push b
	lxi h, $0f00
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $0f0f
	push h
	lxi h, $0fff
	push h
	push b
	lxi h, $ffff
	push h
	lxi h, 256+8
	dad sp
	sphl
	push b
	lxi h, $f0ff
	push h
	push b
	lxi h, $ffff
	push h
	lxi h, 256+8
	dad sp
	sphl
	push b
	push b
	push b
	lxi h, $fcc0
	push h

ship_rtl6_ret:
	lxi sp, 0
	ret
ship_rtl7:
	lxi h, 0
	dad sp
	shld ship_rtl7_ret+1
	.nolist
;; layer 0 (8000)
	mov h, d
	mov l, e
	sphl
;[                     6666               ] 0000000000
;[                     6666               ] 0000000000
;[                     66666666           ] 0000000000
;[                 6666666666666666       ] 0000000000
;[       22222222222222222222222222222222 ] 0000000000
;[         222222222222222222222222222222 ] 0000000000
;[             55555555555555555555555555 ] 0007fffffe
;[                 555555555555555555     ] 00007fffe0
; stripped pairs: leading: 3 trailing: 0
	lxi h, $fffa
	dad sp
	sphl
	push b
	lxi h, 256+2
	dad sp
	sphl
	lxi h, $0700
	push h
	lxi h, 256+2
	dad sp
	sphl
	lxi h, $ff7f
	push h
	lxi h, 256+2
	dad sp
	sphl
	lxi h, $ffff
	push h
	lxi h, 256+2
	dad sp
	sphl
	lxi h, $fee0
	push h

;; layer 1 (a000)
	lxi h, $2000
	dad d
	sphl
;[                     6666               ] 0000078000
;[                     6666               ] 0000078000
;[                     66666666           ] 000007f800
;[                 6666666666666666       ] 00007fff80
;[       22222222222222222222222222222222 ] 01fffffffe
;[         222222222222222222222222222222 ] 007ffffffe
;[             55555555555555555555555555 ] 0000000000
;[                 555555555555555555     ] 0000000000
; stripped pairs: leading: 0 trailing: 1
	push b
	push b
	lxi h, $0100
	push h
	lxi h, 256+6
	dad sp
	sphl
	push b
	push b
	lxi h, $ff7f
	push h
	lxi h, 256+6
	dad sp
	sphl
	lxi h, $0707
	push h
	lxi h, $077f
	push h
	lxi h, $ffff
	push h
	lxi h, 256+6
	dad sp
	sphl
	lxi h, $8080
	push h
	lxi h, $f8ff
	push h
	lxi h, $ffff
	push h
	lxi h, 256+6
	dad sp
	sphl
	push b
	lxi h, $0080
	push h
	lxi h, $fefe
	push h

;; layer 2 (c000)
	lxi h, $4000
	dad d
	sphl
;[                     6666               ] 0000078000
;[                     6666               ] 0000078000
;[                     66666666           ] 000007f800
;[                 6666666666666666       ] 00007fff80
;[       22222222222222222222222222222222 ] 0000000000
;[         222222222222222222222222222222 ] 0000000000
;[             55555555555555555555555555 ] 0007fffffe
;[                 555555555555555555     ] 00007fffe0
; stripped pairs: leading: 0 trailing: 0
	push b
	push b
	push b
	push b
	lxi h, 256+8
	dad sp
	sphl
	push b
	push b
	push b
	lxi h, $0700
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $0707
	push h
	lxi h, $077f
	push h
	push b
	lxi h, $ff7f
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $8080
	push h
	lxi h, $f8ff
	push h
	push b
	lxi h, $ffff
	push h
	lxi h, 256+8
	dad sp
	sphl
	push b
	lxi h, $0080
	push h
	push b
	lxi h, $fee0
	push h

ship_rtl7_ret:
	lxi sp, 0
	ret
;; end of sprite group ship
copter_ltr_dispatch:
	dw copter_ltr_inf
	dw copter_ltr0
	dw copter_ltr1
	dw copter_ltr2
	dw copter_ltr3
	dw copter_ltr4
	dw copter_ltr5
	dw copter_ltr6
	dw copter_ltr7
copter_ltr_spritegroup:
copter_ltr_inf:
	lxi h, 0
	dad sp
	shld copter_ltr_inf_ret+1
	.nolist
;; layer 0 (8000)
	mov h, d
	mov l, e
	sphl
;[               7777777  ] 00000001fc
;[        77   77777777777] 000000c7ff
;[        77   77777777777] 000000c7ff
;[        6666666666666666] 0000000000
;[        77     7777777  ] 000000c1fc
;[        77     7777777  ] 000000c1fc
;[                 777    ] 0000000070
;[               7777777  ] 00000001fc
; stripped pairs: leading: 0 trailing: 0
	push b
	push b
	push b
	push b
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $01c7
	push h
	lxi h, $c700
	push h
	lxi h, $c1c1
	push h
	lxi h, $0001
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $fcff
	push h
	lxi h, $ff00
	push h
	lxi h, $fcfc
	push h
	lxi h, $70fc
	push h

;; layer 1 (a000)
	lxi h, $2000
	dad d
	sphl
;[               7777777  ] 00000001fc
;[        77   77777777777] 000000c7ff
;[        77   77777777777] 000000c7ff
;[        6666666666666666] 000000ffff
;[        77     7777777  ] 000000c1fc
;[        77     7777777  ] 000000c1fc
;[                 777    ] 0000000070
;[               7777777  ] 00000001fc
; stripped pairs: leading: 0 trailing: 0
	push b
	push b
	push b
	push b
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $01c7
	push h
	lxi h, $c7ff
	push h
	lxi h, $c1c1
	push h
	lxi h, $0001
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $fcff
	push h
	lxi h, $ffff
	push h
	lxi h, $fcfc
	push h
	lxi h, $70fc
	push h

;; layer 2 (c000)
	lxi h, $4000
	dad d
	sphl
;[               7777777  ] 00000001fc
;[        77   77777777777] 000000c7ff
;[        77   77777777777] 000000c7ff
;[        6666666666666666] 000000ffff
;[        77     7777777  ] 000000c1fc
;[        77     7777777  ] 000000c1fc
;[                 777    ] 0000000070
;[               7777777  ] 00000001fc
; stripped pairs: leading: 0 trailing: 0
	push b
	push b
	push b
	push b
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $01c7
	push h
	lxi h, $c7ff
	push h
	lxi h, $c1c1
	push h
	lxi h, $0001
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $fcff
	push h
	lxi h, $ffff
	push h
	lxi h, $fcfc
	push h
	lxi h, $70fc
	push h

copter_ltr_inf_ret:
	lxi sp, 0
	ret
copter_ltr0:
	lxi h, 0
	dad sp
	shld copter_ltr0_ret+1
	.nolist
;; layer 0 (8000)
	mov h, d
	mov l, e
	sphl
;[       7777777  ] 00000001fc
;[77   77777777777] 000000c7ff
;[77   77777777777] 000000c7ff
;[6666666666666666] 0000000000
;[77     7777777  ] 000000c1fc
;[77     7777777  ] 000000c1fc
;[         777    ] 0000000070
;[       7777777  ] 00000001fc
; stripped pairs: leading: 0 trailing: 0
	lxi h, $01c7
	push h
	lxi h, $c700
	push h
	lxi h, $c1c1
	push h
	lxi h, $0001
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $fcff
	push h
	lxi h, $ff00
	push h
	lxi h, $fcfc
	push h
	lxi h, $70fc
	push h

;; layer 1 (a000)
	lxi h, $2000
	dad d
	sphl
;[       7777777  ] 00000001fc
;[77   77777777777] 000000c7ff
;[77   77777777777] 000000c7ff
;[6666666666666666] 000000ffff
;[77     7777777  ] 000000c1fc
;[77     7777777  ] 000000c1fc
;[         777    ] 0000000070
;[       7777777  ] 00000001fc
; stripped pairs: leading: 0 trailing: 0
	lxi h, $01c7
	push h
	lxi h, $c7ff
	push h
	lxi h, $c1c1
	push h
	lxi h, $0001
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $fcff
	push h
	lxi h, $ffff
	push h
	lxi h, $fcfc
	push h
	lxi h, $70fc
	push h

;; layer 2 (c000)
	lxi h, $4000
	dad d
	sphl
;[       7777777  ] 00000001fc
;[77   77777777777] 000000c7ff
;[77   77777777777] 000000c7ff
;[6666666666666666] 000000ffff
;[77     7777777  ] 000000c1fc
;[77     7777777  ] 000000c1fc
;[         777    ] 0000000070
;[       7777777  ] 00000001fc
; stripped pairs: leading: 0 trailing: 0
	lxi h, $01c7
	push h
	lxi h, $c7ff
	push h
	lxi h, $c1c1
	push h
	lxi h, $0001
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $fcff
	push h
	lxi h, $ffff
	push h
	lxi h, $fcfc
	push h
	lxi h, $70fc
	push h

copter_ltr0_ret:
	lxi sp, 0
	ret
copter_ltr1:
	lxi h, 0
	dad sp
	shld copter_ltr1_ret+1
	.nolist
;; layer 0 (8000)
	mov h, d
	mov l, e
	sphl
;[        7777777         ] 000000fe00
;[ 77   77777777777       ] 000063ff80
;[ 77   77777777777       ] 000063ff80
;[ 6666666666666666       ] 0000000000
;[ 77     7777777         ] 000060fe00
;[ 77     7777777         ] 000060fe00
;[          777           ] 0000003800
;[        7777777         ] 000000fe00
; stripped pairs: leading: 0 trailing: 0
	lxi h, $0063
	push h
	lxi h, $6300
	push h
	lxi h, $6060
	push h
	push b
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $feff
	push h
	lxi h, $ff00
	push h
	lxi h, $fefe
	push h
	lxi h, $38fe
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $0080
	push h
	lxi h, $8000
	push h
	push b
	push b

;; layer 1 (a000)
	lxi h, $2000
	dad d
	sphl
;[        7777777         ] 000000fe00
;[ 77   77777777777       ] 000063ff80
;[ 77   77777777777       ] 000063ff80
;[ 6666666666666666       ] 00007fff80
;[ 77     7777777         ] 000060fe00
;[ 77     7777777         ] 000060fe00
;[          777           ] 0000003800
;[        7777777         ] 000000fe00
; stripped pairs: leading: 0 trailing: 0
	lxi h, $0063
	push h
	lxi h, $637f
	push h
	lxi h, $6060
	push h
	push b
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $feff
	push h
	lxi h, $ffff
	push h
	lxi h, $fefe
	push h
	lxi h, $38fe
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $0080
	push h
	lxi h, $8080
	push h
	push b
	push b

;; layer 2 (c000)
	lxi h, $4000
	dad d
	sphl
;[        7777777         ] 000000fe00
;[ 77   77777777777       ] 000063ff80
;[ 77   77777777777       ] 000063ff80
;[ 6666666666666666       ] 00007fff80
;[ 77     7777777         ] 000060fe00
;[ 77     7777777         ] 000060fe00
;[          777           ] 0000003800
;[        7777777         ] 000000fe00
; stripped pairs: leading: 0 trailing: 0
	lxi h, $0063
	push h
	lxi h, $637f
	push h
	lxi h, $6060
	push h
	push b
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $feff
	push h
	lxi h, $ffff
	push h
	lxi h, $fefe
	push h
	lxi h, $38fe
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $0080
	push h
	lxi h, $8080
	push h
	push b
	push b

copter_ltr1_ret:
	lxi sp, 0
	ret
copter_ltr2:
	lxi h, 0
	dad sp
	shld copter_ltr2_ret+1
	.nolist
;; layer 0 (8000)
	mov h, d
	mov l, e
	sphl
;[         7777777        ] 0000007f00
;[  77   77777777777      ] 000031ffc0
;[  77   77777777777      ] 000031ffc0
;[  6666666666666666      ] 0000000000
;[  77     7777777        ] 0000307f00
;[  77     7777777        ] 0000307f00
;[           777          ] 0000001c00
;[         7777777        ] 0000007f00
; stripped pairs: leading: 0 trailing: 0
	lxi h, $0031
	push h
	lxi h, $3100
	push h
	lxi h, $3030
	push h
	push b
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $7fff
	push h
	lxi h, $ff00
	push h
	lxi h, $7f7f
	push h
	lxi h, $1c7f
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $00c0
	push h
	lxi h, $c000
	push h
	push b
	push b

;; layer 1 (a000)
	lxi h, $2000
	dad d
	sphl
;[         7777777        ] 0000007f00
;[  77   77777777777      ] 000031ffc0
;[  77   77777777777      ] 000031ffc0
;[  6666666666666666      ] 00003fffc0
;[  77     7777777        ] 0000307f00
;[  77     7777777        ] 0000307f00
;[           777          ] 0000001c00
;[         7777777        ] 0000007f00
; stripped pairs: leading: 0 trailing: 0
	lxi h, $0031
	push h
	lxi h, $313f
	push h
	lxi h, $3030
	push h
	push b
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $7fff
	push h
	lxi h, $ffff
	push h
	lxi h, $7f7f
	push h
	lxi h, $1c7f
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $00c0
	push h
	lxi h, $c0c0
	push h
	push b
	push b

;; layer 2 (c000)
	lxi h, $4000
	dad d
	sphl
;[         7777777        ] 0000007f00
;[  77   77777777777      ] 000031ffc0
;[  77   77777777777      ] 000031ffc0
;[  6666666666666666      ] 00003fffc0
;[  77     7777777        ] 0000307f00
;[  77     7777777        ] 0000307f00
;[           777          ] 0000001c00
;[         7777777        ] 0000007f00
; stripped pairs: leading: 0 trailing: 0
	lxi h, $0031
	push h
	lxi h, $313f
	push h
	lxi h, $3030
	push h
	push b
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $7fff
	push h
	lxi h, $ffff
	push h
	lxi h, $7f7f
	push h
	lxi h, $1c7f
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $00c0
	push h
	lxi h, $c0c0
	push h
	push b
	push b

copter_ltr2_ret:
	lxi sp, 0
	ret
copter_ltr3:
	lxi h, 0
	dad sp
	shld copter_ltr3_ret+1
	.nolist
;; layer 0 (8000)
	mov h, d
	mov l, e
	sphl
;[          7777777       ] 0000003f80
;[   77   77777777777     ] 000018ffe0
;[   77   77777777777     ] 000018ffe0
;[   6666666666666666     ] 0000000000
;[   77     7777777       ] 0000183f80
;[   77     7777777       ] 0000183f80
;[            777         ] 0000000e00
;[          7777777       ] 0000003f80
; stripped pairs: leading: 0 trailing: 0
	lxi h, $0018
	push h
	lxi h, $1800
	push h
	lxi h, $1818
	push h
	push b
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $3fff
	push h
	lxi h, $ff00
	push h
	lxi h, $3f3f
	push h
	lxi h, $0e3f
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $80e0
	push h
	lxi h, $e000
	push h
	lxi h, $8080
	push h
	lxi h, $0080
	push h

;; layer 1 (a000)
	lxi h, $2000
	dad d
	sphl
;[          7777777       ] 0000003f80
;[   77   77777777777     ] 000018ffe0
;[   77   77777777777     ] 000018ffe0
;[   6666666666666666     ] 00001fffe0
;[   77     7777777       ] 0000183f80
;[   77     7777777       ] 0000183f80
;[            777         ] 0000000e00
;[          7777777       ] 0000003f80
; stripped pairs: leading: 0 trailing: 0
	lxi h, $0018
	push h
	lxi h, $181f
	push h
	lxi h, $1818
	push h
	push b
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $3fff
	push h
	lxi h, $ffff
	push h
	lxi h, $3f3f
	push h
	lxi h, $0e3f
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $80e0
	push h
	lxi h, $e0e0
	push h
	lxi h, $8080
	push h
	lxi h, $0080
	push h

;; layer 2 (c000)
	lxi h, $4000
	dad d
	sphl
;[          7777777       ] 0000003f80
;[   77   77777777777     ] 000018ffe0
;[   77   77777777777     ] 000018ffe0
;[   6666666666666666     ] 00001fffe0
;[   77     7777777       ] 0000183f80
;[   77     7777777       ] 0000183f80
;[            777         ] 0000000e00
;[          7777777       ] 0000003f80
; stripped pairs: leading: 0 trailing: 0
	lxi h, $0018
	push h
	lxi h, $181f
	push h
	lxi h, $1818
	push h
	push b
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $3fff
	push h
	lxi h, $ffff
	push h
	lxi h, $3f3f
	push h
	lxi h, $0e3f
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $80e0
	push h
	lxi h, $e0e0
	push h
	lxi h, $8080
	push h
	lxi h, $0080
	push h

copter_ltr3_ret:
	lxi sp, 0
	ret
copter_ltr4:
	lxi h, 0
	dad sp
	shld copter_ltr4_ret+1
	.nolist
;; layer 0 (8000)
	mov h, d
	mov l, e
	sphl
;[           7777777      ] 0000001fc0
;[    77   77777777777    ] 00000c7ff0
;[    77   77777777777    ] 00000c7ff0
;[    6666666666666666    ] 0000000000
;[    77     7777777      ] 00000c1fc0
;[    77     7777777      ] 00000c1fc0
;[             777        ] 0000000700
;[           7777777      ] 0000001fc0
; stripped pairs: leading: 0 trailing: 0
	lxi h, $000c
	push h
	lxi h, $0c00
	push h
	lxi h, $0c0c
	push h
	push b
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $1f7f
	push h
	lxi h, $7f00
	push h
	lxi h, $1f1f
	push h
	lxi h, $071f
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $c0f0
	push h
	lxi h, $f000
	push h
	lxi h, $c0c0
	push h
	lxi h, $00c0
	push h

;; layer 1 (a000)
	lxi h, $2000
	dad d
	sphl
;[           7777777      ] 0000001fc0
;[    77   77777777777    ] 00000c7ff0
;[    77   77777777777    ] 00000c7ff0
;[    6666666666666666    ] 00000ffff0
;[    77     7777777      ] 00000c1fc0
;[    77     7777777      ] 00000c1fc0
;[             777        ] 0000000700
;[           7777777      ] 0000001fc0
; stripped pairs: leading: 0 trailing: 0
	lxi h, $000c
	push h
	lxi h, $0c0f
	push h
	lxi h, $0c0c
	push h
	push b
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $1f7f
	push h
	lxi h, $7fff
	push h
	lxi h, $1f1f
	push h
	lxi h, $071f
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $c0f0
	push h
	lxi h, $f0f0
	push h
	lxi h, $c0c0
	push h
	lxi h, $00c0
	push h

;; layer 2 (c000)
	lxi h, $4000
	dad d
	sphl
;[           7777777      ] 0000001fc0
;[    77   77777777777    ] 00000c7ff0
;[    77   77777777777    ] 00000c7ff0
;[    6666666666666666    ] 00000ffff0
;[    77     7777777      ] 00000c1fc0
;[    77     7777777      ] 00000c1fc0
;[             777        ] 0000000700
;[           7777777      ] 0000001fc0
; stripped pairs: leading: 0 trailing: 0
	lxi h, $000c
	push h
	lxi h, $0c0f
	push h
	lxi h, $0c0c
	push h
	push b
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $1f7f
	push h
	lxi h, $7fff
	push h
	lxi h, $1f1f
	push h
	lxi h, $071f
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $c0f0
	push h
	lxi h, $f0f0
	push h
	lxi h, $c0c0
	push h
	lxi h, $00c0
	push h

copter_ltr4_ret:
	lxi sp, 0
	ret
copter_ltr5:
	lxi h, 0
	dad sp
	shld copter_ltr5_ret+1
	.nolist
;; layer 0 (8000)
	mov h, d
	mov l, e
	sphl
;[            7777777     ] 0000000fe0
;[     77   77777777777   ] 0000063ff8
;[     77   77777777777   ] 0000063ff8
;[     6666666666666666   ] 0000000000
;[     77     7777777     ] 0000060fe0
;[     77     7777777     ] 0000060fe0
;[              777       ] 0000000380
;[            7777777     ] 0000000fe0
; stripped pairs: leading: 0 trailing: 0
	lxi h, $0006
	push h
	lxi h, $0600
	push h
	lxi h, $0606
	push h
	push b
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $0f3f
	push h
	lxi h, $3f00
	push h
	lxi h, $0f0f
	push h
	lxi h, $030f
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $e0f8
	push h
	lxi h, $f800
	push h
	lxi h, $e0e0
	push h
	lxi h, $80e0
	push h

;; layer 1 (a000)
	lxi h, $2000
	dad d
	sphl
;[            7777777     ] 0000000fe0
;[     77   77777777777   ] 0000063ff8
;[     77   77777777777   ] 0000063ff8
;[     6666666666666666   ] 000007fff8
;[     77     7777777     ] 0000060fe0
;[     77     7777777     ] 0000060fe0
;[              777       ] 0000000380
;[            7777777     ] 0000000fe0
; stripped pairs: leading: 0 trailing: 0
	lxi h, $0006
	push h
	lxi h, $0607
	push h
	lxi h, $0606
	push h
	push b
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $0f3f
	push h
	lxi h, $3fff
	push h
	lxi h, $0f0f
	push h
	lxi h, $030f
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $e0f8
	push h
	lxi h, $f8f8
	push h
	lxi h, $e0e0
	push h
	lxi h, $80e0
	push h

;; layer 2 (c000)
	lxi h, $4000
	dad d
	sphl
;[            7777777     ] 0000000fe0
;[     77   77777777777   ] 0000063ff8
;[     77   77777777777   ] 0000063ff8
;[     6666666666666666   ] 000007fff8
;[     77     7777777     ] 0000060fe0
;[     77     7777777     ] 0000060fe0
;[              777       ] 0000000380
;[            7777777     ] 0000000fe0
; stripped pairs: leading: 0 trailing: 0
	lxi h, $0006
	push h
	lxi h, $0607
	push h
	lxi h, $0606
	push h
	push b
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $0f3f
	push h
	lxi h, $3fff
	push h
	lxi h, $0f0f
	push h
	lxi h, $030f
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $e0f8
	push h
	lxi h, $f8f8
	push h
	lxi h, $e0e0
	push h
	lxi h, $80e0
	push h

copter_ltr5_ret:
	lxi sp, 0
	ret
copter_ltr6:
	lxi h, 0
	dad sp
	shld copter_ltr6_ret+1
	.nolist
;; layer 0 (8000)
	mov h, d
	mov l, e
	sphl
;[             7777777    ] 00000007f0
;[      77   77777777777  ] 0000031ffc
;[      77   77777777777  ] 0000031ffc
;[      6666666666666666  ] 0000000000
;[      77     7777777    ] 00000307f0
;[      77     7777777    ] 00000307f0
;[               777      ] 00000001c0
;[             7777777    ] 00000007f0
; stripped pairs: leading: 0 trailing: 0
	lxi h, $0003
	push h
	lxi h, $0300
	push h
	lxi h, $0303
	push h
	push b
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $071f
	push h
	lxi h, $1f00
	push h
	lxi h, $0707
	push h
	lxi h, $0107
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $f0fc
	push h
	lxi h, $fc00
	push h
	lxi h, $f0f0
	push h
	lxi h, $c0f0
	push h

;; layer 1 (a000)
	lxi h, $2000
	dad d
	sphl
;[             7777777    ] 00000007f0
;[      77   77777777777  ] 0000031ffc
;[      77   77777777777  ] 0000031ffc
;[      6666666666666666  ] 000003fffc
;[      77     7777777    ] 00000307f0
;[      77     7777777    ] 00000307f0
;[               777      ] 00000001c0
;[             7777777    ] 00000007f0
; stripped pairs: leading: 0 trailing: 0
	lxi h, $0003
	push h
	lxi h, $0303
	push h
	push h
	push b
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $071f
	push h
	lxi h, $1fff
	push h
	lxi h, $0707
	push h
	lxi h, $0107
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $f0fc
	push h
	lxi h, $fcfc
	push h
	lxi h, $f0f0
	push h
	lxi h, $c0f0
	push h

;; layer 2 (c000)
	lxi h, $4000
	dad d
	sphl
;[             7777777    ] 00000007f0
;[      77   77777777777  ] 0000031ffc
;[      77   77777777777  ] 0000031ffc
;[      6666666666666666  ] 000003fffc
;[      77     7777777    ] 00000307f0
;[      77     7777777    ] 00000307f0
;[               777      ] 00000001c0
;[             7777777    ] 00000007f0
; stripped pairs: leading: 0 trailing: 0
	lxi h, $0003
	push h
	lxi h, $0303
	push h
	push h
	push b
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $071f
	push h
	lxi h, $1fff
	push h
	lxi h, $0707
	push h
	lxi h, $0107
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $f0fc
	push h
	lxi h, $fcfc
	push h
	lxi h, $f0f0
	push h
	lxi h, $c0f0
	push h

copter_ltr6_ret:
	lxi sp, 0
	ret
copter_ltr7:
	lxi h, 0
	dad sp
	shld copter_ltr7_ret+1
	.nolist
;; layer 0 (8000)
	mov h, d
	mov l, e
	sphl
;[              7777777   ] 00000003f8
;[       77   77777777777 ] 0000018ffe
;[       77   77777777777 ] 0000018ffe
;[       6666666666666666 ] 0000000000
;[       77     7777777   ] 00000183f8
;[       77     7777777   ] 00000183f8
;[                777     ] 00000000e0
;[              7777777   ] 00000003f8
; stripped pairs: leading: 0 trailing: 0
	lxi h, $0001
	push h
	lxi h, $0100
	push h
	lxi h, $0101
	push h
	push b
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $038f
	push h
	lxi h, $8f00
	push h
	lxi h, $8383
	push h
	lxi h, $0003
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $f8fe
	push h
	lxi h, $fe00
	push h
	lxi h, $f8f8
	push h
	lxi h, $e0f8
	push h

;; layer 1 (a000)
	lxi h, $2000
	dad d
	sphl
;[              7777777   ] 00000003f8
;[       77   77777777777 ] 0000018ffe
;[       77   77777777777 ] 0000018ffe
;[       6666666666666666 ] 000001fffe
;[       77     7777777   ] 00000183f8
;[       77     7777777   ] 00000183f8
;[                777     ] 00000000e0
;[              7777777   ] 00000003f8
; stripped pairs: leading: 0 trailing: 0
	lxi h, $0001
	push h
	lxi h, $0101
	push h
	push h
	push b
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $038f
	push h
	lxi h, $8fff
	push h
	lxi h, $8383
	push h
	lxi h, $0003
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $f8fe
	push h
	lxi h, $fefe
	push h
	lxi h, $f8f8
	push h
	lxi h, $e0f8
	push h

;; layer 2 (c000)
	lxi h, $4000
	dad d
	sphl
;[              7777777   ] 00000003f8
;[       77   77777777777 ] 0000018ffe
;[       77   77777777777 ] 0000018ffe
;[       6666666666666666 ] 000001fffe
;[       77     7777777   ] 00000183f8
;[       77     7777777   ] 00000183f8
;[                777     ] 00000000e0
;[              7777777   ] 00000003f8
; stripped pairs: leading: 0 trailing: 0
	lxi h, $0001
	push h
	lxi h, $0101
	push h
	push h
	push b
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $038f
	push h
	lxi h, $8fff
	push h
	lxi h, $8383
	push h
	lxi h, $0003
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $f8fe
	push h
	lxi h, $fefe
	push h
	lxi h, $f8f8
	push h
	lxi h, $e0f8
	push h

copter_ltr7_ret:
	lxi sp, 0
	ret
;; end of sprite group copter
copter_rtl_dispatch:
	dw copter_rtl0
	dw copter_rtl1
	dw copter_rtl2
	dw copter_rtl3
	dw copter_rtl4
	dw copter_rtl5
	dw copter_rtl6
	dw copter_rtl7
copter_rtl_spritegroup:
copter_rtl0:
	lxi h, 0
	dad sp
	shld copter_rtl0_ret+1
	.nolist
;; layer 0 (8000)
	mov h, d
	mov l, e
	sphl
;[  7777777               ] 00003f8000
;[77777777777   77        ] 0000ffe300
;[77777777777   77        ] 0000ffe300
;[6666666666666666        ] 0000000000
;[  7777777     77        ] 00003f8300
;[  7777777     77        ] 00003f8300
;[    777                 ] 00000e0000
;[  7777777               ] 00003f8000
; stripped pairs: leading: 0 trailing: 0
	lxi h, $3fff
	push h
	lxi h, $ff00
	push h
	lxi h, $3f3f
	push h
	lxi h, $0e3f
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $80e3
	push h
	lxi h, $e300
	push h
	lxi h, $8383
	push h
	lxi h, $0080
	push h
	lxi h, 256+8
	dad sp
	sphl
	push b
	push b
	push b
	push b

;; layer 1 (a000)
	lxi h, $2000
	dad d
	sphl
;[  7777777               ] 00003f8000
;[77777777777   77        ] 0000ffe300
;[77777777777   77        ] 0000ffe300
;[6666666666666666        ] 0000ffff00
;[  7777777     77        ] 00003f8300
;[  7777777     77        ] 00003f8300
;[    777                 ] 00000e0000
;[  7777777               ] 00003f8000
; stripped pairs: leading: 0 trailing: 0
	lxi h, $3fff
	push h
	lxi h, $ffff
	push h
	lxi h, $3f3f
	push h
	lxi h, $0e3f
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $80e3
	push h
	lxi h, $e3ff
	push h
	lxi h, $8383
	push h
	lxi h, $0080
	push h
	lxi h, 256+8
	dad sp
	sphl
	push b
	push b
	push b
	push b

;; layer 2 (c000)
	lxi h, $4000
	dad d
	sphl
;[  7777777               ] 00003f8000
;[77777777777   77        ] 0000ffe300
;[77777777777   77        ] 0000ffe300
;[6666666666666666        ] 0000ffff00
;[  7777777     77        ] 00003f8300
;[  7777777     77        ] 00003f8300
;[    777                 ] 00000e0000
;[  7777777               ] 00003f8000
; stripped pairs: leading: 0 trailing: 0
	lxi h, $3fff
	push h
	lxi h, $ffff
	push h
	lxi h, $3f3f
	push h
	lxi h, $0e3f
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $80e3
	push h
	lxi h, $e3ff
	push h
	lxi h, $8383
	push h
	lxi h, $0080
	push h
	lxi h, 256+8
	dad sp
	sphl
	push b
	push b
	push b
	push b

copter_rtl0_ret:
	lxi sp, 0
	ret
copter_rtl1:
	lxi h, 0
	dad sp
	shld copter_rtl1_ret+1
	.nolist
;; layer 0 (8000)
	mov h, d
	mov l, e
	sphl
;[   7777777              ] 00001fc000
;[ 77777777777   77       ] 00007ff180
;[ 77777777777   77       ] 00007ff180
;[ 6666666666666666       ] 0000000000
;[   7777777     77       ] 00001fc180
;[   7777777     77       ] 00001fc180
;[     777                ] 0000070000
;[   7777777              ] 00001fc000
; stripped pairs: leading: 0 trailing: 0
	lxi h, $1f7f
	push h
	lxi h, $7f00
	push h
	lxi h, $1f1f
	push h
	lxi h, $071f
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $c0f1
	push h
	lxi h, $f100
	push h
	lxi h, $c1c1
	push h
	lxi h, $00c0
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $0080
	push h
	lxi h, $8000
	push h
	lxi h, $8080
	push h
	push b

;; layer 1 (a000)
	lxi h, $2000
	dad d
	sphl
;[   7777777              ] 00001fc000
;[ 77777777777   77       ] 00007ff180
;[ 77777777777   77       ] 00007ff180
;[ 6666666666666666       ] 00007fff80
;[   7777777     77       ] 00001fc180
;[   7777777     77       ] 00001fc180
;[     777                ] 0000070000
;[   7777777              ] 00001fc000
; stripped pairs: leading: 0 trailing: 0
	lxi h, $1f7f
	push h
	lxi h, $7f7f
	push h
	lxi h, $1f1f
	push h
	lxi h, $071f
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $c0f1
	push h
	lxi h, $f1ff
	push h
	lxi h, $c1c1
	push h
	lxi h, $00c0
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $0080
	push h
	lxi h, $8080
	push h
	push h
	push b

;; layer 2 (c000)
	lxi h, $4000
	dad d
	sphl
;[   7777777              ] 00001fc000
;[ 77777777777   77       ] 00007ff180
;[ 77777777777   77       ] 00007ff180
;[ 6666666666666666       ] 00007fff80
;[   7777777     77       ] 00001fc180
;[   7777777     77       ] 00001fc180
;[     777                ] 0000070000
;[   7777777              ] 00001fc000
; stripped pairs: leading: 0 trailing: 0
	lxi h, $1f7f
	push h
	lxi h, $7f7f
	push h
	lxi h, $1f1f
	push h
	lxi h, $071f
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $c0f1
	push h
	lxi h, $f1ff
	push h
	lxi h, $c1c1
	push h
	lxi h, $00c0
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $0080
	push h
	lxi h, $8080
	push h
	push h
	push b

copter_rtl1_ret:
	lxi sp, 0
	ret
copter_rtl2:
	lxi h, 0
	dad sp
	shld copter_rtl2_ret+1
	.nolist
;; layer 0 (8000)
	mov h, d
	mov l, e
	sphl
;[    7777777             ] 00000fe000
;[  77777777777   77      ] 00003ff8c0
;[  77777777777   77      ] 00003ff8c0
;[  6666666666666666      ] 0000000000
;[    7777777     77      ] 00000fe0c0
;[    7777777     77      ] 00000fe0c0
;[      777               ] 0000038000
;[    7777777             ] 00000fe000
; stripped pairs: leading: 0 trailing: 0
	lxi h, $0f3f
	push h
	lxi h, $3f00
	push h
	lxi h, $0f0f
	push h
	lxi h, $030f
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $e0f8
	push h
	lxi h, $f800
	push h
	lxi h, $e0e0
	push h
	lxi h, $80e0
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $00c0
	push h
	lxi h, $c000
	push h
	lxi h, $c0c0
	push h
	push b

;; layer 1 (a000)
	lxi h, $2000
	dad d
	sphl
;[    7777777             ] 00000fe000
;[  77777777777   77      ] 00003ff8c0
;[  77777777777   77      ] 00003ff8c0
;[  6666666666666666      ] 00003fffc0
;[    7777777     77      ] 00000fe0c0
;[    7777777     77      ] 00000fe0c0
;[      777               ] 0000038000
;[    7777777             ] 00000fe000
; stripped pairs: leading: 0 trailing: 0
	lxi h, $0f3f
	push h
	lxi h, $3f3f
	push h
	lxi h, $0f0f
	push h
	lxi h, $030f
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $e0f8
	push h
	lxi h, $f8ff
	push h
	lxi h, $e0e0
	push h
	lxi h, $80e0
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $00c0
	push h
	lxi h, $c0c0
	push h
	push h
	push b

;; layer 2 (c000)
	lxi h, $4000
	dad d
	sphl
;[    7777777             ] 00000fe000
;[  77777777777   77      ] 00003ff8c0
;[  77777777777   77      ] 00003ff8c0
;[  6666666666666666      ] 00003fffc0
;[    7777777     77      ] 00000fe0c0
;[    7777777     77      ] 00000fe0c0
;[      777               ] 0000038000
;[    7777777             ] 00000fe000
; stripped pairs: leading: 0 trailing: 0
	lxi h, $0f3f
	push h
	lxi h, $3f3f
	push h
	lxi h, $0f0f
	push h
	lxi h, $030f
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $e0f8
	push h
	lxi h, $f8ff
	push h
	lxi h, $e0e0
	push h
	lxi h, $80e0
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $00c0
	push h
	lxi h, $c0c0
	push h
	push h
	push b

copter_rtl2_ret:
	lxi sp, 0
	ret
copter_rtl3:
	lxi h, 0
	dad sp
	shld copter_rtl3_ret+1
	.nolist
;; layer 0 (8000)
	mov h, d
	mov l, e
	sphl
;[     7777777            ] 000007f000
;[   77777777777   77     ] 00001ffc60
;[   77777777777   77     ] 00001ffc60
;[   6666666666666666     ] 0000000000
;[     7777777     77     ] 000007f060
;[     7777777     77     ] 000007f060
;[       777              ] 000001c000
;[     7777777            ] 000007f000
; stripped pairs: leading: 0 trailing: 0
	lxi h, $071f
	push h
	lxi h, $1f00
	push h
	lxi h, $0707
	push h
	lxi h, $0107
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $f0fc
	push h
	lxi h, $fc00
	push h
	lxi h, $f0f0
	push h
	lxi h, $c0f0
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $0060
	push h
	lxi h, $6000
	push h
	lxi h, $6060
	push h
	push b

;; layer 1 (a000)
	lxi h, $2000
	dad d
	sphl
;[     7777777            ] 000007f000
;[   77777777777   77     ] 00001ffc60
;[   77777777777   77     ] 00001ffc60
;[   6666666666666666     ] 00001fffe0
;[     7777777     77     ] 000007f060
;[     7777777     77     ] 000007f060
;[       777              ] 000001c000
;[     7777777            ] 000007f000
; stripped pairs: leading: 0 trailing: 0
	lxi h, $071f
	push h
	lxi h, $1f1f
	push h
	lxi h, $0707
	push h
	lxi h, $0107
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $f0fc
	push h
	lxi h, $fcff
	push h
	lxi h, $f0f0
	push h
	lxi h, $c0f0
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $0060
	push h
	lxi h, $60e0
	push h
	lxi h, $6060
	push h
	push b

;; layer 2 (c000)
	lxi h, $4000
	dad d
	sphl
;[     7777777            ] 000007f000
;[   77777777777   77     ] 00001ffc60
;[   77777777777   77     ] 00001ffc60
;[   6666666666666666     ] 00001fffe0
;[     7777777     77     ] 000007f060
;[     7777777     77     ] 000007f060
;[       777              ] 000001c000
;[     7777777            ] 000007f000
; stripped pairs: leading: 0 trailing: 0
	lxi h, $071f
	push h
	lxi h, $1f1f
	push h
	lxi h, $0707
	push h
	lxi h, $0107
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $f0fc
	push h
	lxi h, $fcff
	push h
	lxi h, $f0f0
	push h
	lxi h, $c0f0
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $0060
	push h
	lxi h, $60e0
	push h
	lxi h, $6060
	push h
	push b

copter_rtl3_ret:
	lxi sp, 0
	ret
copter_rtl4:
	lxi h, 0
	dad sp
	shld copter_rtl4_ret+1
	.nolist
;; layer 0 (8000)
	mov h, d
	mov l, e
	sphl
;[      7777777           ] 000003f800
;[    77777777777   77    ] 00000ffe30
;[    77777777777   77    ] 00000ffe30
;[    6666666666666666    ] 0000000000
;[      7777777     77    ] 000003f830
;[      7777777     77    ] 000003f830
;[        777             ] 000000e000
;[      7777777           ] 000003f800
; stripped pairs: leading: 0 trailing: 0
	lxi h, $030f
	push h
	lxi h, $0f00
	push h
	lxi h, $0303
	push h
	lxi h, $0003
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $f8fe
	push h
	lxi h, $fe00
	push h
	lxi h, $f8f8
	push h
	lxi h, $e0f8
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $0030
	push h
	lxi h, $3000
	push h
	lxi h, $3030
	push h
	push b

;; layer 1 (a000)
	lxi h, $2000
	dad d
	sphl
;[      7777777           ] 000003f800
;[    77777777777   77    ] 00000ffe30
;[    77777777777   77    ] 00000ffe30
;[    6666666666666666    ] 00000ffff0
;[      7777777     77    ] 000003f830
;[      7777777     77    ] 000003f830
;[        777             ] 000000e000
;[      7777777           ] 000003f800
; stripped pairs: leading: 0 trailing: 0
	lxi h, $030f
	push h
	lxi h, $0f0f
	push h
	lxi h, $0303
	push h
	lxi h, $0003
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $f8fe
	push h
	lxi h, $feff
	push h
	lxi h, $f8f8
	push h
	lxi h, $e0f8
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $0030
	push h
	lxi h, $30f0
	push h
	lxi h, $3030
	push h
	push b

;; layer 2 (c000)
	lxi h, $4000
	dad d
	sphl
;[      7777777           ] 000003f800
;[    77777777777   77    ] 00000ffe30
;[    77777777777   77    ] 00000ffe30
;[    6666666666666666    ] 00000ffff0
;[      7777777     77    ] 000003f830
;[      7777777     77    ] 000003f830
;[        777             ] 000000e000
;[      7777777           ] 000003f800
; stripped pairs: leading: 0 trailing: 0
	lxi h, $030f
	push h
	lxi h, $0f0f
	push h
	lxi h, $0303
	push h
	lxi h, $0003
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $f8fe
	push h
	lxi h, $feff
	push h
	lxi h, $f8f8
	push h
	lxi h, $e0f8
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $0030
	push h
	lxi h, $30f0
	push h
	lxi h, $3030
	push h
	push b

copter_rtl4_ret:
	lxi sp, 0
	ret
copter_rtl5:
	lxi h, 0
	dad sp
	shld copter_rtl5_ret+1
	.nolist
;; layer 0 (8000)
	mov h, d
	mov l, e
	sphl
;[       7777777          ] 000001fc00
;[     77777777777   77   ] 000007ff18
;[     77777777777   77   ] 000007ff18
;[     6666666666666666   ] 0000000000
;[       7777777     77   ] 000001fc18
;[       7777777     77   ] 000001fc18
;[         777            ] 0000007000
;[       7777777          ] 000001fc00
; stripped pairs: leading: 0 trailing: 0
	lxi h, $0107
	push h
	lxi h, $0700
	push h
	lxi h, $0101
	push h
	lxi h, $0001
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $fcff
	push h
	lxi h, $ff00
	push h
	lxi h, $fcfc
	push h
	lxi h, $70fc
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $0018
	push h
	lxi h, $1800
	push h
	lxi h, $1818
	push h
	push b

;; layer 1 (a000)
	lxi h, $2000
	dad d
	sphl
;[       7777777          ] 000001fc00
;[     77777777777   77   ] 000007ff18
;[     77777777777   77   ] 000007ff18
;[     6666666666666666   ] 000007fff8
;[       7777777     77   ] 000001fc18
;[       7777777     77   ] 000001fc18
;[         777            ] 0000007000
;[       7777777          ] 000001fc00
; stripped pairs: leading: 0 trailing: 0
	lxi h, $0107
	push h
	lxi h, $0707
	push h
	lxi h, $0101
	push h
	lxi h, $0001
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $fcff
	push h
	lxi h, $ffff
	push h
	lxi h, $fcfc
	push h
	lxi h, $70fc
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $0018
	push h
	lxi h, $18f8
	push h
	lxi h, $1818
	push h
	push b

;; layer 2 (c000)
	lxi h, $4000
	dad d
	sphl
;[       7777777          ] 000001fc00
;[     77777777777   77   ] 000007ff18
;[     77777777777   77   ] 000007ff18
;[     6666666666666666   ] 000007fff8
;[       7777777     77   ] 000001fc18
;[       7777777     77   ] 000001fc18
;[         777            ] 0000007000
;[       7777777          ] 000001fc00
; stripped pairs: leading: 0 trailing: 0
	lxi h, $0107
	push h
	lxi h, $0707
	push h
	lxi h, $0101
	push h
	lxi h, $0001
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $fcff
	push h
	lxi h, $ffff
	push h
	lxi h, $fcfc
	push h
	lxi h, $70fc
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $0018
	push h
	lxi h, $18f8
	push h
	lxi h, $1818
	push h
	push b

copter_rtl5_ret:
	lxi sp, 0
	ret
copter_rtl6:
	lxi h, 0
	dad sp
	shld copter_rtl6_ret+1
	.nolist
;; layer 0 (8000)
	mov h, d
	mov l, e
	sphl
;[        7777777         ] 000000fe00
;[      77777777777   77  ] 000003ff8c
;[      77777777777   77  ] 000003ff8c
;[      6666666666666666  ] 0000000000
;[        7777777     77  ] 000000fe0c
;[        7777777     77  ] 000000fe0c
;[          777           ] 0000003800
;[        7777777         ] 000000fe00
; stripped pairs: leading: 0 trailing: 0
	lxi h, $0003
	push h
	lxi h, $0300
	push h
	push b
	push b
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $feff
	push h
	lxi h, $ff00
	push h
	lxi h, $fefe
	push h
	lxi h, $38fe
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $008c
	push h
	lxi h, $8c00
	push h
	lxi h, $0c0c
	push h
	push b

;; layer 1 (a000)
	lxi h, $2000
	dad d
	sphl
;[        7777777         ] 000000fe00
;[      77777777777   77  ] 000003ff8c
;[      77777777777   77  ] 000003ff8c
;[      6666666666666666  ] 000003fffc
;[        7777777     77  ] 000000fe0c
;[        7777777     77  ] 000000fe0c
;[          777           ] 0000003800
;[        7777777         ] 000000fe00
; stripped pairs: leading: 0 trailing: 0
	lxi h, $0003
	push h
	lxi h, $0303
	push h
	push b
	push b
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $feff
	push h
	lxi h, $ffff
	push h
	lxi h, $fefe
	push h
	lxi h, $38fe
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $008c
	push h
	lxi h, $8cfc
	push h
	lxi h, $0c0c
	push h
	push b

;; layer 2 (c000)
	lxi h, $4000
	dad d
	sphl
;[        7777777         ] 000000fe00
;[      77777777777   77  ] 000003ff8c
;[      77777777777   77  ] 000003ff8c
;[      6666666666666666  ] 000003fffc
;[        7777777     77  ] 000000fe0c
;[        7777777     77  ] 000000fe0c
;[          777           ] 0000003800
;[        7777777         ] 000000fe00
; stripped pairs: leading: 0 trailing: 0
	lxi h, $0003
	push h
	lxi h, $0303
	push h
	push b
	push b
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $feff
	push h
	lxi h, $ffff
	push h
	lxi h, $fefe
	push h
	lxi h, $38fe
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $008c
	push h
	lxi h, $8cfc
	push h
	lxi h, $0c0c
	push h
	push b

copter_rtl6_ret:
	lxi sp, 0
	ret
copter_rtl7:
	lxi h, 0
	dad sp
	shld copter_rtl7_ret+1
	.nolist
;; layer 0 (8000)
	mov h, d
	mov l, e
	sphl
;[         7777777        ] 0000007f00
;[       77777777777   77 ] 000001ffc6
;[       77777777777   77 ] 000001ffc6
;[       6666666666666666 ] 0000000000
;[         7777777     77 ] 0000007f06
;[         7777777     77 ] 0000007f06
;[           777          ] 0000001c00
;[         7777777        ] 0000007f00
; stripped pairs: leading: 0 trailing: 0
	lxi h, $0001
	push h
	lxi h, $0100
	push h
	push b
	push b
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $7fff
	push h
	lxi h, $ff00
	push h
	lxi h, $7f7f
	push h
	lxi h, $1c7f
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $00c6
	push h
	lxi h, $c600
	push h
	lxi h, $0606
	push h
	push b

;; layer 1 (a000)
	lxi h, $2000
	dad d
	sphl
;[         7777777        ] 0000007f00
;[       77777777777   77 ] 000001ffc6
;[       77777777777   77 ] 000001ffc6
;[       6666666666666666 ] 000001fffe
;[         7777777     77 ] 0000007f06
;[         7777777     77 ] 0000007f06
;[           777          ] 0000001c00
;[         7777777        ] 0000007f00
; stripped pairs: leading: 0 trailing: 0
	lxi h, $0001
	push h
	lxi h, $0101
	push h
	push b
	push b
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $7fff
	push h
	lxi h, $ffff
	push h
	lxi h, $7f7f
	push h
	lxi h, $1c7f
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $00c6
	push h
	lxi h, $c6fe
	push h
	lxi h, $0606
	push h
	push b

;; layer 2 (c000)
	lxi h, $4000
	dad d
	sphl
;[         7777777        ] 0000007f00
;[       77777777777   77 ] 000001ffc6
;[       77777777777   77 ] 000001ffc6
;[       6666666666666666 ] 000001fffe
;[         7777777     77 ] 0000007f06
;[         7777777     77 ] 0000007f06
;[           777          ] 0000001c00
;[         7777777        ] 0000007f00
; stripped pairs: leading: 0 trailing: 0
	lxi h, $0001
	push h
	lxi h, $0101
	push h
	push b
	push b
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $7fff
	push h
	lxi h, $ffff
	push h
	lxi h, $7f7f
	push h
	lxi h, $1c7f
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $00c6
	push h
	lxi h, $c6fe
	push h
	lxi h, $0606
	push h
	push b

copter_rtl7_ret:
	lxi sp, 0
	ret
;; end of sprite group copter
redcopter_ltr_dispatch:
	dw redcopter_ltr_inf
	dw redcopter_ltr0
	dw redcopter_ltr1
	dw redcopter_ltr2
	dw redcopter_ltr3
	dw redcopter_ltr4
	dw redcopter_ltr5
	dw redcopter_ltr6
	dw redcopter_ltr7
redcopter_ltr_spritegroup:
redcopter_ltr_inf:
	lxi h, 0
	dad sp
	shld redcopter_ltr_inf_ret+1
	.nolist
;; layer 0 (8000)
	mov h, d
	mov l, e
	sphl
;[               2222222  ] 0000000000
;[        22   22222222222] 0000000000
;[        22   22222222222] 0000000000
;[        3333333333333333] 000000ffff
;[        22     2222222  ] 0000000000
;[        22     2222222  ] 0000000000
;[                 222    ] 0000000000
;[               2222222  ] 0000000000
; stripped pairs: leading: 1 trailing: 2
	push b
	push b
	lxi h, 256+2
	dad sp
	sphl
	lxi h, $00ff
	push h
	lxi h, 256+2
	dad sp
	sphl
	lxi h, $00ff
	push h

;; layer 1 (a000)
	lxi h, $2000
	dad d
	sphl
;[               2222222  ] 00000001fc
;[        22   22222222222] 000000c7ff
;[        22   22222222222] 000000c7ff
;[        3333333333333333] 000000ffff
;[        22     2222222  ] 000000c1fc
;[        22     2222222  ] 000000c1fc
;[                 222    ] 0000000070
;[               2222222  ] 00000001fc
; stripped pairs: leading: 0 trailing: 0
	push b
	push b
	push b
	push b
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $01c7
	push h
	lxi h, $c7ff
	push h
	lxi h, $c1c1
	push h
	lxi h, $0001
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $fcff
	push h
	lxi h, $ffff
	push h
	lxi h, $fcfc
	push h
	lxi h, $70fc
	push h

redcopter_ltr_inf_ret:
	lxi sp, 0
	ret
redcopter_ltr0:
	lxi h, 0
	dad sp
	shld redcopter_ltr0_ret+1
	.nolist
;; layer 0 (8000)
	mov h, d
	mov l, e
	sphl
;[       2222222  ] 0000000000
;[22   22222222222] 0000000000
;[22   22222222222] 0000000000
;[3333333333333333] 000000ffff
;[22     2222222  ] 0000000000
;[22     2222222  ] 0000000000
;[         222    ] 0000000000
;[       2222222  ] 0000000000
; stripped pairs: leading: 1 trailing: 2
	push b
	lxi h, $00ff
	push h
	lxi h, 256+2
	dad sp
	sphl
	lxi h, $00ff
	push h

;; layer 1 (a000)
	lxi h, $2000
	dad d
	sphl
;[       2222222  ] 00000001fc
;[22   22222222222] 000000c7ff
;[22   22222222222] 000000c7ff
;[3333333333333333] 000000ffff
;[22     2222222  ] 000000c1fc
;[22     2222222  ] 000000c1fc
;[         222    ] 0000000070
;[       2222222  ] 00000001fc
; stripped pairs: leading: 0 trailing: 0
	lxi h, $01c7
	push h
	lxi h, $c7ff
	push h
	lxi h, $c1c1
	push h
	lxi h, $0001
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $fcff
	push h
	lxi h, $ffff
	push h
	lxi h, $fcfc
	push h
	lxi h, $70fc
	push h

redcopter_ltr0_ret:
	lxi sp, 0
	ret
redcopter_ltr1:
	lxi h, 0
	dad sp
	shld redcopter_ltr1_ret+1
	.nolist
;; layer 0 (8000)
	mov h, d
	mov l, e
	sphl
;[        2222222         ] 0000000000
;[ 22   22222222222       ] 0000000000
;[ 22   22222222222       ] 0000000000
;[ 3333333333333333       ] 00007fff80
;[ 22     2222222         ] 0000000000
;[ 22     2222222         ] 0000000000
;[          222           ] 0000000000
;[        2222222         ] 0000000000
; stripped pairs: leading: 1 trailing: 2
	push b
	lxi h, $007f
	push h
	lxi h, 256+2
	dad sp
	sphl
	lxi h, $00ff
	push h
	lxi h, 256+2
	dad sp
	sphl
	lxi h, $0080
	push h

;; layer 1 (a000)
	lxi h, $2000
	dad d
	sphl
;[        2222222         ] 000000fe00
;[ 22   22222222222       ] 000063ff80
;[ 22   22222222222       ] 000063ff80
;[ 3333333333333333       ] 00007fff80
;[ 22     2222222         ] 000060fe00
;[ 22     2222222         ] 000060fe00
;[          222           ] 0000003800
;[        2222222         ] 000000fe00
; stripped pairs: leading: 0 trailing: 0
	lxi h, $0063
	push h
	lxi h, $637f
	push h
	lxi h, $6060
	push h
	push b
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $feff
	push h
	lxi h, $ffff
	push h
	lxi h, $fefe
	push h
	lxi h, $38fe
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $0080
	push h
	lxi h, $8080
	push h
	push b
	push b

redcopter_ltr1_ret:
	lxi sp, 0
	ret
redcopter_ltr2:
	lxi h, 0
	dad sp
	shld redcopter_ltr2_ret+1
	.nolist
;; layer 0 (8000)
	mov h, d
	mov l, e
	sphl
;[         2222222        ] 0000000000
;[  22   22222222222      ] 0000000000
;[  22   22222222222      ] 0000000000
;[  3333333333333333      ] 00003fffc0
;[  22     2222222        ] 0000000000
;[  22     2222222        ] 0000000000
;[           222          ] 0000000000
;[         2222222        ] 0000000000
; stripped pairs: leading: 1 trailing: 2
	push b
	lxi h, $003f
	push h
	lxi h, 256+2
	dad sp
	sphl
	lxi h, $00ff
	push h
	lxi h, 256+2
	dad sp
	sphl
	lxi h, $00c0
	push h

;; layer 1 (a000)
	lxi h, $2000
	dad d
	sphl
;[         2222222        ] 0000007f00
;[  22   22222222222      ] 000031ffc0
;[  22   22222222222      ] 000031ffc0
;[  3333333333333333      ] 00003fffc0
;[  22     2222222        ] 0000307f00
;[  22     2222222        ] 0000307f00
;[           222          ] 0000001c00
;[         2222222        ] 0000007f00
; stripped pairs: leading: 0 trailing: 0
	lxi h, $0031
	push h
	lxi h, $313f
	push h
	lxi h, $3030
	push h
	push b
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $7fff
	push h
	lxi h, $ffff
	push h
	lxi h, $7f7f
	push h
	lxi h, $1c7f
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $00c0
	push h
	lxi h, $c0c0
	push h
	push b
	push b

redcopter_ltr2_ret:
	lxi sp, 0
	ret
redcopter_ltr3:
	lxi h, 0
	dad sp
	shld redcopter_ltr3_ret+1
	.nolist
;; layer 0 (8000)
	mov h, d
	mov l, e
	sphl
;[          2222222       ] 0000000000
;[   22   22222222222     ] 0000000000
;[   22   22222222222     ] 0000000000
;[   3333333333333333     ] 00001fffe0
;[   22     2222222       ] 0000000000
;[   22     2222222       ] 0000000000
;[            222         ] 0000000000
;[          2222222       ] 0000000000
; stripped pairs: leading: 1 trailing: 2
	push b
	lxi h, $001f
	push h
	lxi h, 256+2
	dad sp
	sphl
	lxi h, $00ff
	push h
	lxi h, 256+2
	dad sp
	sphl
	lxi h, $00e0
	push h

;; layer 1 (a000)
	lxi h, $2000
	dad d
	sphl
;[          2222222       ] 0000003f80
;[   22   22222222222     ] 000018ffe0
;[   22   22222222222     ] 000018ffe0
;[   3333333333333333     ] 00001fffe0
;[   22     2222222       ] 0000183f80
;[   22     2222222       ] 0000183f80
;[            222         ] 0000000e00
;[          2222222       ] 0000003f80
; stripped pairs: leading: 0 trailing: 0
	lxi h, $0018
	push h
	lxi h, $181f
	push h
	lxi h, $1818
	push h
	push b
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $3fff
	push h
	lxi h, $ffff
	push h
	lxi h, $3f3f
	push h
	lxi h, $0e3f
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $80e0
	push h
	lxi h, $e0e0
	push h
	lxi h, $8080
	push h
	lxi h, $0080
	push h

redcopter_ltr3_ret:
	lxi sp, 0
	ret
redcopter_ltr4:
	lxi h, 0
	dad sp
	shld redcopter_ltr4_ret+1
	.nolist
;; layer 0 (8000)
	mov h, d
	mov l, e
	sphl
;[           2222222      ] 0000000000
;[    22   22222222222    ] 0000000000
;[    22   22222222222    ] 0000000000
;[    3333333333333333    ] 00000ffff0
;[    22     2222222      ] 0000000000
;[    22     2222222      ] 0000000000
;[             222        ] 0000000000
;[           2222222      ] 0000000000
; stripped pairs: leading: 1 trailing: 2
	push b
	lxi h, $000f
	push h
	lxi h, 256+2
	dad sp
	sphl
	lxi h, $00ff
	push h
	lxi h, 256+2
	dad sp
	sphl
	lxi h, $00f0
	push h

;; layer 1 (a000)
	lxi h, $2000
	dad d
	sphl
;[           2222222      ] 0000001fc0
;[    22   22222222222    ] 00000c7ff0
;[    22   22222222222    ] 00000c7ff0
;[    3333333333333333    ] 00000ffff0
;[    22     2222222      ] 00000c1fc0
;[    22     2222222      ] 00000c1fc0
;[             222        ] 0000000700
;[           2222222      ] 0000001fc0
; stripped pairs: leading: 0 trailing: 0
	lxi h, $000c
	push h
	lxi h, $0c0f
	push h
	lxi h, $0c0c
	push h
	push b
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $1f7f
	push h
	lxi h, $7fff
	push h
	lxi h, $1f1f
	push h
	lxi h, $071f
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $c0f0
	push h
	lxi h, $f0f0
	push h
	lxi h, $c0c0
	push h
	lxi h, $00c0
	push h

redcopter_ltr4_ret:
	lxi sp, 0
	ret
redcopter_ltr5:
	lxi h, 0
	dad sp
	shld redcopter_ltr5_ret+1
	.nolist
;; layer 0 (8000)
	mov h, d
	mov l, e
	sphl
;[            2222222     ] 0000000000
;[     22   22222222222   ] 0000000000
;[     22   22222222222   ] 0000000000
;[     3333333333333333   ] 000007fff8
;[     22     2222222     ] 0000000000
;[     22     2222222     ] 0000000000
;[              222       ] 0000000000
;[            2222222     ] 0000000000
; stripped pairs: leading: 1 trailing: 2
	push b
	lxi h, $0007
	push h
	lxi h, 256+2
	dad sp
	sphl
	lxi h, $00ff
	push h
	lxi h, 256+2
	dad sp
	sphl
	lxi h, $00f8
	push h

;; layer 1 (a000)
	lxi h, $2000
	dad d
	sphl
;[            2222222     ] 0000000fe0
;[     22   22222222222   ] 0000063ff8
;[     22   22222222222   ] 0000063ff8
;[     3333333333333333   ] 000007fff8
;[     22     2222222     ] 0000060fe0
;[     22     2222222     ] 0000060fe0
;[              222       ] 0000000380
;[            2222222     ] 0000000fe0
; stripped pairs: leading: 0 trailing: 0
	lxi h, $0006
	push h
	lxi h, $0607
	push h
	lxi h, $0606
	push h
	push b
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $0f3f
	push h
	lxi h, $3fff
	push h
	lxi h, $0f0f
	push h
	lxi h, $030f
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $e0f8
	push h
	lxi h, $f8f8
	push h
	lxi h, $e0e0
	push h
	lxi h, $80e0
	push h

redcopter_ltr5_ret:
	lxi sp, 0
	ret
redcopter_ltr6:
	lxi h, 0
	dad sp
	shld redcopter_ltr6_ret+1
	.nolist
;; layer 0 (8000)
	mov h, d
	mov l, e
	sphl
;[             2222222    ] 0000000000
;[      22   22222222222  ] 0000000000
;[      22   22222222222  ] 0000000000
;[      3333333333333333  ] 000003fffc
;[      22     2222222    ] 0000000000
;[      22     2222222    ] 0000000000
;[               222      ] 0000000000
;[             2222222    ] 0000000000
; stripped pairs: leading: 1 trailing: 2
	push b
	lxi h, $0003
	push h
	lxi h, 256+2
	dad sp
	sphl
	lxi h, $00ff
	push h
	lxi h, 256+2
	dad sp
	sphl
	lxi h, $00fc
	push h

;; layer 1 (a000)
	lxi h, $2000
	dad d
	sphl
;[             2222222    ] 00000007f0
;[      22   22222222222  ] 0000031ffc
;[      22   22222222222  ] 0000031ffc
;[      3333333333333333  ] 000003fffc
;[      22     2222222    ] 00000307f0
;[      22     2222222    ] 00000307f0
;[               222      ] 00000001c0
;[             2222222    ] 00000007f0
; stripped pairs: leading: 0 trailing: 0
	lxi h, $0003
	push h
	lxi h, $0303
	push h
	push h
	push b
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $071f
	push h
	lxi h, $1fff
	push h
	lxi h, $0707
	push h
	lxi h, $0107
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $f0fc
	push h
	lxi h, $fcfc
	push h
	lxi h, $f0f0
	push h
	lxi h, $c0f0
	push h

redcopter_ltr6_ret:
	lxi sp, 0
	ret
redcopter_ltr7:
	lxi h, 0
	dad sp
	shld redcopter_ltr7_ret+1
	.nolist
;; layer 0 (8000)
	mov h, d
	mov l, e
	sphl
;[              2222222   ] 0000000000
;[       22   22222222222 ] 0000000000
;[       22   22222222222 ] 0000000000
;[       3333333333333333 ] 000001fffe
;[       22     2222222   ] 0000000000
;[       22     2222222   ] 0000000000
;[                222     ] 0000000000
;[              2222222   ] 0000000000
; stripped pairs: leading: 1 trailing: 2
	push b
	lxi h, $0001
	push h
	lxi h, 256+2
	dad sp
	sphl
	lxi h, $00ff
	push h
	lxi h, 256+2
	dad sp
	sphl
	lxi h, $00fe
	push h

;; layer 1 (a000)
	lxi h, $2000
	dad d
	sphl
;[              2222222   ] 00000003f8
;[       22   22222222222 ] 0000018ffe
;[       22   22222222222 ] 0000018ffe
;[       3333333333333333 ] 000001fffe
;[       22     2222222   ] 00000183f8
;[       22     2222222   ] 00000183f8
;[                222     ] 00000000e0
;[              2222222   ] 00000003f8
; stripped pairs: leading: 0 trailing: 0
	lxi h, $0001
	push h
	lxi h, $0101
	push h
	push h
	push b
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $038f
	push h
	lxi h, $8fff
	push h
	lxi h, $8383
	push h
	lxi h, $0003
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $f8fe
	push h
	lxi h, $fefe
	push h
	lxi h, $f8f8
	push h
	lxi h, $e0f8
	push h

redcopter_ltr7_ret:
	lxi sp, 0
	ret
;; end of sprite group redcopter
redcopter_rtl_dispatch:
	dw redcopter_rtl0
	dw redcopter_rtl1
	dw redcopter_rtl2
	dw redcopter_rtl3
	dw redcopter_rtl4
	dw redcopter_rtl5
	dw redcopter_rtl6
	dw redcopter_rtl7
redcopter_rtl_spritegroup:
redcopter_rtl0:
	lxi h, 0
	dad sp
	shld redcopter_rtl0_ret+1
	.nolist
;; layer 0 (8000)
	mov h, d
	mov l, e
	sphl
;[  2222222               ] 0000000000
;[22222222222   22        ] 0000000000
;[22222222222   22        ] 0000000000
;[3333333333333333        ] 0000ffff00
;[  2222222     22        ] 0000000000
;[  2222222     22        ] 0000000000
;[    222                 ] 0000000000
;[  2222222               ] 0000000000
; stripped pairs: leading: 1 trailing: 2
	push b
	lxi h, $00ff
	push h
	lxi h, 256+2
	dad sp
	sphl
	lxi h, $00ff
	push h
	lxi h, 256+2
	dad sp
	sphl
	push b

;; layer 1 (a000)
	lxi h, $2000
	dad d
	sphl
;[  2222222               ] 00003f8000
;[22222222222   22        ] 0000ffe300
;[22222222222   22        ] 0000ffe300
;[3333333333333333        ] 0000ffff00
;[  2222222     22        ] 00003f8300
;[  2222222     22        ] 00003f8300
;[    222                 ] 00000e0000
;[  2222222               ] 00003f8000
; stripped pairs: leading: 0 trailing: 0
	lxi h, $3fff
	push h
	lxi h, $ffff
	push h
	lxi h, $3f3f
	push h
	lxi h, $0e3f
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $80e3
	push h
	lxi h, $e3ff
	push h
	lxi h, $8383
	push h
	lxi h, $0080
	push h
	lxi h, 256+8
	dad sp
	sphl
	push b
	push b
	push b
	push b

redcopter_rtl0_ret:
	lxi sp, 0
	ret
redcopter_rtl1:
	lxi h, 0
	dad sp
	shld redcopter_rtl1_ret+1
	.nolist
;; layer 0 (8000)
	mov h, d
	mov l, e
	sphl
;[   2222222              ] 0000000000
;[ 22222222222   22       ] 0000000000
;[ 22222222222   22       ] 0000000000
;[ 3333333333333333       ] 00007fff80
;[   2222222     22       ] 0000000000
;[   2222222     22       ] 0000000000
;[     222                ] 0000000000
;[   2222222              ] 0000000000
; stripped pairs: leading: 1 trailing: 2
	push b
	lxi h, $007f
	push h
	lxi h, 256+2
	dad sp
	sphl
	lxi h, $00ff
	push h
	lxi h, 256+2
	dad sp
	sphl
	lxi h, $0080
	push h

;; layer 1 (a000)
	lxi h, $2000
	dad d
	sphl
;[   2222222              ] 00001fc000
;[ 22222222222   22       ] 00007ff180
;[ 22222222222   22       ] 00007ff180
;[ 3333333333333333       ] 00007fff80
;[   2222222     22       ] 00001fc180
;[   2222222     22       ] 00001fc180
;[     222                ] 0000070000
;[   2222222              ] 00001fc000
; stripped pairs: leading: 0 trailing: 0
	lxi h, $1f7f
	push h
	lxi h, $7f7f
	push h
	lxi h, $1f1f
	push h
	lxi h, $071f
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $c0f1
	push h
	lxi h, $f1ff
	push h
	lxi h, $c1c1
	push h
	lxi h, $00c0
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $0080
	push h
	lxi h, $8080
	push h
	push h
	push b

redcopter_rtl1_ret:
	lxi sp, 0
	ret
redcopter_rtl2:
	lxi h, 0
	dad sp
	shld redcopter_rtl2_ret+1
	.nolist
;; layer 0 (8000)
	mov h, d
	mov l, e
	sphl
;[    2222222             ] 0000000000
;[  22222222222   22      ] 0000000000
;[  22222222222   22      ] 0000000000
;[  3333333333333333      ] 00003fffc0
;[    2222222     22      ] 0000000000
;[    2222222     22      ] 0000000000
;[      222               ] 0000000000
;[    2222222             ] 0000000000
; stripped pairs: leading: 1 trailing: 2
	push b
	lxi h, $003f
	push h
	lxi h, 256+2
	dad sp
	sphl
	lxi h, $00ff
	push h
	lxi h, 256+2
	dad sp
	sphl
	lxi h, $00c0
	push h

;; layer 1 (a000)
	lxi h, $2000
	dad d
	sphl
;[    2222222             ] 00000fe000
;[  22222222222   22      ] 00003ff8c0
;[  22222222222   22      ] 00003ff8c0
;[  3333333333333333      ] 00003fffc0
;[    2222222     22      ] 00000fe0c0
;[    2222222     22      ] 00000fe0c0
;[      222               ] 0000038000
;[    2222222             ] 00000fe000
; stripped pairs: leading: 0 trailing: 0
	lxi h, $0f3f
	push h
	lxi h, $3f3f
	push h
	lxi h, $0f0f
	push h
	lxi h, $030f
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $e0f8
	push h
	lxi h, $f8ff
	push h
	lxi h, $e0e0
	push h
	lxi h, $80e0
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $00c0
	push h
	lxi h, $c0c0
	push h
	push h
	push b

redcopter_rtl2_ret:
	lxi sp, 0
	ret
redcopter_rtl3:
	lxi h, 0
	dad sp
	shld redcopter_rtl3_ret+1
	.nolist
;; layer 0 (8000)
	mov h, d
	mov l, e
	sphl
;[     2222222            ] 0000000000
;[   22222222222   22     ] 0000000000
;[   22222222222   22     ] 0000000000
;[   3333333333333333     ] 00001fffe0
;[     2222222     22     ] 0000000000
;[     2222222     22     ] 0000000000
;[       222              ] 0000000000
;[     2222222            ] 0000000000
; stripped pairs: leading: 1 trailing: 2
	push b
	lxi h, $001f
	push h
	lxi h, 256+2
	dad sp
	sphl
	lxi h, $00ff
	push h
	lxi h, 256+2
	dad sp
	sphl
	lxi h, $00e0
	push h

;; layer 1 (a000)
	lxi h, $2000
	dad d
	sphl
;[     2222222            ] 000007f000
;[   22222222222   22     ] 00001ffc60
;[   22222222222   22     ] 00001ffc60
;[   3333333333333333     ] 00001fffe0
;[     2222222     22     ] 000007f060
;[     2222222     22     ] 000007f060
;[       222              ] 000001c000
;[     2222222            ] 000007f000
; stripped pairs: leading: 0 trailing: 0
	lxi h, $071f
	push h
	lxi h, $1f1f
	push h
	lxi h, $0707
	push h
	lxi h, $0107
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $f0fc
	push h
	lxi h, $fcff
	push h
	lxi h, $f0f0
	push h
	lxi h, $c0f0
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $0060
	push h
	lxi h, $60e0
	push h
	lxi h, $6060
	push h
	push b

redcopter_rtl3_ret:
	lxi sp, 0
	ret
redcopter_rtl4:
	lxi h, 0
	dad sp
	shld redcopter_rtl4_ret+1
	.nolist
;; layer 0 (8000)
	mov h, d
	mov l, e
	sphl
;[      2222222           ] 0000000000
;[    22222222222   22    ] 0000000000
;[    22222222222   22    ] 0000000000
;[    3333333333333333    ] 00000ffff0
;[      2222222     22    ] 0000000000
;[      2222222     22    ] 0000000000
;[        222             ] 0000000000
;[      2222222           ] 0000000000
; stripped pairs: leading: 1 trailing: 2
	push b
	lxi h, $000f
	push h
	lxi h, 256+2
	dad sp
	sphl
	lxi h, $00ff
	push h
	lxi h, 256+2
	dad sp
	sphl
	lxi h, $00f0
	push h

;; layer 1 (a000)
	lxi h, $2000
	dad d
	sphl
;[      2222222           ] 000003f800
;[    22222222222   22    ] 00000ffe30
;[    22222222222   22    ] 00000ffe30
;[    3333333333333333    ] 00000ffff0
;[      2222222     22    ] 000003f830
;[      2222222     22    ] 000003f830
;[        222             ] 000000e000
;[      2222222           ] 000003f800
; stripped pairs: leading: 0 trailing: 0
	lxi h, $030f
	push h
	lxi h, $0f0f
	push h
	lxi h, $0303
	push h
	lxi h, $0003
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $f8fe
	push h
	lxi h, $feff
	push h
	lxi h, $f8f8
	push h
	lxi h, $e0f8
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $0030
	push h
	lxi h, $30f0
	push h
	lxi h, $3030
	push h
	push b

redcopter_rtl4_ret:
	lxi sp, 0
	ret
redcopter_rtl5:
	lxi h, 0
	dad sp
	shld redcopter_rtl5_ret+1
	.nolist
;; layer 0 (8000)
	mov h, d
	mov l, e
	sphl
;[       2222222          ] 0000000000
;[     22222222222   22   ] 0000000000
;[     22222222222   22   ] 0000000000
;[     3333333333333333   ] 000007fff8
;[       2222222     22   ] 0000000000
;[       2222222     22   ] 0000000000
;[         222            ] 0000000000
;[       2222222          ] 0000000000
; stripped pairs: leading: 1 trailing: 2
	push b
	lxi h, $0007
	push h
	lxi h, 256+2
	dad sp
	sphl
	lxi h, $00ff
	push h
	lxi h, 256+2
	dad sp
	sphl
	lxi h, $00f8
	push h

;; layer 1 (a000)
	lxi h, $2000
	dad d
	sphl
;[       2222222          ] 000001fc00
;[     22222222222   22   ] 000007ff18
;[     22222222222   22   ] 000007ff18
;[     3333333333333333   ] 000007fff8
;[       2222222     22   ] 000001fc18
;[       2222222     22   ] 000001fc18
;[         222            ] 0000007000
;[       2222222          ] 000001fc00
; stripped pairs: leading: 0 trailing: 0
	lxi h, $0107
	push h
	lxi h, $0707
	push h
	lxi h, $0101
	push h
	lxi h, $0001
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $fcff
	push h
	lxi h, $ffff
	push h
	lxi h, $fcfc
	push h
	lxi h, $70fc
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $0018
	push h
	lxi h, $18f8
	push h
	lxi h, $1818
	push h
	push b

redcopter_rtl5_ret:
	lxi sp, 0
	ret
redcopter_rtl6:
	lxi h, 0
	dad sp
	shld redcopter_rtl6_ret+1
	.nolist
;; layer 0 (8000)
	mov h, d
	mov l, e
	sphl
;[        2222222         ] 0000000000
;[      22222222222   22  ] 0000000000
;[      22222222222   22  ] 0000000000
;[      3333333333333333  ] 000003fffc
;[        2222222     22  ] 0000000000
;[        2222222     22  ] 0000000000
;[          222           ] 0000000000
;[        2222222         ] 0000000000
; stripped pairs: leading: 1 trailing: 2
	push b
	lxi h, $0003
	push h
	lxi h, 256+2
	dad sp
	sphl
	lxi h, $00ff
	push h
	lxi h, 256+2
	dad sp
	sphl
	lxi h, $00fc
	push h

;; layer 1 (a000)
	lxi h, $2000
	dad d
	sphl
;[        2222222         ] 000000fe00
;[      22222222222   22  ] 000003ff8c
;[      22222222222   22  ] 000003ff8c
;[      3333333333333333  ] 000003fffc
;[        2222222     22  ] 000000fe0c
;[        2222222     22  ] 000000fe0c
;[          222           ] 0000003800
;[        2222222         ] 000000fe00
; stripped pairs: leading: 0 trailing: 0
	lxi h, $0003
	push h
	lxi h, $0303
	push h
	push b
	push b
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $feff
	push h
	lxi h, $ffff
	push h
	lxi h, $fefe
	push h
	lxi h, $38fe
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $008c
	push h
	lxi h, $8cfc
	push h
	lxi h, $0c0c
	push h
	push b

redcopter_rtl6_ret:
	lxi sp, 0
	ret
redcopter_rtl7:
	lxi h, 0
	dad sp
	shld redcopter_rtl7_ret+1
	.nolist
;; layer 0 (8000)
	mov h, d
	mov l, e
	sphl
;[         2222222        ] 0000000000
;[       22222222222   22 ] 0000000000
;[       22222222222   22 ] 0000000000
;[       3333333333333333 ] 000001fffe
;[         2222222     22 ] 0000000000
;[         2222222     22 ] 0000000000
;[           222          ] 0000000000
;[         2222222        ] 0000000000
; stripped pairs: leading: 1 trailing: 2
	push b
	lxi h, $0001
	push h
	lxi h, 256+2
	dad sp
	sphl
	lxi h, $00ff
	push h
	lxi h, 256+2
	dad sp
	sphl
	lxi h, $00fe
	push h

;; layer 1 (a000)
	lxi h, $2000
	dad d
	sphl
;[         2222222        ] 0000007f00
;[       22222222222   22 ] 000001ffc6
;[       22222222222   22 ] 000001ffc6
;[       3333333333333333 ] 000001fffe
;[         2222222     22 ] 0000007f06
;[         2222222     22 ] 0000007f06
;[           222          ] 0000001c00
;[         2222222        ] 0000007f00
; stripped pairs: leading: 0 trailing: 0
	lxi h, $0001
	push h
	lxi h, $0101
	push h
	push b
	push b
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $7fff
	push h
	lxi h, $ffff
	push h
	lxi h, $7f7f
	push h
	lxi h, $1c7f
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $00c6
	push h
	lxi h, $c6fe
	push h
	lxi h, $0606
	push h
	push b

redcopter_rtl7_ret:
	lxi sp, 0
	ret
;; end of sprite group redcopter
propellerA_ltr_dispatch:
	dw propellerA_ltr_inf
	dw propellerA_ltr0
	dw propellerA_ltr1
	dw propellerA_ltr2
	dw propellerA_ltr3
	dw propellerA_ltr4
	dw propellerA_ltr5
	dw propellerA_ltr6
	dw propellerA_ltr7
propellerA_ltr_spritegroup:
propellerA_ltr_inf:
	lxi h, 0
	dad sp
	shld propellerA_ltr_inf_ret+1
	.nolist
	xchg
	lxi d, $4000
	dad d
	sphl
;; white
;[             444444     ] 00000007e0
;[                 4444444] 000000007f
;[                 4444444] 000000007f
;[                 444    ] 0000000070
; stripped pairs: leading: 0 trailing: 0
	push b
	push b
	lxi h, 256+4
	dad sp
	sphl
	lxi h, $0700
	push h
	push b
	lxi h, 256+4
	dad sp
	sphl
	lxi h, $e07f
	push h
	lxi h, $7f70
	push h

propellerA_ltr_inf_ret:
	lxi sp, 0
	ret
propellerA_ltr0:
	lxi h, 0
	dad sp
	shld propellerA_ltr0_ret+1
	.nolist
	xchg
	lxi d, $4000
	dad d
	sphl
;; white
;[     444444     ] 00000007e0
;[         4444444] 000000007f
;[         4444444] 000000007f
;[         444    ] 0000000070
; stripped pairs: leading: 0 trailing: 0
	lxi h, $0700
	push h
	push b
	lxi h, 256+4
	dad sp
	sphl
	lxi h, $e07f
	push h
	lxi h, $7f70
	push h

propellerA_ltr0_ret:
	lxi sp, 0
	ret
propellerA_ltr1:
	lxi h, 0
	dad sp
	shld propellerA_ltr1_ret+1
	.nolist
	xchg
	lxi d, $4000
	dad d
	sphl
;; white
;[      444444            ] 000003f000
;[          4444444       ] 0000003f80
;[          4444444       ] 0000003f80
;[          444           ] 0000003800
; stripped pairs: leading: 0 trailing: 0
	lxi h, $0300
	push h
	push b
	lxi h, 256+4
	dad sp
	sphl
	lxi h, $f03f
	push h
	lxi h, $3f38
	push h
	lxi h, 256+4
	dad sp
	sphl
	lxi h, $0080
	push h
	lxi h, $8000
	push h

propellerA_ltr1_ret:
	lxi sp, 0
	ret
propellerA_ltr2:
	lxi h, 0
	dad sp
	shld propellerA_ltr2_ret+1
	.nolist
	xchg
	lxi d, $4000
	dad d
	sphl
;; white
;[       444444           ] 000001f800
;[           4444444      ] 0000001fc0
;[           4444444      ] 0000001fc0
;[           444          ] 0000001c00
; stripped pairs: leading: 0 trailing: 0
	lxi h, $0100
	push h
	push b
	lxi h, 256+4
	dad sp
	sphl
	lxi h, $f81f
	push h
	lxi h, $1f1c
	push h
	lxi h, 256+4
	dad sp
	sphl
	lxi h, $00c0
	push h
	lxi h, $c000
	push h

propellerA_ltr2_ret:
	lxi sp, 0
	ret
propellerA_ltr3:
	lxi h, 0
	dad sp
	shld propellerA_ltr3_ret+1
	.nolist
	xchg
	lxi d, $4000
	dad d
	sphl
;; white
;[        444444          ] 000000fc00
;[            4444444     ] 0000000fe0
;[            4444444     ] 0000000fe0
;[            444         ] 0000000e00
; stripped pairs: leading: 0 trailing: 0
	push b
	push b
	lxi h, 256+4
	dad sp
	sphl
	lxi h, $fc0f
	push h
	lxi h, $0f0e
	push h
	lxi h, 256+4
	dad sp
	sphl
	lxi h, $00e0
	push h
	lxi h, $e000
	push h

propellerA_ltr3_ret:
	lxi sp, 0
	ret
propellerA_ltr4:
	lxi h, 0
	dad sp
	shld propellerA_ltr4_ret+1
	.nolist
	xchg
	lxi d, $4000
	dad d
	sphl
;; white
;[         444444         ] 0000007e00
;[             4444444    ] 00000007f0
;[             4444444    ] 00000007f0
;[             444        ] 0000000700
; stripped pairs: leading: 0 trailing: 0
	push b
	push b
	lxi h, 256+4
	dad sp
	sphl
	lxi h, $7e07
	push h
	lxi h, $0707
	push h
	lxi h, 256+4
	dad sp
	sphl
	lxi h, $00f0
	push h
	lxi h, $f000
	push h

propellerA_ltr4_ret:
	lxi sp, 0
	ret
propellerA_ltr5:
	lxi h, 0
	dad sp
	shld propellerA_ltr5_ret+1
	.nolist
	xchg
	lxi d, $4000
	dad d
	sphl
;; white
;[          444444        ] 0000003f00
;[              4444444   ] 00000003f8
;[              4444444   ] 00000003f8
;[              444       ] 0000000380
; stripped pairs: leading: 0 trailing: 0
	push b
	push b
	lxi h, 256+4
	dad sp
	sphl
	lxi h, $3f03
	push h
	lxi h, $0303
	push h
	lxi h, 256+4
	dad sp
	sphl
	lxi h, $00f8
	push h
	lxi h, $f880
	push h

propellerA_ltr5_ret:
	lxi sp, 0
	ret
propellerA_ltr6:
	lxi h, 0
	dad sp
	shld propellerA_ltr6_ret+1
	.nolist
	xchg
	lxi d, $4000
	dad d
	sphl
;; white
;[           444444       ] 0000001f80
;[               4444444  ] 00000001fc
;[               4444444  ] 00000001fc
;[               444      ] 00000001c0
; stripped pairs: leading: 0 trailing: 0
	push b
	push b
	lxi h, 256+4
	dad sp
	sphl
	lxi h, $1f01
	push h
	lxi h, $0101
	push h
	lxi h, 256+4
	dad sp
	sphl
	lxi h, $80fc
	push h
	lxi h, $fcc0
	push h

propellerA_ltr6_ret:
	lxi sp, 0
	ret
propellerA_ltr7:
	lxi h, 0
	dad sp
	shld propellerA_ltr7_ret+1
	.nolist
	xchg
	lxi d, $4000
	dad d
	sphl
;; white
;[            444444      ] 0000000fc0
;[                4444444 ] 00000000fe
;[                4444444 ] 00000000fe
;[                444     ] 00000000e0
; stripped pairs: leading: 0 trailing: 0
	push b
	push b
	lxi h, 256+4
	dad sp
	sphl
	lxi h, $0f00
	push h
	push b
	lxi h, 256+4
	dad sp
	sphl
	lxi h, $c0fe
	push h
	lxi h, $fee0
	push h

propellerA_ltr7_ret:
	lxi sp, 0
	ret
;; end of sprite group propellerA
propellerA_rtl_dispatch:
	dw propellerA_rtl0
	dw propellerA_rtl1
	dw propellerA_rtl2
	dw propellerA_rtl3
	dw propellerA_rtl4
	dw propellerA_rtl5
	dw propellerA_rtl6
	dw propellerA_rtl7
propellerA_rtl_spritegroup:
propellerA_rtl0:
	lxi h, 0
	dad sp
	shld propellerA_rtl0_ret+1
	.nolist
	xchg
	lxi d, $4000
	dad d
	sphl
;; white
;[     444444             ] 000007e000
;[4444444                 ] 0000fe0000
;[4444444                 ] 0000fe0000
;[    444                 ] 00000e0000
; stripped pairs: leading: 0 trailing: 0
	lxi h, $07fe
	push h
	lxi h, $fe0e
	push h
	lxi h, 256+4
	dad sp
	sphl
	lxi h, $e000
	push h
	push b
	lxi h, 256+4
	dad sp
	sphl
	push b
	push b

propellerA_rtl0_ret:
	lxi sp, 0
	ret
propellerA_rtl1:
	lxi h, 0
	dad sp
	shld propellerA_rtl1_ret+1
	.nolist
	xchg
	lxi d, $4000
	dad d
	sphl
;; white
;[      444444            ] 000003f000
;[ 4444444                ] 00007f0000
;[ 4444444                ] 00007f0000
;[     444                ] 0000070000
; stripped pairs: leading: 0 trailing: 0
	lxi h, $037f
	push h
	lxi h, $7f07
	push h
	lxi h, 256+4
	dad sp
	sphl
	lxi h, $f000
	push h
	push b
	lxi h, 256+4
	dad sp
	sphl
	push b
	push b

propellerA_rtl1_ret:
	lxi sp, 0
	ret
propellerA_rtl2:
	lxi h, 0
	dad sp
	shld propellerA_rtl2_ret+1
	.nolist
	xchg
	lxi d, $4000
	dad d
	sphl
;; white
;[       444444           ] 000001f800
;[  4444444               ] 00003f8000
;[  4444444               ] 00003f8000
;[      444               ] 0000038000
; stripped pairs: leading: 0 trailing: 0
	lxi h, $013f
	push h
	lxi h, $3f03
	push h
	lxi h, 256+4
	dad sp
	sphl
	lxi h, $f880
	push h
	lxi h, $8080
	push h
	lxi h, 256+4
	dad sp
	sphl
	push b
	push b

propellerA_rtl2_ret:
	lxi sp, 0
	ret
propellerA_rtl3:
	lxi h, 0
	dad sp
	shld propellerA_rtl3_ret+1
	.nolist
	xchg
	lxi d, $4000
	dad d
	sphl
;; white
;[        444444          ] 000000fc00
;[   4444444              ] 00001fc000
;[   4444444              ] 00001fc000
;[       444              ] 000001c000
; stripped pairs: leading: 0 trailing: 0
	lxi h, $001f
	push h
	lxi h, $1f01
	push h
	lxi h, 256+4
	dad sp
	sphl
	lxi h, $fcc0
	push h
	lxi h, $c0c0
	push h
	lxi h, 256+4
	dad sp
	sphl
	push b
	push b

propellerA_rtl3_ret:
	lxi sp, 0
	ret
propellerA_rtl4:
	lxi h, 0
	dad sp
	shld propellerA_rtl4_ret+1
	.nolist
	xchg
	lxi d, $4000
	dad d
	sphl
;; white
;[         444444         ] 0000007e00
;[    4444444             ] 00000fe000
;[    4444444             ] 00000fe000
;[        444             ] 000000e000
; stripped pairs: leading: 0 trailing: 0
	lxi h, $000f
	push h
	lxi h, $0f00
	push h
	lxi h, 256+4
	dad sp
	sphl
	lxi h, $7ee0
	push h
	lxi h, $e0e0
	push h
	lxi h, 256+4
	dad sp
	sphl
	push b
	push b

propellerA_rtl4_ret:
	lxi sp, 0
	ret
propellerA_rtl5:
	lxi h, 0
	dad sp
	shld propellerA_rtl5_ret+1
	.nolist
	xchg
	lxi d, $4000
	dad d
	sphl
;; white
;[          444444        ] 0000003f00
;[     4444444            ] 000007f000
;[     4444444            ] 000007f000
;[         444            ] 0000007000
; stripped pairs: leading: 0 trailing: 0
	lxi h, $0007
	push h
	lxi h, $0700
	push h
	lxi h, 256+4
	dad sp
	sphl
	lxi h, $3ff0
	push h
	lxi h, $f070
	push h
	lxi h, 256+4
	dad sp
	sphl
	push b
	push b

propellerA_rtl5_ret:
	lxi sp, 0
	ret
propellerA_rtl6:
	lxi h, 0
	dad sp
	shld propellerA_rtl6_ret+1
	.nolist
	xchg
	lxi d, $4000
	dad d
	sphl
;; white
;[           444444       ] 0000001f80
;[      4444444           ] 000003f800
;[      4444444           ] 000003f800
;[          444           ] 0000003800
; stripped pairs: leading: 0 trailing: 0
	lxi h, $0003
	push h
	lxi h, $0300
	push h
	lxi h, 256+4
	dad sp
	sphl
	lxi h, $1ff8
	push h
	lxi h, $f838
	push h
	lxi h, 256+4
	dad sp
	sphl
	lxi h, $8000
	push h
	push b

propellerA_rtl6_ret:
	lxi sp, 0
	ret
propellerA_rtl7:
	lxi h, 0
	dad sp
	shld propellerA_rtl7_ret+1
	.nolist
	xchg
	lxi d, $4000
	dad d
	sphl
;; white
;[            444444      ] 0000000fc0
;[       4444444          ] 000001fc00
;[       4444444          ] 000001fc00
;[           444          ] 0000001c00
; stripped pairs: leading: 0 trailing: 0
	lxi h, $0001
	push h
	lxi h, $0100
	push h
	lxi h, 256+4
	dad sp
	sphl
	lxi h, $0ffc
	push h
	lxi h, $fc1c
	push h
	lxi h, 256+4
	dad sp
	sphl
	lxi h, $c000
	push h
	push b

propellerA_rtl7_ret:
	lxi sp, 0
	ret
;; end of sprite group propellerA
propellerB_ltr_dispatch:
	dw propellerB_ltr_inf
	dw propellerB_ltr0
	dw propellerB_ltr1
	dw propellerB_ltr2
	dw propellerB_ltr3
	dw propellerB_ltr4
	dw propellerB_ltr5
	dw propellerB_ltr6
	dw propellerB_ltr7
propellerB_ltr_spritegroup:
propellerB_ltr_inf:
	lxi h, 0
	dad sp
	shld propellerB_ltr_inf_ret+1
	.nolist
	xchg
	lxi d, $4000
	dad d
	sphl
;; white
;[                 4444444] 000000007f
;[             4444444    ] 00000007f0
;[             4444444    ] 00000007f0
;[                 444    ] 0000000070
; stripped pairs: leading: 0 trailing: 0
	push b
	push b
	lxi h, 256+4
	dad sp
	sphl
	lxi h, $0007
	push h
	lxi h, $0700
	push h
	lxi h, 256+4
	dad sp
	sphl
	lxi h, $7ff0
	push h
	lxi h, $f070
	push h

propellerB_ltr_inf_ret:
	lxi sp, 0
	ret
propellerB_ltr0:
	lxi h, 0
	dad sp
	shld propellerB_ltr0_ret+1
	.nolist
	xchg
	lxi d, $4000
	dad d
	sphl
;; white
;[         4444444] 000000007f
;[     4444444    ] 00000007f0
;[     4444444    ] 00000007f0
;[         444    ] 0000000070
; stripped pairs: leading: 0 trailing: 0
	lxi h, $0007
	push h
	lxi h, $0700
	push h
	lxi h, 256+4
	dad sp
	sphl
	lxi h, $7ff0
	push h
	lxi h, $f070
	push h

propellerB_ltr0_ret:
	lxi sp, 0
	ret
propellerB_ltr1:
	lxi h, 0
	dad sp
	shld propellerB_ltr1_ret+1
	.nolist
	xchg
	lxi d, $4000
	dad d
	sphl
;; white
;[          4444444       ] 0000003f80
;[      4444444           ] 000003f800
;[      4444444           ] 000003f800
;[          444           ] 0000003800
; stripped pairs: leading: 0 trailing: 0
	lxi h, $0003
	push h
	lxi h, $0300
	push h
	lxi h, 256+4
	dad sp
	sphl
	lxi h, $3ff8
	push h
	lxi h, $f838
	push h
	lxi h, 256+4
	dad sp
	sphl
	lxi h, $8000
	push h
	push b

propellerB_ltr1_ret:
	lxi sp, 0
	ret
propellerB_ltr2:
	lxi h, 0
	dad sp
	shld propellerB_ltr2_ret+1
	.nolist
	xchg
	lxi d, $4000
	dad d
	sphl
;; white
;[           4444444      ] 0000001fc0
;[       4444444          ] 000001fc00
;[       4444444          ] 000001fc00
;[           444          ] 0000001c00
; stripped pairs: leading: 0 trailing: 0
	lxi h, $0001
	push h
	lxi h, $0100
	push h
	lxi h, 256+4
	dad sp
	sphl
	lxi h, $1ffc
	push h
	lxi h, $fc1c
	push h
	lxi h, 256+4
	dad sp
	sphl
	lxi h, $c000
	push h
	push b

propellerB_ltr2_ret:
	lxi sp, 0
	ret
propellerB_ltr3:
	lxi h, 0
	dad sp
	shld propellerB_ltr3_ret+1
	.nolist
	xchg
	lxi d, $4000
	dad d
	sphl
;; white
;[            4444444     ] 0000000fe0
;[        4444444         ] 000000fe00
;[        4444444         ] 000000fe00
;[            444         ] 0000000e00
; stripped pairs: leading: 0 trailing: 0
	push b
	push b
	lxi h, 256+4
	dad sp
	sphl
	lxi h, $0ffe
	push h
	lxi h, $fe0e
	push h
	lxi h, 256+4
	dad sp
	sphl
	lxi h, $e000
	push h
	push b

propellerB_ltr3_ret:
	lxi sp, 0
	ret
propellerB_ltr4:
	lxi h, 0
	dad sp
	shld propellerB_ltr4_ret+1
	.nolist
	xchg
	lxi d, $4000
	dad d
	sphl
;; white
;[             4444444    ] 00000007f0
;[         4444444        ] 0000007f00
;[         4444444        ] 0000007f00
;[             444        ] 0000000700
; stripped pairs: leading: 0 trailing: 0
	push b
	push b
	lxi h, 256+4
	dad sp
	sphl
	lxi h, $077f
	push h
	lxi h, $7f07
	push h
	lxi h, 256+4
	dad sp
	sphl
	lxi h, $f000
	push h
	push b

propellerB_ltr4_ret:
	lxi sp, 0
	ret
propellerB_ltr5:
	lxi h, 0
	dad sp
	shld propellerB_ltr5_ret+1
	.nolist
	xchg
	lxi d, $4000
	dad d
	sphl
;; white
;[              4444444   ] 00000003f8
;[          4444444       ] 0000003f80
;[          4444444       ] 0000003f80
;[              444       ] 0000000380
; stripped pairs: leading: 0 trailing: 0
	push b
	push b
	lxi h, 256+4
	dad sp
	sphl
	lxi h, $033f
	push h
	lxi h, $3f03
	push h
	lxi h, 256+4
	dad sp
	sphl
	lxi h, $f880
	push h
	lxi h, $8080
	push h

propellerB_ltr5_ret:
	lxi sp, 0
	ret
propellerB_ltr6:
	lxi h, 0
	dad sp
	shld propellerB_ltr6_ret+1
	.nolist
	xchg
	lxi d, $4000
	dad d
	sphl
;; white
;[               4444444  ] 00000001fc
;[           4444444      ] 0000001fc0
;[           4444444      ] 0000001fc0
;[               444      ] 00000001c0
; stripped pairs: leading: 0 trailing: 0
	push b
	push b
	lxi h, 256+4
	dad sp
	sphl
	lxi h, $011f
	push h
	lxi h, $1f01
	push h
	lxi h, 256+4
	dad sp
	sphl
	lxi h, $fcc0
	push h
	lxi h, $c0c0
	push h

propellerB_ltr6_ret:
	lxi sp, 0
	ret
propellerB_ltr7:
	lxi h, 0
	dad sp
	shld propellerB_ltr7_ret+1
	.nolist
	xchg
	lxi d, $4000
	dad d
	sphl
;; white
;[                4444444 ] 00000000fe
;[            4444444     ] 0000000fe0
;[            4444444     ] 0000000fe0
;[                444     ] 00000000e0
; stripped pairs: leading: 0 trailing: 0
	push b
	push b
	lxi h, 256+4
	dad sp
	sphl
	lxi h, $000f
	push h
	lxi h, $0f00
	push h
	lxi h, 256+4
	dad sp
	sphl
	lxi h, $fee0
	push h
	lxi h, $e0e0
	push h

propellerB_ltr7_ret:
	lxi sp, 0
	ret
;; end of sprite group propellerB
propellerB_rtl_dispatch:
	dw propellerB_rtl0
	dw propellerB_rtl1
	dw propellerB_rtl2
	dw propellerB_rtl3
	dw propellerB_rtl4
	dw propellerB_rtl5
	dw propellerB_rtl6
	dw propellerB_rtl7
propellerB_rtl_spritegroup:
propellerB_rtl0:
	lxi h, 0
	dad sp
	shld propellerB_rtl0_ret+1
	.nolist
	xchg
	lxi d, $4000
	dad d
	sphl
;; white
;[4444444                 ] 0000fe0000
;[    4444444             ] 00000fe000
;[    4444444             ] 00000fe000
;[    444                 ] 00000e0000
; stripped pairs: leading: 0 trailing: 0
	lxi h, $fe0f
	push h
	lxi h, $0f0e
	push h
	lxi h, 256+4
	dad sp
	sphl
	lxi h, $00e0
	push h
	lxi h, $e000
	push h
	lxi h, 256+4
	dad sp
	sphl
	push b
	push b

propellerB_rtl0_ret:
	lxi sp, 0
	ret
propellerB_rtl1:
	lxi h, 0
	dad sp
	shld propellerB_rtl1_ret+1
	.nolist
	xchg
	lxi d, $4000
	dad d
	sphl
;; white
;[ 4444444                ] 00007f0000
;[     4444444            ] 000007f000
;[     4444444            ] 000007f000
;[     444                ] 0000070000
; stripped pairs: leading: 0 trailing: 0
	lxi h, $7f07
	push h
	lxi h, $0707
	push h
	lxi h, 256+4
	dad sp
	sphl
	lxi h, $00f0
	push h
	lxi h, $f000
	push h
	lxi h, 256+4
	dad sp
	sphl
	push b
	push b

propellerB_rtl1_ret:
	lxi sp, 0
	ret
propellerB_rtl2:
	lxi h, 0
	dad sp
	shld propellerB_rtl2_ret+1
	.nolist
	xchg
	lxi d, $4000
	dad d
	sphl
;; white
;[  4444444               ] 00003f8000
;[      4444444           ] 000003f800
;[      4444444           ] 000003f800
;[      444               ] 0000038000
; stripped pairs: leading: 0 trailing: 0
	lxi h, $3f03
	push h
	lxi h, $0303
	push h
	lxi h, 256+4
	dad sp
	sphl
	lxi h, $80f8
	push h
	lxi h, $f880
	push h
	lxi h, 256+4
	dad sp
	sphl
	push b
	push b

propellerB_rtl2_ret:
	lxi sp, 0
	ret
propellerB_rtl3:
	lxi h, 0
	dad sp
	shld propellerB_rtl3_ret+1
	.nolist
	xchg
	lxi d, $4000
	dad d
	sphl
;; white
;[   4444444              ] 00001fc000
;[       4444444          ] 000001fc00
;[       4444444          ] 000001fc00
;[       444              ] 000001c000
; stripped pairs: leading: 0 trailing: 0
	lxi h, $1f01
	push h
	lxi h, $0101
	push h
	lxi h, 256+4
	dad sp
	sphl
	lxi h, $c0fc
	push h
	lxi h, $fcc0
	push h
	lxi h, 256+4
	dad sp
	sphl
	push b
	push b

propellerB_rtl3_ret:
	lxi sp, 0
	ret
propellerB_rtl4:
	lxi h, 0
	dad sp
	shld propellerB_rtl4_ret+1
	.nolist
	xchg
	lxi d, $4000
	dad d
	sphl
;; white
;[    4444444             ] 00000fe000
;[        4444444         ] 000000fe00
;[        4444444         ] 000000fe00
;[        444             ] 000000e000
; stripped pairs: leading: 0 trailing: 0
	lxi h, $0f00
	push h
	push b
	lxi h, 256+4
	dad sp
	sphl
	lxi h, $e0fe
	push h
	lxi h, $fee0
	push h
	lxi h, 256+4
	dad sp
	sphl
	push b
	push b

propellerB_rtl4_ret:
	lxi sp, 0
	ret
propellerB_rtl5:
	lxi h, 0
	dad sp
	shld propellerB_rtl5_ret+1
	.nolist
	xchg
	lxi d, $4000
	dad d
	sphl
;; white
;[     4444444            ] 000007f000
;[         4444444        ] 0000007f00
;[         4444444        ] 0000007f00
;[         444            ] 0000007000
; stripped pairs: leading: 0 trailing: 0
	lxi h, $0700
	push h
	push b
	lxi h, 256+4
	dad sp
	sphl
	lxi h, $f07f
	push h
	lxi h, $7f70
	push h
	lxi h, 256+4
	dad sp
	sphl
	push b
	push b

propellerB_rtl5_ret:
	lxi sp, 0
	ret
propellerB_rtl6:
	lxi h, 0
	dad sp
	shld propellerB_rtl6_ret+1
	.nolist
	xchg
	lxi d, $4000
	dad d
	sphl
;; white
;[      4444444           ] 000003f800
;[          4444444       ] 0000003f80
;[          4444444       ] 0000003f80
;[          444           ] 0000003800
; stripped pairs: leading: 0 trailing: 0
	lxi h, $0300
	push h
	push b
	lxi h, 256+4
	dad sp
	sphl
	lxi h, $f83f
	push h
	lxi h, $3f38
	push h
	lxi h, 256+4
	dad sp
	sphl
	lxi h, $0080
	push h
	lxi h, $8000
	push h

propellerB_rtl6_ret:
	lxi sp, 0
	ret
propellerB_rtl7:
	lxi h, 0
	dad sp
	shld propellerB_rtl7_ret+1
	.nolist
	xchg
	lxi d, $4000
	dad d
	sphl
;; white
;[       4444444          ] 000001fc00
;[           4444444      ] 0000001fc0
;[           4444444      ] 0000001fc0
;[           444          ] 0000001c00
; stripped pairs: leading: 0 trailing: 0
	lxi h, $0100
	push h
	push b
	lxi h, 256+4
	dad sp
	sphl
	lxi h, $fc1f
	push h
	lxi h, $1f1c
	push h
	lxi h, 256+4
	dad sp
	sphl
	lxi h, $00c0
	push h
	lxi h, $c000
	push h

propellerB_rtl7_ret:
	lxi sp, 0
	ret
;; end of sprite group propellerB
jet_ltr_dispatch:
	dw jet_ltr_inf
	dw jet_ltr0
	dw jet_ltr1
	dw jet_ltr2
	dw jet_ltr3
	dw jet_ltr4
	dw jet_ltr5
	dw jet_ltr6
	dw jet_ltr7
jet_ltr_spritegroup:
jet_ltr_inf:
	lxi h, 0
	dad sp
	shld jet_ltr_inf_ret+1
	.nolist
	xchg
	lxi d, $4000
	dad d
	sphl
;; white
;[        44              ] 000000c000
;[        4444      4444  ] 000000f03c
;[        4444444444444444] 000000ffff
;[          4444   4444444] 0000003c7f
;[              44444     ] 00000003e0
;[            4444        ] 0000000f00
; stripped pairs: leading: 0 trailing: 0
	push b
	push b
	push b
	lxi h, 256+6
	dad sp
	sphl
	lxi h, $c0f0
	push h
	lxi h, $ff3c
	push h
	lxi h, $030f
	push h
	lxi h, 256+6
	dad sp
	sphl
	lxi h, $003c
	push h
	lxi h, $ff7f
	push h
	lxi h, $e000
	push h

jet_ltr_inf_ret:
	lxi sp, 0
	ret
jet_ltr0:
	lxi h, 0
	dad sp
	shld jet_ltr0_ret+1
	.nolist
	xchg
	lxi d, $4000
	dad d
	sphl
;; white
;[44              ] 000000c000
;[4444      4444  ] 000000f03c
;[4444444444444444] 000000ffff
;[  4444   4444444] 0000003c7f
;[      44444     ] 00000003e0
;[    4444        ] 0000000f00
; stripped pairs: leading: 0 trailing: 0
	lxi h, $c0f0
	push h
	lxi h, $ff3c
	push h
	lxi h, $030f
	push h
	lxi h, 256+6
	dad sp
	sphl
	lxi h, $003c
	push h
	lxi h, $ff7f
	push h
	lxi h, $e000
	push h

jet_ltr0_ret:
	lxi sp, 0
	ret
jet_ltr1:
  ; (shift 1 skipped)
jet_ltr2:
	lxi h, 0
	dad sp
	shld jet_ltr2_ret+1
	.nolist
	xchg
	lxi d, $4000
	dad d
	sphl
;; white
;[  44                    ] 0000300000
;[  4444      4444        ] 00003c0f00
;[  4444444444444444      ] 00003fffc0
;[    4444   4444444      ] 00000f1fc0
;[        44444           ] 000000f800
;[      4444              ] 000003c000
; stripped pairs: leading: 0 trailing: 0
	lxi h, $303c
	push h
	lxi h, $3f0f
	push h
	lxi h, $0003
	push h
	lxi h, 256+6
	dad sp
	sphl
	lxi h, $000f
	push h
	lxi h, $ff1f
	push h
	lxi h, $f8c0
	push h
	lxi h, 256+6
	dad sp
	sphl
	push b
	lxi h, $c0c0
	push h
	push b

jet_ltr2_ret:
	lxi sp, 0
	ret
jet_ltr3:
  ; (shift 3 skipped)
jet_ltr4:
	lxi h, 0
	dad sp
	shld jet_ltr4_ret+1
	.nolist
	xchg
	lxi d, $4000
	dad d
	sphl
;; white
;[    44                  ] 00000c0000
;[    4444      4444      ] 00000f03c0
;[    4444444444444444    ] 00000ffff0
;[      4444   4444444    ] 000003c7f0
;[          44444         ] 0000003e00
;[        4444            ] 000000f000
; stripped pairs: leading: 0 trailing: 0
	lxi h, $0c0f
	push h
	lxi h, $0f03
	push h
	push b
	lxi h, 256+6
	dad sp
	sphl
	lxi h, $0003
	push h
	lxi h, $ffc7
	push h
	lxi h, $3ef0
	push h
	lxi h, 256+6
	dad sp
	sphl
	lxi h, $00c0
	push h
	lxi h, $f0f0
	push h
	push b

jet_ltr4_ret:
	lxi sp, 0
	ret
jet_ltr5:
  ; (shift 5 skipped)
jet_ltr6:
	lxi h, 0
	dad sp
	shld jet_ltr6_ret+1
	.nolist
	xchg
	lxi d, $4000
	dad d
	sphl
;; white
;[      44                ] 0000030000
;[      4444      4444    ] 000003c0f0
;[      4444444444444444  ] 000003fffc
;[        4444   4444444  ] 000000f1fc
;[            44444       ] 0000000f80
;[          4444          ] 0000003c00
; stripped pairs: leading: 0 trailing: 0
	lxi h, $0303
	push h
	lxi h, $0300
	push h
	push b
	lxi h, 256+6
	dad sp
	sphl
	lxi h, $00c0
	push h
	lxi h, $fff1
	push h
	lxi h, $0f3c
	push h
	lxi h, 256+6
	dad sp
	sphl
	lxi h, $00f0
	push h
	lxi h, $fcfc
	push h
	lxi h, $8000
	push h

jet_ltr6_ret:
	lxi sp, 0
	ret
jet_ltr7:
  ; (shift 7 skipped)
;; end of sprite group jet
jet_rtl_dispatch:
	dw jet_rtl0
	dw jet_rtl1
	dw jet_rtl2
	dw jet_rtl3
	dw jet_rtl4
	dw jet_rtl5
	dw jet_rtl6
	dw jet_rtl7
jet_rtl_spritegroup:
jet_rtl0:
	lxi h, 0
	dad sp
	shld jet_rtl0_ret+1
	.nolist
	xchg
	lxi d, $4000
	dad d
	sphl
;; white
;[              44        ] 0000000300
;[  4444      4444        ] 00003c0f00
;[4444444444444444        ] 0000ffff00
;[4444444   4444          ] 0000fe3c00
;[     44444              ] 000007c000
;[        4444            ] 000000f000
; stripped pairs: leading: 0 trailing: 0
	lxi h, $003c
	push h
	lxi h, $fffe
	push h
	lxi h, $0700
	push h
	lxi h, 256+6
	dad sp
	sphl
	lxi h, $030f
	push h
	lxi h, $ff3c
	push h
	lxi h, $c0f0
	push h
	lxi h, 256+6
	dad sp
	sphl
	push b
	push b
	push b

jet_rtl0_ret:
	lxi sp, 0
	ret
jet_rtl1:
  ; (shift 1 skipped)
jet_rtl2:
	lxi h, 0
	dad sp
	shld jet_rtl2_ret+1
	.nolist
	xchg
	lxi d, $4000
	dad d
	sphl
;; white
;[                44      ] 00000000c0
;[    4444      4444      ] 00000f03c0
;[  4444444444444444      ] 00003fffc0
;[  4444444   4444        ] 00003f8f00
;[       44444            ] 000001f000
;[          4444          ] 0000003c00
; stripped pairs: leading: 0 trailing: 0
	lxi h, $000f
	push h
	lxi h, $3f3f
	push h
	lxi h, $0100
	push h
	lxi h, 256+6
	dad sp
	sphl
	lxi h, $0003
	push h
	lxi h, $ff8f
	push h
	lxi h, $f03c
	push h
	lxi h, 256+6
	dad sp
	sphl
	lxi h, $c0c0
	push h
	lxi h, $c000
	push h
	push b

jet_rtl2_ret:
	lxi sp, 0
	ret
jet_rtl3:
  ; (shift 3 skipped)
jet_rtl4:
	lxi h, 0
	dad sp
	shld jet_rtl4_ret+1
	.nolist
	xchg
	lxi d, $4000
	dad d
	sphl
;; white
;[                  44    ] 0000000030
;[      4444      4444    ] 000003c0f0
;[    4444444444444444    ] 00000ffff0
;[    4444444   4444      ] 00000fe3c0
;[         44444          ] 0000007c00
;[            4444        ] 0000000f00
; stripped pairs: leading: 0 trailing: 0
	lxi h, $0003
	push h
	lxi h, $0f0f
	push h
	push b
	lxi h, 256+6
	dad sp
	sphl
	lxi h, $00c0
	push h
	lxi h, $ffe3
	push h
	lxi h, $7c0f
	push h
	lxi h, 256+6
	dad sp
	sphl
	lxi h, $30f0
	push h
	lxi h, $f0c0
	push h
	push b

jet_rtl4_ret:
	lxi sp, 0
	ret
jet_rtl5:
  ; (shift 5 skipped)
jet_rtl6:
	lxi h, 0
	dad sp
	shld jet_rtl6_ret+1
	.nolist
	xchg
	lxi d, $4000
	dad d
	sphl
;; white
;[                    44  ] 000000000c
;[        4444      4444  ] 000000f03c
;[      4444444444444444  ] 000003fffc
;[      4444444   4444    ] 000003f8f0
;[           44444        ] 0000001f00
;[              4444      ] 00000003c0
; stripped pairs: leading: 0 trailing: 0
	push b
	lxi h, $0303
	push h
	push b
	lxi h, 256+6
	dad sp
	sphl
	lxi h, $00f0
	push h
	lxi h, $fff8
	push h
	lxi h, $1f03
	push h
	lxi h, 256+6
	dad sp
	sphl
	lxi h, $0c3c
	push h
	lxi h, $fcf0
	push h
	lxi h, $00c0
	push h

jet_rtl6_ret:
	lxi sp, 0
	ret
jet_rtl7:
  ; (shift 7 skipped)
;; end of sprite group jet
bridgeTop_ltr_dispatch:
	dw bridgeTop_ltr_inf
	dw bridgeTop_ltr0
	dw bridgeTop_ltr1
	dw bridgeTop_ltr2
	dw bridgeTop_ltr3
	dw bridgeTop_ltr4
	dw bridgeTop_ltr5
	dw bridgeTop_ltr6
	dw bridgeTop_ltr7
bridgeTop_ltr_spritegroup:
bridgeTop_ltr_inf:
  ; (shift -1 skipped)
bridgeTop_ltr0:
	lxi h, 0
	dad sp
	shld bridgeTop_ltr0_ret+1
	.nolist
;; layer 2 (c000)
	lxi h, $4000
	dad d
	sphl
;[4444                            4444                        4444] f0000000f000000f
;[444444                        44444444                    444444] fc000003fc00003f
;[4444444444444444444444444444444444444444444444444444444444444444] ffffffffffffffff
;[4444444444444444444444444444444444444444444444444444444444444444] ffffffffffffffff
;[44  44  44  44  44  44  44  44  44  44  44  44  44  44  44  44  ] cccccccccccccccc
;[  44  44  44  44  44  44  44  44  44  44  44  44  44  44  44  44] 3333333333333333
;[44  44  44  44  44  44  44  44  44  44  44  44  44  44  44  44  ] cccccccccccccccc
;[  44  44  44  44  44  44  44  44  44  44  44  44  44  44  44  44] 3333333333333333
;[44  44  44  44  44  44  44  44  44  44  44  44  44  44  44  44  ] cccccccccccccccc
;[  44  44  44  44  44  44  44  44  44  44  44  44  44  44  44  44] 3333333333333333
;[44  44  44  44  44  44  44  44  44  44  44  44  44  44  44  44  ] cccccccccccccccc
;[  44  44  44  44  44  44  44  44  44  44  44  44  44  44  44  44] 3333333333333333
;[4444444444444444444444444444444444444444444444444444444444444444] ffffffffffffffff
;[                                                                ] 0000000000
; stripped pairs: leading: 0 trailing: 0
	lxi h, $f0fc
	push h
	lxi h, $ffff
	push h
	lxi h, $cc33
	push h
	push h
	push h
	push h
	lxi h, $ff00
	push h
	lxi h, 256+14
	dad sp
	sphl
	push b
	lxi h, $ffff
	push h
	lxi h, $cc33
	push h
	push h
	push h
	push h
	lxi h, $ff00
	push h
	lxi h, 256+14
	dad sp
	sphl
	push b
	lxi h, $ffff
	push h
	lxi h, $cc33
	push h
	push h
	push h
	push h
	lxi h, $ff00
	push h
	lxi h, 256+14
	dad sp
	sphl
	lxi h, $0003
	push h
	lxi h, $ffff
	push h
	lxi h, $cc33
	push h
	push h
	push h
	push h
	lxi h, $ff00
	push h
	lxi h, 256+14
	dad sp
	sphl
	lxi h, $f0fc
	push h
	lxi h, $ffff
	push h
	lxi h, $cc33
	push h
	push h
	push h
	push h
	lxi h, $ff00
	push h
	lxi h, 256+14
	dad sp
	sphl
	push b
	lxi h, $ffff
	push h
	lxi h, $cc33
	push h
	push h
	push h
	push h
	lxi h, $ff00
	push h
	lxi h, 256+14
	dad sp
	sphl
	push b
	lxi h, $ffff
	push h
	lxi h, $cc33
	push h
	push h
	push h
	push h
	lxi h, $ff00
	push h
	lxi h, 256+14
	dad sp
	sphl
	lxi h, $0f3f
	push h
	lxi h, $ffff
	push h
	lxi h, $cc33
	push h
	push h
	push h
	push h
	lxi h, $ff00
	push h

bridgeTop_ltr0_ret:
	lxi sp, 0
	ret
bridgeTop_ltr1:
  ; (shift 1 skipped)
bridgeTop_ltr2:
  ; (shift 2 skipped)
bridgeTop_ltr3:
  ; (shift 3 skipped)
bridgeTop_ltr4:
  ; (shift 4 skipped)
bridgeTop_ltr5:
  ; (shift 5 skipped)
bridgeTop_ltr6:
  ; (shift 6 skipped)
bridgeTop_ltr7:
  ; (shift 7 skipped)
;; end of sprite group bridgeTop
bridgeBottom_ltr_dispatch:
	dw bridgeBottom_ltr_inf
	dw bridgeBottom_ltr0
	dw bridgeBottom_ltr1
	dw bridgeBottom_ltr2
	dw bridgeBottom_ltr3
	dw bridgeBottom_ltr4
	dw bridgeBottom_ltr5
	dw bridgeBottom_ltr6
	dw bridgeBottom_ltr7
bridgeBottom_ltr_spritegroup:
bridgeBottom_ltr_inf:
  ; (shift -1 skipped)
bridgeBottom_ltr0:
	lxi h, 0
	dad sp
	shld bridgeBottom_ltr0_ret+1
	.nolist
;; layer 2 (c000)
	lxi h, $4000
	dad d
	sphl
;[                                                                ] 0000000000
;[4444444444444444444444444444444444444444444444444444444444444444] ffffffffffffffff
;[  44  44  44  44  44  44  44  44  44  44  44  44  44  44  44  44] 3333333333333333
;[44  44  44  44  44  44  44  44  44  44  44  44  44  44  44  44  ] cccccccccccccccc
;[  44  44  44  44  44  44  44  44  44  44  44  44  44  44  44  44] 3333333333333333
;[44  44  44  44  44  44  44  44  44  44  44  44  44  44  44  44  ] cccccccccccccccc
;[  44  44  44  44  44  44  44  44  44  44  44  44  44  44  44  44] 3333333333333333
;[44  44  44  44  44  44  44  44  44  44  44  44  44  44  44  44  ] cccccccccccccccc
;[  44  44  44  44  44  44  44  44  44  44  44  44  44  44  44  44] 3333333333333333
;[44  44  44  44  44  44  44  44  44  44  44  44  44  44  44  44  ] cccccccccccccccc
;[4444444444444444444444444444444444444444444444444444444444444444] ffffffffffffffff
;[4444444444444444444444444444444444444444444444444444444444444444] ffffffffffffffff
;[444444                        44444444                    444444] fc000003fc00003f
;[4444                            4444                        4444] f0000000f000000f
; stripped pairs: leading: 0 trailing: 0
	lxi h, $00ff
	push h
	lxi h, $33cc
	push h
	push h
	push h
	push h
	lxi h, $ffff
	push h
	lxi h, $fcf0
	push h
	lxi h, 256+14
	dad sp
	sphl
	lxi h, $00ff
	push h
	lxi h, $33cc
	push h
	push h
	push h
	push h
	lxi h, $ffff
	push h
	push b
	lxi h, 256+14
	dad sp
	sphl
	lxi h, $00ff
	push h
	lxi h, $33cc
	push h
	push h
	push h
	push h
	lxi h, $ffff
	push h
	push b
	lxi h, 256+14
	dad sp
	sphl
	lxi h, $00ff
	push h
	lxi h, $33cc
	push h
	push h
	push h
	push h
	lxi h, $ffff
	push h
	lxi h, $0300
	push h
	lxi h, 256+14
	dad sp
	sphl
	lxi h, $00ff
	push h
	lxi h, $33cc
	push h
	push h
	push h
	push h
	lxi h, $ffff
	push h
	lxi h, $fcf0
	push h
	lxi h, 256+14
	dad sp
	sphl
	lxi h, $00ff
	push h
	lxi h, $33cc
	push h
	push h
	push h
	push h
	lxi h, $ffff
	push h
	push b
	lxi h, 256+14
	dad sp
	sphl
	lxi h, $00ff
	push h
	lxi h, $33cc
	push h
	push h
	push h
	push h
	lxi h, $ffff
	push h
	push b
	lxi h, 256+14
	dad sp
	sphl
	lxi h, $00ff
	push h
	lxi h, $33cc
	push h
	push h
	push h
	push h
	lxi h, $ffff
	push h
	lxi h, $3f0f
	push h

bridgeBottom_ltr0_ret:
	lxi sp, 0
	ret
bridgeBottom_ltr1:
  ; (shift 1 skipped)
bridgeBottom_ltr2:
  ; (shift 2 skipped)
bridgeBottom_ltr3:
  ; (shift 3 skipped)
bridgeBottom_ltr4:
  ; (shift 4 skipped)
bridgeBottom_ltr5:
  ; (shift 5 skipped)
bridgeBottom_ltr6:
  ; (shift 6 skipped)
bridgeBottom_ltr7:
  ; (shift 7 skipped)
;; end of sprite group bridgeBottom
fuuuu_ltr_dispatch:
	dw fuuuu_ltr_inf
	dw fuuuu_ltr0
	dw fuuuu_ltr1
	dw fuuuu_ltr2
	dw fuuuu_ltr3
	dw fuuuu_ltr4
	dw fuuuu_ltr5
	dw fuuuu_ltr6
	dw fuuuu_ltr7
fuuuu_ltr_spritegroup:
fuuuu_ltr_inf:
  ; (shift -1 skipped)
fuuuu_ltr0:
	lxi h, 0
	dad sp
	shld fuuuu_ltr0_ret+1
	.nolist
;; layer 1 (a000)
	lxi h, $2000
	dad d
	sphl
;[   2222222222   ] 0000001ff8
;[  22        22  ] 000000300c
;[  22  22222222  ] 00000033fc
;[  22     22222  ] 000000307c
;[  22  22222222  ] 00000033fc
;[  22  22222222  ] 00000033fc
; stripped pairs: leading: 0 trailing: 0
	lxi h, $1f30
	push h
	lxi h, $3330
	push h
	lxi h, $3333
	push h
	lxi h, 256+6
	dad sp
	sphl
	lxi h, $f80c
	push h
	lxi h, $fc7c
	push h
	lxi h, $fcfc
	push h

fuuuu_ltr0_ret:
	lxi sp, 0
	ret
fuuuu_ltr1:
  ; (shift 1 skipped)
fuuuu_ltr2:
  ; (shift 2 skipped)
fuuuu_ltr3:
  ; (shift 3 skipped)
fuuuu_ltr4:
  ; (shift 4 skipped)
fuuuu_ltr5:
  ; (shift 5 skipped)
fuuuu_ltr6:
  ; (shift 6 skipped)
fuuuu_ltr7:
  ; (shift 7 skipped)
;; end of sprite group fuuuu
uuuuu_ltr_dispatch:
	dw uuuuu_ltr_inf
	dw uuuuu_ltr0
	dw uuuuu_ltr1
	dw uuuuu_ltr2
	dw uuuuu_ltr3
	dw uuuuu_ltr4
	dw uuuuu_ltr5
	dw uuuuu_ltr6
	dw uuuuu_ltr7
uuuuu_ltr_spritegroup:
uuuuu_ltr_inf:
  ; (shift -1 skipped)
uuuuu_ltr0:
	lxi h, 0
	dad sp
	shld uuuuu_ltr0_ret+1
	.nolist
;; layer 2 (c000)
	lxi h, $4000
	dad d
	sphl
;[  444444444444  ] 0000003ffc
;[  44  4444  44  ] 00000033cc
;[  44  4444  44  ] 00000033cc
;[  44  4444  44  ] 00000033cc
;[  44        44  ] 000000300c
;[  444444444444  ] 0000003ffc
; stripped pairs: leading: 0 trailing: 0
	lxi h, $3f33
	push h
	lxi h, $3333
	push h
	lxi h, $303f
	push h
	lxi h, 256+6
	dad sp
	sphl
	lxi h, $fccc
	push h
	lxi h, $cccc
	push h
	lxi h, $0cfc
	push h

uuuuu_ltr0_ret:
	lxi sp, 0
	ret
uuuuu_ltr1:
  ; (shift 1 skipped)
uuuuu_ltr2:
  ; (shift 2 skipped)
uuuuu_ltr3:
  ; (shift 3 skipped)
uuuuu_ltr4:
  ; (shift 4 skipped)
uuuuu_ltr5:
  ; (shift 5 skipped)
uuuuu_ltr6:
  ; (shift 6 skipped)
uuuuu_ltr7:
  ; (shift 7 skipped)
;; end of sprite group uuuuu
euuuu_ltr_dispatch:
	dw euuuu_ltr_inf
	dw euuuu_ltr0
	dw euuuu_ltr1
	dw euuuu_ltr2
	dw euuuu_ltr3
	dw euuuu_ltr4
	dw euuuu_ltr5
	dw euuuu_ltr6
	dw euuuu_ltr7
euuuu_ltr_spritegroup:
euuuu_ltr_inf:
  ; (shift -1 skipped)
euuuu_ltr0:
	lxi h, 0
	dad sp
	shld euuuu_ltr0_ret+1
	.nolist
;; layer 1 (a000)
	lxi h, $2000
	dad d
	sphl
;[  22        22  ] 000000300c
;[  22  22222222  ] 00000033fc
;[  22      2222  ] 000000303c
;[  22  22222222  ] 00000033fc
;[  22        22  ] 000000300c
;[  222222222222  ] 0000003ffc
; stripped pairs: leading: 0 trailing: 0
	lxi h, $3033
	push h
	push h
	lxi h, $303f
	push h
	lxi h, 256+6
	dad sp
	sphl
	lxi h, $0cfc
	push h
	lxi h, $3cfc
	push h
	lxi h, $0cfc
	push h

euuuu_ltr0_ret:
	lxi sp, 0
	ret
euuuu_ltr1:
  ; (shift 1 skipped)
euuuu_ltr2:
  ; (shift 2 skipped)
euuuu_ltr3:
  ; (shift 3 skipped)
euuuu_ltr4:
  ; (shift 4 skipped)
euuuu_ltr5:
  ; (shift 5 skipped)
euuuu_ltr6:
  ; (shift 6 skipped)
euuuu_ltr7:
  ; (shift 7 skipped)
;; end of sprite group euuuu
luuuu_ltr_dispatch:
	dw luuuu_ltr_inf
	dw luuuu_ltr0
	dw luuuu_ltr1
	dw luuuu_ltr2
	dw luuuu_ltr3
	dw luuuu_ltr4
	dw luuuu_ltr5
	dw luuuu_ltr6
	dw luuuu_ltr7
luuuu_ltr_spritegroup:
luuuu_ltr_inf:
  ; (shift -1 skipped)
luuuu_ltr0:
	lxi h, 0
	dad sp
	shld luuuu_ltr0_ret+1
	.nolist
;; layer 2 (c000)
	lxi h, $4000
	dad d
	sphl
;[  44  44444444  ] 00000033fc
;[  44  44444444  ] 00000033fc
;[  44  44444444  ] 00000033fc
;[  44  44444444  ] 00000033fc
;[  44        44  ] 000000300c
;[  444444444444  ] 0000003ffc
; stripped pairs: leading: 0 trailing: 0
	lxi h, $3333
	push h
	push h
	lxi h, $303f
	push h
	lxi h, 256+6
	dad sp
	sphl
	lxi h, $fcfc
	push h
	push h
	lxi h, $0cfc
	push h

luuuu_ltr0_ret:
	lxi sp, 0
	ret
luuuu_ltr1:
  ; (shift 1 skipped)
luuuu_ltr2:
  ; (shift 2 skipped)
luuuu_ltr3:
  ; (shift 3 skipped)
luuuu_ltr4:
  ; (shift 4 skipped)
luuuu_ltr5:
  ; (shift 5 skipped)
luuuu_ltr6:
  ; (shift 6 skipped)
luuuu_ltr7:
  ; (shift 7 skipped)
;; end of sprite group luuuu
player_up_ltr_dispatch:
	dw player_up_ltr_inf
	dw player_up_ltr0
	dw player_up_ltr1
	dw player_up_ltr2
	dw player_up_ltr3
	dw player_up_ltr4
	dw player_up_ltr5
	dw player_up_ltr6
	dw player_up_ltr7
player_up_ltr_spritegroup:
player_up_ltr_inf:
.list
;; white pixels
	dw $ffff, $ffff, $ffff, $ffff, $ffff, $ffff, $fefe, $fefc, $f8f0, $e2e6, $fcf8, $f2ff, $7f7f, $7f3f, $1f0f, $4767, $3f1f, $4fff,

player_up_ltr0:
.list
;; white pixels
	dw $fefe, $fefc, $f8f0, $e2e6, $fcf8, $f2ff, $7f7f, $7f3f, $1f0f, $4767, $3f1f, $4fff, $ffff, $ffff, $ffff, $ffff, $ffff, $ffff,

player_up_ltr1:
.list
;; white pixels
	dw $ffff, $fffe, $fcf8, $f1f3, $fefc, $f9ff, $3f3f, $3f1f, $0f07, $2333, $1f0f, $27ff, $ffff, $ffff, $ffff, $ffff, $ffff, $ffff,

player_up_ltr2:
.list
;; white pixels
	dw $ffff, $ffff, $fefc, $f8f9, $fffe, $fcff, $9f9f, $9f0f, $0703, $9199, $0f07, $93ff, $ffff, $ffff, $ffff, $ffff, $ffff, $ffff,

player_up_ltr3:
.list
;; white pixels
	dw $ffff, $ffff, $fffe, $fcfc, $ffff, $feff, $cfcf, $cf87, $0301, $48cc, $8703, $49ff, $ffff, $ffff, $ffff, $ffff, $ffff, $ffff,

player_up_ltr4:
.list
;; white pixels
	dw $ffff, $ffff, $ffff, $fefe, $ffff, $ffff, $e7e7, $e7c3, $8100, $2466, $c381, $24ff, $ffff, $ffff, $ffff, $7f7f, $ffff, $ffff,

player_up_ltr5:
.list
;; white pixels
	dw $ffff, $ffff, $ffff, $ffff, $ffff, $ffff, $f3f3, $f3e1, $c080, $1233, $e1c0, $92ff, $ffff, $ffff, $ff7f, $3f3f, $ffff, $7fff,

player_up_ltr6:
.list
;; white pixels
	dw $ffff, $ffff, $ffff, $ffff, $ffff, $ffff, $f9f9, $f9f0, $e0c0, $8999, $f0e0, $c9ff, $ffff, $ffff, $7f3f, $1f9f, $ff7f, $3fff,

player_up_ltr7:
.list
;; white pixels
	dw $ffff, $ffff, $ffff, $ffff, $ffff, $ffff, $fcfc, $fcf8, $f0e0, $c4cc, $f8f0, $e4ff, $ffff, $ff7f, $3f1f, $8fcf, $7f3f, $9fff,

;; end of sprite group player_up
player_bank_ltr_dispatch:
	dw player_bank_ltr_inf
	dw player_bank_ltr0
	dw player_bank_ltr1
	dw player_bank_ltr2
	dw player_bank_ltr3
	dw player_bank_ltr4
	dw player_bank_ltr5
	dw player_bank_ltr6
	dw player_bank_ltr7
player_bank_ltr_spritegroup:
player_bank_ltr_inf:
.list
;; white pixels
	dw $ffff, $ffff, $ffff, $ffff, $ffff, $ffff, $fefe, $fefc, $f8f0, $e2fe, $fefc, $f8ff, $7f7f, $7f7f, $3f3f, $1f0f, $4f7f, $3f1f,

player_bank_ltr0:
.list
;; white pixels
	dw $fefe, $fefc, $f8f0, $e2fe, $fefc, $f8ff, $7f7f, $7f7f, $3f3f, $1f0f, $4f7f, $3f1f, $ffff, $ffff, $ffff, $ffff, $ffff, $ffff,

player_bank_ltr1:
.list
;; white pixels
	dw $ffff, $fffe, $fcf8, $f1ff, $fffe, $fcff, $3f3f, $3f3f, $1f1f, $0f07, $273f, $1f8f, $ffff, $ffff, $ffff, $ffff, $ffff, $ffff,

player_bank_ltr2:
.list
;; white pixels
	dw $ffff, $ffff, $fefc, $f8ff, $ffff, $feff, $9f9f, $9f1f, $0f0f, $8783, $931f, $0fc7, $ffff, $ffff, $ffff, $ffff, $ffff, $ffff,

player_bank_ltr3:
.list
;; white pixels
	dw $ffff, $ffff, $fffe, $fcff, $ffff, $ffff, $cfcf, $cf8f, $0707, $43c1, $c98f, $07e3, $ffff, $ffff, $ffff, $ffff, $ffff, $ffff,

player_bank_ltr4:
.list
;; white pixels
	dw $ffff, $ffff, $ffff, $feff, $ffff, $ffff, $e7e7, $e7c7, $8303, $21e0, $e4c7, $83f1, $ffff, $ffff, $ffff, $ffff, $ffff, $ffff,

player_bank_ltr5:
.list
;; white pixels
	dw $ffff, $ffff, $ffff, $ffff, $ffff, $ffff, $f3f3, $f3e3, $c181, $10f0, $f2e3, $c1f8, $ffff, $ffff, $ffff, $ff7f, $7fff, $ffff,

player_bank_ltr6:
.list
;; white pixels
	dw $ffff, $ffff, $ffff, $ffff, $ffff, $ffff, $f9f9, $f9f1, $e0c0, $88f8, $f9f1, $e0fc, $ffff, $ffff, $ffff, $7f3f, $3fff, $ff7f,

player_bank_ltr7:
.list
;; white pixels
	dw $ffff, $ffff, $ffff, $ffff, $ffff, $ffff, $fcfc, $fcf8, $f0e0, $c4fc, $fcf8, $f0fe, $ffff, $ffff, $7f7f, $3f1f, $9fff, $7f3f,

;; end of sprite group player_bank
player_bank_rtl_dispatch:
	dw player_bank_rtl0
	dw player_bank_rtl1
	dw player_bank_rtl2
	dw player_bank_rtl3
	dw player_bank_rtl4
	dw player_bank_rtl5
	dw player_bank_rtl6
	dw player_bank_rtl7
player_bank_rtl_spritegroup:
player_bank_rtl0:
.list
;; white pixels
	dw $fefe, $fefe, $fcfc, $f8f0, $f2fe, $fcf8, $7f7f, $7f3f, $1f0f, $477f, $7f3f, $1fff, $ffff, $ffff, $ffff, $ffff, $ffff, $ffff,

player_bank_rtl1:
.list
;; white pixels
	dw $ffff, $ffff, $fefe, $fcf8, $f9ff, $fefc, $3f3f, $3f1f, $0f07, $233f, $3f1f, $0f7f, $ffff, $ffff, $ffff, $ffff, $ffff, $ffff,

player_bank_rtl2:
.list
;; white pixels
	dw $ffff, $ffff, $ffff, $fefc, $fcff, $fffe, $9f9f, $9f8f, $0703, $111f, $9f8f, $073f, $ffff, $ffff, $ffff, $ffff, $ffff, $ffff,

player_bank_rtl3:
.list
;; white pixels
	dw $ffff, $ffff, $ffff, $fffe, $feff, $ffff, $cfcf, $cfc7, $8381, $080f, $4fc7, $831f, $ffff, $ffff, $ffff, $ffff, $ffff, $ffff,

player_bank_rtl4:
.list
;; white pixels
	dw $ffff, $ffff, $ffff, $ffff, $ffff, $ffff, $e7e7, $e7e3, $c1c0, $8407, $27e3, $c18f, $ffff, $ffff, $ffff, $7fff, $ffff, $ffff,

player_bank_rtl5:
.list
;; white pixels
	dw $ffff, $ffff, $ffff, $ffff, $ffff, $ffff, $f3f3, $f3f1, $e0e0, $c283, $93f1, $e0c7, $ffff, $ffff, $ff7f, $3fff, $ffff, $ffff,

player_bank_rtl6:
.list
;; white pixels
	dw $ffff, $ffff, $ffff, $ffff, $ffff, $ffff, $f9f9, $f9f8, $f0f0, $e1c1, $c9f8, $f0e3, $ffff, $ffff, $7f3f, $1fff, $ffff, $7fff,

player_bank_rtl7:
.list
;; white pixels
	dw $ffff, $ffff, $ffff, $ffff, $ffff, $ffff, $fcfc, $fcfc, $f8f8, $f0e0, $e4fc, $f8f1, $ffff, $ff7f, $3f1f, $8fff, $ff7f, $3fff,

;; end of sprite group player_bank
debris1_ltr_dispatch:
	dw debris1_ltr_inf
	dw debris1_ltr0
	dw debris1_ltr1
	dw debris1_ltr2
	dw debris1_ltr3
	dw debris1_ltr4
	dw debris1_ltr5
	dw debris1_ltr6
	dw debris1_ltr7
debris1_ltr_spritegroup:
debris1_ltr_inf:
	lxi h, 0
	dad sp
	shld debris1_ltr_inf_ret+1
	.nolist
;; layer 3 (e000)
	lxi h, $6000
	dad d
	sphl
;[                        ] 0000000000
;[                        ] 0000000000
;[               8        ] 0000000100
;[             8 8 88     ] 0000000560
;[              8 8       ] 0000000280
;[             8  8 8     ] 00000004a0
;[              8         ] 0000000200
;[                        ] 0000000000
; stripped pairs: leading: 1 trailing: 0
	push b
	push b
	push b
	push b
	lxi h, 256+6
	dad sp
	sphl
	lxi h, $0105
	push h
	lxi h, $0204
	push h
	lxi h, $0200
	push h
	lxi h, 256+6
	dad sp
	sphl
	lxi h, $0060
	push h
	lxi h, $80a0
	push h
	push b

debris1_ltr_inf_ret:
	lxi sp, 0
	ret
debris1_ltr0:
	lxi h, 0
	dad sp
	shld debris1_ltr0_ret+1
	.nolist
;; layer 3 (e000)
	lxi h, $6000
	dad d
	sphl
;[                ] 0000000000
;[                ] 0000000000
;[       8        ] 0000000100
;[     8 8 88     ] 0000000560
;[      8 8       ] 0000000280
;[     8  8 8     ] 00000004a0
;[      8         ] 0000000200
;[                ] 0000000000
; stripped pairs: leading: 1 trailing: 0
	push b
	lxi h, $0105
	push h
	lxi h, $0204
	push h
	lxi h, $0200
	push h
	lxi h, 256+6
	dad sp
	sphl
	lxi h, $0060
	push h
	lxi h, $80a0
	push h
	push b

debris1_ltr0_ret:
	lxi sp, 0
	ret
debris1_ltr1:
	lxi h, 0
	dad sp
	shld debris1_ltr1_ret+1
	.nolist
;; layer 3 (e000)
	lxi h, $6000
	dad d
	sphl
;[                        ] 0000000000
;[                        ] 0000000000
;[        8               ] 0000008000
;[      8 8 88            ] 000002b000
;[       8 8              ] 0000014000
;[      8  8 8            ] 0000025000
;[       8                ] 0000010000
;[                        ] 0000000000
; stripped pairs: leading: 1 trailing: 0
	push b
	lxi h, $0002
	push h
	lxi h, $0102
	push h
	lxi h, $0100
	push h
	lxi h, 256+6
	dad sp
	sphl
	lxi h, $80b0
	push h
	lxi h, $4050
	push h
	push b
	lxi h, 256+6
	dad sp
	sphl
	push b
	push b
	push b

debris1_ltr1_ret:
	lxi sp, 0
	ret
debris1_ltr2:
	lxi h, 0
	dad sp
	shld debris1_ltr2_ret+1
	.nolist
;; layer 3 (e000)
	lxi h, $6000
	dad d
	sphl
;[                        ] 0000000000
;[                        ] 0000000000
;[         8              ] 0000004000
;[       8 8 88           ] 0000015800
;[        8 8             ] 000000a000
;[       8  8 8           ] 0000012800
;[        8               ] 0000008000
;[                        ] 0000000000
; stripped pairs: leading: 1 trailing: 0
	push b
	lxi h, $0001
	push h
	push h
	push b
	lxi h, 256+6
	dad sp
	sphl
	lxi h, $4058
	push h
	lxi h, $a028
	push h
	lxi h, $8000
	push h
	lxi h, 256+6
	dad sp
	sphl
	push b
	push b
	push b

debris1_ltr2_ret:
	lxi sp, 0
	ret
debris1_ltr3:
	lxi h, 0
	dad sp
	shld debris1_ltr3_ret+1
	.nolist
;; layer 3 (e000)
	lxi h, $6000
	dad d
	sphl
;[                        ] 0000000000
;[                        ] 0000000000
;[          8             ] 0000002000
;[        8 8 88          ] 000000ac00
;[         8 8            ] 0000005000
;[        8  8 8          ] 0000009400
;[         8              ] 0000004000
;[                        ] 0000000000
; stripped pairs: leading: 1 trailing: 0
	push b
	push b
	push b
	push b
	lxi h, 256+6
	dad sp
	sphl
	lxi h, $20ac
	push h
	lxi h, $5094
	push h
	lxi h, $4000
	push h
	lxi h, 256+6
	dad sp
	sphl
	push b
	push b
	push b

debris1_ltr3_ret:
	lxi sp, 0
	ret
debris1_ltr4:
	lxi h, 0
	dad sp
	shld debris1_ltr4_ret+1
	.nolist
;; layer 3 (e000)
	lxi h, $6000
	dad d
	sphl
;[                        ] 0000000000
;[                        ] 0000000000
;[           8            ] 0000001000
;[         8 8 88         ] 0000005600
;[          8 8           ] 0000002800
;[         8  8 8         ] 0000004a00
;[          8             ] 0000002000
;[                        ] 0000000000
; stripped pairs: leading: 1 trailing: 0
	push b
	push b
	push b
	push b
	lxi h, 256+6
	dad sp
	sphl
	lxi h, $1056
	push h
	lxi h, $284a
	push h
	lxi h, $2000
	push h
	lxi h, 256+6
	dad sp
	sphl
	push b
	push b
	push b

debris1_ltr4_ret:
	lxi sp, 0
	ret
debris1_ltr5:
	lxi h, 0
	dad sp
	shld debris1_ltr5_ret+1
	.nolist
;; layer 3 (e000)
	lxi h, $6000
	dad d
	sphl
;[                        ] 0000000000
;[                        ] 0000000000
;[            8           ] 0000000800
;[          8 8 88        ] 0000002b00
;[           8 8          ] 0000001400
;[          8  8 8        ] 0000002500
;[           8            ] 0000001000
;[                        ] 0000000000
; stripped pairs: leading: 1 trailing: 0
	push b
	push b
	push b
	push b
	lxi h, 256+6
	dad sp
	sphl
	lxi h, $082b
	push h
	lxi h, $1425
	push h
	lxi h, $1000
	push h
	lxi h, 256+6
	dad sp
	sphl
	push b
	push b
	push b

debris1_ltr5_ret:
	lxi sp, 0
	ret
debris1_ltr6:
	lxi h, 0
	dad sp
	shld debris1_ltr6_ret+1
	.nolist
;; layer 3 (e000)
	lxi h, $6000
	dad d
	sphl
;[                        ] 0000000000
;[                        ] 0000000000
;[             8          ] 0000000400
;[           8 8 88       ] 0000001580
;[            8 8         ] 0000000a00
;[           8  8 8       ] 0000001280
;[            8           ] 0000000800
;[                        ] 0000000000
; stripped pairs: leading: 1 trailing: 0
	push b
	push b
	push b
	push b
	lxi h, 256+6
	dad sp
	sphl
	lxi h, $0415
	push h
	lxi h, $0a12
	push h
	lxi h, $0800
	push h
	lxi h, 256+6
	dad sp
	sphl
	lxi h, $0080
	push h
	push h
	push b

debris1_ltr6_ret:
	lxi sp, 0
	ret
debris1_ltr7:
	lxi h, 0
	dad sp
	shld debris1_ltr7_ret+1
	.nolist
;; layer 3 (e000)
	lxi h, $6000
	dad d
	sphl
;[                        ] 0000000000
;[                        ] 0000000000
;[              8         ] 0000000200
;[            8 8 88      ] 0000000ac0
;[             8 8        ] 0000000500
;[            8  8 8      ] 0000000940
;[             8          ] 0000000400
;[                        ] 0000000000
; stripped pairs: leading: 1 trailing: 0
	push b
	push b
	push b
	push b
	lxi h, 256+6
	dad sp
	sphl
	lxi h, $020a
	push h
	lxi h, $0509
	push h
	lxi h, $0400
	push h
	lxi h, 256+6
	dad sp
	sphl
	lxi h, $00c0
	push h
	lxi h, $0040
	push h
	push b

debris1_ltr7_ret:
	lxi sp, 0
	ret
;; end of sprite group debris1
debris2_ltr_dispatch:
	dw debris2_ltr_inf
	dw debris2_ltr0
	dw debris2_ltr1
	dw debris2_ltr2
	dw debris2_ltr3
	dw debris2_ltr4
	dw debris2_ltr5
	dw debris2_ltr6
	dw debris2_ltr7
debris2_ltr_spritegroup:
debris2_ltr_inf:
	lxi h, 0
	dad sp
	shld debris2_ltr_inf_ret+1
	.nolist
;; layer 3 (e000)
	lxi h, $6000
	dad d
	sphl
;[                        ] 0000000000
;[                        ] 0000000000
;[               8        ] 0000000100
;[          8  8  8 8     ] 00000024a0
;[              8 8       ] 0000000280
;[             8    8     ] 0000000420
;[                        ] 0000000000
;[                        ] 0000000000
; stripped pairs: leading: 1 trailing: 1
	push b
	push b
	push b
	lxi h, 256+4
	dad sp
	sphl
	lxi h, $0124
	push h
	lxi h, $0204
	push h
	lxi h, 256+4
	dad sp
	sphl
	lxi h, $00a0
	push h
	lxi h, $8020
	push h

debris2_ltr_inf_ret:
	lxi sp, 0
	ret
debris2_ltr0:
	lxi h, 0
	dad sp
	shld debris2_ltr0_ret+1
	.nolist
;; layer 3 (e000)
	lxi h, $6000
	dad d
	sphl
;[                ] 0000000000
;[                ] 0000000000
;[       8        ] 0000000100
;[  8  8  8 8     ] 00000024a0
;[      8 8       ] 0000000280
;[     8    8     ] 0000000420
;[                ] 0000000000
;[                ] 0000000000
; stripped pairs: leading: 1 trailing: 1
	push b
	lxi h, $0124
	push h
	lxi h, $0204
	push h
	lxi h, 256+4
	dad sp
	sphl
	lxi h, $00a0
	push h
	lxi h, $8020
	push h

debris2_ltr0_ret:
	lxi sp, 0
	ret
debris2_ltr1:
	lxi h, 0
	dad sp
	shld debris2_ltr1_ret+1
	.nolist
;; layer 3 (e000)
	lxi h, $6000
	dad d
	sphl
;[                        ] 0000000000
;[                        ] 0000000000
;[        8               ] 0000008000
;[   8  8  8 8            ] 0000125000
;[       8 8              ] 0000014000
;[      8    8            ] 0000021000
;[                        ] 0000000000
;[                        ] 0000000000
; stripped pairs: leading: 1 trailing: 1
	push b
	lxi h, $0012
	push h
	lxi h, $0102
	push h
	lxi h, 256+4
	dad sp
	sphl
	lxi h, $8050
	push h
	lxi h, $4010
	push h
	lxi h, 256+4
	dad sp
	sphl
	push b
	push b

debris2_ltr1_ret:
	lxi sp, 0
	ret
debris2_ltr2:
	lxi h, 0
	dad sp
	shld debris2_ltr2_ret+1
	.nolist
;; layer 3 (e000)
	lxi h, $6000
	dad d
	sphl
;[                        ] 0000000000
;[                        ] 0000000000
;[         8              ] 0000004000
;[    8  8  8 8           ] 0000092800
;[        8 8             ] 000000a000
;[       8    8           ] 0000010800
;[                        ] 0000000000
;[                        ] 0000000000
; stripped pairs: leading: 1 trailing: 1
	push b
	lxi h, $0009
	push h
	lxi h, $0001
	push h
	lxi h, 256+4
	dad sp
	sphl
	lxi h, $4028
	push h
	lxi h, $a008
	push h
	lxi h, 256+4
	dad sp
	sphl
	push b
	push b

debris2_ltr2_ret:
	lxi sp, 0
	ret
debris2_ltr3:
	lxi h, 0
	dad sp
	shld debris2_ltr3_ret+1
	.nolist
;; layer 3 (e000)
	lxi h, $6000
	dad d
	sphl
;[                        ] 0000000000
;[                        ] 0000000000
;[          8             ] 0000002000
;[     8  8  8 8          ] 0000049400
;[         8 8            ] 0000005000
;[        8    8          ] 0000008400
;[                        ] 0000000000
;[                        ] 0000000000
; stripped pairs: leading: 1 trailing: 1
	push b
	lxi h, $0004
	push h
	push b
	lxi h, 256+4
	dad sp
	sphl
	lxi h, $2094
	push h
	lxi h, $5084
	push h
	lxi h, 256+4
	dad sp
	sphl
	push b
	push b

debris2_ltr3_ret:
	lxi sp, 0
	ret
debris2_ltr4:
	lxi h, 0
	dad sp
	shld debris2_ltr4_ret+1
	.nolist
;; layer 3 (e000)
	lxi h, $6000
	dad d
	sphl
;[                        ] 0000000000
;[                        ] 0000000000
;[           8            ] 0000001000
;[      8  8  8 8         ] 0000024a00
;[          8 8           ] 0000002800
;[         8    8         ] 0000004200
;[                        ] 0000000000
;[                        ] 0000000000
; stripped pairs: leading: 1 trailing: 1
	push b
	lxi h, $0002
	push h
	push b
	lxi h, 256+4
	dad sp
	sphl
	lxi h, $104a
	push h
	lxi h, $2842
	push h
	lxi h, 256+4
	dad sp
	sphl
	push b
	push b

debris2_ltr4_ret:
	lxi sp, 0
	ret
debris2_ltr5:
	lxi h, 0
	dad sp
	shld debris2_ltr5_ret+1
	.nolist
;; layer 3 (e000)
	lxi h, $6000
	dad d
	sphl
;[                        ] 0000000000
;[                        ] 0000000000
;[            8           ] 0000000800
;[       8  8  8 8        ] 0000012500
;[           8 8          ] 0000001400
;[          8    8        ] 0000002100
;[                        ] 0000000000
;[                        ] 0000000000
; stripped pairs: leading: 1 trailing: 1
	push b
	lxi h, $0001
	push h
	push b
	lxi h, 256+4
	dad sp
	sphl
	lxi h, $0825
	push h
	lxi h, $1421
	push h
	lxi h, 256+4
	dad sp
	sphl
	push b
	push b

debris2_ltr5_ret:
	lxi sp, 0
	ret
debris2_ltr6:
	lxi h, 0
	dad sp
	shld debris2_ltr6_ret+1
	.nolist
;; layer 3 (e000)
	lxi h, $6000
	dad d
	sphl
;[                        ] 0000000000
;[                        ] 0000000000
;[             8          ] 0000000400
;[        8  8  8 8       ] 0000009280
;[            8 8         ] 0000000a00
;[           8    8       ] 0000001080
;[                        ] 0000000000
;[                        ] 0000000000
; stripped pairs: leading: 1 trailing: 1
	push b
	push b
	push b
	lxi h, 256+4
	dad sp
	sphl
	lxi h, $0492
	push h
	lxi h, $0a10
	push h
	lxi h, 256+4
	dad sp
	sphl
	lxi h, $0080
	push h
	push h

debris2_ltr6_ret:
	lxi sp, 0
	ret
debris2_ltr7:
	lxi h, 0
	dad sp
	shld debris2_ltr7_ret+1
	.nolist
;; layer 3 (e000)
	lxi h, $6000
	dad d
	sphl
;[                        ] 0000000000
;[                        ] 0000000000
;[              8         ] 0000000200
;[         8  8  8 8      ] 0000004940
;[             8 8        ] 0000000500
;[            8    8      ] 0000000840
;[                        ] 0000000000
;[                        ] 0000000000
; stripped pairs: leading: 1 trailing: 1
	push b
	push b
	push b
	lxi h, 256+4
	dad sp
	sphl
	lxi h, $0249
	push h
	lxi h, $0508
	push h
	lxi h, 256+4
	dad sp
	sphl
	lxi h, $0040
	push h
	push h

debris2_ltr7_ret:
	lxi sp, 0
	ret
;; end of sprite group debris2
debris3_ltr_dispatch:
	dw debris3_ltr_inf
	dw debris3_ltr0
	dw debris3_ltr1
	dw debris3_ltr2
	dw debris3_ltr3
	dw debris3_ltr4
	dw debris3_ltr5
	dw debris3_ltr6
	dw debris3_ltr7
debris3_ltr_spritegroup:
debris3_ltr_inf:
	lxi h, 0
	dad sp
	shld debris3_ltr_inf_ret+1
	.nolist
;; layer 3 (e000)
	lxi h, $6000
	dad d
	sphl
;[                        ] 0000000000
;[            8           ] 0000000800
;[               8     8  ] 0000000104
;[          8  8    8     ] 0000002420
;[                8       ] 0000000080
;[             8    8     ] 0000000420
;[                        ] 0000000000
;[                        ] 0000000000
; stripped pairs: leading: 0 trailing: 1
	push b
	push b
	push b
	lxi h, 256+6
	dad sp
	sphl
	lxi h, $0008
	push h
	lxi h, $0124
	push h
	lxi h, $0004
	push h
	lxi h, 256+6
	dad sp
	sphl
	push b
	lxi h, $0420
	push h
	lxi h, $8020
	push h

debris3_ltr_inf_ret:
	lxi sp, 0
	ret
debris3_ltr0:
	lxi h, 0
	dad sp
	shld debris3_ltr0_ret+1
	.nolist
;; layer 3 (e000)
	lxi h, $6000
	dad d
	sphl
;[                ] 0000000000
;[    8           ] 0000000800
;[       8     8  ] 0000000104
;[  8  8    8     ] 0000002420
;[        8       ] 0000000080
;[     8    8     ] 0000000420
;[                ] 0000000000
;[                ] 0000000000
; stripped pairs: leading: 0 trailing: 1
	lxi h, $0008
	push h
	lxi h, $0124
	push h
	lxi h, $0004
	push h
	lxi h, 256+6
	dad sp
	sphl
	push b
	lxi h, $0420
	push h
	lxi h, $8020
	push h

debris3_ltr0_ret:
	lxi sp, 0
	ret
debris3_ltr1:
	lxi h, 0
	dad sp
	shld debris3_ltr1_ret+1
	.nolist
;; layer 3 (e000)
	lxi h, $6000
	dad d
	sphl
;[                        ] 0000000000
;[     8                  ] 0000040000
;[        8     8         ] 0000008200
;[   8  8    8            ] 0000121000
;[         8              ] 0000004000
;[      8    8            ] 0000021000
;[                        ] 0000000000
;[                        ] 0000000000
; stripped pairs: leading: 0 trailing: 1
	lxi h, $0004
	push h
	lxi h, $0012
	push h
	lxi h, $0002
	push h
	lxi h, 256+6
	dad sp
	sphl
	push b
	lxi h, $8210
	push h
	lxi h, $4010
	push h
	lxi h, 256+6
	dad sp
	sphl
	push b
	push b
	push b

debris3_ltr1_ret:
	lxi sp, 0
	ret
debris3_ltr2:
	lxi h, 0
	dad sp
	shld debris3_ltr2_ret+1
	.nolist
;; layer 3 (e000)
	lxi h, $6000
	dad d
	sphl
;[                        ] 0000000000
;[      8                 ] 0000020000
;[         8     8        ] 0000004100
;[    8  8    8           ] 0000090800
;[          8             ] 0000002000
;[       8    8           ] 0000010800
;[                        ] 0000000000
;[                        ] 0000000000
; stripped pairs: leading: 0 trailing: 1
	lxi h, $0002
	push h
	lxi h, $0009
	push h
	lxi h, $0001
	push h
	lxi h, 256+6
	dad sp
	sphl
	push b
	lxi h, $4108
	push h
	lxi h, $2008
	push h
	lxi h, 256+6
	dad sp
	sphl
	push b
	push b
	push b

debris3_ltr2_ret:
	lxi sp, 0
	ret
debris3_ltr3:
	lxi h, 0
	dad sp
	shld debris3_ltr3_ret+1
	.nolist
;; layer 3 (e000)
	lxi h, $6000
	dad d
	sphl
;[                        ] 0000000000
;[       8                ] 0000010000
;[          8     8       ] 0000002080
;[     8  8    8          ] 0000048400
;[           8            ] 0000001000
;[        8    8          ] 0000008400
;[                        ] 0000000000
;[                        ] 0000000000
; stripped pairs: leading: 0 trailing: 1
	lxi h, $0001
	push h
	lxi h, $0004
	push h
	push b
	lxi h, 256+6
	dad sp
	sphl
	push b
	lxi h, $2084
	push h
	lxi h, $1084
	push h
	lxi h, 256+6
	dad sp
	sphl
	push b
	lxi h, $8000
	push h
	push b

debris3_ltr3_ret:
	lxi sp, 0
	ret
debris3_ltr4:
	lxi h, 0
	dad sp
	shld debris3_ltr4_ret+1
	.nolist
;; layer 3 (e000)
	lxi h, $6000
	dad d
	sphl
;[                        ] 0000000000
;[        8               ] 0000008000
;[           8     8      ] 0000001040
;[      8  8    8         ] 0000024200
;[            8           ] 0000000800
;[         8    8         ] 0000004200
;[                        ] 0000000000
;[                        ] 0000000000
; stripped pairs: leading: 0 trailing: 1
	push b
	lxi h, $0002
	push h
	push b
	lxi h, 256+6
	dad sp
	sphl
	lxi h, $0080
	push h
	lxi h, $1042
	push h
	lxi h, $0842
	push h
	lxi h, 256+6
	dad sp
	sphl
	push b
	lxi h, $4000
	push h
	push b

debris3_ltr4_ret:
	lxi sp, 0
	ret
debris3_ltr5:
	lxi h, 0
	dad sp
	shld debris3_ltr5_ret+1
	.nolist
;; layer 3 (e000)
	lxi h, $6000
	dad d
	sphl
;[                        ] 0000000000
;[         8              ] 0000004000
;[            8     8     ] 0000000820
;[       8  8    8        ] 0000012100
;[             8          ] 0000000400
;[          8    8        ] 0000002100
;[                        ] 0000000000
;[                        ] 0000000000
; stripped pairs: leading: 0 trailing: 1
	push b
	lxi h, $0001
	push h
	push b
	lxi h, 256+6
	dad sp
	sphl
	lxi h, $0040
	push h
	lxi h, $0821
	push h
	lxi h, $0421
	push h
	lxi h, 256+6
	dad sp
	sphl
	push b
	lxi h, $2000
	push h
	push b

debris3_ltr5_ret:
	lxi sp, 0
	ret
debris3_ltr6:
	lxi h, 0
	dad sp
	shld debris3_ltr6_ret+1
	.nolist
;; layer 3 (e000)
	lxi h, $6000
	dad d
	sphl
;[                        ] 0000000000
;[          8             ] 0000002000
;[             8     8    ] 0000000410
;[        8  8    8       ] 0000009080
;[              8         ] 0000000200
;[           8    8       ] 0000001080
;[                        ] 0000000000
;[                        ] 0000000000
; stripped pairs: leading: 0 trailing: 1
	push b
	push b
	push b
	lxi h, 256+6
	dad sp
	sphl
	lxi h, $0020
	push h
	lxi h, $0490
	push h
	lxi h, $0210
	push h
	lxi h, 256+6
	dad sp
	sphl
	push b
	lxi h, $1080
	push h
	lxi h, $0080
	push h

debris3_ltr6_ret:
	lxi sp, 0
	ret
debris3_ltr7:
	lxi h, 0
	dad sp
	shld debris3_ltr7_ret+1
	.nolist
;; layer 3 (e000)
	lxi h, $6000
	dad d
	sphl
;[                        ] 0000000000
;[           8            ] 0000001000
;[              8     8   ] 0000000208
;[         8  8    8      ] 0000004840
;[               8        ] 0000000100
;[            8    8      ] 0000000840
;[                        ] 0000000000
;[                        ] 0000000000
; stripped pairs: leading: 0 trailing: 1
	push b
	push b
	push b
	lxi h, 256+6
	dad sp
	sphl
	lxi h, $0010
	push h
	lxi h, $0248
	push h
	lxi h, $0108
	push h
	lxi h, 256+6
	dad sp
	sphl
	push b
	lxi h, $0840
	push h
	lxi h, $0040
	push h

debris3_ltr7_ret:
	lxi sp, 0
	ret
;; end of sprite group debris3
debris4_ltr_dispatch:
	dw debris4_ltr_inf
	dw debris4_ltr0
	dw debris4_ltr1
	dw debris4_ltr2
	dw debris4_ltr3
	dw debris4_ltr4
	dw debris4_ltr5
	dw debris4_ltr6
	dw debris4_ltr7
debris4_ltr_spritegroup:
debris4_ltr_inf:
	lxi h, 0
	dad sp
	shld debris4_ltr_inf_ret+1
	.nolist
;; layer 3 (e000)
	lxi h, $6000
	dad d
	sphl
;[           8            ] 0000001000
;[                  8     ] 0000000020
;[               8     8  ] 0000000104
;[        8   8           ] 0000008800
;[                8   8   ] 0000000088
;[                        ] 0000000000
;[           8       8    ] 0000001010
;[                        ] 0000000000
; stripped pairs: leading: 0 trailing: 0
	push b
	push b
	push b
	push b
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $1000
	push h
	lxi h, $0188
	push h
	push b
	lxi h, $1000
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $0020
	push h
	lxi h, $0400
	push h
	lxi h, $8800
	push h
	lxi h, $1000
	push h

debris4_ltr_inf_ret:
	lxi sp, 0
	ret
debris4_ltr0:
	lxi h, 0
	dad sp
	shld debris4_ltr0_ret+1
	.nolist
;; layer 3 (e000)
	lxi h, $6000
	dad d
	sphl
;[   8            ] 0000001000
;[          8     ] 0000000020
;[       8     8  ] 0000000104
;[8   8           ] 0000008800
;[        8   8   ] 0000000088
;[                ] 0000000000
;[   8       8    ] 0000001010
;[                ] 0000000000
; stripped pairs: leading: 0 trailing: 0
	lxi h, $1000
	push h
	lxi h, $0188
	push h
	push b
	lxi h, $1000
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $0020
	push h
	lxi h, $0400
	push h
	lxi h, $8800
	push h
	lxi h, $1000
	push h

debris4_ltr0_ret:
	lxi sp, 0
	ret
debris4_ltr1:
	lxi h, 0
	dad sp
	shld debris4_ltr1_ret+1
	.nolist
;; layer 3 (e000)
	lxi h, $6000
	dad d
	sphl
;[    8                   ] 0000080000
;[           8            ] 0000001000
;[        8     8         ] 0000008200
;[ 8   8                  ] 0000440000
;[         8   8          ] 0000004400
;[                        ] 0000000000
;[    8       8           ] 0000080800
;[                        ] 0000000000
; stripped pairs: leading: 0 trailing: 0
	lxi h, $0800
	push h
	lxi h, $0044
	push h
	push b
	lxi h, $0800
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $0010
	push h
	lxi h, $8200
	push h
	lxi h, $4400
	push h
	lxi h, $0800
	push h
	lxi h, 256+8
	dad sp
	sphl
	push b
	push b
	push b
	push b

debris4_ltr1_ret:
	lxi sp, 0
	ret
debris4_ltr2:
	lxi h, 0
	dad sp
	shld debris4_ltr2_ret+1
	.nolist
;; layer 3 (e000)
	lxi h, $6000
	dad d
	sphl
;[     8                  ] 0000040000
;[            8           ] 0000000800
;[         8     8        ] 0000004100
;[  8   8                 ] 0000220000
;[          8   8         ] 0000002200
;[                        ] 0000000000
;[     8       8          ] 0000040400
;[                        ] 0000000000
; stripped pairs: leading: 0 trailing: 0
	lxi h, $0400
	push h
	lxi h, $0022
	push h
	push b
	lxi h, $0400
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $0008
	push h
	lxi h, $4100
	push h
	lxi h, $2200
	push h
	lxi h, $0400
	push h
	lxi h, 256+8
	dad sp
	sphl
	push b
	push b
	push b
	push b

debris4_ltr2_ret:
	lxi sp, 0
	ret
debris4_ltr3:
	lxi h, 0
	dad sp
	shld debris4_ltr3_ret+1
	.nolist
;; layer 3 (e000)
	lxi h, $6000
	dad d
	sphl
;[      8                 ] 0000020000
;[             8          ] 0000000400
;[          8     8       ] 0000002080
;[   8   8                ] 0000110000
;[           8   8        ] 0000001100
;[                        ] 0000000000
;[      8       8         ] 0000020200
;[                        ] 0000000000
; stripped pairs: leading: 0 trailing: 0
	lxi h, $0200
	push h
	lxi h, $0011
	push h
	push b
	lxi h, $0200
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $0004
	push h
	lxi h, $2000
	push h
	lxi h, $1100
	push h
	lxi h, $0200
	push h
	lxi h, 256+8
	dad sp
	sphl
	push b
	lxi h, $8000
	push h
	push b
	push b

debris4_ltr3_ret:
	lxi sp, 0
	ret
debris4_ltr4:
	lxi h, 0
	dad sp
	shld debris4_ltr4_ret+1
	.nolist
;; layer 3 (e000)
	lxi h, $6000
	dad d
	sphl
;[       8                ] 0000010000
;[              8         ] 0000000200
;[           8     8      ] 0000001040
;[    8   8               ] 0000088000
;[            8   8       ] 0000000880
;[                        ] 0000000000
;[       8       8        ] 0000010100
;[                        ] 0000000000
; stripped pairs: leading: 0 trailing: 0
	lxi h, $0100
	push h
	lxi h, $0008
	push h
	push b
	lxi h, $0100
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $0002
	push h
	lxi h, $1080
	push h
	lxi h, $0800
	push h
	lxi h, $0100
	push h
	lxi h, 256+8
	dad sp
	sphl
	push b
	lxi h, $4000
	push h
	lxi h, $8000
	push h
	push b

debris4_ltr4_ret:
	lxi sp, 0
	ret
debris4_ltr5:
	lxi h, 0
	dad sp
	shld debris4_ltr5_ret+1
	.nolist
;; layer 3 (e000)
	lxi h, $6000
	dad d
	sphl
;[        8               ] 0000008000
;[               8        ] 0000000100
;[            8     8     ] 0000000820
;[     8   8              ] 0000044000
;[             8   8      ] 0000000440
;[                        ] 0000000000
;[        8       8       ] 0000008080
;[                        ] 0000000000
; stripped pairs: leading: 0 trailing: 0
	push b
	lxi h, $0004
	push h
	push b
	push b
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $8001
	push h
	lxi h, $0840
	push h
	lxi h, $0400
	push h
	lxi h, $8000
	push h
	lxi h, 256+8
	dad sp
	sphl
	push b
	lxi h, $2000
	push h
	lxi h, $4000
	push h
	lxi h, $8000
	push h

debris4_ltr5_ret:
	lxi sp, 0
	ret
debris4_ltr6:
	lxi h, 0
	dad sp
	shld debris4_ltr6_ret+1
	.nolist
;; layer 3 (e000)
	lxi h, $6000
	dad d
	sphl
;[         8              ] 0000004000
;[                8       ] 0000000080
;[             8     8    ] 0000000410
;[      8   8             ] 0000022000
;[              8   8     ] 0000000220
;[                        ] 0000000000
;[         8       8      ] 0000004040
;[                        ] 0000000000
; stripped pairs: leading: 0 trailing: 0
	push b
	lxi h, $0002
	push h
	push b
	push b
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $4000
	push h
	lxi h, $0420
	push h
	lxi h, $0200
	push h
	lxi h, $4000
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $0080
	push h
	lxi h, $1000
	push h
	lxi h, $2000
	push h
	lxi h, $4000
	push h

debris4_ltr6_ret:
	lxi sp, 0
	ret
debris4_ltr7:
	lxi h, 0
	dad sp
	shld debris4_ltr7_ret+1
	.nolist
;; layer 3 (e000)
	lxi h, $6000
	dad d
	sphl
;[          8             ] 0000002000
;[                 8      ] 0000000040
;[              8     8   ] 0000000208
;[       8   8            ] 0000011000
;[               8   8    ] 0000000110
;[                        ] 0000000000
;[          8       8     ] 0000002020
;[                        ] 0000000000
; stripped pairs: leading: 0 trailing: 0
	push b
	lxi h, $0001
	push h
	push b
	push b
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $2000
	push h
	lxi h, $0210
	push h
	lxi h, $0100
	push h
	lxi h, $2000
	push h
	lxi h, 256+8
	dad sp
	sphl
	lxi h, $0040
	push h
	lxi h, $0800
	push h
	lxi h, $1000
	push h
	lxi h, $2000
	push h

debris4_ltr7_ret:
	lxi sp, 0
	ret
;; end of sprite group debris4
char_0_ltr_spritegroup:
char_0_ltr_inf:
  ; (shift -1 skipped)
char_0_ltr0:
	lxi b, $ff
	mov l, e
	mvi a, $40
	add d
	mov h, a
;; white text
	dcr l
	mov m, c
	dcr l
	mov m, c
	dcr l
	mov m, c
	dcr l
	mov m, c
	dcr l
	mov m, c
	dcr l
	mov m, c
	dcr l
	mov m, c
	dcr l
	mov m, b
	dcr l
	mov m, b

;; Mask layer 3 (e000)
	mvi a, $60
	add d
	mov h, a
	mov l, e
	dcr l
	mvi m, $e3
	dcr l
	mvi m, $d9
	dcr l
	mvi m, $bc
	dcr l
	mvi m, $bc
	dcr l
	mvi m, $bc
	dcr l
	mvi m, $d9
	dcr l
	mvi m, $e3
	dcr l
	mov m, c
	dcr l
	mov m, c

	ret
char_0_ltr1:
  ; (shift 1 skipped)
char_0_ltr2:
  ; (shift 2 skipped)
char_0_ltr3:
  ; (shift 3 skipped)
char_0_ltr4:
  ; (shift 4 skipped)
char_0_ltr5:
  ; (shift 5 skipped)
char_0_ltr6:
  ; (shift 6 skipped)
char_0_ltr7:
  ; (shift 7 skipped)
;; end of sprite group char_0
char_1_ltr_spritegroup:
char_1_ltr_inf:
  ; (shift -1 skipped)
char_1_ltr0:
	lxi b, $ff
	mov l, e
	mvi a, $40
	add d
	mov h, a
;; white text
	dcr l
	mov m, c
	dcr l
	mov m, c
	dcr l
	mov m, c
	dcr l
	mov m, c
	dcr l
	mov m, c
	dcr l
	mov m, c
	dcr l
	mov m, c
	dcr l
	mov m, b
	dcr l
	mov m, b

;; Mask layer 3 (e000)
	mvi a, $60
	add d
	mov h, a
	mov l, e
	dcr l
	mvi m, $f3
	dcr l
	mvi m, $e3
	dcr l
	mvi m, $f3
	dcr l
	mvi m, $f3
	dcr l
	mvi m, $f3
	dcr l
	mvi m, $f3
	dcr l
	mvi m, $e1
	dcr l
	mov m, c
	dcr l
	mov m, c

	ret
char_1_ltr1:
  ; (shift 1 skipped)
char_1_ltr2:
  ; (shift 2 skipped)
char_1_ltr3:
  ; (shift 3 skipped)
char_1_ltr4:
  ; (shift 4 skipped)
char_1_ltr5:
  ; (shift 5 skipped)
char_1_ltr6:
  ; (shift 6 skipped)
char_1_ltr7:
  ; (shift 7 skipped)
;; end of sprite group char_1
char_2_ltr_spritegroup:
char_2_ltr_inf:
  ; (shift -1 skipped)
char_2_ltr0:
	lxi b, $ff
	mov l, e
	mvi a, $40
	add d
	mov h, a
;; white text
	dcr l
	mov m, c
	dcr l
	mov m, c
	dcr l
	mov m, c
	dcr l
	mov m, c
	dcr l
	mov m, c
	dcr l
	mov m, c
	dcr l
	mov m, c
	dcr l
	mov m, b
	dcr l
	mov m, b

;; Mask layer 3 (e000)
	mvi a, $60
	add d
	mov h, a
	mov l, e
	dcr l
	mvi m, $e1
	dcr l
	mvi m, $dc
	dcr l
	mvi m, $fc
	dcr l
	mvi m, $f8
	dcr l
	mvi m, $e3
	dcr l
	mvi m, $cf
	dcr l
	mvi m, $c0
	dcr l
	mov m, c
	dcr l
	mov m, c

	ret
char_2_ltr1:
  ; (shift 1 skipped)
char_2_ltr2:
  ; (shift 2 skipped)
char_2_ltr3:
  ; (shift 3 skipped)
char_2_ltr4:
  ; (shift 4 skipped)
char_2_ltr5:
  ; (shift 5 skipped)
char_2_ltr6:
  ; (shift 6 skipped)
char_2_ltr7:
  ; (shift 7 skipped)
;; end of sprite group char_2
char_3_ltr_spritegroup:
char_3_ltr_inf:
  ; (shift -1 skipped)
char_3_ltr0:
	lxi b, $ff
	mov l, e
	mvi a, $40
	add d
	mov h, a
;; white text
	dcr l
	mov m, c
	dcr l
	mov m, c
	dcr l
	mov m, c
	dcr l
	mov m, c
	dcr l
	mov m, c
	dcr l
	mov m, c
	dcr l
	mov m, c
	dcr l
	mov m, b
	dcr l
	mov m, b

;; Mask layer 3 (e000)
	mvi a, $60
	add d
	mov h, a
	mov l, e
	dcr l
	mvi m, $c0
	dcr l
	mvi m, $de
	dcr l
	mvi m, $fd
	dcr l
	mvi m, $f0
	dcr l
	mvi m, $fc
	dcr l
	mvi m, $dc
	dcr l
	mvi m, $e1
	dcr l
	mov m, c
	dcr l
	mov m, c

	ret
char_3_ltr1:
  ; (shift 1 skipped)
char_3_ltr2:
  ; (shift 2 skipped)
char_3_ltr3:
  ; (shift 3 skipped)
char_3_ltr4:
  ; (shift 4 skipped)
char_3_ltr5:
  ; (shift 5 skipped)
char_3_ltr6:
  ; (shift 6 skipped)
char_3_ltr7:
  ; (shift 7 skipped)
;; end of sprite group char_3
char_4_ltr_spritegroup:
char_4_ltr_inf:
  ; (shift -1 skipped)
char_4_ltr0:
	lxi b, $ff
	mov l, e
	mvi a, $40
	add d
	mov h, a
;; white text
	dcr l
	mov m, c
	dcr l
	mov m, c
	dcr l
	mov m, c
	dcr l
	mov m, c
	dcr l
	mov m, c
	dcr l
	mov m, c
	dcr l
	mov m, c
	dcr l
	mov m, b
	dcr l
	mov m, b

;; Mask layer 3 (e000)
	mvi a, $60
	add d
	mov h, a
	mov l, e
	dcr l
	mvi m, $f9
	dcr l
	mvi m, $f1
	dcr l
	mvi m, $e9
	dcr l
	mvi m, $d9
	dcr l
	mvi m, $80
	dcr l
	mvi m, $f9
	dcr l
	mvi m, $f9
	dcr l
	mov m, c
	dcr l
	mov m, c

	ret
char_4_ltr1:
  ; (shift 1 skipped)
char_4_ltr2:
  ; (shift 2 skipped)
char_4_ltr3:
  ; (shift 3 skipped)
char_4_ltr4:
  ; (shift 4 skipped)
char_4_ltr5:
  ; (shift 5 skipped)
char_4_ltr6:
  ; (shift 6 skipped)
char_4_ltr7:
  ; (shift 7 skipped)
;; end of sprite group char_4
char_5_ltr_spritegroup:
char_5_ltr_inf:
  ; (shift -1 skipped)
char_5_ltr0:
	lxi b, $ff
	mov l, e
	mvi a, $40
	add d
	mov h, a
;; white text
	dcr l
	mov m, c
	dcr l
	mov m, c
	dcr l
	mov m, c
	dcr l
	mov m, c
	dcr l
	mov m, c
	dcr l
	mov m, c
	dcr l
	mov m, c
	dcr l
	mov m, b
	dcr l
	mov m, b

;; Mask layer 3 (e000)
	mvi a, $60
	add d
	mov h, a
	mov l, e
	dcr l
	mvi m, $81
	dcr l
	mvi m, $bf
	dcr l
	mvi m, $81
	dcr l
	mvi m, $fc
	dcr l
	mvi m, $fc
	dcr l
	mvi m, $bc
	dcr l
	mvi m, $c3
	dcr l
	mov m, c
	dcr l
	mov m, c

	ret
char_5_ltr1:
  ; (shift 1 skipped)
char_5_ltr2:
  ; (shift 2 skipped)
char_5_ltr3:
  ; (shift 3 skipped)
char_5_ltr4:
  ; (shift 4 skipped)
char_5_ltr5:
  ; (shift 5 skipped)
char_5_ltr6:
  ; (shift 6 skipped)
char_5_ltr7:
  ; (shift 7 skipped)
;; end of sprite group char_5
char_6_ltr_spritegroup:
char_6_ltr_inf:
  ; (shift -1 skipped)
char_6_ltr0:
	lxi b, $ff
	mov l, e
	mvi a, $40
	add d
	mov h, a
;; white text
	dcr l
	mov m, c
	dcr l
	mov m, c
	dcr l
	mov m, c
	dcr l
	mov m, c
	dcr l
	mov m, c
	dcr l
	mov m, c
	dcr l
	mov m, c
	dcr l
	mov m, b
	dcr l
	mov m, b

;; Mask layer 3 (e000)
	mvi a, $60
	add d
	mov h, a
	mov l, e
	dcr l
	mvi m, $fb
	dcr l
	mvi m, $e7
	dcr l
	mvi m, $cf
	dcr l
	mvi m, $93
	dcr l
	mvi m, $bc
	dcr l
	mvi m, $9c
	dcr l
	mvi m, $c1
	dcr l
	mov m, c
	dcr l
	mov m, c

	ret
char_6_ltr1:
  ; (shift 1 skipped)
char_6_ltr2:
  ; (shift 2 skipped)
char_6_ltr3:
  ; (shift 3 skipped)
char_6_ltr4:
  ; (shift 4 skipped)
char_6_ltr5:
  ; (shift 5 skipped)
char_6_ltr6:
  ; (shift 6 skipped)
char_6_ltr7:
  ; (shift 7 skipped)
;; end of sprite group char_6
char_7_ltr_spritegroup:
char_7_ltr_inf:
  ; (shift -1 skipped)
char_7_ltr0:
	lxi b, $ff
	mov l, e
	mvi a, $40
	add d
	mov h, a
;; white text
	dcr l
	mov m, c
	dcr l
	mov m, c
	dcr l
	mov m, c
	dcr l
	mov m, c
	dcr l
	mov m, c
	dcr l
	mov m, c
	dcr l
	mov m, c
	dcr l
	mov m, b
	dcr l
	mov m, b

;; Mask layer 3 (e000)
	mvi a, $60
	add d
	mov h, a
	mov l, e
	dcr l
	mvi m, $80
	dcr l
	mvi m, $fe
	dcr l
	mvi m, $fe
	dcr l
	mvi m, $f9
	dcr l
	mvi m, $f3
	dcr l
	mvi m, $f3
	dcr l
	mvi m, $f3
	dcr l
	mov m, c
	dcr l
	mov m, c

	ret
char_7_ltr1:
  ; (shift 1 skipped)
char_7_ltr2:
  ; (shift 2 skipped)
char_7_ltr3:
  ; (shift 3 skipped)
char_7_ltr4:
  ; (shift 4 skipped)
char_7_ltr5:
  ; (shift 5 skipped)
char_7_ltr6:
  ; (shift 6 skipped)
char_7_ltr7:
  ; (shift 7 skipped)
;; end of sprite group char_7
char_8_ltr_spritegroup:
char_8_ltr_inf:
  ; (shift -1 skipped)
char_8_ltr0:
	lxi b, $ff
	mov l, e
	mvi a, $40
	add d
	mov h, a
;; white text
	dcr l
	mov m, c
	dcr l
	mov m, c
	dcr l
	mov m, c
	dcr l
	mov m, c
	dcr l
	mov m, c
	dcr l
	mov m, c
	dcr l
	mov m, c
	dcr l
	mov m, b
	dcr l
	mov m, b

;; Mask layer 3 (e000)
	mvi a, $60
	add d
	mov h, a
	mov l, e
	dcr l
	mvi m, $e3
	dcr l
	mvi m, $d9
	dcr l
	mvi m, $d9
	dcr l
	mvi m, $c1
	dcr l
	mvi m, $bc
	dcr l
	mvi m, $bc
	dcr l
	mvi m, $c1
	dcr l
	mov m, c
	dcr l
	mov m, c

	ret
char_8_ltr1:
  ; (shift 1 skipped)
char_8_ltr2:
  ; (shift 2 skipped)
char_8_ltr3:
  ; (shift 3 skipped)
char_8_ltr4:
  ; (shift 4 skipped)
char_8_ltr5:
  ; (shift 5 skipped)
char_8_ltr6:
  ; (shift 6 skipped)
char_8_ltr7:
  ; (shift 7 skipped)
;; end of sprite group char_8
char_9_ltr_spritegroup:
char_9_ltr_inf:
  ; (shift -1 skipped)
char_9_ltr0:
	lxi b, $ff
	mov l, e
	mvi a, $40
	add d
	mov h, a
;; white text
	dcr l
	mov m, c
	dcr l
	mov m, c
	dcr l
	mov m, c
	dcr l
	mov m, c
	dcr l
	mov m, c
	dcr l
	mov m, c
	dcr l
	mov m, c
	dcr l
	mov m, b
	dcr l
	mov m, b

;; Mask layer 3 (e000)
	mvi a, $60
	add d
	mov h, a
	mov l, e
	dcr l
	mvi m, $e1
	dcr l
	mvi m, $dc
	dcr l
	mvi m, $dc
	dcr l
	mvi m, $e4
	dcr l
	mvi m, $f9
	dcr l
	mvi m, $f3
	dcr l
	mvi m, $ef
	dcr l
	mov m, c
	dcr l
	mov m, c

	ret
char_9_ltr1:
  ; (shift 1 skipped)
char_9_ltr2:
  ; (shift 2 skipped)
char_9_ltr3:
  ; (shift 3 skipped)
char_9_ltr4:
  ; (shift 4 skipped)
char_9_ltr5:
  ; (shift 5 skipped)
char_9_ltr6:
  ; (shift 6 skipped)
char_9_ltr7:
  ; (shift 7 skipped)
;; end of sprite group char_9
char_x_ltr_spritegroup:
char_x_ltr_inf:
  ; (shift -1 skipped)
char_x_ltr0:
	lxi b, $ff
	mov l, e
	mvi a, $40
	add d
	mov h, a
;; white text
	dcr l
	mov m, c
	dcr l
	mov m, c
	dcr l
	mov m, c
	dcr l
	mov m, c
	dcr l
	mov m, c
	dcr l
	mov m, c
	dcr l
	mov m, c
	dcr l
	mov m, b
	dcr l
	mov m, b

;; Mask layer 3 (e000)
	mvi a, $60
	add d
	mov h, a
	mov l, e
	dcr l
	mvi m, $e7
	dcr l
	mvi m, $c3
	dcr l
	mvi m, $c3
	dcr l
	mvi m, $e7
	dcr l
	mvi m, $e7
	dcr l
	mov m, c
	dcr l
	mvi m, $e7
	dcr l
	mov m, c
	dcr l
	mov m, c

	ret
char_x_ltr1:
  ; (shift 1 skipped)
char_x_ltr2:
  ; (shift 2 skipped)
char_x_ltr3:
  ; (shift 3 skipped)
char_x_ltr4:
  ; (shift 4 skipped)
char_x_ltr5:
  ; (shift 5 skipped)
char_x_ltr6:
  ; (shift 6 skipped)
char_x_ltr7:
  ; (shift 7 skipped)
;; end of sprite group char_x
bridgeword_ltr_spritegroup:
bridgeword_ltr_inf:
  ; (shift -1 skipped)
bridgeword_ltr0:
	lxi b, $ff
	mov l, e
	mvi a, $40
	add d
	mov h, a
;; white text
	dcr l
	mov m, c
	dcr l
	mov m, c
	dcr l
	mov m, c
	dcr l
	mov m, c
	dcr l
	mov m, c
	dcr l
	mov m, c
	dcr l
	mov m, b
	dcr l
	mov m, b
	inr h
	mov a, l
	adi 8
	mov l, a
	dcr l
	mov m, c
	dcr l
	mov m, c
	dcr l
	mov m, c
	dcr l
	mov m, c
	dcr l
	mov m, c
	dcr l
	mov m, c
	dcr l
	mov m, b
	dcr l
	mov m, b
	inr h
	mov a, l
	adi 8
	mov l, a
	dcr l
	mov m, c
	dcr l
	mov m, c
	dcr l
	mov m, c
	dcr l
	mov m, c
	dcr l
	mov m, c
	dcr l
	mov m, c
	dcr l
	mov m, b
	dcr l
	mov m, b
	inr h
	mov a, l
	adi 8
	mov l, a
	dcr l
	mov m, c
	dcr l
	mov m, c
	dcr l
	mov m, c
	dcr l
	mov m, c
	dcr l
	mov m, c
	dcr l
	mov m, c
	dcr l
	mov m, b
	dcr l
	mov m, b
	inr h
	mov a, l
	adi 8
	mov l, a
	dcr l
	mov m, c
	dcr l
	mov m, c
	dcr l
	mov m, c
	dcr l
	mov m, c
	dcr l
	mov m, c
	dcr l
	mov m, c
	dcr l
	mov m, b
	dcr l
	mov m, b

;; Mask layer 3 (e000)
	mvi a, $60
	add d
	mov h, a
	mov l, e
	dcr l
	mvi m, $87
	dcr l
	mvi m, $bb
	dcr l
	mvi m, $87
	dcr l
	mvi m, $bb
	dcr l
	mvi m, $87
	dcr l
	mov m, c
	dcr l
	mov m, c
	dcr l
	mov m, c
	inr h
	mov a, l
	adi 8
	mov l, a
	dcr l
	mvi m, $0e
	dcr l
	mvi m, $76
	dcr l
	mvi m, $0e
	dcr l
	mvi m, $76
	dcr l
	mvi m, $76
	dcr l
	mov m, c
	dcr l
	mov m, c
	dcr l
	mov m, c
	inr h
	mov a, l
	adi 8
	mov l, a
	dcr l
	mvi m, $c3
	dcr l
	mvi m, $dd
	dcr l
	mvi m, $dd
	dcr l
	mvi m, $dd
	dcr l
	mvi m, $c3
	dcr l
	mov m, c
	dcr l
	mov m, c
	dcr l
	mov m, c
	inr h
	mov a, l
	adi 8
	mov l, a
	dcr l
	mvi m, $c7
	dcr l
	mvi m, $bf
	dcr l
	mvi m, $b9
	dcr l
	mvi m, $bd
	dcr l
	mvi m, $c1
	dcr l
	mov m, c
	dcr l
	mov m, c
	dcr l
	mov m, c
	inr h
	mov a, l
	adi 8
	mov l, a
	dcr l
	mvi m, $83
	dcr l
	mvi m, $bf
	dcr l
	mvi m, $8f
	dcr l
	mvi m, $bf
	dcr l
	mvi m, $83
	dcr l
	mov m, c
	dcr l
	mov m, c
	dcr l
	mov m, c

	ret
bridgeword_ltr1:
  ; (shift 1 skipped)
bridgeword_ltr2:
  ; (shift 2 skipped)
bridgeword_ltr3:
  ; (shift 3 skipped)
bridgeword_ltr4:
  ; (shift 4 skipped)
bridgeword_ltr5:
  ; (shift 5 skipped)
bridgeword_ltr6:
  ; (shift 6 skipped)
bridgeword_ltr7:
  ; (shift 7 skipped)
;; end of sprite group bridgeword
playericon_ltr_spritegroup:
playericon_ltr_inf:
  ; (shift -1 skipped)
playericon_ltr0:
	lxi b, $ff
	mov l, e
	mvi a, $40
	add d
	mov h, a
;; white text
	dcr l
	mov m, c
	dcr l
	mov m, c
	dcr l
	mov m, c
	dcr l
	mov m, c
	dcr l
	mov m, c
	dcr l
	mov m, c
	dcr l
	mov m, b
	dcr l
	mov m, b

;; Mask layer 3 (e000)
	mvi a, $60
	add d
	mov h, a
	mov l, e
	dcr l
	mvi m, $ef
	dcr l
	mvi m, $ef
	dcr l
	mvi m, $c7
	dcr l
	mvi m, $83
	dcr l
	mvi m, $ef
	dcr l
	mvi m, $d7
	dcr l
	mov m, c
	dcr l
	mov m, c

	ret
playericon_ltr1:
  ; (shift 1 skipped)
playericon_ltr2:
  ; (shift 2 skipped)
playericon_ltr3:
  ; (shift 3 skipped)
playericon_ltr4:
  ; (shift 4 skipped)
playericon_ltr5:
  ; (shift 5 skipped)
playericon_ltr6:
  ; (shift 6 skipped)
playericon_ltr7:
  ; (shift 7 skipped)
;; end of sprite group playericon
logo2_ltr_dispatch:
	dw logo2_ltr_inf
	dw logo2_ltr0
	dw logo2_ltr1
	dw logo2_ltr2
	dw logo2_ltr3
	dw logo2_ltr4
	dw logo2_ltr5
	dw logo2_ltr6
	dw logo2_ltr7
logo2_ltr_spritegroup:
logo2_ltr_inf:
  ; (shift -1 skipped)
logo2_ltr0:
.list
;; white pixels
	dw $ff86, $ba86, $bebe, $ffff, $ffe8, $cba8, $6be8, $ffff, $ff7b, $b56e, $a06e, $ffff, $fff0, $f7f0, $f7f7, $ffff, $ffc2, $5ec2, $dec2, $ffff, $bfee, $cdad, $6de8, $fbff, $ff7f, $bfbf, $bf1f, $dfff, $ffff, $ffff, $ffff, $ffff,

logo2_ltr1:
  ; (shift 1 skipped)
logo2_ltr2:
  ; (shift 2 skipped)
logo2_ltr3:
  ; (shift 3 skipped)
logo2_ltr4:
  ; (shift 4 skipped)
logo2_ltr5:
  ; (shift 5 skipped)
logo2_ltr6:
  ; (shift 6 skipped)
logo2_ltr7:
  ; (shift 7 skipped)
;; end of sprite group logo2
logo3_ltr_dispatch:
	dw logo3_ltr_inf
	dw logo3_ltr0
	dw logo3_ltr1
	dw logo3_ltr2
	dw logo3_ltr3
	dw logo3_ltr4
	dw logo3_ltr5
	dw logo3_ltr6
	dw logo3_ltr7
logo3_ltr_spritegroup:
logo3_ltr_inf:
  ; (shift -1 skipped)
logo3_ltr0:
.list
;; white pixels
	dw $ff8d, $7d8d, $f68f, $ffff, $ffd8, $d7d7, $b778, $ffff, $ffc3, $5e47, $5fdf, $ffff, $ff1b, $fa19, $ea1b, $ffff, $ff5f, $dfdf, $df5f, $ffff, $ff1c, $eb9b, $7b0c, $ffff, $ffd0, $5e5d, $5ddd, $ffff, $ffff, $ffff, $ffff, $ffff,

logo3_ltr1:
  ; (shift 1 skipped)
logo3_ltr2:
  ; (shift 2 skipped)
logo3_ltr3:
  ; (shift 3 skipped)
logo3_ltr4:
  ; (shift 4 skipped)
logo3_ltr5:
  ; (shift 5 skipped)
logo3_ltr6:
  ; (shift 6 skipped)
logo3_ltr7:
  ; (shift 7 skipped)
;; end of sprite group logo3
.list
