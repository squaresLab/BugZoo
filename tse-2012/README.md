TSE 2012
========

One should take the results of the TSE 2012 benchmarks with a rather large
pinch of salt. Many of the benchmarks in this set are very easily deceived, as
most rely solely on an error-free termination of the program, and do not check
to see whether the correct output was returned for any of the test cases. If
you intend to compare automated repair approaches, we advise the use of the
ManyBugs benchmark set instead.

**Bug scenarios with correctly functioning Docker images::**

0. gcd
0. zune
0. flex
0. lighttpd
0. look-svr
0. look-ultrix
0. uniq
0. units
0. tiff
0. php
0. deroff
0. indent
0. atris

**Bug scenarios with malfunctioning Docker images:**

0. ccrypt (requires execution on a real 32-bit platform, otherwise files are ignored)
0. lighttpd (permissions problems?)
0. imagemagick (missing PNG delegate installation in Dockerfile)
0. wuftpd (permissions problems?)
0. openldap (requires a very old version of GCC to compile)
