#!/bin/bash
TIME_LIMIT=10
exe_name=$1
exe_dir=$(dirname $exe_name)
timeout $TIME_LIMIT gcc $exe_dir/indent_comb.c -o $exe_name -m32
