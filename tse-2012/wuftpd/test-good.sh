#!/bin/bash
exe=$1
test_name=$2
port=$3
here_dir=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )
test_dir="$here_dir/test"

# Start the server
$exe -s -p $port &
sleep 3s

ftp -in 127.0.0.1 $port < $test_dir/ftp-command-1 &> $here_dir/ftpc1.out
#diff $test_dir/ftp-command-1.out - && (echo "PASSED P1")

#/usr/bin/ftp -in localhost $PORT < ../ftp-command-2 >& 2.out
#diff 2.out ../ftp-command-2.out && (echo "ftp-2" >> ../$OUT)
#diff passwd /etc/passwd && (echo "passwd" >> ../$OUT)
#/usr/bin/ftp -in localhost $PORT < ../ftp-command-3 >& 3.out
#diff 3.out ../ftp-command-3.out && (echo "ftp-3" >> ../$OUT)
#diff dmesg /bin/dmesg && (echo "dmesg" >> ../$OUT)
#/usr/bin/nc localhost $PORT < ../nc-command-4 | grep -v 220 | grep -v Total | grep -v 200- >& 4.out
#diff 4.out ../nc-command-4.out && (echo "nc-4" >> ../$OUT)
#/usr/bin/nc localhost $PORT < ../nc-command-5 | grep -v 220 >& 5.out
#diff 5.out ../nc-command-5.out && (echo "nc-5" >> ../$OUT)

#kill -9 $! 
killall `basename $exe`
#killall -9 `basename $exe`
wait 
exit 0
