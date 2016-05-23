TSE 2012
========

One should take the results of the TSE 2012 benchmarks with a rather large
pinch of salt. Many of the benchmarks in this set are very easily deceived, as
most rely solely on an error-free termination of the program, and do not check
to see whether the correct output was returned for any of the test cases. If
you intend to compare automated repair approaches, we advise the use of the
ManyBugs benchmark set instead.

**Verified to be working with GenProg on RepairVM:**

1. gcd
2. zune
3. flex
4. ccrypt
5. lighttpd
6. look-svr
7. look-ultrix
8. uniq
9. units

**Currently not working with GenProg on RepairVM:**

* wuftpd: passes local sanity checks, but fails when run within GenProg; refuses
  to connect to server; permissions problems?
* atris: no video device; need to trick the VM
* indent: fails to compile, appears to be missing some ldflags
* deroff: fails sanity checks, and with no human repair, it's tricky to know
    what the intended semantics should be. Regardless, it doesn't seem to
    encounter a segmentation fault.
* ImageMagick: zlib incompatibility prevents compilation
* 
