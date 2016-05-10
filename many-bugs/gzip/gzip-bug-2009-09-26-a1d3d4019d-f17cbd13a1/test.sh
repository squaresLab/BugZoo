#!/bin/bash
EXECUTABLE=$( dirname $1 )
TEST_ID=$2
DIR=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )

#Check if coverage is being run. If so, don't use time limit.
if [ `basename $1` = "coverage" ] ; then
  TIMEOUT=120
else
  TIMEOUT=60
fi

run_test()
{
    pushd gzip
    timeout $TIMEOUT $DIR/test.pl $1
    RESULT=$?
    popd
    return $RESULT
}

case $TEST_ID in
    p1) run_test 1 && exit 0 ;; 
    p2) run_test 3 && exit 0 ;; 
    p3) run_test 4 && exit 0 ;; 
    n1) run_test 7 && exit 0 ;; 
esac
exit 1
