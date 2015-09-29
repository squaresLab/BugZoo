*****************************
* uniq utx 4.3              *
*****************************

Description: From the man page: the uniq utility reads the specified input_file
comparig adjacent lines and writes a copy of each unique input line to the
output file. This benchmark and its test inputs are taken from Miller et al.'s
work on fuzz testing.

Bug: segfault

Notes:
(0) modify operates on uniq.i, the result of running uniq.c through the gcc
preprocessor: 

	gcc -E uniq.c > uniq.i

Files:
README.txt: this file

minimized-baseline.c: 
minimized.c: Files from the minimization process.  Baseline is a processed
version of uniq.i-baseline.c; minimized.c is a minimized version of some
uniq.i-best.c.

t1:
t2:
t4:
t5:
tp1:
tp2: input files for tests. "Random" (taken from fuzz testing
work). t5 is the "bad" input.

test-bad.sh: "bad test" script. Passes t5 to the program under test
and outputs "t6" to the output file if the program terminates and
produces the correct answer, as determined by comparing output to
my.bad1

test-good.sh: "good tests" script. Calls uniq on 5 other inputs on which it
works fine (doesn't segfault), compares them to the reference output files, and
outputs a line per passed test to the passed in output file.

test-uniq.sh: script that runs modify on uniq on 100 deterministic seeds, copies
the .debug output to results/debug (which it creates) and the "best" solution
found for each to results/best. Some proportion of these runs should succeed,
but not all of them. PATH_TO_MODIFY must be set.

uniq-cov.c: uniq instrumented for path information
uniq.c: original source
uniq.i: preprocessed source
uniq.i-baseline.c: CIL-processed program baseline output by modify
uniq.i-best.c: a repaired version. Seed = 0, good_path_factor=0.01, mut=0.06 

uniq.i-reference.debug: output from a successful run of modify (seed 0,
mut=0.06, gpf=0.01). 

uniq.i.ast:
uniq.i.ht: binary data needed by modify, information about program statements

uniq.i.goodpath:
uniq.i.path: a "good path" and a "bad path". Required by modify.

uniq.patch: a minimized repair
