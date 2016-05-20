TSE 2012
========

One should take the results of the TSE 2012 benchmarks with a rather large
pinch of salt. Many of the benchmarks in this set are very easily deceived, as
most rely solely on an error-free termination of the program, and do not check
to see whether the correct output was returned for any of the test cases. If
you intend to compare automated repair approaches, we advise the use of the
ManyBugs benchmark set instead.

**Verified to be working with GenProg on RepairVM:**

* gcd
* zune
* flex
* ccrypt
* lighttpd
* look-svr
* look-ultrix

**Currently not working with GenProg on RepairVM:**

* atris: no video device; need to trick the VM
* indent: fails to compile, appears to be missing some ldflags
* deroff: fails sanity checks, and with no human repair, it's tricky to know
    what the intended semantics should be. Regardless, it doesn't seem to
    encounter a segmentation fault.
* ImageMagick: zlib incompatibility prevents compilation
* 
