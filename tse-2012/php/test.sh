#!/bin/bash
executable=$1
test_id=$2
here_dir=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )
test_dir="$here_dir/test"
php_exe="$here_dir/src/"

# Check if this test script is being used to compute coverage information.
coverage=$([[ $(basename $executable) = "coverage" ]])
#[[ $coverage = 0 ]] && timeout=10 || timeout=q0

positive(){
   "$test_dir/$test_id.php" | head -n 100 | diff "$test_dir/$test_id.out" -
}

negative(){
  $PHPROOT/php "$test_dir/n1.php" &| diff "$test_dir/n1.out" -
}
