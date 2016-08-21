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
  timeout $timeout $executable $test_dir/input $test_dir/$test_id |& \
    diff $test_dir/$test_id.out -
}

negative()
{
  timeout $timeout $executable $test_dir/input $test_dir/input
}

case $test_id in
  p1) positive && exit 0;;
  p2) positive && exit 0;;
  p3) positive && exit 0;;
  p4) positive && exit 0;;
  p5) positive && exit 0;;
  n1) negative && exit 0;;
esac
exit 1
