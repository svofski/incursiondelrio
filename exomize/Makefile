all:	reloc.0100 deexo.a000

reloc.0100:	reloc.asm
	pasm reloc.asm /dev/null reloc.hex
	$(OBJCOPY) -I ihex reloc.hex -O binary $@

deexo.a000:	deexo.asm
	cpp -P deexo.asm >deexo.asm.tmp
	pasm deexo.asm.tmp /dev/null deexo.hex
	$(OBJCOPY) -I ihex deexo.hex -O binary $@
	rm -f deexo.asm.tmp

clean:
	rm -f reloc.0100 deexo.a000 *.hex
