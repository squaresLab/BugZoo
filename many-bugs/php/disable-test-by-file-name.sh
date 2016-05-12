#!/bin/bash
#
# This script disables a test with a given file name within the test harness
# for a benchmark whose path is provided as an input,  causing it to return as
# passed (i.e. exit status 0) without invoking the test itself.
#
# Usage: ./disable-test-by-file-name.sh directory_path test_name
#
#
# TODO: Doesn't deal with cases when the test doesn't exist!
#
#
if [ $# -ne 2 ]; then
  echo "ERROR: unexpected number of arguments."
  exit 1
fi

benchmark=$1
test_fn=$2

function does_test_exist {
  grep -q $1 test.pl
}

function find_test_num {
  offset=$(grep "my @tests = (" test.pl -n | cut -d ":" -f1 -)
  raw=$(grep $1 test.pl -n | cut -d ":" -f1 -)
  num=$(($raw - $offset))
  echo $num
}

function disable_test_by_num {
  sed "s/run_test $1 \&\& exit 0 ;;/exit 0 ;;# disabled: $1/" test.sh
}

if [ ! -d $benchmark ]; then
  echo "ERROR: failed to find benchmark directory: $benchmark"
  exit 1
fi

pushd $benchmark > /dev/null

if !(does_test_exist $test_fn); then
  echo "NOTICE: given test file not found, skipping"
  exit 0
fi

test_num=$(find_test_num $test_fn)
disable_test_by_num $test_num
popd > /dev/null
