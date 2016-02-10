*****************************
* deroff utx 4.3            *
*****************************

Description: Document processing. This benchmark and its test inputs are taken
from Miller et al.'s work on fuzz testing.

Bug: Segmentation fault.

Notes: 

(0) deroff-original.c is the original source code. deroff.c is a preprocessed
version of deroff-original.  Regenerate deroff.c for your machine:

    gcc -E deroff_original.c > deroff.c

Files:

README.txt: this file

deroff-coverage.c: deroff instrumented for path information

deroff-original.c: original, un-preprocessed source

deroff.c: preprocessed source

deroff.c-baseline.c: CIL-processed program baseline output by modify

deroff.c-best.c: a repaired variant (seed=0, mut=0.06, good_path_factor=0.01) 

deroff.c-reference.debug: output from a successful run of modify (seed=0,
mut=0.06, good_path_factor=0.01).

deroff.c.ast:
deroff.c.ht: binary data needed by modify, information about program statements

deroff.c.goodpath:
deroff.c.path: a "good path" and a "bad path". Required by modify.

minimized-baseline.c:
minimized.c: Files from the minimization process.  Baseline is a processed
version of deroff.c-baseline.c; minimized.c is a minimized version of some
deroff.c-best.c

output.t1:
output.t2:
output.t4:
output.t7:
output.t8: Test reference output.

t1:
t2:
t4:
t5:
t7:
t8: Test inputs. "Random" (taken from fuzz testing work). t5 is the "bad" test.

test-bad.sh: "bad test" script. Passes t5 to the program under test and outputs
"t5" to the output file if the program terminates without error.

test-good.sh: "good tests" script. Calls deroff on 5 other inputs on which
unmodified deroff doesn't segfault, compares their output to the reference
output, and outputs a line per passed test to the passed in output file.

test-deroff.sh: script that runs modify on deroff on 100 deterministic seeds,
copies the .debug output to results/debug (which it creates) and the "best"
solution found for each to results/best. Some proportion of these runs should
succeed, but not all of them. PATH_TO_MODIFY must be set.
ultrix-deroff.patch: a minimized repair, in diff patch format.
