		; adopted from the 2600 version 
		; ref: http://pastebin.com/4V74vhk3
		; implements a 16 bit LFSR which generates a new random number:
nextRandom16:
		lhld random
		mov a, h 		; randomHi
       	rlc            
       	rlc            
       	rlc    
       	xra h
       	rlc
       	mov h, a
       	mov a, l
       	ral 
       	mov l, a
       	mov a, h
       	ral
		mov h, a
		shld random
		ret

randomNormA:
		mov c, a
		lda randomLo
randomNormA_retry:
		cmp c
		jc randomNormA_return
		rar
		jmp randomNormA_retry
randomNormA_return:
		mov c, a
		ret

random:
;randomLo:	db $3
;randomHi:	db $2
randomLo:	db $14
randomHi:	db $a8

;; rar == through carry ; rrc = just puts in carry		 
; (JTZ: randomHi is very random, randomLo is NOT when more than one bit is used,
; because: randomLo[x+1] = randomLo[x]*2 + 0/1, but randomLo is used more often,
; randomHi only for new enemy and which. This could make the game a bit predictable.)
