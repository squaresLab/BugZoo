*****************************
* flex 2.5.4a               *
*****************************

Description: Lexical analyzer generator. Benchmark and test inputs taken from
Miller et al.'s work on fuzz testing.

Bug: segmentation fault.

Notes: 
(0) modify operates over the cilly-combined source (flex_comb.c); regenerate it
for your machine. 

Files:
README.txt: this file

flex-2.5.4a.tar.gz: original uncombined flex source code.

flex.patch: the repair, as a diff patch
flex_comb.c: Combined source file; code to which modify is applied. 

flex_comb.c-best.c: a repaired variant (seed=13, mut=0.03,
good_path_factor=0.00) 
flex_comb.c-reference.debug: output from a successful run of modify (seed=13,
mut=0.03, good_path_factor=0.00)  

flex_comb.c.goodpath: 
flex_comb.c.path: a "good path" and a "bad path". Required by modify.

flex_comb.c-baseline.c: CIL-processed program baseline output by modify. 

flex_comb.c.ast:
flex_comb.c.ht: binary data needed by modify, information about program
statements 

flex_coverage.c: flex instrumented for path information

minimized-baseline.c: 
minimized.c: Files from the minimization process, which creates the
patch. Baseline is some version of flex.c-baseline.c; minimized.c is a version
of some flex.c-best.c.

output.t1:
output.t2:
output.t3:
output.t4:
output.t5: Reference output files.

t1:
t11:
t2:
t3:
t4:
t5: Test input files. t11 is the "bad" test.

test-bad.sh: "bad test" script. Passes fuzz input t11 to the program under test
and outputs "t11" to the output file if the program terminates and does not seg
fault (create a core dump).

test-good.sh: "good tests" script. Passes 5 other fuzz test inputs to the
program under test and compares the result to the reference output. Writes a
line per passed test to the passed-in output file.

test-flex.sh: script that runs modify on flex on 100 deterministic seeds, copies
the .debug output to results/debug (which it creates) and the "best" solution
found for each to results/best. Some proportion of these runs should succeed,
but not all of them. PATH_TO_MODIFY must be set.


