#!/bin/bash

# Retrieve and store the provided command-line arguments.
executable=$1
test_id=$2

# Find the directory that this test script belongs to.
here_dir=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )
test_dir="$here_dir/test"

# Check if this test script is being used to compute coverage information.
[[ $(dirname $executable) = "coverage" ]] && coverage=0 || coverage=1
[[ $coverage = 0 ]] && timeout=10 || timeout=1

# Treats the test case as a positive test case.
exec_pos()
{
  [[ $cov = 0 ]] && timeout=1 || timeout=10
  timeout $timeout $executable < $test_dir/$test_id &> /dev/null
  return $?
}

# Treats the test case as a negative test case.
exec_neg()
{
  [[ $cov = 0 ]] && timeout=1 || timeout=4
  timeout $timeout $executable < $test_dir/$test_id &> /dev/null
  return $?
}

# Perform any necessary preparations before running the test case.
ulimit -c 8

# Execute the appropriate test case.
result=1
case $test_id in
  p1) exec_pos && result=0;;
  p2) exec_pos && result=0;;
  p3) exec_pos && result=0;;
  p4) exec_pos && result=0;;
  p5) exec_pos && result=0;;
  n1) exec_neg && result=0;;
esac 
rm -rf core*
exit $result
