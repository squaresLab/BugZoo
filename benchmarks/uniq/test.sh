#!/bin/bash

# Find the directory that this test script belongs to.
DIR=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )

# Check if this test script is being used to compute coverage information.
if [ $(basename $1) = "coverage" ]; then
  cov=1
else
  cov=0
fi

# Performs the necessary setup for all positive test cases.
start_pos()
{
  if [ $cov = 0 ]; then
    ulimit -t 2
  fi
}

# Performs the necessary setup for all negative test cases.
start_neg()
{
  ulimit -c 8
  if [ $cov = 0 ]; then
    ulimit -t 1
  else
    ulimit -t 4
  fi
}

# Called after a positive test case has been executed.
end_pos()
{
  rm -rf core
}

# Assume the test fails unless proven otherwise.
result=1

# Execute the appropriate test case.
case $2 in
  p1)
    start_pos
    bash -c "$1 < $DIR/test/t1" &> /dev/null
    result=$?
    end_pos
    exit $result ;;

  p2)
    start_pos
    bash -c "$1 < $DIR/test/t2" &> /dev/null
    result=$?
    end_pos
    exit $result ;;

  p3)
    start_pos
    bash -c "$1 < $DIR/test/t3" &> /dev/null
    result=$?
    end_pos
    exit $result ;;

  p4)
    start_pos
    bash -c "$1 < $DIR/test/t4" &> /dev/null
    result=$?
    end_pos
    exit $result ;;

  p5)
    start_pos
    bash -c "$1 < $DIR/test/t5" &> /dev/null
    result=$?
    end_pos
    exit $result ;;

  n1)
    start_neg ;
    if (bash -c "$1 < $DIR/test/t5" &> /dev/null) && [ ! -f core* ]; then
      exit 0
    else
      rm -rf core*
    fi;;
esac 
exit 1
