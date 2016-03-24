#!/bin/bash
EXECUTABLE=$1
TEST_ID=$2

# Find the directory that this test script belongs to.
DIR=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )

# Determine whether coverage is being computed, and from that choose an
# appropriate timeout length
if [ $(basename $EXECUTABLE) = "coverage" ]; then
  TIMEOUT=10
else
  TIMEOUT=1
fi

# Perform necessary preparations before running the test case.
ulimit -c 8

positive()
{
  case=$1
  timeout $TIMEOUT $EXECUTABLE < $DIR/test/$case.in &> result.$case.tmp \
    && diff $DIR/test/$case.out result.$case.tmp
  result=$?
  rm -f result.$case.tmp
  rm -f core.*
  exit $result
}

negative()
{
  timeout $TIMEOUT $EXECUTABLE < $DIR/test/n1.in
  result=$?
  rm -f core.*
  exit $result
}

case $TEST_ID in
  p1) positive t1;;
  p2) positive t2;;
  p3) positive t4;;
  p4) positive t7;;
  p5) positive t8;;

  # This doesn't seem right...
  n1) negative;;
esac 
exit $?
