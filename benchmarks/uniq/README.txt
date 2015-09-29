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

t1:
t2:
t4:
t5:
tp1:
tp2: input files for tests. "Random" (taken from fuzz testing
work). t5 is the "bad" input.
