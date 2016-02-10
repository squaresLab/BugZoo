# Flex 2.5.4a

Lexical analyzer generator. Benchmark and test inputs taken from Miller et al.'s
work on fuzz testing.

**Bug:** segmentation fault.

## Notes

1. modify operates over the cilly-combined source (flex_comb.c); regenerate it
for your machine. 

## Files

* `README.txt`: this file
* `flex-2.5.4a.tar.gz`: original uncombined flex source code.
* `flex_comb.c`: combined source file.
* `test/output.t*`: reference output files for each test case.
* `test/t*`: input files for test cases; `t11` is the negative test case.
