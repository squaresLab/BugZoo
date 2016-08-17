#!/bin/bash
TIME_LIMIT=3
target_exe=$1
target_dir=$(dirname $target_exe)

pushd $target_dir
timeout $TIME_LIMIT gcc flex_comb.c -o flex -m32
