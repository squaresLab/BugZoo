#!/bin/bash
executable=$1
test_id=$2

# Find the directory that this test script belongs to.
here_dir=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )
test_dir="$here_dir/test"

# Check if this test script is being used to compute coverage information.
[[ $(dirname $executable) = "coverage" ]] && coverage=0 || coverage=1
[[ $coverage = 0 ]] && timeout=10 || timeout=1

positive()
{
  source $test_dir/env.good.sh
}

negative()
{
  source $test_dir/env.bad.sh
}

execute()
{
  timeout $timeout $1 |& diff $test_dir/$test_id.out -
}

case $test_id in
  p1) positive; execute "$executable -h";;
  p2) positive; execute $executable;;
  n1) negative; execute $executable;;
esac 
exit $?
