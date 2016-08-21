#!/bin/bash
here_dir=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )
executable=$1
test_id=$2
port=$3
test_dir="$here_dir/test"

# Check if this test script is being used to compute coverage information.
coverage=$([[ $(basename $executable) = "coverage" ]])
[[ $coverage = 0 ]] && timeout=10 || timeout=10

export OUT=$2

export server_dir=$executable"-g"

# Rebuild the server directory; this is limiting us to single-threaded
# execution!
rm -rf $server_dir
mkdir $server_dir
mkdir $server_dir/etc
mkdir $server_dir/bin
cp -ra $test_dir/htdocs $server_dir/htdocs
cp -ra $test_dir/cgi-bin $server_dir/cgi-bin

# Build the httpd.cfg file
echo SERVER_BASE_server_dir = \"$PWD/$server_dir/\" >> $server_dir/etc/httpd.cfg 
echo SERVER_BIN_server_dir = \"$PWD/$server_dir/bin/\" >> $server_dir/etc/httpd.cfg 
echo SERVER_CGI_server_dir = \"$PWD/$server_dir/cgi-bin/\" >> $server_dir/etc/httpd.cfg 
echo SERVER_ETC_server_dir = \"$PWD/$server_dir/etc/\" >> $server_dir/etc/httpd.cfg 
echo SERVER_HTTP_server_dir = \"$PWD/$server_dir/htdocs/\" >> $server_dir/etc/httpd.cfg 
echo SERVER_LOGLEVEL = \"1\" >> $server_dir/etc/httpd.cfg
echo SERVER_HOSTNAME = \"localhost\" >> $server_dir/etc/httpd.cfg
echo SERVER_MAXCONN  = \"50\" >> $server_dir/etc/httpd.cfg
echo SERVER_MAXIDLE  = \"120\" >> $server_dir/etc/httpd.cfg
echo SERVER_PORT     = \"$port"0"\" >> $server_dir/etc/httpd.cfg

pushd $server_dir/bin

timeout $timeout $executable 
timeout $timeout wget -t 1 "http://localhost:"$port"0"/index.html
diff index.html ../../index.html && (echo "index.html" >> ../../$OUT)

timeout $timeout wget -t 1 "http://localhost:"$port"0"/blank.html
diff blank.html ../../blank.html && (echo "blank.html" >> ../../$OUT)

timeout $timeout wget -t 1 "http://localhost:"$port"0"/notfound.html
diff notfound.html ../../notfound.html && (echo "notfound.html" >> ../../$OUT)

timeout $timeout wget -t 1 "http://localhost:"$port"0"/images/default.gif
diff default.gif ../../default.gif && (echo "default.gif" >> ../../$OUT)

rm -rf index.html

timeout $timeout wget -t 1 "http://localhost:"$port"0"/images/
diff index.html ../../images.html && (echo "images.html" >> ../../$OUT)

timeout $timeout wget -t 1 --post-data 'name=westley&submit=submit' "http://localhost:"$port"0"/cgi-bin/hello.pl
diff hello.pl ../../hello.pl && (echo "hello.pl" >> ../../$OUT)

kill -9 $! 
killall `basename $executable`
killall -9 `basename $executable`

wait 
exit 0
