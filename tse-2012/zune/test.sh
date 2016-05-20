#!/bin/bash

# Retrieve and store the provided command-line arguments.
EXECUTABLE=$1
TEST_ID=$2

# Find the directory that this test script belongs to.
DIR=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )

# Find the input command for the given test.
TEST_INPUT=$(<"$DIR/test/$TEST_ID")

# Check if this test script is being used to compute coverage information.
if [ $(basename $1) = "coverage" ]; then
  cov=1
else
  cov=0
fi

# Treats the test case as a positive test case.
exec_pos()
{
  if [ $cov = 0 ]; then
    timeout 1 $EXECUTABLE $TEST_INPUT |& diff $DIR/test/output.$TEST_ID - &> /dev/null
  else
    $EXECUTABLE $TEST_INPUT |& diff $DIR/test/output.$TEST_ID - &> /dev/null
  fi
  return $?
}

# Treats the test case as a negative test case.
exec_neg()
{
  if [ $cov = 0 ]; then
    timeout 1 $EXECUTABLE $TEST_INPUT |& diff $DIR/test/output.$TEST_ID - &> /dev/null
  else
    timeout 10 $EXECUTABLE $TEST_INPUT |& diff $DIR/test/output.$TEST_ID - &> /dev/null
  fi
  return $?
}

# Execute the appropriate test case.
case $TEST_ID in
  p1) exec_pos && exit 0;;
  p2) exec_pos && exit 0;;
  p3) exec_pos && exit 0;;
  p4) exec_pos && exit 0;;
  p5) exec_pos && exit 0;;
  p6) exec_pos && exit 0;;
  p7) exec_pos && exit 0;;
  p8) exec_pos && exit 0;;
  p9) exec_pos && exit 0;;
  p10) exec_pos && exit 0;;
  p11) exec_pos && exit 0;;
  p12) exec_pos && exit 0;;
  p13) exec_pos && exit 0;;
  p14) exec_pos && exit 0;;
  p15) exec_pos && exit 0;;
  p16) exec_pos && exit 0;;
  p17) exec_pos && exit 0;;
  p18) exec_pos && exit 0;;
  n1) exec_neg && exit 0;;
  n2) exec_neg && exit 0;;
  n3) exec_neg && exit 0;;
  n4) exec_neg && exit 0;;
esac
exit 1
