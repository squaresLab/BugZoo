#!/bin/bash
executable=$1
test_id=$2
here_dir=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )
test_dir="$here_dir/test"

# Check if this test script is being used to compute coverage information.
coverage=$([[ $(basename $executable) = "coverage" ]])
[[ $coverage = 0 ]] && timeout=10 || timeout=1

# Treats the test case as a positive test case.
positive()
{
  timeout $timeout bash -c "$executable < $here_dir/test/$test_id" \
      |& diff $here_dir/test/output.$test_id - &> /dev/null
}

negative()
{
  timeout $timeout $executable < $here_dir/test/n1 &> /dev/null
}

# Perform necessary preparations before running the test case.
ulimit -c 8

# Execute the test case with the given ID.
case $test_id in
  p1) positive && exit 0;;
  p2) positive && exit 0;;
  p3) positive && exit 0;;
  p4) positive && exit 0;;
  p5) positive && exit 0;;
  n1) negative && exit 0;;
esac
exit 1
