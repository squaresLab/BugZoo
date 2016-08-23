#!/bin/bash
executable=$1
test_id=$2
here_dir=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )
test_dir="$here_dir/test"

# Check if this test script is being used to compute coverage information.
coverage=$([[ $(dirname "$executable") = "coverage" ]])
[[ $coverage = 0 ]] && timeout=10 || timeout=1

case $test_id in
  p1)
    timeout $timeout $executable 1071 1029 |& diff $test_dir/output.1071.1029 - &> /dev/null && exit 0;;
  p2)
    timeout $timeout $executable 555 666 |& diff $test_dir/output.555.666 - &> /dev/null && exit 0;;
  p3)
    timeout $timeout $executable 678 987 |& diff $test_dir/output.678.987 - &> /dev/null && exit 0;;
  p4)
    timeout $timeout $executable 8767 653 |& diff $test_dir/output.8767.653 - &> /dev/null && exit 0;;
  p5)
    timeout $timeout $executable 16777216 512 |& diff $test_dir/output.16777216.512 - &> /dev/null && exit 0;;
  p6)
    timeout $timeout $executable 16 4 |& diff $test_dir/output.16.4 - &> /dev/null && exit 0;;
  p7)
    timeout $timeout $executable 315 831 |& diff $test_dir/output.315.831 - &> /dev/null && exit 0;;
  p8)
    timeout $timeout $executable 513332 91583315 |& diff $test_dir/output.513332.91583315 - &> /dev/null && exit 0;;
  p9)
    timeout $timeout $executable 112 135 |& diff $test_dir/output.112.135 - &> /dev/null && exit 0;;
  p10)
    timeout $timeout $executable 310 55 |& diff $test_dir/output.310.55 - &> /dev/null && exit 0;;
  n1)
    timeout $timeout $executable 0 55 |& diff $test_dir/output.0.55 - &> /dev/null && exit 0;;
esac 
exit 1
