*****************************
* look utx 4.3              *
*****************************

Description: The look utility displays any lines in file which contain
string as a prefix. This benchmark and its test inputs are taken from
Miller et al.'s work on fuzz testing.

Bug: segfault

Notes:
(0) look-original.c contains the original source code. look.c is a
version of look-original.c that has passed through the gcc
preprocessor. Regenerate look.c for your machine:

gcc -E look-original.c > look.c

Files:

README.txt: this file

look-cov.c: look instrumented for path information
look-original.c: original, un-preprocessed source
look.c: preprocessed source
look.c-baseline.c: CIL-processed program baseline output by modify

look.c-best.c: a repaired variant (seed=0, mut=0.06, 
good_path_factor=0.01) 
look.c-reference.debug: output from a successful run of modify (seed=0,
mut=0.06, good_path_factor=0.01).

look.c.ast:
look.c.ht: binary data needed by modify, information about program
statements

look.c.patch: a minimized repair 

look.c.goodpath:
look.c.path: a "good path" and a "bad path". Required by modify.

minimized-baseline.c: 
minimized.c: Files from the minimization process.  Baseline is a processed
version of look.c-baseline.c; minimized.c is a minimized version of some
look.c-best.c (the one in this directory, in this case).

test-bad.sh: "bad test" script. Passes t1 to the program under test and outputs
"t1" to the output file if the program terminates and produces the correct
answer, as determined by comparing output to my.t1

test-good.sh: "good tests" script. Calls variant on 5 other inputs on which
unmodified look works fine (doesn't segfault), outputs a line per passed test to
the passed in output file.

test-look.sh: script that runs modify on look on 100 deterministic seeds, copies
the .debug output to results/debug (which it creates) and the "best" solution
found for each to results/best. Some proportion of these runs should succeed,
but not necessarily all of them. PATH_TO_MODIFY must be set.

t1:
tp1:
tp2:
tp3:
tp4:
tp5: input files for tests. "Random" (taken from fuzz testing work). t1 and t1
passed together comprise the "bad" test. 

ultrix-look.patch: the repair, as a diff patch
