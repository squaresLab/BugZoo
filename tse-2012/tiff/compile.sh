#!/bin/bash
exe=$1
patch_dir=$(dirname $1)
here_dir=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )
project_dir="$here_dir/src"
target_dir="$project_dir/libtiff"

#rm -f $target_dir/tif_lzw.*
cp $patch_dir/tif_lzw.c $target_dir/tif_lzw.c
pushd $project_dir
make clean && make install && exit 0
exit 1
