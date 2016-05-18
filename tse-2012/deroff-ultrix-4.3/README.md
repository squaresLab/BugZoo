# deroff-ultrix-4.3

Document processing. This benchmark and its test inputs are taken
from Miller et al.'s work on fuzz testing.

**Bug:** Segmentation fault.

## Notes

1.  `deroff-original.c` is the original source code. `deroff.c` is a preprocessed
    version of deroff-original.  Regenerate `deroff.c` for your machine via:

    ```
    gcc -E deroff_original.c > deroff.c
    ```

## Files

* `deroff-original.c`: original, un-preprocessed source
* `deroff.c`: preprocessed source
* `test/output.t*:` reference outputs for each test case
* `t*:` test inputs, taken from previous fuzz testing work. `t5` is the
  negative test case.

## Tests

* **Negative:** passes t5 to the candidate program and outputs `t5` to the
  output file if the program terminates without error.
* **Positive:** calls deroff on 5 other inputs on which unmodified deroff
  doesn't segfault, compares their output to the reference output, and outputs
  a line per passed test to the passed in output file.
