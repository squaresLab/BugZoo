#!/bin/bash
TIME_LIMIT=20
patch_dir=$(dirname "$1")
here_dir=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )
project_dir="$here_dir/src"

rm -f $project_dir/ext/standard/string.o
cp $patch_dir/string.c $project_dir/ext/standard/string.c

pushd $project_dir
timeout $TIME_LIMIT make && exit 0
exit 1
