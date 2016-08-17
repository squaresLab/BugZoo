#!/bin/bash
executable=$1
test_id=$2
here_dir=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )

# Are we computing coverage?
[[ $(basename $1) = "coverage" ]] && coverage=0 || coverage=1

positive()
{
  [[ $coverage = 0 ]] && timeout=60 || timeout=1
  timeout $timeout $executable < $here_dir/test/$test_id \
    |& diff $here_dir/test/$test_id.out - &> /dev/null
}

negative()
{
  [[ $coverage = 0 ]] && timeout=10 || timeout=1
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
