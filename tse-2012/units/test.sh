#!/bin/bash
executable=$1
exe_dir=$( cd "$(dirname $executable)" && pwd )
test_id=$2
here_dir=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )

# Check if this test script is being used to compute coverage information.
coverage=$([[ $(basename $executable) = "coverage" ]])

positive()
{

  [[ $coverage = 0 ]] && timeout=10 || timeout=2
  timeout $timeout $executable < $here_dir/test/$test_id \
    |& diff $here_dir/test/output.$test_id - &> /dev/null
}

negative()
{
  [[ $coverage = 0 ]] && timeout=10 || timeout=2
  timeout $timeout $executable < $here_dir/test/bad1
}

# Copy the unittab file into the executable directory.
if [ ! $here_dir = $exe_dir ]; then
  cp $here_dir/unittab $exe_dir/unittab
fi

case $test_id in
  p1) positive && exit 0;;
  p2) positive && exit 0;;
  p3) positive && exit 0;;
  p4) positive && exit 0;;
  p5) positive && exit 0;;
  n1) negative && exit 0;;
esac
exit 1
