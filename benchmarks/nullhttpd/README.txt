*****************************
* nullhttpd 0.5.0           *
*****************************

Description: Multithreaded web-server.

Bug: Remote heap-based buffer overflow in handling of POST requests. A remote
user can specify a negative content-length of a POST request and kill the
server. http://nvd.nist.gov/nvd.cfm?cvename=CVE-2002-1496 ;
http://www.securiteam.com/exploits/5VP0P0U8AQ.html

Notes:

(0) Requires a 32-bit architecture and the ability to open ports.

(1) Complete source code is in Nullhttpd-0.5.0.tar.gz.  Combine
nullhttpd into a single C file (httpd_comb.c), as explained in the
top-level README.

(2) ldflags: -lpthread

(3) nullhttpd reads a configuration file in $INSTALLDIR/etc/httpd.cfg
whenever you start it up; a sample looks like:

  # This file contains system settings for Null httpd.
  SERVER_BASE_DIR = "/home/foo/genprog/nullhttpd-0.5.0/httpd"
  SERVER_BIN_DIR  = "/home/foo/genprog/nullhttpd-0.5.0/httpd/bin"
  SERVER_CGI_DIR  = "/home/foo/genprog/nullhttpd-0.5.0/httpd/cgi-bin"
  SERVER_ETC_DIR  = "/home/foo/genprog/nullhttpd-0.5.0/httpd/etc"
  SERVER_HTTP_DIR = "/home/foo/genprog/nullhttpd-0.5.0/httpd/htdocs"
  SERVER_LOGLEVEL = "1"
  SERVER_HOSTNAME = "**.cs.virginia.edu"
  SERVER_PORT     = "8080"
  SERVER_MAXCONN  = "50"
  SERVER_MAXIDLE  = "120"

It will create a blank one if necessary, but you don't want it to. Instead,
change it so that SERVER_HOSTNAME and the _DIR things are appropriate for your
setup.  Use your real full hostname for SERVER_HOSTNAME.  To test if an
unmodified version of the webserver works, point the cgi-bin, htdocs, etc
directories to their counterparts in this directory, or copy them elsewhere and
change the paths accordingly.

(4) Compile nullhttpd-exploit, which exploits the vulnerability.  We run this
program, and then request a webpage from the server to see if the exploit killed
the server.

	gcc -o nullhttpd-exploit nullhttpd-exploit.c

Test it against a running copy of nullhttpd:

  ./nullhttpd-exploit -h your.full.host.name -t 2 -p 8080

You can tell if it works by inspecting the running process list, or by trying to
get index.html again.

(5) Getting path files involves generating and/or compiling httpd_coverage and
run it as you did unmodified httpd, and then run the exploit.  The .path files
are left in the bin/ directory; you will have to move them up.

(6) test-good.sh and test-bad.sh runs each webserver variant in its own
'sandbox', copying the htdocs directory afresh and make a special httpd.conf
file for each one.

(7) The tests require "limit"; 5 seconds should suffice.

Files:

Nullhttpd-0.5.0.tar.gz: original source code

nullhttpd.patch: a repair, as a diff patch.

README.txt: this file

blank.html:
default.gif:
hello.pl:
images.html:
index.html:
notfound.html: Reference output for the 6 tests. index.html is used as reference
for both the bad and a good test.  

cgi-bin:
htdocs: Data copied into sandboxed webserver variant directory
structures. 

httpd_comb-cov.c: nullhttpd instrumented for path information.
httpd_comb.c: Combined source file; code to which modify is applied. 

httpd_comb.c.goodpath:
httpd_comb.c.path: a "good path" and a "bad path". Required by modify. 

httpd_comb.c.ht: 
httpd_comb.c.ast: binary data needed by modify, information about program
statements 

httpd_comb.c-best.c: a repaired variant. seed=0, mut=0.06, gpf=0.01.
httpd_comb.c-reference.debug: output from a successful run of modify (seed 66,
mut=0.06, gpf=0.01). 

minimized-baseline.c: 
minimized.c: Files from the minimization process.  Baseline is a processed
version of httpd_comb.c-baseline.c; minimized.c is a minimized
httpd_comb.c-best.c. 

nullhttpd-exploit.c: Source code for exploit program. Must be compiled into
nullhttpd-exploit for test-bad.sh
 
test-bad.sh: "bad test" script. Sets up a sandbox, runs the webserver variant,
executes nullhttpd-exploit against that running instance, and requests
index.html from the webserver. If index.html is served, the test passes (the
vulnerability has been repaired).

test-good.sh: "good tests" script. Makes 6 other requests to the webserver. 5
are GET requests for static content, 1 is a POST request to a perl script
(without the POST test case, modify disables POST functionality). Compares
returned pages to reference files and outputs a line per passed test to the
passed in output file.

test-nullhttpd.sh: script that runs modify on nullhttpd on 100 deterministic
seeds, copies the .debug output to results/debug (which it creates) and the
"best" solution found for each to results/best. Some proportion of these runs
should succeed, but not all of them. PATH_TO_MODIFY must be set.
