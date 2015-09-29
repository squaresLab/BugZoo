*****************************
* ident 1.9.1               *
*****************************

Description: Unix source code processing utility. This benchmark and its test
inputs are taken from Miller et al.'s work on fuzz testing.

Bug: Infinite loop.

Notes:
(0) modify operates over the cilly-combined source (indent_comb.c); regenerate
it for your machine.

Files:

README.txt

indent-1.9.1.tar.gz: original indent source code

indent.patch: the repair, as a diff patch. 

indent_comb.c: combined source code on which modify operates

indent_comb.c-best.c: a repaired variant (seed=5, mut=0.06,
good_path_factor=0.01)  
indent_comb.c-reference.debug: output from a successful run of modify (seed=5,
mut=0.06, good_path_factor=0.01) 

indent_comb.c-baseline.c: CIL-processed program baseline output by modify.

indent_comb.c.ast:
indent_comb.c.ht: binary data needed by modify, information about program
statements 

indent_comb.c.goodpath:
indent_comb.c.path: a "good path" and a "bad path". Required by modify.

indent_coverage.c: indent_comb.c instrumented for path information

minimized-baseline.c:
minimized.c: The files from the minimization process, which creates the
patch. Baseline is some version of indent_comb.c-best.c (in this case, the
version in this directory); minimized.c is the minimized repaired version.

output.t1:
output.t2:
output.t3:
output.t4:
output.t5:
output.t6:
output.t7: Reference output for test cases

t1:
t2:
t3:
t4:
t5:
t7: input files for tests. "Random" (taken from fuzz testing work). t7 is the
bad test. 

test-bad.sh: "bad test" script. Passes t7 to the variant under test and outputs
"t7" to the output file if the program terminates without crashing.

test-good.sh: "good tests" script. Calls variant on 5 other inputs on which
unmodified indent works fine and, if the output matches the reference output,
outputs a line per passed test to the passed in output file.

test-indent.sh: script that runs modify on indent on 100 deterministic seeds,
copies the .debug output to results/debug (which it creates) and the "best"
solution found for each to results/best. Some proportion of these runs should
succeed, but not necessarily all of them. PATH_TO_MODIFY must be set.
