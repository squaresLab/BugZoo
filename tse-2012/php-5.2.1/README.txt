*****************************
* php 5.2.1                 *
*****************************

Description: Scripting language interpreter. Many versions work, actually; the
papers say version 4.4.5, but somehow I have 5.2.1 in my genprog directory, and
I'm fairly certain it didn't get fixed until 6.something.

Bug: Integer overflow. When doing single-to-multi-character string replace, php
calculates the length of the new buffer in such a way as to overflow the
variable, leading to arbitrary badness.
http://nvd.nist.gov/nvd.cfm?cvename=CVE-2007-1885 ;
http://www.php-security.org/MOPB/MOPB-39-2007.html

Notes: Needs to be a 32-bit machine (or the integer won't overflow).

(0) Untar/zip php and install in a local directory (./configure
--prefix=/path/to/local/install).  I needed to install libxml2-dev and flex
(though I think you can probably just disable whatever needs libxml2).  (sudo
apt-get install libxml2-dev; sudo apt-get install flex). Just libxml2 is not
enough; you need to dev version.

(1) We operate on string.i, the preprocessed version of string.c, because, as
usual, the one library we want to pass through modify is the one library CIL
refuses to merge.  make php and look for string.c in the make output. Copy that
line, cd to $SRC/ext/standard, add the --save-temps flag to gcc (look for
--mode=compile gcc), and rerun it. My command looks like:

/bin/sh /home/claire/php-repro/php-5.2.1/libtool --silent --preserve-dup-deps --mode=compile gcc --save-temps -Iext/standard/ -I/home/claire/php-repro/php-5.2.1/ext/standard/ -DPHP_ATOM_INC -I/home/claire/php-repro/php-5.2.1/include -I/home/claire/php-repro/php-5.2.1/main -I/home/claire/php-repro/php-5.2.1 -I/usr/include/libxml2 -I/home/claire/php-repro/php-5.2.1/ext/date/lib -I/home/claire/php-repro/php-5.2.1/TSRM -I/home/claire/php-repro/php-5.2.1/Zend    -I/usr/include -g -O2  -c /home/claire/php-repro/php-5.2.1/ext/standard/string.c -o ext/standard/string.lo 

I received an assembler error after running it: "Fatal error: can't create
ext/standard/string.i: No such file or directory", but it doesn't matter, since
it creates string.i in that directory even if it can't make the object file.

(2) Coverage: put the initializing call to __globinit_string() the
command-line-interface call to main in $SRC/sapi/cli/php_cli.c

(3) Edit fake-gcc.sh, test-good.sh, and test-bad.sh so that SRCDIR and PHPROOT
are set to the correct locations for your directory setup.

(4) Regenerate the test outputs before launching; at least one calls phpinfo(),
which is probably different on your machine. Pass the result of good1.php
through head -n 100; we only compare the first 100 lines of phpinfo():
$phproot/php good1.php | head -n 100 > output.t1

(5) "limit" is required; 5 seconds will probably suffice.

Files:

README.txt: this file

exploit.php: A php script that does a large single-to-multi character
replacement, exploiting the vulnerability. Called by test-bad.sh.

fake-gcc.sh: script for compiling program variants. Make sure to set SRCDIR to
your php src directory.

good1.php:
good2.php:
good3.php: Three php scripts that work fine, called by test-good.sh. None of
these scripts do single-to-multi character replacement, because doing so
prevents modify from finding a solution.

minimized-baseline.c:
minimized.c: Files from the minimization process.  Baseline is a processed
version of string.i-baseline.c; minimized.c is is a minimized version of some
string.i-best.c.

output.bad:
output.t1:
output.t2:
output.t3: Expected output from the php test scripts.

php-5.2.1.tar.gz: tarballed source code for the php interpreter version 5.2.1 

php.patch: the minimized repair.

string.c: original source code
string.i: preprocessed source code; input to modify
string.i-baseline.c: CIL-processed program baseline output by modify

string.i-best.c: a repaired version; seed = 0, good_path_factor = 0.01, mut =
0.06.   
string.i-reference.debug: output from a successful run of modify (seed=0,
mut=0.06, gpf=0.01). 

string.i.ast:
string.i.ht: binary data needed by modify, information about
program statements

string.i.goodpath:
string.i.path: a "good path" and a "bad path". Required by modify.

string_coverage.i: string.i instrumented for path coverage. 

test-bad.sh: test script that calls exploit.php and checks if the interpreter
crashed or completed the script. 

test-good.sh: Test script. Calls 3 benign php scripts and verifies output. 

test-php.sh: script that runs modify on php on 100 deterministic seeds, copies
the .debug output to results/debug (which it creates) and the "best" solution
found for each to results/best. Some proportion of these runs should succeed,
but not necessarily all of them. PATH_TO_MODIFY must be set.
