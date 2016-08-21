#!/bin/bash
executable=$1
test_id=$2
here_dir=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )
test_dir="$here_dir/test"
php_exe="$here_dir/src/sapi/cli/php"

# Check if this test script is being used to compute coverage information.
coverage=$([[ $(basename $executable) = "coverage" ]])
[[ $coverage = 0 ]] && timeout=60 || timeout=1

positive() {
   timeout $timeout $php_exe "$test_dir/$test_id.php" |& \
     head -n 100 | tail -n 95 |& \
     diff "$test_dir/$test_id.out" - &> /dev/null
}

negative() {
  timeout $timeout $php_exe "$test_dir/n1.php" |& \
    diff "$test_dir/n1.out" - &> /dev/null
}

case $test_id in
  p1) positive && exit 0;;
  p2) positive && exit 0;;
  p3) positive && exit 0;;
  n1) negative && exit 0;;
esac
exit 1
