#!/bin/bash
exe=$1
patch_dir=$(dirname $1)
here_dir=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )
project_dir="$here_dir/src"

cp $patch_dir/lib_lzw.c $project_dir/lib_lzw.c
pushd $project_dir
make install && exit 0
exit 1
