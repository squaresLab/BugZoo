#!/bin/bash
exe=$1
test_name=$2
port=$3

here_dir=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )
root_dir="$here_dir/fake-root"

# Check if this test script is being used to compute coverage information.
[[ $(dirname $exe) = "coverage" ]] && coverage=0 || coverage=1
[[ $coverage = 0 ]] && timeout=30 || timeout=1
[[ $coverage = 0 ]] && sleepytime=10 || sleepytime=1

# Build a temporary configuration file for this test instance
cfg_file=$(mktemp)
sed "s/server.port                = 8080/server.port = $port/g" $root_dir/lighttpd.conf > $cfg_file

# Fire up the server
sudo $root_dir/sbin/lighttpd -D -f $cfg_file -m $root_dir/lib/ &
server_pid=$!
sleep "$sleepytime"s

# Run the appropriate test
result=1
case $test_name in
  p1)
    timeout $timeout curl -t $timeout -s "http://localhost:$port/index.html" |& \
      diff $here_dir/test/index.html - &> /dev/null
    result=$?;;
  p2)
    timeout $timeout curl -t $timeout -s "http://localhost:$port/hello.php" |& \
      head -100 |& \
      diff $here_dir/test/hello.100 - &> /dev/null
    result=$?;;
  n1)
    rm -f exploit
    timeout $timeout $here_dir/hoagie -d localhost -p $port -s /hello.php -o exploit &> /dev/null && \
      ! diff exploit /etc/passwd &> /dev/null
    result=$?;;
esac

# Kill the server and destroy the temporary configuration file
rm -f $cfg_file
sudo kill $server_pid
exit $result
