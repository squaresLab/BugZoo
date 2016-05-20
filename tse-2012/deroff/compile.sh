#!/bin/bash
target_exe=$1
target_dir=$(dirname $target_exe)

pushd $target_dir
gcc deroff.c -o deroff -m32
popd
