#!/bin/sh
ulimit -t 5
export PROG=$1
export OUT=$2
export PORT=$3
export DIR=$PROG"-g"  
rm -rf $DIR
mkdir $DIR
cd $DIR
../limit60 ../$PROG -s -p $PORT &
sleep 3s
/usr/bin/ftp -in localhost $PORT < ../ftp-command-1 >& 1.out
diff 1.out ../ftp-command-1.out && (echo "ftp-1" >> ../$OUT)
/usr/bin/ftp -in localhost $PORT < ../ftp-command-2 >& 2.out
diff 2.out ../ftp-command-2.out && (echo "ftp-2" >> ../$OUT)
diff passwd /etc/passwd && (echo "passwd" >> ../$OUT)
/usr/bin/ftp -in localhost $PORT < ../ftp-command-3 >& 3.out
diff 3.out ../ftp-command-3.out && (echo "ftp-3" >> ../$OUT)
diff dmesg /bin/dmesg && (echo "dmesg" >> ../$OUT)
/usr/bin/nc localhost $PORT < ../nc-command-4 | grep -v 220 | grep -v Total | grep -v 200- >& 4.out
diff 4.out ../nc-command-4.out && (echo "nc-4" >> ../$OUT)
/usr/bin/nc localhost $PORT < ../nc-command-5 | grep -v 220 >& 5.out
diff 5.out ../nc-command-5.out && (echo "nc-5" >> ../$OUT)
kill -9 $! 
killall `basename $PROG`
killall -9 `basename $PROG`
wait 
exit 0
