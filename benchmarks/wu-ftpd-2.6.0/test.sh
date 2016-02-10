#!/bin/bash

# Retrieve and store the provided command-line arguments.
EXECUTABLE=$1
TEST_ID=$2
PORT=$4

# Find the directory that this test script belongs to.
DIR=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )

# Build a sandboxed directory for this FTP to operate within.

# Check if this test script is being used to compute coverage information.
if [ $(basename $1) = "coverage" ]; then
  cov=1
else
  cov=0
fi

# Treats the test case as a positive test case.
exec_pos()
{
  timeout 60 bash -c "$EXECUTABLE -s -p $PORT" &> /dev/null
  sleep 3s # sleep while the server starts up

  if [ $cov = 0 ]; then
    timeout 3 bash -c "$EXECUTABLE < $DIR/test/$TEST_ID" \
      |& diff $DIR/test/output.$TEST_ID - &> /dev/null
  else
    bash -c "$EXECUTABLE < $DIR/test/$TEST_ID" \
      |& diff $DIR/test/output.$TEST_ID - &> /dev/null
  fi
  return $?
}

# Treats the test case as a negative test case.
exec_neg()
{
  if [ $cov = 0 ]; then
    timeout 1 $EXECUTABLE < $DIR/test/n1 &> /dev/null \
      && [ ! -f core* ] &> /dev/null
  else
    timeout 10 $EXECUTABLE < $DIR/test/n1 &> /dev/null \
      && [ ! -f core* ] &> /dev/null
  fi
  return $?
}

# Perform necessary preparations before running the test case.
ulimit -c 8

# Execute the test case with the given ID.
case $TEST_ID in
  p1) exec_pos;;
  p2) exec_pos;;
  p3) exec_pos;;
  p4) exec_pos;;
  p5) exec_pos;;
  n1) rm -rf core*; exec_neg;;
esac

# Find the result of the test case execution.
result=$?

# Return the result of the test case execution
exit $result
