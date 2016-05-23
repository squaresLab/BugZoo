#!/bin/sh
here_dir=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )
local_root="$here_dir/local-root"
bin_dir=$local_root/bin

$bin_dir/tiffcp -s $here_dir/tests/flower-rgb-planar-08.tif $here_dir/mytest && echo 'pass flower-rgb-planar-08.tif'
#./limit5 $dir/tiffcp tests/flower-rgb-planar-08.tif mytest && echo 'pass flower-rgb-planar-08.tif' >> $2
#./limit5 $dir/tiffcp -s tests/flower-rgb-contig-08.tif mytest && echo 'pass flower-rgb-contig-08.tif' >> $2
#./limit5 $dir/tiffcp tests/flower-rgb-contig-08.tif mytest && echo 'pass flower-rgb-contig-08.tif' >> $2
#./limit5 $dir/tiffcp -s tests/cramps.tif mytest && echo 'pass cramps.tif' >> $2
#./limit5 $dir/tiffcp tests/cramps.tif mytest && echo 'pass cramps.tif' >> $2
#./limit5 $dir/tiffcp -s tests/flower-minisblack-32.tif mytest && echo 'pass flower-minisblack-32.tif' >> $2
#./limit5 $dir/tiffcp tests/flower-minisblack-32.tif mytest && echo 'pass flower-minisblack-32.tif' >> $2
#./limit5 $dir/tiffcp -s tests/flower-minisblack-14.tif mytest && echo 'pass flower-minisblack-14.tif' >> $2
#./limit5 $dir/tiffcp tests/flower-minisblack-14.tif mytest && echo 'pass flower-minisblack-14.tif' >> $2
exit 0
