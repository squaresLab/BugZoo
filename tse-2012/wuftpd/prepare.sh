#!/bin/bash
here_dir=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )
test_dir="$here_dir/test"
oracle=$here_dir/oracle/ftpd
port=8931

# Compile the exploit
gcc $here_dir/wuftpd-god.c -o $here_dir/wuftpd-god -m32

# Compile an oracle ftpd and generate the expected output for each of the
# commands
./compile.sh $oracle

$oracle  -s -p $port &
sleep 5s

ftp -in 127.0.0.1 $port < $test_dir/ftp-command-1 &> $test_dir/ftp-command-1.out
ftp -in 127.0.0.1 $port < $test_dir/ftp-command-2 &> $test_dir/ftp-command-2.out
ftp -in 127.0.0.1 $port < $test_dir/ftp-command-3 &> $test_dir/ftp-command-3.out
rm passwd dmesg

nc 127.0.0.1 $port < $test_dir/nc-command-4 | grep -v 220 | grep -v Total | grep -v 200- &> $test_dir/nc-command-4.out
nc 127.0.0.1 $port < $test_dir/nc-command-5 | grep -v 220 &> $test_dir/nc-command-5.out

killall $(basename $oracle)
wait
