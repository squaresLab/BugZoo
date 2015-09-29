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
  cp $DIR/unittab $PWD/unittab
}

# Performs the necessary setup for all negative test cases.
start_neg()
{
  if [ $cov = 0 ]; then
    ulimit -t 1
  else
    ulimit -t 10
  fi
  cp $DIR/unittab $PWD/unittab
}

end_pos()
{
  if [ ! $DIR = $PWD ]; then
    rm $PWD/unittab
  fi
}

end_neg() 
{
  if [ ! $DIR = $PWD ]; then
    rm $PWD/unittab
  fi
}

# Execute the appropriate test case.
case $2 in
  p1)
    start_pos
    bash -c "$1 < $DIR/test/t1" |& diff $DIR/test/output.t1 -
    result=$?
    end_pos
    exit $result;;

  p2)
    start_pos
    bash -c "$1 < $DIR/test/t2" |& diff $DIR/test/output.t2 - &> /dev/null
    result=$?
    end_pos
    exit $result;;

  p3)
    start_pos
    bash -c "$1 < $DIR/test/t3" |& diff $DIR/test/output.t3 - &> /dev/null
    result=$?
    end_pos
    exit $result;;

  p4)
    start_pos
    bash -c "$1 < $DIR/test/t4" |& diff $DIR/test/output.t4 - &> /dev/null
    result=$?
    end_pos
    exit $result;;

  p5)
    start_pos
    bash -c "$1 < $DIR/test/t5" |& diff $DIR/test/output.t5 - &> /dev/null
    result=$?
    end_pos
    exit $result;;

  n1)
    start_neg
    $1 < $DIR/test/bad1 &> /dev/null # this doesn't seem to work?
    result=$?
    end_neg
    exit $result;;
esac 
exit 1
