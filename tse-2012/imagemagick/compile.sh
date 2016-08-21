#!/bin/bash
TIME_LIMIT=60
patch_dir=$(dirname "$1")
here_dir=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )
project_dir="$here_dir/src"

rm -f $project_dir/magick/fx.o
cp $patch_dir/fx.c $project_dir/magick/fx.c

pushd $project_dir
timeout $TIME_LIMIT make install && exit 0
exit 1
