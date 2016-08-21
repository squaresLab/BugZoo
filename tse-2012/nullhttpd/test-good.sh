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

# Rebuild the server directory; this is limiting us to single-threaded
# execution!
#rm -rf $server_dir
#mkdir $server_dir
#mkdir $server_dir/etc
#mkdir $server_dir/bin
#cp -ra $test_dir/htdocs $server_dir/htdocs
#cp -ra $test_dir/cgi-bin $server_dir/cgi-bin

# Build the httpd.cfg file
#echo SERVER_BASE_server_dir = \"$server_dir/\" >> $server_dir/etc/httpd.cfg 
#echo SERVER_BIN_server_dir = \"$server_dir/bin/\" >> $server_dir/etc/httpd.cfg 
#echo SERVER_CGI_server_dir = \"$server_dir/cgi-bin/\" >> $server_dir/etc/httpd.cfg 
#echo SERVER_ETC_server_dir = \"$server_dir/etc/\" >> $server_dir/etc/httpd.cfg 
#echo SERVER_HTTP_server_dir = \"$PWD/$server_dir/htdocs/\" >> $server_dir/etc/httpd.cfg 
#echo SERVER_LOGLEVEL = \"1\" >> $server_dir/etc/httpd.cfg
#echo SERVER_HOSTNAME = \"localhost\" >> $server_dir/etc/httpd.cfg
#echo SERVER_MAXCONN  = \"50\" >> $server_dir/etc/httpd.cfg
#echo SERVER_MAXIDLE  = \"120\" >> $server_dir/etc/httpd.cfg
#echo SERVER_PORT     = \"$port"0"\" >> $server_dir/etc/httpd.cfg

build_root(){
  root_dir=$1
  port=$2
  pushd $root_dir
  mkdir etc
  mkdir bin
  cp -ra $test_dir/htdocs $root_dir/htdocs
  cp -ra $test_dir/cgi-bin $root_dir/cgi-bin
  cp $test_dir/httpd.cfg.base $root_dir/etc/httpd.cfg
  sed -i'' "s;__SERVER_ROOT__;$root_dir;g" $root_dir/etc/httpd.cfg
  sed -i'' "s;__SERVER_PORT__;$port;g" $root_dir/etc/httpd.cfg
  popd
}

# Create a fake root
server_dir=$(mktemp -d)
build_root $server_dir $port
cat $server_dir/etc/httpd.cfg

# Get the server running?
pushd $server_dir/bin
$executable &
pid=$!
echo "Running on $pid"
sleep 5s

curl -t 1 "$server_url/index.html" | cat

#timeout $timeout curl --silent -t 1 "$server_url/index.html" | \
#diff $test_dir/index.html - &> /dev/null && echo "index.html"

timeout $timeout curl --silent -t 1 "$server_url/blank.html" |& \
diff $test_dir/blank.html - &> /dev/null && echo "blank.html"

timeout $timeout curl --silent -t 1 "$server_url/notfound.html" |& \
diff $test_dir/notfound.html - &> /dev/null && echo "notfound.html"

timeout $timeout curl --silent -t 1 "$server_url/images/default.gif" |& \
diff $test_dir/default.gif - &> /dev/null && echo "default.gif"

timeout $timeout curl --silent -t 1 "$server_url/images/" |& head -n 4 |& \
diff $test_dir/images.html - &> /dev/null && echo "images.html"

timeout $timeout wget -O - -o /dev/null -t 1 --post-data 'name=westley&submit=submit' "$server_url/cgi-bin/hello.pl" |& \
diff $test_dir/hello.out - && echo "hello.pl"

# Destroy the temporary root
rm -rf $server_dir

kill -9 $pid
wait 
exit 0
