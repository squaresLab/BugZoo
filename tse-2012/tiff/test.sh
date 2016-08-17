#!/bin/bash
exe=$1
test_id=$2
here_dir=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )
test_dir="$here_dir/tests"
local_root="$here_dir/local-root"
bin_dir=$local_root/bin

# Check if this test script is being used to compute coverage information.
coverage=$([[ $(basename $executable) = "coverage" ]])
[[ $coverage = 0 ]] && timeout=10 || timeout=2

ulimit -c 8

case $test_id in
  p1) timeout $timeout $bin_dir/tiffcp -s $test_dir/flower-rgb-planar-08.tif $test_dir/mytest && exit 0;;
  p2) timeout $timeout $bin_dir/tiffcp -s $test_dir/flower-rgb-contig-08.tif $here_dir/mytest && exit 0;;
  p3) timeout $timeout $bin_dir/tiffcp -s $test_dir/cramps.tif $here_dir/mytest && exit 0;;
  p4) timeout $timeout $bin_dir/tiffcp -s $test_dir/flower-minisblack-32.tif $here_dir/mytest && exit 0;;
  p5) timeout $timeout $bin_dir/tiffcp -s $test_dir/flower-minisblack-14.tif $test_dir/mytest && exit 0;; 
  n1) timeout $timeout $bin_dir/tiffcp $here_dir/wololo.tif $test_dir/mytest && exit 0;;
esac
exit 1
