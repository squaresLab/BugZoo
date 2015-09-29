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
setup_pos()
{
  if [ $cov = 0 ]; then
    ulimit -t 2
  fi
}

# Performs the necessary setup for all negative test cases.
setup_neg()
{
  ulimit -c 8
  if [ $cov = 0 ]; then
    ulimit -t 1
  else
    ulimit -t 4
  fi
}

# Execute the appropriate test case.
case $2 in
  p1) setup_pos ; bash -c "$1 < $DIR/test/t1 &> /dev/null" && exit 0 ;;
  p2) setup_pos ; bash -c "$1 < $DIR/test/t2 &> /dev/null" && exit 0 ;;
  p3) setup_pos ; bash -c "$1 < $DIR/test/t4 &> /dev/null" && exit 0 ;;
  p4) setup_pos ; bash -c "$1 < $DIR/test/tp1 &> /dev/null" && exit 0 ;;
  p5) setup_pos ; bash -c "$1 < $DIR/test/tp2 &> /dev/null" && exit 0 ;;
  n1)
    setup_neg ;
    if (bash -c "$1 < $DIR/test/t5 &> /dev/null") && [ ! -f core.* ]; then
      exit 0
    else
      rm -rf core.*
    fi;;
esac 
exit 1
