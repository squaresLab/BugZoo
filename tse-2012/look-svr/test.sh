#!/bin/bash
exe=$1
test_id=$2
here_dir=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )

# Check if this test script is being used to compute coverage information.
if [ $(basename $exe) = "coverage" ]; then
  cov=1
else
  cov=0
fi

# Treats the test case as a positive test case.
exec_pos()
{
  if [ $cov = 0 ]; then
    timeout 1 $exe $here_dir/test/input $here_dir/test/$test_id &> /dev/null
  else
    $exe $here_dir/test/input $here_dir/test/$test_id &> /dev/null
  fi
  return $?
}

# Treats the test case as a negative test case.
exec_neg()
{
  if [ $cov = 0 ]; then
    timeout 1 $exe $here_dir/test/input $here_dir/test/input &> /dev/null
  else
    $exe $here_dir/test/input $here_dir/test/$test_id &> /dev/null
  fi
  return $?
}

case $test_id in
  p1) exec_pos && exit 0;;
  p2) exec_pos && exit 0;;
  p3) exec_pos && exit 0;;
  p4) exec_pos && exit 0;;
  #p5) exec_pos && exit 0;;
  n1) exec_neg && exit 0;;
esac
exit 1
