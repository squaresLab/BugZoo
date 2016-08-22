#!/bin/bash
executable=$1
test_id=$2
here_dir=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )
test_dir="$here_dir/test"

# Check if this test script is being used to compute coverage information.
coverage=$([[ $(basename "$executable") = "coverage" ]])
[[ $coverage = 0 ]] && timeout=30 || timeout=3

case $test_id in
  p1|p2|p3|p4|p5|p6|p7|p8|p9|p10|p11|p12|p13|p14|p15|p16|p17|p18|n1|n2|n3|n4)
    timeout $timeout $executable $(cat $test_dir/$test_id) |& diff $test_dir/output.$test_id - >> test.log && exit 0;;
esac
exit 1
