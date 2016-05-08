# Indent 1.9.1

Unix source code processing utility. This benchmark and its test
inputs are taken from Miller et al.'s work on fuzz testing.

**Bug:** Infinite loop.

## Notes

1. modify operates over the cilly-combined source (indent_comb.c); regenerate
it for your machine.

## Files

* `README.txt`
* `indent-1.9.1.tar.gz`: original indent source code
* `indent_comb.c`: combined source code on which modify operates
* `test/output.t*`: reference outputs for test cases
* `test/t*`: input files for test cases, taken from fuzz testing work. t7 is the
  negative test case.
