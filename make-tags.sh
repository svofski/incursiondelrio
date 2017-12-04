#!/usr/bin/env bash

(
./ctags.awk incursion.asm 
for f in *.inc ; do
    ./ctags.awk $f 
done
) | sort > tags

