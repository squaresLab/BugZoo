#!/bin/bash
ulimit -c 8

# Retrieve and store the provided command-line arguments.
EXECUTABLE=$1
TEST_ID=$2
PORT=$4

# Find the directory that this test script belongs to.
DIR=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )

# Build a sandboxed directory for this FTP to operate within.

# Check if this test script is being used to compute coverage information.
[ $(basename $1) = "coverage" ] && COVERAGE=1 || COVERAGE=0

# Execute the test case with the given ID.
case $TEST_ID in
  p1)
    $EXECUTABLE -s -p $PORT & sleep 2
      ;;
esac

# Find the result of the test case execution.
result=$?

# Return the result of the test case execution
exit $result
