#!/bin/bash
executable=$1
test_id=$2
here_dir=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )
test_dir="$here_dir/test"

# Check if this test script is being used to compute coverage information.
coverage=$([[ $(basename $executable) = "coverage" ]])
[[ $coverage = 0 ]] && timeout=10 || timeout=1

# Perform necessary preparations before running the test case.
ulimit -c 8

# The private key used to perform encryption and decryption.
export KEY="blahblah"

# Execute the test case with the given ID.
result=1
case $test_id in
  # test that the help function works correctly.
  p1)
    timeout $timeout bash -c "$executable -help" \
      |& diff $here_dir/test/p1.out - &> /dev/null
    result=$?;;

  # normal encryption
  p2)
    cp $here_dir/test/p2.in p2.txt
    timeout $timeout bash -c " \
      $executable -e -E KEY p2.txt && \
      $executable -d -E KEY p2.txt && \
      diff p2.txt $here_dir/test/p2.in" &> /dev/null
    result=$?
    rm -f p2.txt p2.txt.cpt;; 

  # attempt to forcibly encrypt the same input from test 2, whilst there is an
  # encrypted file with a matching name (plus a .cpt suffix) in the same
  # directory.
  p3) # previously p4
    cp $here_dir/test/placeholder.cpt p4.txt.cpt
    cp $here_dir/test/p2.in p4.txt

    # create a new file and attach it to file descriptor 3, so that it provides
    # the standard input with the "yes option" when asked to override.
    echo "yes\n" > yes.txt
    exec 3<> yes.txt

    timeout $timeout bash -c " \
      $executable -e -E KEY p4.txt <&3 && \
      $executable -d -E KEY p4.txt && \
      diff p4.txt $here_dir/test/p2.in" &> /dev/null
    result=$?

    # remove yes.txt from file descriptor 3, and destroy all temporary files.
    exec 3>&-
    rm -f yes.txt p4.txt p4.txt.cpt;;

  # In this test case, the input from P2 is provided, whilst an encrypted file
  # with the same name resides within the same directory.
  # Unlike P4, the program is told not to overwrite the existing file when
  # prompted. This test case ensures that the program successfully executes,
  # and that the original files are preserved.
  p4) # previously p5
    echo "\n\n" > no.txt
    exec 4<> no.txt

    cp $here_dir/test/p2.in p5.txt
    cp $here_dir/test/placeholder.cpt p5.txt.cpt

    timeout $timeout bash -c "$executable -e -E KEY p5.txt <&4" &> /dev/null \
      && test -f p5.txt && diff p5.txt $here_dir/test/p2.in &> /dev/null \
      && test -f p5.txt.cpt && diff p5.txt.cpt $here_dir/test/placeholder.cpt &> /dev/null
    result=$?

    exec 4>&-
    rm -f no.txt p5.txt p5.txt.cpt;;

  # the program should terminate without performing encryption when fed
  # /dev/null as the standard input
  n1)
    cp $here_dir/test/n1.in n1.txt
    cp $here_dir/test/placeholder.cpt n1.txt.cpt
    timeout $timeout bash -c "$executable -e -E KEY n1.txt < /dev/null" &> /dev/null \
      && test -f n1.txt && diff $here_dir/test/n1.in n1.txt &> /dev/null \
      && test -f n1.txt.cpt && diff $here_dir/test/placeholder.cpt n1.txt.cpt &> /dev/null
    result=$?
    rm -f core.*
    rm -f n1.txt n1.txt.cpt;;
esac
exit $result
