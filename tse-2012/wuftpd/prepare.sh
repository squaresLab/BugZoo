#!/bin/bash
here_dir=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )
test_dir="$here_dir/test"

# Generate the expected outputs for each of the commands
$exe -s -p $port &
sleep 5s

ftp -in 127.0.0.1 $port < $test_dir/ftp-command-1 &> $test_dir/ftp-command-1.out

