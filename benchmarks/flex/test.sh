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
    ulimit -t 3
    ulimit -c 8
  fi
}

# Performs the necessary setup for all negative test cases.
setup_neg()
{
  if [ $cov = 0 ]; then
    ulimit -t 1
  fi
}

# Execute the test case with the given ID.
case $2 in
  p1) setup_pos ; bash -c "$1 < $DIR/test/t1" |& diff $DIR/test/output.t1 - && exit 0 ;;
  p2) setup_pos ; bash -c "$1 < $DIR/test/t2" |& diff $DIR/test/output.t2 - && exit 0 ;;
  p3) setup_pos ; bash -c "$1 < $DIR/test/t3" |& diff $DIR/test/output.t3 - && exit 0 ;;
  p4) setup_pos ; bash -c "$1 < $DIR/test/t4" |& diff $DIR/test/output.t4 - && exit 0 ;;
  p5) setup_pos ; bash -c "$1 < $DIR/test/t5" |& diff $DIR/test/output.t5 - && exit 0 ;;

  n1)
    setup_neg
    rm -rf core.*
    if (bash -c "$1 < $DIR/test/t11") && [ ! -f core.* ] ; then
      exit 0
    fi
esac 
exit 1
