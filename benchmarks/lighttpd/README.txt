*****************************
* lighttpd  1.4.17          *
*****************************

Description: A lightweight, multi-threaded web server, optimized for
high-performance environments in use by a number of Real People such as YouTube
and Wikimedia.

Bug: Remote heap buffer overflow in the fastcgi module (speeds up scripting
basically by keeping a persistent instance of the interpreter). Allows a hacker
to remotely escalate priviliges.
http://nvd.nist.gov/nvd.cfm?cvename=CVE-2007-4727 The exploit is in a file
called "hoagie.c", which we got from http://www.milw0rm.com/exploits/4437

Notes:

(0) Requires a 32-bit architecture and the ability to open ports.

(1) Source code is in lighttpd-1.4.17.tar.gz.  Compile and install lighttpd
1.4.17 in some local directory using the --prefix flag to configure.  This
README assumes you installed it in ~/lighttpd-1.4.17-root

(2) test cases: For some reason, we merged the good and bad testcases into one
file; all test cases are therefore weighted equally; test-bad.sh is empty; max
fitness is 3.  Set LDIR in test-good.sh to your lighttpd install directory
(~/lighttpd-1.4.17-root)

(3) Reference test output: one of our test cases tests fastcgi by querying a php
script that calls phpinfo().  Regenerate the reference output by running the
test command (see test-good.sh) against an unmodified version of the webserver
and saving the first 100 lines of the output (head -n 100 output.txt >
hello.php.output).  The hello.php.output in this directory is probably different
from what will be returned on a different machine.

(4) Compilation: the bug is in the fastcgi library, mod_fastcgi, a shared
object.  The repair procedure compiles the module with fake-gcc.sh, leaving
lighttpd unchanged and repeatedly rebuilding the library and dropping it into
the shared-library location.  Set the DIR and LDIR variables to point to your
source and install directories.

(5) To generate mod_fastcgi.i (preprocessed mod_fastcgi.c, originally
in lighttpd-1.4.17/src), do a fresh configure/build of lighttpd
(./configure --prefix=YOUR_PREFIX_HERE) and search the make output for
the line that compiles mod_fastcgi.c.  Mine looks like:

/bin/sh ../libtool --tag=CC   --mode=compile gcc -DHAVE_CONFIG_H -DLIBRARY_DIR="\"/home/claire/old_genprog/security/test/lighttpd-1.4.17-root/lib\"" -I. -I..   -D_REENTRANT -D__EXTENSIONS__ -D_FILE_OFFSET_BITS=64 -D_LARGEFILE_SOURCE -D_LARGE_FILES  -g -O2 -Wall -W -Wshadow -pedantic -std=gnu99 -MT mod_fastcgi.lo -MD -MP -MF .deps/mod_fastcgi.Tpo -c -o mod_fastcgi.lo mod_fastcgi.c

cd into ~/lighttpd-1.4.7/src, copy that whole line, and add a
--save-temps just after the gcc (the mode=compile gcc part), like so:

/bin/sh ../libtool --tag=CC   --mode=compile gcc --save-temps -DHAVE_CONFIG_H -DLIBRARY_DIR="\"/home/claire/old_genprog/security/test/lighttpd-1.4.17-root/lib\"" -I. -I..   -D_REENTRANT -D__EXTENSIONS__ -D_FILE_OFFSET_BITS=64 -D_LARGEFILE_SOURCE -D_LARGE_FILES  -g -O2 -Wall -W -Wshadow -pedantic -std=gnu99 -MT mod_fastcgi.lo -MD -MP -MF .deps/mod_fastcgi.Tpo -c -o mod_fastcgi.lo mod_fastcgi.c

Hit enter. mod_fastcgi.i should now be in that directory.

(6) Coverage will complain that it doesn't know where to put the call
to __globinit_mod_fastcgi(). Unlike the usual song-and-dance, you can
put the call at the beginning of mod_fastcgi_plugin_init in
mod_fastcgi_coverage.c (line 23907 in my version of
mod_fastcgi_coverage.i).

(7) Install fastcgi.  Launch fastcgi before modify. We used this command:

~/lighttpd-1.4.17-root$ bin/spawn-fcgi -f /usr/bin/php-cgi -s the-socket -P ~/lighttpd-1.4.17-root/fastcgi.pid -n &


(8) Webserver configuration: before running lighttpd, modify the lighttpd.conf
in this directory and put it in ~/lighttpd-1.4.17-root/.  Search the file for
pathnames referencing genprog and modify them to point to your installation.  If
you don't like the default port (line 140 in the conf file, server.port = 8080),
change it, but be sure to change it in test-good.sh too.

(9) Webserver document setup: Untar/zip htdocs.tar.gz and put it in
~/lighttpd-1.4.17-root/


(10) Running lighty: you can see how this is done on line 8 of test-good.sh:

$LDIR/sbin/lighttpd -D -f $LDIR/lighttpd.conf -m $LDIR/lib/ &

Make sure it works and try querying the hello.php script and/or index.html
before you launch modify.

(11) hoagie.c exploits the vulnerability. Compile as normal (gcc -o
hoagie hoagie.c) and check out the last couple of lines of
test-good.sh to see how it works. We're don't crash the server;
instead, we use the exploit to remotely escalate access to stuff we
shouldn't (namely /etc/passwd).

(12) The tests require "limit"; 5 seconds should suffice.

Files:
README.txt: this file

fake-gcc.sh: script for compiling variants.

hoagie.c: source code for the vulnerability exploit; if your server is
vulnerable, reads the contents of /etc/passwd

htdocs.tar.gz: htdocs for the server variants. Must be unzipped/untarred and
placed in root install directory.

hello.php.output:
index.html.output: Reference output for positive test cases

lighttpd-1.4.17.tar.gz: lighttpd source code

lighttpd.conf: configuration file, to be placed in the root install directory.

lighttpd.patch: a repair, as a diff patch

minimized-baseline.c:
minimized.c: Files from the minimization process.  Baseline is a processed
version of mod_fastcgi.i-baseline.c; minimized.c is minimized version of some
mod_fastcgi.i-best.c

mod_fastcgi.c: Un-preprocessed (original!) mod_fastcgi source code.
mod_fastcgi.i: Processed mod_fastcgi source code; input to modify.
mod_fastcgi.i-baseline.c: CIL-processed program baseline output by modify  

mod_fastcgi.i-best.c: a repaired version; seed = 1, good_path_factor = 0.01, mut
= 0.06. 

mod_fastcgi.i-reference.debug: output from a successful run of modify (seed = 1,
mut=0.06, gpf=0.01). 

mod_fastcgi.i.ast:
mod_fastcgi.i.ht: binary data needed by modify, information about program
statements 

mod_fastcgi.i.goodpath:
mod_fastcgi.i.path: a "good path" and a "bad path". Required by modify.

mod_fastcgi_coverage.c: mod_fastcgi.i instrumented for path information 

test-bad.sh: Empty.

test-good.sh: Test script. Performs two good tests and the one bad test for
lighttpd on each variant.

test-lighttpd.sh: script that runs modify on lighttpd on 100 seeds, copies the
.debug output to results/debug (which it creates) and the "best" solution found
for each to results/best. Some proportion of these runs should succeed, but not
necessarily all of them. PATH_TO_MODIFY must be set.
