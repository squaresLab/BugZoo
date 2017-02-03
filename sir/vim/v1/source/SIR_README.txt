SIR Modifications to Vim v1
W. Motycka 7/28/08

In order to make Vim compile on our Solaris 2.9 system here at UNL (cse)
I added the flag to force the compilation to recognize that the system
is a UNIX system within the Makefile of vim (src/Makefile) putting a
-DUNIX into the CFLAGS used within the script (line 304).

This modification was only needed by v1 since some part of the configure
script doesn't correctly set this value in config.h creation portion.
Without this the artifact did not build due to missing definitions
during the linker phase of the build.  No other versions of vim required
this modification.
