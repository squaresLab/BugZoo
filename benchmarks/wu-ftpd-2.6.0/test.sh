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
positive()
{
  timeout 60 bash -c "$EXECUTABLE -s -p $PORT" &> /dev/null # how can this timeout work?
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
negative()
{
  [ $cov = 0 ] && TIMEOUT=1 || TIMEOUT=10
  $GOD -t localhost -g -w $PORT -s 4 |& grep "leave shell" &> /dev/null
  return $?
}

# Perform necessary preparations before running the test case.
ulimit -c 8

# Execute the test case with the given ID.
case $TEST_ID in
  p1) positive;;
  p2) positive;;
  p3) positive;;
  p4) positive;;
  p5) positive;;
  n1) rm -f core*; negative;;
esac

# Find the result of the test case execution.
result=$?

# Return the result of the test case execution
exit $result
