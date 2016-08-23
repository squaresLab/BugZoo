#!/bin/bash
TIME_LIMIT=5
exe=$1
exe_dir=$(dirname $exe)
timeout $TIME_LIMIT gcc $exe_dir/units.c -o $exe -m32 && exit 0
exit 1
