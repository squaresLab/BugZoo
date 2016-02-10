# nullhttpd 0.5.0

Multithreaded web-server.

**Bug:** Remote heap-based buffer overflow in handling of POST requests. A remote
user can specify a negative content-length of a POST request and kill the
server. http://nvd.nist.gov/nvd.cfm?cvename=CVE-2002-1496 ;
http://www.securiteam.com/exploits/5VP0P0U8AQ.html

## Notes

1. Requires a 32-bit architecture and the ability to open ports.
2. Complete source code is in `nullhttpd-0.5.0.tar.gz`.  Combine
nullhttpd into a single C file (`httpd_comb.c`) to perform repair.
3. ldflags: `-lpthread`
4. nullhttpd reads a configuration file in `$INSTALLDIR/etc/httpd.cfg`
whenever you start it up; a sample looks like:

  ```
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
  ```

It will create a blank one if necessary, but you don't want it to. Instead,
change it so that SERVER_HOSTNAME and the _DIR things are appropriate for your
setup.  Use your real full hostname for SERVER_HOSTNAME.  To test if an
unmodified version of the webserver works, point the cgi-bin, htdocs, etc
directories to their counterparts in this directory, or copy them elsewhere and
change the paths accordingly.

5. Compile `nullhttpd-exploit`, which exploits the vulnerability.  We run this
program, and then request a webpage from the server to see if the exploit killed
the server.

  ```
	gcc -o nullhttpd-exploit nullhttpd-exploit.c
  ```

Test it against a running copy of nullhttpd:

  ```
  ./nullhttpd-exploit -h your.full.host.name -t 2 -p 8080
  ```

You can tell if it works by inspecting the running process list, or by trying to
get `index.html` again.

6. Getting path files involves generating and/or compiling `httpd_coverage` and
run it as you did unmodified httpd, and then run the exploit.  The .path files
are left in the bin/ directory; you will have to move them up.

## Files

* `nullhttpd-0.5.0.tar.gz`: original source code
* `blank.html`, default.gif`, `hello.pl`, `images.html`, `index.html`, `notfound.html`:
    reference output for the 6 tests. `index.html` is used as reference for both the
    positive and a negative tests.  
* `cgi-bin`, `htdocs`: data copied into sandboxed webserver variant directory
  structures.
* `httpd_comb.c`: combined source file; code to which modify is applied. 
* `nullhttpd-exploit.c`: Source code for exploit program. Must be compiled into
nullhttpd-exploit to run `test.sh`.

## Tests

* **Negative test:** sets up a sandbox, runs the webserver variant,
executes nullhttpd-exploit against that running instance, and requests
index.html from the webserver. If index.html is served, the test passes (the
vulnerability has been repaired).
* **Positive tests:** makes 6 other requests to the webserver. 5
are GET requests for static content, 1 is a POST request to a perl script
(without the POST test case, modify disables POST functionality). Compares
returned pages to reference files and outputs a line per passed test to the
passed in output file.
