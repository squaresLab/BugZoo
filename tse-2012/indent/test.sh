#!/bin/bash
executable=$1
executable_dir=$(dirname "$executable")
executable="$executable_dir/indent"
test_id=$2
here_dir=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )

# Check if this test script is being used to compute coverage information.
[[ "$executable" = "coverage" ]] && coverage=0 || coverage=1

positive()
{
  [[ $coverage = 0 ]] && timeout=30 || timeout=1
  timeout $timeout $executable < $here_dir/test/$test_id \
    |& diff $here_dir/test/$test_id.out - &> /dev/null
}

negative()
{
  [[ $coverage = 0 ]] && timeout=30 || timeout=1
  timeout $timeout $executable < $here_dir/test/n1 &> /dev/null
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
