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
(2) modify operates over the cilly-combined source (atris_comb.c).

Files: 

README.txt: this file
atris-1.0.6.tar.gz: tarball of atris v1.0.6 source code

atris.patch: a minimized repair

atris_comb.c: combined source code on which modify operates.

atris_comb.c-baseline.c: CIL-processed program baseline output by modify.

atris_comb.c-best.c: a repaired variant (seed=0, mut=0.06,
good_path_factor=0.01)

atris_comb.c-reference.debug: output from a successful run of modify
(seed=5, mut=0.06, good_path_factor=0.01)

atris_comb.c.ast:
atris_comb.c.ht: binary data needed by modify, information about program
statements 

atris_comb.c.goodpath:
atris_comb.c.path: a "good path" and a "bad path". Required by modify.

atris_cov.c: atris_comb.c instrumented for path information

minimized-baseline.c: 
minimized.c: Files from the minimization process.  Baseline is a preprocessed
version of atris_comb.c-baseline.c; minimized.c is a minimized version of some
atris_comb.c-best.c.

output.bad:
output.help:
output.normal: Reference output for test cases.

test-atris.sh: script that runs modify on atris on 100 deterministic seeds,
copies the .debug output to results/debug (which it creates) and all "best"
solutions found to results/best. Some proportion of these runs should succeed,
but not necessarily all of them.  PATH_TO_MODIFY must be set.

test-bad.sh: "Bad test" script.  Sets the HOME environment variable to
a very long string (that overflows the allocated buffer), runs the
variant, and passes/outputs a line to the output file if the variant
produces the expected output and does not crash.

test-good.sh: "Good tests" script. Calls the variant normally and gets
the help output, compares to reference output, and, if the comparison
suceeds, outputs a line per passed test to the passed in output file.
