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
  diff dmesg /bin/dmesg && (echo "PASSED P3")

nc 127.0.0.1 $port < $test_dir/nc-command-4 | grep -v 220 | grep -v Total | grep -v 200- |&
  diff $test_dir/nc-command-4.out - && (echo "PASSED P4")

nc 127.0.0.1 $port < $test_dir/nc-command-5 | grep -v 220 |&
  diff $test_dir/nc-command-5.out - && (echo "PASSED P5")

timeout 5 $here_dir/wuftpd-god -t 127.0.0.1 -g -w $port -s 4 |&
  grep -q "leave shell" - && (echo "PASSED N1")

timeout 5 $here_dir/wuftpd-god -t 127.0.0.1 -g -w $port -s 4 |&
  grep -q "leave shell" - && (echo "PASSED N2")

# Try to kill JUST the server; this prevents multi-threading :-(
killall `basename $exe`
wait 
exit 0
