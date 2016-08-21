#!/bin/bash
TIME_LIMIT=5
exe_name=$1
exe_dir=$(dirname $1)
timeout $TIME_LIMIT gcc $exe_dir/look.c -o $exe_name -m32
