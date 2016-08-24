#!/bin/bash
here_dir=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )
TIME_LIMIT=10
target_exe=$1
target_dir=$(readlink -f "$(dirname "$target_exe")")
test_dir="$here_dir/test"

pushd $target_dir
timeout $TIME_LIMIT gcc httpd_comb.c -o nullhttpd -m32 -lpthread && exit 0
exit 1
