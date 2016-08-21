#!/bin/bash
TIME_LIMIT=2
target_exe=$1
target_dir=$(dirname $target_exe)

pushd $target_dir
timeout $TIME_LIMIT gcc ccrypt_comb.c -o ccrypt -lefence -lcrypt -m32
