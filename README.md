Рива Рейд для Вектора-06ц
=========================

A single-frame River Raid remake for Vector-06c home computer.

Written in 8080 assembly.

How to build
============
You need:
 * something unixy (macOS, Linux, FreeBSD) with a C compiler
 * Python 2.7 
 * Node.js and npm
 * prettyasm 
 * bin2wav
 
Steps:
 * get prettyasm: https://github.com/svofski/prettyasm
 * in prettyasm directory run ``npm install -g``
 * get bin2wav: https://github.com/svofski/bin2wav
 * in bin2wav directory run ``npm install -g``
 * in incursiondelrio directory type ``make``
 
This should produce, among other things:
 * ``incursion.rom`` - uncompressed binary
 * ``incurzion.rom`` - compressed binary
 * ``incurzion.wav`` - a loadable wav file
 * ``incursion.lst.html`` - an assembly listing 

 
Acknowledgements
================
This game does not borrow any code from River Raid by Carol Shaw. The original game was an inspriation to create this one.

Uses Exomizer 2.0 by Magnus Lind to create a compressed version of self.

Uses 8080-recompiled version of deexomizer by Ivan Gorodetsky.
