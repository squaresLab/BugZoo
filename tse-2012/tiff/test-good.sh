#!/bin/sh
here_dir=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )
local_root="$here_dir/local-root"
bin_dir=$local_root/bin

$bin_dir/tiffcp -s $here_dir/tests/flower-rgb-planar-08.tif $here_dir/mytest && echo 'Passed P1'
$bin_dir/tiffcp -s $here_dir/tests/flower-rgb-contig-08.tif $here_dir/mytest && echo 'Passed P2'
$bin_dir/tiffcp -s $here_dir/tests/cramps.tif $here_dir/mytest && echo 'Passed P3'
$bin_dir/tiffcp -s $here_dir/tests/flower-minisblack-32.tif $here_dir/mytest && echo 'Passed P4'
$bin_dir/tiffcp -s $here_dir/tests/flower-minisblack-14.tif $here_dir/mytest && echo 'Passed P5'
