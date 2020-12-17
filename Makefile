TARGET=incursion.rom
PASM=pasm
EXOMIZER=exomizer-2.0/src/exomizer
BIN2WAV=bin2wav
CC := $(or $(CC),gcc)


OBJCOPY := $(shell command -v gobjcopy 2>/dev/null)
ifndef OBJCOPY
    OBJCOPY := $(shell command -v objcopy 2>/dev/null)
endif

ifndef OBJCOPY
    $(error You need gobjcopy or objcopy) 
else
    $(info Found objcopy: $(OBJCOPY))
endif

export OBJCOPY

all:	exomizer exomize incurzion.rom incurzion.wav

.PHONY:	exomizer exomize all

exomize:
	make -C exomize

exomizer:
	make -C exomizer-2.0/src CC=gcc

ship.inc:	makesprites.py
	python makesprites.py > ship.inc

incursion.rom:	incursion.asm ship.inc collider.inc helpers.inc input.inc missile.inc palette.inc player.inc random.inc sound.inc updatenewblock.inc variables.inc wipes.inc
	$(PASM) $< $@ $(<F).lst

incurzion.exo:	incursion.rom
	$(EXOMIZER) raw $< -o $@

incurzion.rom:	incurzion.exo exomize/reloc.0100 exomize/deexo.a000
	cat exomize/reloc.0100 exomize/deexo.a000 $< >$@

incurzion.wav:	incurzion.rom
	$(BIN2WAV) $< $@

clean:
	rm -f incursion.hex incursion.rom incurzion.exo incurzion.rom incurzion.wav
	rm -f navigate.js *.css
	rm -f *.lst.html
	make -C exomize clean
	make -C exomizer-2.0/src clean

tags:	make-tags.sh *.asm *.inc
	./make-tags.sh

