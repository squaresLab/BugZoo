#!/bin/bash
TIME_LIMIT=15
patch_dir=$(dirname "$1")
here_dir=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )
project_dir="$here_dir/src"

rm -f $project_dir/ext/standard/string.*
cp $patch_dir/string.c $project_dir/ext/standard/string.c

pushd $project_dir
timeout $TIME_LIMIT make && exit 0
#make clean && timeout $TIME_LIMIT make && exit 0
exit 1
