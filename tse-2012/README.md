TSE 2012
========

**Verified to be working with GenProg on RepairVM:**

* gcd
* zune
* flex
* ccrypt
* lighttpd

**Currently not working with GenProg on RepairVM:**

* atris: no video device; need to trick the VM
* indent: fails to compile, appears to be missing some ldflags
* deroff: fails sanity checks, and with no human repair, it's tricky to know
    what the intended semantics should be. Regardless, it doesn't seem to
    encounter a segmentation fault.
* ImageMagick: zlib incompatibility prevents compilation
* 
