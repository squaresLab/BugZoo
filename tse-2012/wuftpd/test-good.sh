#!/bin/bash
exe=$1
exe_dir=$(dirname exe)
test_name=$2
port=$3
here_dir=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )
test_dir="$here_dir/test"

# Execute in directory of server
pushd $exe_dir

# Start the server
$exe -s -p $port &
server_pid=$!
sleep 3s

ftp -in 127.0.0.1 $port < $test_dir/ftp-command-1 |&
  diff $test_dir/ftp-command-1.out - && (echo "PASSED P1")

ftp -in 127.0.0.1 $port < $test_dir/ftp-command-2 |&
  diff $test_dir/ftp-command-2.out - &&
  diff passwd /etc/passwd && rm passwd && (echo "PASSED P2")

ftp -in 127.0.0.1 $port < $test_dir/ftp-command-3 |&
  diff $test_dir/ftp-command-3.out - &&
  diff dmesg /bin/dmesg && rm dmesg && (echo "PASSED P3")

nc 127.0.0.1 $port < $test_dir/nc-command-4 | grep -v 220 | grep -v Total | grep -v 200- |&
  diff $test_dir/nc-command-4.out - && (echo "PASSED P4")

nc 127.0.0.1 $port < $test_dir/nc-command-5 | grep -v 220 |&
  diff $test_dir/nc-command-5.out - && (echo "PASSED P5")

timeout 5 $here_dir/wuftpd-god -t 127.0.0.1 -g -w $port -s 4 |&
  grep -q "leave shell" - && (echo "PASSED N1")

timeout 5 $here_dir/wuftpd-god -t 127.0.0.1 -g -w $port -s 4 |&
  grep -q "leave shell" - && (echo "PASSED N2")

popd

# Kill just this server process
kill $server_pid
wait 
exit 0
