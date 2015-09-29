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

flex_comb.c: Combined source file; code to which modify is applied. 

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
