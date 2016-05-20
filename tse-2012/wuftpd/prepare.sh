#!/bin/bash
here_dir=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )
test_dir="$here_dir/test"
oracle=$here_dir/oracle/ftpd
port=8931

# Compile an oracle ftpd and generate the expected output for each of the
# commands
./compile.sh $oracle

$oracle  -s -p $port &
sleep 5s

ftp -in 127.0.0.1 $port < $test_dir/ftp-command-1 &> $test_dir/ftp-command-1.out
ftp -in 127.0.0.1 $port < $test_dir/ftp-command-2 &> $test_dir/ftp-command-2.out
#rm -f passwd

killall $(basename $oracle)
wait
