#!/bin/bash

# The private key used to perform encryption and decryption.
export KEY="blahblah"

# Retrieve and store the provided command-line arguments.
EXECUTABLE=$1
TEST_ID=$2

# Find the directory that this test script belongs to.
DIR=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )

# Perform necessary preparations before running the test case.
ulimit -c 8
ulimit -t 10

# Execute the test case with the given ID.
case $TEST_ID in

  # test that the help function works correctly.
  p1)
    timeout 10 bash -c "$EXECUTABLE -help" \
      |& diff $DIR/test/p1.out - &> /dev/null
    result=$?;;

  # test that a given input can be encrypted using the KEY key.
  # only checks that the program terminates without failure.
  p2)
    cp $DIR/test/p2.in p2.txt
    timeout 10 bash -c "$EXECUTABLE -e -E KEY p2.txt"
    result=$?
    rm -rf p2.txt p2.txt.cpt;;

  # decrypt the expected result from the previous test and check that it
  # matches the plaintext input used.
  p3)
    cp $DIR/test/p2.out p3.txt.cpt
    timeout 10 bash -c "$EXECUTABLE -d -E KEY p3.txt.cpt"
    diff p3.txt $DIR/test/p2.in
    result=$?
    rm -rf p3.txt p3.txt.cpt;;

  # attempt to forcibly encrypt the same input from test 2, whilst there is an
  # encrypted file with a matching name (plus a .cpt suffix) in the same
  # directory.
  p4)
    cp $DIR/test/p4.in p4.txt.cpt
    cp $DIR/test/p2.out p4.txt

    # create a new file and attach it to file descriptor 3, so that it provides
    # the standard input with the "yes option" when asked to override.
    echo "yes\n" > yes.txt
    exec 3<> yes.txt

    timeout 10 bash -c "$EXECUTABLE -e -E KEY p4.txt <&3"

    #
    # TODO: We could check the output matches the expected output?
    #
    result=$?

    # remove yes.txt from file descriptor 3, and destroy all temporary files.
    exec 3>&-
    rm -f yes.txt p4.txt p4.txt.cpt;;

  # decrypt the encrypted form of the input from the previous test case, and
  # check that the resulting plaintext matches the input to the previous test
  # case.
  p5)
    cp $DIR/test/p5.in p5.txt
    timeout 10 bash -c "$EXECUTABLE -d -E KEY p5.txt"
    diff p5.txt $DIR/test/p4.in
    result=$?
    rm -f p5.txt p5.txt.cpt;;

  # In this test case, the input from P2 is provided, whilst an encrypted file
  # with the same name resides within the same directory.
  # Unlike P4, the program is told not to overwrite the existing file when
  # prompted. This test case ensures that the program successfully executes,
  # and that the original files are preserved.
  p6)
    echo "\n\n" > no.txt
    exec 4<> no.txt

    cp $DIR/test/p2.in p6.txt
    cp $DIR/test/p6.in p6.txt.cpt

    timeout 10 bash -c "$EXECUTABLE -e -E KEY p6.txt <& 4"

    # 
    # TODO: Could compare $DIR/test/p6.in and p6.txt.cpt
    #

    result=$?
    exec 4>&-

    rm -f no.txt p6.txt p6.txt.cpt;;

  # This test case simply checks that a given decryption results in the
  # expected plaintext.
  p7)
    cp $DIR/test/p7.in p7.txt.cpt
    timeout 10 bash -c "$EXECUTABLE -d -E KEY p7.txt.cpt"
      && diff $DIR/test/p7.out p7.txt
    result=$?
    rm -f p7.txt p7.txt.cpt;;

  # checks that the input file for this negative test case is successfully
  # encrypted using the KEY key.
  n1)
    cp $DIR/test/n1.in n1.txt
    timeout 5 bash -c "$EXECUTABLE -e -E KEY n1.txt < /dev/null"
    if [ ! -f core.* ];
      result=0
    else
      result=1
    fi
    rm -rf core.* n1.txt;;
esac

# Return the result of the test case execution
exit $result
