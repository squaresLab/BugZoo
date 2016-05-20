#!/bin/bash
exe=$1
exe_dir=$(dirname exe)
test_name=$2
port=$3
here_dir=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )
test_dir="$here_dir/test"

# Are we running coverage?
[[ $(basename $exe) = "coverage" ]] && is_cov=0 || is_cov=1

# Execute in directory of server
pushd $exe_dir

# Start the server
$exe -s -p $port &
server_pid=$!
sleep 2s

result=1
case $test_name in
  p1) ftp -in 127.0.0.1 $port < $test_dir/ftp-command-1 |&
        diff $test_dir/ftp-command-1.out - && result=0;;

  p2) ftp -in 127.0.0.1 $port < $test_dir/ftp-command-2 |&
        diff $test_dir/ftp-command-2.out - &&
        diff passwd /etc/passwd && rm passwd && result=0;;

  p3) ftp -in 127.0.0.1 $port < $test_dir/ftp-command-3 |&
       diff $test_dir/ftp-command-3.out - &&
       diff dmesg /bin/dmesg && rm dmesg && result=0;;

  p4) nc 127.0.0.1 $port < $test_dir/nc-command-4 | grep -v 220 | grep -v Total | grep -v 200- |&
        diff $test_dir/nc-command-4.out - && result=0;;

  p5) nc 127.0.0.1 $port < $test_dir/nc-command-5 | grep -v 220 |&
        diff $test_dir/nc-command-5.out - && result=0;;

  n1) timeout 5 $here_dir/wuftpd-god -t 127.0.0.1 -g -w $port -s 4 |&
        grep -q "leave shell" - && result=0;;

  n2) timeout 5 $here_dir/wuftpd-god -t 127.0.0.1 -g -w $port -s 4 |&
        grep -q "leave shell" - && result=0;;
esac
popd
kill $server_pid
wait 
exit $result
