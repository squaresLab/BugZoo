#!/bin/bash
TIME_LIMIT=10
target_exe=$1
target_dir=$(dirname $target_exe)

pushd $target_dir
timeout $TIME_LIMIT gcc flex_comb.c -o flex -m32 && exit 0
exit 1
