#!/bin/bash
#
# Generates the expected test case outputs for each of the positive tests
#
here_dir=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )
test_dir="$here_dir/test"
executable="$here_dir/ccrypt"

$here_dir/compile.sh $executable
$executable -help &> $test_dir/p1.out
rm -f $executable
