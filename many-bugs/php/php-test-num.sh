#!/bin/bash
#
# Finds the numeric test identifier for a test case from its complete test
# file name (e.g. hufts.log, ext/standard/tests/time/strptime_basic.phpt)
#
benchmark_dir=$1
test_script="$benchmark_dir/test.sh"
test_helper="$benchmark_dir/test.pl"
test_name=$2

# find the line number for the test and deduct the total number of lines before
# the first test case statement
offset=$(grep "case \$test_id in" $test_script -n | cut -d ":" -f1 -)
raw=$(grep $test_name $test_helper -n | cut -d ":" -f1 -)
num=$(($raw - $offset - 1))
echo $num
