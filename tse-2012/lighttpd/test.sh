#!/bin/sh
#
# TODO: allow different ports to be used
# TODO: kill JUST the lighttpd server being used for a particular test
#
PROG=$1
OUT=$2
PORT=$3

here_dir=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )
root_dir="$here_dir/fake-root"

# Fire up the server
# - the conf file is totally wrong!
$root_dir/sbin/lighttpd -D -f $root_dir/lighttpd.conf -m $root_dir/lib/ &
sleep 2s

# P1: Fetch index.html
timeout 1 curl -t 1 -s "http://localhost:8080/index.html" |&
  diff $here_dir/test/index.html - &> /dev/null && (echo "PASSED P1")

# P2: hello.php
#timeout 1 curl -t 1 -s "http://localhost:8000/hello.php" |&
#  diff $here_dir/test/hello.php.100 - &> /dev/null && (echo "PASSED P2")
timeout 1 curl -t 1 -s "http://localhost:8080/hello.php" |&
  head -100 |&
  diff $here_dir/test/hello.100 - &> /dev/null && (echo "PASSED P2")

# N1: exploit
#timeout 1 $here_dir/hoagie -d localhost -p 8080 -s /hello.php -o exploit
#diff exploit /etc/passwd &> /dev/null || (echo "exploit" >> $OUT)

killall lighttpd
