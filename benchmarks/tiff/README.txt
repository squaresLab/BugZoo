*****************************
* tiff 3.8.2                *
*****************************

Description: Support, library and utilities for manipulating TIFF (Tag Image
File Format) images.

Bug: segmentation fault.

Notes:
(0) Requires "limit5."

(1) Unzip, compile and install the tar source code into a local root, and modify
test-good.sh, test-bad.sh, and fake-gcc.sh so that TIFFROOT and TIFFSRCROOT
point to the correct locations. Unzip/untar tests.tar.gz; it contains image
files that are used in the test scripts.

(2) To get a preprocessed version of tif_lzw.c (originally in $SRC/libtiff),
compile a fresh version of the tiff source code and look through the output for
the line that compiles tif_lzw.c into object code. Copy it, cd into libtiff, and
rerun it, adding the --save-temps flag to the compiler. My command looks like:

/bin/sh ../libtool --tag=CC --mode=compile gcc --save-temps -DHAVE_CONFIG_H -I. -I. -I. -I. -g -O2 -Wall -W -MT tif_lzw.lo -MD -MP -MF .deps/tif_lzw.Tpo -c -o tif_lzw.lo tif_lzw.c

(3) The initial coverage paths are huge. This folder includes filtered versions,
an approach you may want to emulate (I wrote a python script to strip
duplicates).

Files:
README.txt: this file

fake-gcc.sh: script for compiling program variants

minimized-baseline.c: 
minimized.c: Files from the minimization process.  Baseline is a processed
version of tif_lzw.i-baseline.c; minimized.c is a minimized version of some
tif_lzw.i-best.c.

mytest: input file for good tests

test-bad.sh: "bad test" script. Executes tiffcp on a malformed image and checks
for a code dump (indicating a segmentation fault). If it does not find one,
outputs "wolo" to the output file.

test-good.sh: "good test" script. Executes tiffcp on a number of benign images
found in the tests folder, outputs a line for each succeeded test.

test-tiff.sh: script that runs modify on openldap on 100 deterministic seeds,
copies the .debug output to results/debug (which it creates) and the "best"
solution found for each to results/best. Some proportion of these runs should
succeed, but not necessarily all of them. PATH_TO_MODIFY must be set.

tests.tar.gz: tarball of input image files for the test-good script.

tif_lzw.c: original file under repair, not preprocessed.

tif_lzw.i.path:
tif_lzw.goodpath: a "good path" and a "bad path". Required by modify.

tif_lzw.i: preprocessed file under repair

tif_lzw.i-baseline.c: CIL-processed file baseline output by modify 
tif_lzw.i-best.c: a repaired version, seed=1, good_path_factor=0.01, mut=0.06 

tif_lzw.i-reference.debug: output from a successful run of modify (seed=1,
mut=0.06, gpf=0.01). 

tif_lzw.i.ast:
tif_lzw.i.ht: binary data needed by modify, information about program statements

tif_lzw_coverage.i: tif_lzw.i instrumented for path information

tiff-3.8.2.zip: original tiff source code

tiff.patch: the repair, as a diff patch

wololo.tif: image used by test-bad.sh, causes tiffcp to seg fault. 
