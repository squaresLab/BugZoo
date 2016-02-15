#!/bin/bash
EXECUTABLE=$1
TEST_ID=$2

# Find the directory that this test script belongs to.
DIR=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )

positive()
{
  case=$1
  if [ $(basename $EXECUTABLE) = "coverage" ]; then
    $EXECUTABLE < $DIR/test/$case |& diff $DIR/test/output.$case -
  else
    timeout 4 $EXECUTABLE < $DIR/test/$case |& diff $DIR/test/output.$case -
  fi
}

negative()
{
  if [ $(basename $EXECUTABLE) = "coverage" ]; then
    $EXECUTABLE < $DIR/test/t5
  else
    timeout 4 $EXECUTABLE < $DIR/test/t5
  fi
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
