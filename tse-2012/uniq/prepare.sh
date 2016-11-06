#!/bin/bash
#
# Generates the expected test case outputs for each of the positive tests
#
here_dir=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )
test_dir="$here_dir/test"

$here_dir/compile.sh $here_dir/uniq
$here_dir/uniq < $test_dir/p1.in &> $test_dir/p1.out
$here_dir/uniq < $test_dir/p2.in &> $test_dir/p2.out
$here_dir/uniq < $test_dir/p3.in &> $test_dir/p3.out
$here_dir/uniq < $test_dir/p4.in &> $test_dir/p4.out
$here_dir/uniq < $test_dir/p5.in &> $test_dir/p5.out
rm $here_dir/uniq
