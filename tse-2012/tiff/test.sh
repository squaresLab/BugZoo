#!/bin/bash
exe=$1
test_id=$2
here_dir=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )
test_dir="$here_dir/tests"
local_root="$here_dir/local-root"
bin_dir="$local_root/bin"

# Check if this test script is being used to compute coverage information.
coverage=$([[ $(dirname "$executable") = "coverage" ]])
[[ $coverage = 0 ]] && timeout=10 || timeout=2

ulimit -c 8

# Create a temporary file to copy into for this test.
tmp_img_file=$(mktemp)

result=1
case $test_id in
  p1) timeout $timeout $bin_dir/tiffcp -s $test_dir/flower-rgb-planar-08.tif $tmp_img_file &&\
      diff $tmp_img_file $test_dir/p1.out &> /dev/null && result=0;;
  p2) timeout $timeout $bin_dir/tiffcp -s $test_dir/flower-rgb-contig-08.tif $tmp_img_file &&\
      diff $tmp_img_file $test_dir/p2.out &> /dev/null && result=0;;
  p3) timeout $timeout $bin_dir/tiffcp -s $test_dir/cramps.tif $tmp_img_file &&\
      diff $tmp_img_file $test_dir/p3.out &> /dev/null && result=0;;
  p4) timeout $timeout $bin_dir/tiffcp -s $test_dir/flower-minisblack-32.tif $tmp_img_file &&\
      diff $tmp_img_file $test_dir/p4.out &> /dev/null && result=0;;
  p5) timeout $timeout $bin_dir/tiffcp -s $test_dir/flower-minisblack-14.tif $tmp_img_file &&\
      diff $tmp_img_file $test_dir/p5.out &> /dev/null && result=0;; 
  p6) timeout $timeout $bin_dir/tiffcp $test_dir/flower-minisblack-14.tif $tmp_img_file &&\
      diff $tmp_img_file $test_dir/p6.out &> /dev/null && result=0;; 
  n1) timeout $timeout $bin_dir/tiffcp $test_dir/wololo.tif $tmp_img_file &&\
      result=0;;
esac
rm -f $tmp_img_file
exit $result
