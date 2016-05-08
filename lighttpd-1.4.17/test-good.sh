#!/bin/sh
ulimit -t 5
export PROG=$1
export OUT=$2 
export PORT=$3
export LDIR=/home/csl9q/genprog/security/lighttpd-1.4.17-root
rm -rf index.html hello.php hello.100 exploit
$LDIR/sbin/lighttpd -D -f $LDIR/lighttpd.conf -m $LDIR/lib/ &
sleep 1s
./limit /usr/bin/wget -t 1 "http://localhost:8080/index.html"
diff index.html.output index.html && (echo "index.html" >> $OUT)
./limit /usr/bin/wget -t 1 "http://localhost:8080/hello.php"
head -100 hello.php > hello.100 
diff hello.php.output hello.100 && (echo "hello.100" >> $OUT)
./limit ./hoagie -d localhost -p 8080 -s /hello.php -o exploit
diff exploit /etc/passwd >& /dev/null || (echo "exploit" >> $OUT)
kill $! 
sleep 1s
killall lighttpd 
wait 
exit 0