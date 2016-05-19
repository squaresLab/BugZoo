#!/bin/sh
#
# For now, this test script may only be used in a strictly single-threaded
# environment.
#
# TODO: allow different ports to be used
# TODO: kill JUST the lighttpd server being used for a particular test
#
exe=$1
test_name=$2
port=$3

here_dir=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )
root_dir="$here_dir/fake-root"

# Determine whether coverage is being computed, and from that choose an
# appropriate timeout length
if [ $(basename $exe) = "coverage" ]; then
  timeout=10
else
  timeout=1
fi

# Fire up the server
$root_dir/sbin/lighttpd -D -f $root_dir/lighttpd.conf -m $root_dir/lib/ &
sleep 1s

# Run the appropriate test
result=1
case $test_name in
  p1)
    timeout $timeout curl -t $timeout -s "http://localhost:8080/index.html" |& \
      diff $here_dir/test/index.html - &> /dev/null
    result=$?;;
  p2)
    timeout $timeout curl -t $timeout -s "http://localhost:8080/hello.php" |& \
      head -100 |& \
      diff $here_dir/test/hello.100 - &> /dev/null
    result=$?;;
  n1)
    rm -f exploit
    timeout $timeout $here_dir/hoagie -d localhost -p 8080 -s /hello.php -o exploit &> /dev/null && \
      ! diff exploit /etc/passwd &> /dev/null
    result=$?;;
esac

# Kill the server
killall lighttpd

exit $result
