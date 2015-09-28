*****************************
* ccrypt 1.2                *
*****************************

Description: From the sourceforge page: "A command-line file and stream
encryption utility based on Rijndael, designed to replace crypt."

Bug: Segmentation fault. ccrypt has a default naming scheme for
encrypted/decrypted files. The bug is triggered when the user responds to a
prompt with NULL/EOF, which ccrypt dereferences without checking.

Notes: 

(0) To ease the creation of the test scripts, I changed the the source code such
that it reads from stdin instead of tty when it seeks user input.  In the
original source code, the calls to fopen that reference tty are at line 16 in
readkey.c and line 117 in traverse.c.  Change any line that looks like: "fin =
fopen("/dev/tty", "r");" to "fin = stdin;"  If you don't do this, change
test-good.sh and test-bad.sh so user input is sent through tty. 

(1) ldflags: -lefence -lcrypt.  
  (1.1) ccrypt variants in particular have a problem with illegal memory
  behavior.  Workaround: compile with Electric Fence (that's the -lefence), a C
  memory debugging library that translates memory corruption into segmentation
  faults.  You may need to install the library.

(2) Test scripts create but do not neatly clean up a number of intermediate
files.

(3) These scripts require both limit5 and limit10.

(4) I happened to have a number of distinct ccrypt patches lying around; I
included them here.

(5) modify operates over cilly-combined source (ccrypt_comb.c).

Files:
README.txt: this file

ccrypt-1.2.tar.gz: original ccrypt source code

ccrypt_comb.c: combined source code on which modify operates

ccrypt_comb.c-best.c: a repaired variant (seed=0, mut=0.06,
good_path_factor=0.01) 

ccrypt_comb.c-reference.debug: output from a successful run of modify
(seed=0,mut=0.06, good_path_factor=0.01)

ccrypt_comb.c-baseline.c: CIL-processed program baseline output by modify. 

ccrypt_comb.c.ast:
ccrypt_comb.c.ht: binary data needed by modify, information about program
statements 

ccrypt_comb.c.goodpath:
ccrypt_comb.c.path:  a "good path" and a "bad path". Required by modify. 

ccrypt_coverage.c: ccrypt_comb.c instrumented for path information

minimized-baseline.c:
minimized.c: Files from the minimization process.  Baseline is a processed
version of ccrypt_comb.c-baseline.c.  minimized.c is a minimized version of some
ccrypt_comb.c-best.c.

patches.tar.gz: a collection of (distinct, I think) repairs for the ccrypt bug,
in diff format. 

test-bad.sh: "bad test" script. Asks ccrypt to encrypt a file whose encrypted
version (file.cpt) already exists; supplies EOF when ccrypt prompts whether the
user would like to overwrite the existing file. Writes a line to the test output
file if the variant does not crash.

test-good.sh: "good tests" script. Exercises various aspects of ccrypt
functionality, checks the resulting files for correctness. 7 tests.

test-ccrypt.sh: script that runs modify on ccrypt on 100 deterministic seeds,
copies the .debug output to results/debug (which it creates) and the "best"
solution found for each to results/best. Some proportion of these runs should
succeed, but not necessarily all of them. PATH_TO_MODIFY must be set.

output.t1: reference output.

test2.out:
test3.out:
test4.out:
test5.out: input for tests. 
