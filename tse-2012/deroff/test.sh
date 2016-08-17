#!/bin/bash
executable=$1
test_id=$2
here_dir=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )
test_dir="$here_dir/test"

# Check if this test script is being used to compute coverage information.
[[ $(dirname $executable) = "coverage" ]] && coverage=0 || coverage=1
[[ $coverage = 0 ]] && timeout=10 || timeout=1

# Perform necessary preparations before running the test case.
ulimit -c 8

positive()
{
  timeout $timeout $executable < $test_dir/$test_id.in |& \
    diff $test_dir/$test_id.out -
}

negative()
{
  timeout $timeout $executable < $test_dir/n1.in
}

case $test_id in
  p1) positive p1 && exit 0;;
  p2) positive p2 && exit 0;;
  p3) positive p3 && exit 0;;
  p4) positive p4 && exit 0;;
  p5) positive p5 && exit 0;;
  n1) negative && exit 0;;
esac 
exit 1
