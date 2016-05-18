#!/bin/bash
target_exe=$1
target_dir=$(dirname $target_exe)

pushd $target_dir
gcc flex_comb.c -o flex -m32
popd
