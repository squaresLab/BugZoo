#!/bin/bash

# Find the directory that this test script belongs to.
DIR=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )

ulimit -t 2
case $2 in
  p1) bash -c "$1 < $DIR/test/t1" |& diff $DIR/test/output.t1 - && exit 0 ;;
  p2) bash -c "$1 < $DIR/test/t2" |& diff $DIR/test/output.t2 - && exit 0 ;;
  p3) bash -c "$1 < $DIR/test/t4" |& diff $DIR/test/output.t4 - && exit 0 ;;
  p4) bash -c "$1 < $DIR/test/t7" |& diff $DIR/test/output.t7 - && exit 0 ;;
  p5) bash -c "$1 < $DIR/test/t8" |& diff $DIR/test/output.t8 - && exit 0 ;;

  # This doesn't seem right...
  n1) bash -c "$1 < $DIR/test/t5" && exit 0 ;;
esac 
exit 1
