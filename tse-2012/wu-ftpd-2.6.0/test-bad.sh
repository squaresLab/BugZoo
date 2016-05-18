#!/bin/sh
ulimit -t 10
export PROG=$1
export OUT=$2
export PORT=$3
export DIR=$PROG"-b"  
rm -rf $DIR
mkdir $DIR
cd $DIR
../limit60 ../$PROG -s -p $PORT &
sleep 2s

../limit60 ../wuftpd-god -t localhost -g -w $PORT -s 4 >& exploit1.out
../limit60 ../wuftpd-god -t localhost -g -w $PORT -s 4 >& exploit2.out
grep "leave shell" exploit1.out >& /dev/null || grep "leave shell" exploit2.out >& /dev/null || (echo "exploit" >> ../$OUT) 

kill -9 $! 
killall `basename $PROG`
killall -9 `basename $PROG`
wait 
exit 0
