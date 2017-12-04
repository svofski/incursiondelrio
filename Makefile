TARGET=incursion.rom
JS=js
OBJCOPY=gobjcopy
PASMDIR=../prettyasm
PASM=pasm.js
CSS=listn.css
NAV=navigate.js
NODE=node

all:	incursion

$(PASM):	$(PASMDIR)/$(PASM)
	ln -s $< .

$(CSS):	$(PASMDIR)/$(CSS)
	ln -s $< .

$(NAV):	$(PASMDIR)/$(NAV)
	ln -s $< .

ship.inc:	makesprites.py
	python makesprites.py > ship.inc

incursion:	incursion.asm ship.inc $(PASM) $(CSS) $(NAV)
	$(NODE) $(PASM) $< $@.lst.html $@.hex
	$(OBJCOPY) -I ihex $@.hex -O binary $@.rom

clean:
	rm incursion.hex incursion.rom

tags:	make-tags.sh *.asm *.inc
	./make-tags.sh

