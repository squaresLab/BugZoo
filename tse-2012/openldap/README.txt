*****************************
* openldap 2.3.41           *
*****************************

Description: Directory protocol/implementation of the LDAP protocol.

Bug: Non-overflow denial of service.  A malformed BER tag can cause openldap to
trip over an assertion and quit.
http://nvd.nist.gov/nvd.cfm?cvename=CVE-2008-2952 ;
http://www.securityfocus.com/bid/30013/exploit

Notes: 

This is relatively complex to reproduce because setting openldap up is
completely ridiculous.  The steps in this README worked on my 32-bit Ubuntu
Desktop 10.04. Searching the openldap forums can be helpful if you run into
problems not enumerated here (BerkeleyDB is the real sticking point).

(0) Source code is in openldap-2.3.41.tgz in this directory.
Alternatively:
ftp://ftp.openldap.org/pub/OpenLDAP/openldap-release/openldap-2.3.41.tgz

(1) Make a root directory for openldap. I will refer to it as openldap-root/.

(2) gunzip/untar the .tgz file. cd openldap-2.3.41;
   ./configure --prefix=/path/to/openldap/root/directory

(3) Configure will tell you if you're missing anything. You're probably missing
BerkeleyDB; I have had success with 4.2.52, which is known to work with this
version of openldap: 
wget http://download.oracle.com/berkeley-db/db-4.2.52.tar.gz

If you have root priviliges and no need of another (current) install of
BerkeleyDB (this version of openldap has compatibility problems with more recent
versions), I recommend installing BerkeleyDB in the default location
(/usr/local/BerkeleyDB.4.2). This is because A) you need to tell openldap where
to find the install, and this is much harder than it should be, and B) if you
have two versions of BerkeleyDB on your machine at the same time, openldap it
will inevitably find one version in one step and another version in another step
and then complain that there's a version mismatch. I have never found a
reproducible solution to this problem.

Set the following environment variables (modify accordingly if you installed
BerkeleyDB elsewhere):

export CPPFLAGS="-I/usr/local/BerkeleyDB.4.2/include"
export LDFLAGS="-L/usr/local/lib -L/usr/local/BerkeleyDB.4.2/lib -R/usr/local/BerkeleyDB.4.2/lib"
export LD_LIBRARY_PATH="/usr/local/BerkeleyDB.4.2/lib"

(4) make. I ran into the following two problems:

(4a) "getpeereid.c:52: error: storage size of 'peercred' isn't known"

This is a known imcompatibility with glibc; fix it by compiling with
CPPFLAGS=-D_GNU_SOURCE:

export CPPFLAGS="-I/usr/local/BerkeleyDB.4.2/include -D_GNU_SOURCE"

(4b) "error: missing binary operator before token "(""

This happens gcc4.4 has stricter preprocessor checks than 4.3. My solution:
compile with gcc-4.3.  (sudo apt-get install gcc-4.3; export CC=gcc-4.3;
configure and make)

(5) make install; make test

You probably don't need to run all the tests, just let a few run to make sure
everything is happy.

(6) The problem is in the BER processing library liblber, which is, of course,
the one library CIL refuses to merge.  Accordingly, we do our experiments on
io.c.  Get the preprocessed version of io.c by running make on the openldap
source and looking for the first line that references io.c. cd
libraries/liblber; copy and paste the line that compiles io.c into io.o, passing
--save-temps to the compiler. My command looks like:

/bin/sh ../..//libtool  --mode=compile gcc-4.3 --save-temps -g -O2 -I../../include -I../../include   -I/usr/local/BerkeleyDB.4.2/include -D_GNU_SOURCE   -DLBER_LIBRARY -c io.c

io.i will be in that directory.

(7) I used the test scripts included with openldap for my good and bad
testcases.  I didn't use all of them, since they each take ~20 seconds to run;
you're welcome to include as many as you like.

In order to use these tests, I hijacked the openldap Makefiles, because I lack
the voodoo required to replicate the tests in my own directory structure (I
assure you I tried very hard).

Look for the "test:" target in the Makefile at the toplevel of the src directory
($DIR/openldap-2.3.41/Makefile). This is line 286 in my Makefile:

check: test
test: FORCE
	cd tests; make test

add the following lines right below it:
+
+test2: FORCE
+	cd tests; make test2

Look for the test tests: target in the tests Makefile
($DIR/openldap-2.3.41/tests/Makefile). This is line 275 in my Makefile:

test tests:
     @$(MAKE) bdb
     @$(MAKE) hdb

Add the following target:

+test2:
+	@$(MAKE) bdb2
+	@$(MAKE) hdb2
+

Look for the bdb and bdb-no targets in the tests Makefile (line 289 in my
Makefile), and add the following target:

+bdb2:	FORCE
+	@echo "Running bdb bad test..."
+	@$(RUN) -b bdb all2
+

Look for the hdb and hdb-no targets in the tests Makefile (line 297 in my
Makefile), and add the following target:

+hdb2:	FORCE
+	@echo "Running hdb bad test..."
+	@$(RUN) -b hdb all2
+

(8) Go to $DIR/openldap-2.3.41/tests/scripts. Edit the script called
"all." Comment out line 23, and replace it with

"for CMD in $SRCDIR/scripts/test001-slapadd; do"

(this makes make test run one script instead of all of them; you may
add as many of the test scripts to the list as you like)

(9) Copy all2 from this directory the openldap test directory. 

(10) Copy test001-bad from this directory to the openldap test directory.

test001-bad is just like test001-slapadd, except that halfway through:

perl -e 'print"\xff\xff\xff\x00\x84\x41\x42\x43\x44"' | nc $LOCALHOST $PORT1

which kills a running openldap server by sending it a bogus ber packet.

(11) Set the OPENLDAP_PARENT_DIR environment var referenced in fake-gcc.sh,
test-good.sh, and test-bad.sh and change the paths so to point to the parent
directory of your OPENLDAP source/root directories.

(12) Coverage: run coverage on io.i, copy it over the original io.c, make, etc.
Add a call to __globinit_io() in the main() for the slapd server in
$DIR/openldap-2.3.41/servers/slapd/main.c.

The path file will come into existence in the libraries/liblber directory. You
can hard-code it to be placed wherever.

(13) The openldap test scripts contain a number of hard-coded sleep times that
permit the server to get up and running. You can speed up your tests by manually
changing these values to something smaller; in my experience, they don't
actually need to be as long as they are given originally. I manually changed
these wait times to 3 or 5 seconds. 

(14) The scripts here do not make use of "limit", though the reference output
shows that we used it at some point in the past (set to 1000 seconds). If you
decide you need it, look at test-php.sh in ../php to see an example of using
limit at the level of the scripts passed to modify instead of within the
individual scripts.

Files:
README.txt: this file

all2: a script file that executes the "bad" tests. To be copied into the
openldap-2.3.41/tests/ directory

fake-gcc.sh: script for compiling program variants

io.c: original source code 
io.i-baseline.c: CIL-processed program baseline output by modify
io.i: preprocessed source code 
io.i-best.c: a repaired variant (seed=0, mut=0.06, gpf=0.01).

io.i-reference.debug: output from a successful run of modify (seed=0,
mut=0.06, gpf=0.01).

io.i.ast:
io.i.ht: binary data needed by modify, information about program statements

io.i.goodpath:
io.i.path: a "good path" and a "bad path". Required by modify.

io.patch: the repair, as a diff patch.

minimized-baseline.c:
minimized.c: Files from the minimization process.  Baseline is a preprocessed
version of io.i-baseline.c; minimized.c is some version of io.i-best.c,
minimized.

openldap-2.3.41.tgz: tarballed source code for openldap version 2.3.41

test-bad.sh: "bad test" script. Enters the openldap source code directory and
makes test2, a target you need to add to the openldap Makefiles. It saves the
output of "make test2" to a temporary file and then greps for the word
"succeeded", which should be output once for every succeeded test.

test-good.sh: "good test" script. Enters the openldap source code directory and
makes test, a target you probably want to modify so that it doesn't run every
available openldap test. It saves the output of "make test" to a temporary file
and then greps for the word "succeeded", which should be output once for every
succeeded test.

test-openldap.sh: script that runs modify on openldap on 100 deterministic
seeds, copies the .debug output to results/debug (which it creates) and the
"best" solution found for each to results/best. Some proportion of these runs
should succeed, but not necessarily all of them. PATH_TO_MODIFY must be set.

test001-bad: A copy of test001-slapadd, a test script in the openldap test
directory, with a perl script that exploits the denial of service vulnerability
in ber tag processing under repair. Must be copied into
openldap-2.3.41/tests/scripts directory before attempting repair.
