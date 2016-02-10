*****************************
* wu-ftpd 2.6.0             *
*****************************

Description: an FTP server daemon for UNIX systems.

Bug: format string vulnerability; the first such found in the wild:
http://www.cert.org/advisories/CA-2000-13.html
http://www.securityfocus.com/bid/1387/exploit — wuftpd-god.c

Notes: 
(0) These instructions are incomplete, and this benchmark does not include a
test-wuftpd.sh.  This will happen at some point.  You may still succeed, but
YMMV. 

(1) Requires a 32-bit architecture and the ability to open ports.

(2) We operate on the combined source code, in ftpd_comb.c.  Combine wuftpd into
a single C file (ftpd_comb.c), as explained in the top-level README.  The
original source is in wu-ftpd-2.6.0.tar.gz; the vulnerability is at line 1929 of
ftpdcmd.y, copied from wu-ftpd-2.6.0/src/

(3) ldflags:  -lresolv -lcrypt -lnsl

(4) In general this one has given some trouble in the past, mostly due to
default ftpd configuration on various machines; we have succeeded on various
flavors of Fedora, but good luck to you.  

(5) Patch: the patch disables verbose debugging output, but does not otherwise
limit functionality. 

(6) Requires limit60.

(7) The exploit is explored by a wuftpd-god, a program that dynamically probes a
running instance of wuftpd to craft an attack string.  It sometimes gives up. 

Files:

README.txt: this file 

ftp-command-1:
ftp-command-2:
ftp-command-3:
nc-command-4:
nc-command-5: Input ftp commands; used by test-good.sh

ftp-command-1.out:
ftp-command-2.out:
ftp-command-3.out:
nc-command-4.out:
nc-command-5.out: Reference test case output.

ftpd_comb.c: Reference combined source file.
ftpd_comb.c-best.c: a repaired variant. seed=0, mut=0.00, gpf=0.03.
ftpd_comb.c-reference.debug: output from a successful run of modify (seed 0,
mut-0.00, gpf=0.03)
ftpd_comb.c-baseline.c:

ftpd_comb.c.ht:
ftpd_comb.c.ast: binary data needed by modify, information about
program statements

ftpd_comb.c.goodpath:
ftpd_comb.c.path: a "good path" and a "bad path". Required by modify. 


test-bad.sh
test-good.sh:  "good tests" script. Performs 5 simple ftp commands against a
running server, using netcat and ftp.  

wu-ftpd-2.6.0.tar.gz: wu-ftpd source code.  May require modification to run on
your system/OS.

wuftpd-god.c: Source code for the exploit program.  Must be compiled to
wuftpd-god for test-bad.sh 
