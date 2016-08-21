#!/bin/bash
#
# Generates the expected test case outputs for each of the positive tests
#
here_dir=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )
test_dir="$here_dir/test"
executable="$here_dir/look"

$here_dir/compile.sh $executable
$executable $test_dir/input $test_dir/p1 &> $test_dir/p1.out
$executable $test_dir/input $test_dir/p2 &> $test_dir/p2.out
$executable $test_dir/input $test_dir/p3 &> $test_dir/p3.out
$executable $test_dir/input $test_dir/p4 &> $test_dir/p4.out
$executable $test_dir/input $test_dir/p5 &> $test_dir/p5.out
rm -f $executable
