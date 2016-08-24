#!/bin/bash
here_dir=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )
executable=$(readlink -f "$1")
executable_dir=$(dirname "$executable")
executable="$executable_dir/nullhttpd"
test_id=$2
port=$3
test_dir="$here_dir/test"
server_url="http://localhost:"$port""

# Check if this test script is being used to compute coverage information.
coverage=$([[ "$executable_dir" = "coverage" ]])
[[ $coverage = 0 ]] && sleepytime=15 || sleepytime=1

build_root(){
  root_dir=$1
  port=$2
  pushd $root_dir
  mkdir etc
  mkdir bin
  cp -ra $test_dir/* .
  mv httpd.cfg.base etc/httpd.cfg
  sed -i'' "s;__SERVER_ROOT__;$root_dir;g" $root_dir/etc/httpd.cfg
  sed -i'' "s;__SERVER_PORT__;$port;g" $root_dir/etc/httpd.cfg
  popd
}

# Create a fake root
server_dir=$(mktemp -d)
build_root $server_dir $port

# Get the server running?
pushd $server_dir/bin
sudo $executable $port &
sleep "$sleepytime"s

result=1
case $test_id in
  p1) timeout 1 curl --silent -t 1 "$server_url/index.html" |& \
      diff $test_dir/index.html - &> /dev/null && result=0;;
  p2) timeout 1 curl --silent -t 1 "$server_url/blank.html" |& \
      diff $test_dir/blank.html - && result=0;;
  p3) timeout 1 curl --silent -t 1 "$server_url/notfound.html" |& \
      diff $test_dir/notfound.html - && result=0;;
  p4) timeout 1 curl --silent -t 1 "$server_url/images/default.gif" |& \
      diff $test_dir/default.gif - && result=0;;
  p5) timeout 1 curl --silent -t 1 "$server_url/images/" |& head -n 4 |& \
      diff $test_dir/images.html - && result=0;;
  p6) timeout 1 wget -O - -o /dev/null -t 1 --post-data 'name=westley&submit=submit' "$server_url/cgi-bin/hello.pl" |& \
      diff $test_dir/hello.out - && result=0;;
  n1) timeout 5 $test_dir/exploit -h localhost -p $port -t2
      timeout 1 curl --silent -t 1 "$server_url/index.html" |& \
      diff $test_dir/index.html - && result=0;;
esac

# Destroy the temporary root and kill the server
pid=$(ps aux | grep "$executable $port" | grep -v grep | awk '{print $2}')
sudo kill -9 $pid
rm -rf $server_dir
wait 
exit $result
