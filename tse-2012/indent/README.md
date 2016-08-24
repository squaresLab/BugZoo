# Indent 1.9.1

Unix source code processing utility. This benchmark and its test
inputs are taken from Miller et al.'s work on fuzz testing.

**Bug:** Infinite loop.

## Notes

1. Must be built using C90, rather than C99
1. modify operates over the cilly-combined source (indent_comb.c); regenerate
it for your machine.
