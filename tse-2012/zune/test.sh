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
  p1) exec_pos;;
  p2) exec_pos;;
  p3) exec_pos;;
  p4) exec_pos;;
  p5) exec_pos;;
  p6) exec_pos;;
  p7) exec_pos;;
  p8) exec_pos;;
  p9) exec_pos;;
  p10) exec_pos;;
  p11) exec_pos;;
  p12) exec_pos;;
  p13) exec_pos;;
  p14) exec_pos;;
  p15) exec_pos;;
  p16) exec_pos;;
  p17) exec_pos;;
  p18) exec_pos;;
  n1) exec_neg;;
  n2) exec_neg;;
  n3) exec_neg;;
  n4) exec_neg;;
esac

# Find the result of the test case execution.
result=$?
exit $result
