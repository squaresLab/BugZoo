#!/bin/sh
ulimit -t 5
export PROG=$1
export OUT=$2
export PORT=$3
export DIR=$PROG"-g"  
rm -rf $DIR
mkdir $DIR
mkdir $DIR/etc
mkdir $DIR/bin
cp -ra htdocs $DIR/htdocs
find $DIR/htdocs | grep -i \\.svn | xargs rm -rf 
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
echo SERVER_PORT     = \"$PORT"0"\" >> $DIR/etc/httpd.cfg
cd $DIR/bin
../../limit ../../$PROG 
../../limit /usr/bin/wget -t 1 "http://localhost:"$PORT"0"/index.html
diff index.html ../../index.html && (echo "index.html" >> ../../$OUT)
../../limit /usr/bin/wget -t 1 "http://localhost:"$PORT"0"/blank.html
diff blank.html ../../blank.html && (echo "blank.html" >> ../../$OUT)
../../limit /usr/bin/wget -t 1 "http://localhost:"$PORT"0"/notfound.html
diff notfound.html ../../notfound.html && (echo "notfound.html" >> ../../$OUT)
../../limit /usr/bin/wget -t 1 "http://localhost:"$PORT"0"/images/default.gif
diff default.gif ../../default.gif && (echo "default.gif" >> ../../$OUT)
rm -rf index.html
../../limit /usr/bin/wget -t 1 "http://localhost:"$PORT"0"/images/
diff index.html ../../images.html && (echo "images.html" >> ../../$OUT)
../../limit /usr/bin/wget -t 1 --post-data 'name=westley&submit=submit' "http://localhost:"$PORT"0"/cgi-bin/hello.pl
diff hello.pl ../../hello.pl && (echo "hello.pl" >> ../../$OUT)
kill -9 $! 
killall `basename $PROG`
killall -9 `basename $PROG`
wait 
exit 0
