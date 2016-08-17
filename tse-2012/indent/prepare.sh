#!/bin/bash
#
# Generates the expected test case outputs for each of the positive tests
#
here_dir=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )
test_dir="$here_dir/test"

$here_dir/compile.sh $here_dir/indent
$here_dir/indent < $test_dir/p1 &> $test_dir/p1.out
$here_dir/indent < $test_dir/p2 &> $test_dir/p2.out
$here_dir/indent < $test_dir/p3 &> $test_dir/p3.out
$here_dir/indent < $test_dir/p4 &> $test_dir/p4.out
$here_dir/indent < $test_dir/p5 &> $test_dir/p5.out
