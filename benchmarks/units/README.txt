*****************************
* units svr 4.0 1.1         *
*****************************

Description: From the man page: "units -- conversion program." Metric units
conversion. This benchmark and its test inputs are taken from Miller et al.'s
work on fuzz testing.

Bug: Segmentation fault.

Notes: 

(0) "limit" is required; 5 seconds should suffice.

(1) units-original.c contains the original source code. units.c is a version of
units-original.c that has passed through the gcc preprocessor.  Regenerate
units.c for your machine:

    gcc -E units-original.c > units.c

Files:

README.txt: this file

bad1: bad test input

minimized-baseline.c:
minimized.c: The files from the minimization process, which creates the
patch. Baseline is some version of units.c-best.c (in this case, the version in
this directory); minimized.c is the minimized repaired version.

output.t1:
output.t2:
output.t3:
output.t4:
output.t5: Reference output for good tests.

t1:
t2:
t3:
t4:
t5: Input files for good tests. 

test-bad.sh: "bad test" script. Passes bad1 to the program under test and
outputs "t1" to the output file if the program terminates without error.

test-good.sh: "good tests" script. Calls look on 5 other inputs on which
unmodified units works fine (doesn't segfault), compares the output to the
reference outpu, and outputs a line per passed test to the passed in output
file.

test-units.sh: script that runs modify on look on 100 deterministic seeds,
copies the .debug output to results/debug (which it creates) and the "best"
solution found for each to results/best. Some proportion of these runs should
succeed, but not all of them. PATH_TO_MODIFY must be set.

units-coverage.c: units instrumented for path information
units-original.c: original, un-preprocessed source
units.c: preprocessed source
units.c-baseline.c CIL-processed program baseline output by modify
units.c-best.c: a repaired variant (seed=0, mut=0.06,
good_path_factor=0.01)
units.c-reference.debug: output from a successful run of modify (seed=0,
mut=0.06, good_path_factor=0.01) 

units.c.ast:
units.c.ht: binary data needed by modify, information about program statements

units.c.goodpath:
units.c.path: a "good path" and a "bad path". Required by modify.

units.patch: a minimized repair

unittab: config file required for units
