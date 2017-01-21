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
    pushd lighttpd
    timeout $TIMEOUT $DIR/test.pl $1
    RESULT=$?
    popd
    return $RESULT
}

case $TEST_ID in
