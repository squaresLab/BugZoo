#!/bin/bash
exe=$1
test_name=$2
port=$3
here_dir=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )
test_dir="$here_dir/test"

# Should move to a safe dir

# Start the server
$exe -s -p $port &
sleep 3s

ftp -in 127.0.0.1 $port < $test_dir/ftp-command-1 |&
diff $test_dir/ftp-command-1.out - && (echo "PASSED P1")

ftp -in 127.0.0.1 $port < $test_dir/ftp-command-2 |&
diff $test_dir/ftp-command-2.out - &&
diff passwd /etc/passwd && (echo "PASSED P2")

ftp -in 127.0.0.1 $port < $test_dir/ftp-command-3 |&
diff $test_dir/ftp-command-3.out - &&
diff dmesg bin/dmesg && (echo "PASSED P3")

#/usr/bin/nc localhost $PORT < ../nc-command-4 | grep -v 220 | grep -v Total | grep -v 200- >& 4.out
#diff 4.out ../nc-command-4.out && (echo "nc-4" >> ../$OUT)
#/usr/bin/nc localhost $PORT < ../nc-command-5 | grep -v 220 >& 5.out
#diff 5.out ../nc-command-5.out && (echo "nc-5" >> ../$OUT)

#kill -9 $! 
killall `basename $exe`
#killall -9 `basename $exe`
wait 
exit 0
