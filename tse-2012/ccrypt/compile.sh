#!/bin/bash
target_exe=$1
target_dir=(dirname $target_exe)

pushd $target_dir
gcc ccrypt_comb.c -o ccrypt -lefence -lcrypt
popd
