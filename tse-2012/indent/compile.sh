#!/bin/bash
TIME_LIMIT=10
exe_dir=$(dirname "$exe_name")
exe_name="$exe_dir/indent"
timeout $TIME_LIMIT gcc "$exe_dir/indent.c" -o "$exe_name" -m32 -std=c90 && exit 0
exit 1
