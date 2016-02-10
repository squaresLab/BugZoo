# tiff 3.8.2

Support, library and utilities for manipulating TIFF (Tag Image File Format)
images.

**Bug:** segmentation fault.

## Notes

1.  Unzip, compile and install the tar source code into a local root, and modify
    `test.sh` so that `TIFFROOT` and `TIFFSRCROOT` point to the correct locations.
    Unzip/untar `tests.tar.gz`; it contains image files that are used in the test scripts.

2.  To get a preprocessed version of `tif_lzw.c` (originally in `$SRC/libtiff`),
    compile a fresh version of the tiff source code and look through the output for
    the line that compiles `tif_lzw.c` into object code. Copy it, cd into `libtiff`, and
    rerun it, adding the `--save-temps` flag to the compiler. My command looks like:

    ```
    /bin/sh ../libtool --tag=CC --mode=compile gcc --save-temps -DHAVE_CONFIG_H -I. -I. -I. -I. -g -O2 -Wall -W -MT tif_lzw.lo -MD -MP -MF .deps/tif_lzw.Tpo -c -o tif_lzw.lo tif_lzw.c
    ```

3.  The initial coverage paths are huge. This folder includes filtered versions,
    an approach you may want to emulate (I wrote a python script to strip
    duplicates).

## Files

* `fake-gcc.sh`: script for compiling program variants
* `mytest`: input file for good tests
* `tif_lzw.c`: original file under repair, not preprocessed.
* `tif_lzw.i`: preprocessed file under repair
* `tiff-3.8.2.zip`: original tiff source code
* `wololo.tif`: image used by negative test case, causes `tiffcp` to seg fault. 
* `tests.tar.gz`: tarball of input image files for the positive test cases.

## Tests

* **Negative:** executes tiffcp on a malformed image and checks for a code dump
  (indicating a segmentation fault). Passes if no segmentation fault occurs.
* **Positive:** executes tiffcp on a number of benign images found in the tests
  folder.


