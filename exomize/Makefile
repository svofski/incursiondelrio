all:	reloc.0100 deexo.a000

reloc.0100:	reloc.asm
	pasm reloc.asm reloc.0100 /dev/null

deexo.a000:	deexo.asm
	cpp -P deexo.asm >deexo.asm.tmp
	pasm deexo.asm.tmp $@ /dev/null
	rm -f deexo.asm.tmp

clean:
	rm -f reloc.0100 deexo.a000 *.hex
