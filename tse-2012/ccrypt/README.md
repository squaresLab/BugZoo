# ccrypt 1.2

**NEED TO CHECK THAT THIS IS SAFE WHEN EXECUTED ACROSS MULTIPLE INSTANCES
  SIMULTANEOUSLY**

From the sourceforge page: "A command-line file and stream
encryption utility based on Rijndael, designed to replace crypt."

**Bug:** Segmentation fault. ccrypt has a default naming scheme for
encrypted/decrypted files. The bug is triggered when the user responds to a
prompt with NULL/EOF, which ccrypt dereferences without checking.

## Prerequisites

* `electric_fence` library. Can be obtained via `sudo apt-get install electric_fence`
  on Linux distributions using the advanced packaging tool. See notes for more
  details.

## Notes

0. **Can't be compiled to 32-bit on a 64-bit platform, otherwise files will be
   ignored.**

1.  To ease the creation of the test scripts, I changed the the source code such
    that it reads from stdin instead of tty when it seeks user input.  In the
    original source code, the calls to fopen that reference tty are at line 16
    in `readkey.c` and line 117 in `traverse.c`.  Change any line that looks
    like: `fin = fopen("/dev/tty", "r");` to `fin = stdin;`.
    If you don't do this, modify `test.sh` so that user input is sent through
    tty instead. 

2.  Uses the ldflags, `-lefence -lcrypt`. ccrypt variants in particular have a
    problem with illegal memory behavior. Workaround: compile with Electric Fence
    (that's the `-lefence`), a C memory debugging library that translates memory
    corruption into segmentation faults. You may need to install the library.

3.  Test scripts create a number of intermediate files, all of which should be
    cleaned up following completion.

4.  The repair should operate over the cilly-combined source provided in
    `ccrypt_comb.c`.

## Files

* `ccrypt_comb.c`: combined source code, generated using Cilly, over which the
  repair should be performed.
* `test/p*.in`, `test/n*.in`: input files for each of the tests, named after
  their corresponding test case.
* `test/p*.out`, `test/n*.out`: expected output files for each of the tests,
  named after their corresponding test case.
* `test/yes.txt`, `test/no.txt`: files used when simulating different
  overwritting options via the standard input.

## Tests

* **Negative:** asks ccrypt to encrypt a file whose encrypted version (`file.cpt`)
  already exists; supplies EOF when ccrypt prompts whether the user would like
  to overwrite the existing file. Passes if the program succesfully executes,
  without modification to either the plaintext or encrypted file.
* **Positive:** tests various aspects of ccrypt functionality, including
  encryption, decryption, and overwriting existing files. The resulting files
  are checked for correctness. Composed of 7 tests.
