#!/bin/bash
here_dir=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )
executable=$(readlink -f "$1")
test_id=$2
port=$3
test_dir="$here_dir/test"
server_url="http://localhost:"$port""

# Check if this test script is being used to compute coverage information.
coverage=$([[ $(basename $executable) = "coverage" ]])
[[ $coverage = 0 ]] && timeout=30 || timeout=30

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
sudo $executable &
pid=$!
echo "Running on $pid"
sleep 5s

timeout $timeout curl --silent -t 1 "$server_url/index.html" | \
diff $test_dir/index.html - &> /dev/null && echo "index.html"

timeout $timeout curl --silent -t 1 "$server_url/blank.html" |& \
diff $test_dir/blank.html - &> /dev/null && echo "blank.html"

timeout $timeout curl --silent -t 1 "$server_url/notfound.html" |& \
diff $test_dir/notfound.html - &> /dev/null && echo "notfound.html"

timeout $timeout curl --silent -t 1 "$server_url/images/default.gif" |& \
diff $test_dir/default.gif - &> /dev/null && echo "default.gif"

timeout $timeout curl --silent -t 1 "$server_url/images/" |& head -n 4 |& \
diff $test_dir/images.html - &> /dev/null && echo "images.html"

timeout $timeout wget -O - -o /dev/null -t 1 --post-data 'name=westley&submit=submit' "$server_url/cgi-bin/hello.pl" |& \
diff $test_dir/hello.out - &> /dev/null && echo "hello.pl"

# Destroy the temporary root and kill the server
sudo kill -9 $pid
rm -rf $server_dir
wait 
exit 0
