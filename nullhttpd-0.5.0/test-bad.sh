#!/bin/sh
ulimit -t 5
export PROG=$1
export OUT=$2
export PORT=$3
export DIR=$PROG"-b" 
rm -rf $DIR
mkdir $DIR
mkdir $DIR/etc
mkdir $DIR/bin
cp -ra htdocs $DIR/htdocs
cp -ra cgi-bin $DIR/cgi-bin
echo SERVER_BASE_DIR = \"$PWD/$DIR/\" >> $DIR/etc/httpd.cfg 
echo SERVER_BIN_DIR = \"$PWD/$DIR/bin/\" >> $DIR/etc/httpd.cfg 
echo SERVER_CGI_DIR = \"$PWD/$DIR/cgi-bin/\" >> $DIR/etc/httpd.cfg 
echo SERVER_ETC_DIR = \"$PWD/$DIR/etc/\" >> $DIR/etc/httpd.cfg 
echo SERVER_HTTP_DIR = \"$PWD/$DIR/htdocs/\" >> $DIR/etc/httpd.cfg 
echo SERVER_LOGLEVEL = \"1\" >> $DIR/etc/httpd.cfg
echo SERVER_HOSTNAME = \"localhost\" >> $DIR/etc/httpd.cfg
echo SERVER_MAXCONN  = \"50\" >> $DIR/etc/httpd.cfg
echo SERVER_MAXIDLE  = \"120\" >> $DIR/etc/httpd.cfg
echo SERVER_PORT     = \"$PORT"1"\" >> $DIR/etc/httpd.cfg
cd $DIR/bin
../../limit ../../$PROG 
../../nullhttpd-exploit -h localhost -p $PORT"1" -t2 
../../limit /usr/bin/wget -t 1 "http://localhost:"$PORT"1"/index.html
diff index.html ../../index.html && (echo "index.html" >> ../../$OUT)
kill -9 $! 
killall `basename $PROG`
killall -9 `basename $PROG`
wait
exit 0
