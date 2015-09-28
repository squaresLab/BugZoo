*****************************
* atris 1.0.6               *
*****************************

Description: Graphical tetris game.

Bug: Local stack buffer overflow.
http://bugs.debian.org/cgi-bin/bugreport.cgi?bug=290230

Notes: 

(0) While it is possible to get atris and atris_comb.c to compile on 64-bit
machines (using gcc's -m32 flag and the 32-bit versions of the required
libraries) no one, to our knowledge, has successfully replicated this experiment
on a 64-bit architecture. Let us know if you succeed.
(1) ldflags: -lSDL -lpthread -lSDL_ttf. 

Files: 

README.txt: this file

atris_comb.c: combined source code on which modify operates.

output.bad:
output.help:
output.normal: Reference output for test cases.

test-bad.sh: "Bad test" script.  Sets the HOME environment variable to
a very long string (that overflows the allocated buffer), runs the
variant, and passes/outputs a line to the output file if the variant
produces the expected output and does not crash.

test-good.sh: "Good tests" script. Calls the variant normally and gets
the help output, compares to reference output, and, if the comparison
suceeds, outputs a line per passed test to the passed in output file.
