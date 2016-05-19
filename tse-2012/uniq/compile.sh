#!/bin/bash
dest_executable=$1
dest_dir=$(dirname $dest_executable)

gcc $dest_dir/preprocessed.c -o $dest_executable -m32
