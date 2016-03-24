#!/bin/bash

# The private key used to perform encryption and decryption.
export KEY="blahblah"

# Retrieve and store the provided command-line arguments.
EXECUTABLE=$1
TEST_ID=$2

# Find the directory that this test script belongs to.
DIR=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )

# Determine whether coverage is being computed, and from that choose an
# appropriate timeout length
if [ $(basename $EXECUTABLE) = "coverage" ]; then
  TIMEOUT=10
else
  TIMEOUT=1
fi

# Perform necessary preparations before running the test case.
ulimit -c 8

# Execute the test case with the given ID.
case $TEST_ID in

  # test that the help function works correctly.
  p1)
    timeout $TIMEOUT bash -c "$EXECUTABLE -help" \
      |& diff $DIR/test/p1.out - &> /dev/null
    result=$?;;

  # normal encryption
  p2)
    cp $DIR/test/p2.in p2.txt
    timeout $TIMEOUT bash -c " \
      $EXECUTABLE -e -E KEY p2.txt && \
      $EXECUTABLE -d -E KEY p2.txt && \
      diff p2.txt $DIR/test/p2.in"
    result=$?
    rm -f p2.txt p2.txt.cpt;; 

  # attempt to forcibly encrypt the same input from test 2, whilst there is an
  # encrypted file with a matching name (plus a .cpt suffix) in the same
  # directory.
  p4)
    cp $DIR/test/placeholder.cpt p4.txt.cpt
    cp $DIR/test/p2.in p4.txt

    # create a new file and attach it to file descriptor 3, so that it provides
    # the standard input with the "yes option" when asked to override.
    echo "yes\n" > yes.txt
    exec 3<> yes.txt

    timeout $TIMEOUT bash -c " \
      $EXECUTABLE -e -E KEY p4.txt <&3 && \
      $EXECUTABLE -d -E KEY p4.txt && \
      diff p4.txt $DIR/test/p2.in"
    result=$?

    # remove yes.txt from file descriptor 3, and destroy all temporary files.
    exec 3>&-
    rm -f yes.txt p4.txt p4.txt.cpt;;

  # In this test case, the input from P2 is provided, whilst an encrypted file
  # with the same name resides within the same directory.
  # Unlike P4, the program is told not to overwrite the existing file when
  # prompted. This test case ensures that the program successfully executes,
  # and that the original files are preserved.
  p5)
    echo "\n\n" > no.txt
    exec 4<> no.txt

    cp $DIR/test/p2.in p5.txt
    cp $DIR/test/placeholder.cpt p5.txt.cpt

    timeout $TIMEOUT bash -c " \
      $EXECUTABLE -e -E KEY p5.txt <&4 && \
      diff p5.txt $DIR/test/p2.in && \
      diff p5.txt.cp $DIR/test/placeholder.cpt"
    result=$?

    exec 4>&-
    rm -f no.txt p6.txt p6.txt.cpt;;

  # the program should terminate when fed /dev/null
  n1)
    cp $DIR/test/n1.in n1.txt
    cp $DIR/test/n1.cpt n1.txt.cpt

    timeout $TIMEOUT bash -c "$EXECUTABLE -e -E KEY n1.txt < /dev/null" \
      && diff $DIR/test/n1.in n1.txt \
      && diff $DIR/test/n1.cpt n1.txt.cpt
    result=$?
    if [ ! -f core.* ]
    then
      result=0
    fi
    rm -rf core.*
    rm -f n1.txt n1.txt.cpt;;
esac

# Return the result of the test case execution
exit $result
