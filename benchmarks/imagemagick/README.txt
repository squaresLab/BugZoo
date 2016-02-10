*****************************
* imagemagick 6.5.2         *
*****************************

Description: image processing suite

Bug: incorrect output

Notes:

(0) I cannot find this version of the ImageMagick source on the intertubes any
more; it looks like they removed it from their svn repository in the time since
Ethan found it and the time that I am putting this README together. I include
both the original fx.c and a "fixed" version in this directory. As I couldn't
get a clean version, it's possible that the source in the tarball in this
directory has random cruft in it.

(1) Untar/zip ImageMagick-6.5.2.tar.gz. Make a root locally and configure and
install. I needed to add --with-perl=no to the configure script.

(2) Modify operates on fx.c, in $SRCROOT/magick/. To get the preprocessed
version, I made a clean copy of imagemagick, setting the CC environment variable
to "gcc --save-temps" (export CC="gcc --save-temps"); though you can probably do
the same thing you do on the other benchmarks where we need the preprocessed
version of some source file (just copy the one line that builds it and add
--save-temps to the call to gcc; see php or openldap, for example).

(3) I found that CIL wouldn't parse the initial fx.i because it contains #pragma
directives, which CIL apparently doesn't understand. I removed all lines that
start with #pragma with no ill-effect.

(4) Unzip/tar pngsuite.tar.gz; it contains test png files. test-good.sh only
references 5 of them, but you can generate output for as many as you like.

(5) Requires limit5 and limit10.

Files: 

ImageMagick-6.5.2.tar.gz: Source code; originally checked out of ImageMagick's
svn repository. .svn/ directories manually removed.

README.txt: this file.

fake-gcc.sh: script for compiling variants

fx-cov.c: fx.c instrumented for generating coverage information.
fx.c: preprocessed source code

fx.c--best.c: a repaired variant
fx.c-baseline.c: CIL-processed program baseline output by modify 

fx.c-fixed.c: a manually corrected version of fx.c (for generating reference
output).
fx.c-original.c: the original, unprocessed source file 
fx.c.patch: diff between fx.c-original.c and fx.c-fixed.c

fx.c.ast:
fx.c.ht: binary data needed by modify, information about program statements

fx.c.goodpath:
fx.c.path: a "good path" and a "bad path". Required by modify.

fx.i: preprocessed source code. 
fx.i-baseline.c: CIL-processed program baseline output by modify

fx_coverage.i: fx.i instrumented for generating coverage information.

pngsuite.tar.gz: test input files

test-bad.sh: "bad test" script. Runs convert (one of the imagemagick utilities)
on an input file on which the original program computes the incorrect answer;
compares results to reference output.

test-good.sh: "good test" scripts. Runs convert (the imagemagick utility under
test) on several (arbitrarily chosen) input files and compares results to
reference output.

test-imagemagick.sh: script that runs modify on imagemagick on 100 deterministic
seeds, copies the .debug output to results/debug (which it creates) and the
"best" solution found for each to results/best. Some proportion of these runs
should succeed, but not necessarily all of them. PATH_TO_MODIFY must be set.

testBAD.out:
test_BASI0G01.out:
test_BASN3P01.out:
test_G10N2C08.out:
test_S37N3P04.out:
test_TBWN3P08.out: Reference outputs for the tests in test-good.sh and
test-bad.sh
