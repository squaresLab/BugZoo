#!/bin/bash
executable=$( dirname $1 )
test_id=$2
dir=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )

#Check if coverage is being run. If so, don't use time limit.
if [ `basename $1` = "coverage" ] ; then
  timeout=120
else
  timeout=60
fi

run_test()
{
    pushd src > /dev/null
    timeout $timeout $dir/test.pl $1
    result=$?
    popd > /dev/null
    return $result
}

case $test_id in
