#!/bin/bash
TIME_LIMIT=5
dest_executable=$1
dest_dir=$(dirname $dest_executable)

timeout $TIME_LIMIT gcc $dest_dir/uniq.c -o $dest_executable -m32
