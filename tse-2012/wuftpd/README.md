# wu-ftpd 2.6.0

Source code requires a bit of tweaking to build. Relies of an older version
of Bison: https://gcc.gnu.org/ml/gcc-help/2004-07/msg00129.html


An FTP server daemon for UNIX systems.

**Bug:** format string vulnerability; the first such found in the wild:
http://www.cert.org/advisories/CA-2000-13.html
http://www.securityfocus.com/bid/1387/exploit — wuftpd-god.c

## Notes: 

1.  Requires a 32-bit architecture and the ability to open ports.
2.  We operate on the combined source code, in `ftpd_comb.c`.  Combine `wuftpd`
    into a single C file (ftpd_comb.c), as explained in the top-level README.
    The original source is in `wu-ftpd-2.6.0.tar.gz`; the vulnerability is at
    line 1929 of `ftpdcmd.y`, copied from `wu-ftpd-2.6.0/src/`
3.  ldflags: `-lresolv -lcrypt -lnsl`
4.  In general this one has given some trouble in the past, mostly due to
    default ftpd configuration on various machines; we have succeeded on various
    flavors of Fedora, but good luck to you.  
5.  Requires `limit60`.
6.  The exploit is explored by a `wuftpd-god`, a program that dynamically
    probes a running instance of wuftpd to craft an attack string. It sometimes
    gives up. 

## Files

* `ftp-command-*`, `nc-command-*`: input FTP commands, used by `test.sh`
* `ftp-command-*.out`, `nc-command-*.out`: reference test case outputs
* `ftpd_comb.c`: reference combined source file.
* `wu-ftpd-2.6.0.tar.gz`: wu-ftpd source code; may require modification to run
  on your system/OS.
* `wuftpd-god.c`: source code for the exploit program. Must be compiled to
  `wuftpd-god` for `test.sh`.

## Tests

* **Negative:** `wuftpd-god` attempts to craft an attack string to attack the
  vulnerability.
* **Positive:** performs 5 simple ftp commands against a running server, using
  `netcat` and `ftp`.  
