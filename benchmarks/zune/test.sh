#!/bin/bash
# $1 = EXE 
# $2 = test name  
# $3 = port 
# $4 = source name
# $5 = single-fitness-file name 
# exit 0 = success

# Find the directory that this test script belongs to.
DIR=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )

# Change the time limit depending on whether we are performing instrumentation
# or not.
ulimit -t 3

case $2 in
  p1)   $1 -366       | diff $DIR/test/output.-366      - && exit 0 ;;
  p2)   $1 -100       | diff $DIR/test/output.-100      - && exit 0 ;;
  p3)   $1 0          | diff $DIR/test/output.0         - && exit 0 ;;
  p4)   $1 365        | diff $DIR/test/output.365       - && exit 0 ;;
  p5)   $1 367        | diff $DIR/test/output.367       - && exit 0 ;;
  p6)   $1 1000       | diff $DIR/test/output.1000      - && exit 0 ;;
  p7)   $1 1826       | diff $DIR/test/output.1826      - && exit 0 ;;
  p8)   $1 2000       | diff $DIR/test/output.2000      - && exit 0 ;;
  p9)   $1 3000       | diff $DIR/test/output.3000      - && exit 0 ;;
  p10)  $1 4000       | diff $DIR/test/output.4000      - && exit 0 ;;
  p11)  $1 5000       | diff $DIR/test/output.5000      - && exit 0 ;;
  p12)  $1 10592      | diff $DIR/test/output.10592     - && exit 0 ;;
  p13)  $1 10594      | diff $DIR/test/output.10594     - && exit 0 ;;
  p14)  $1 12053      | diff $DIR/test/output.12053     - && exit 0 ;;
  p15)  $1 12213      | diff $DIR/test/output.12213     - && exit 0 ;;
  p16)  $1 12419      | diff $DIR/test/output.12419     - && exit 0 ;;
  p17)  $1 12420      | diff $DIR/test/output.12420     - && exit 0 ;;
  p18)  $1 100000000  | diff $DIR/test/output.100000000 - && exit 0 ;;
  n1)   $1 10593      | diff $DIR/test/output.10593     - && exit 0 ;;
  n2)   $1 12054      | diff $DIR/test/output.12054     - && exit 0 ;;
  n3)   $1 1827       | diff $DIR/test/output.1827      - && exit 0 ;;
  n4)   $1 366        | diff $DIR/test/output.366       - && exit 0 ;;
esac 
exit 1
