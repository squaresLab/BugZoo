#!/bin/bash
exe_name=$1
exe_dir=$(dirname $exe_name)
gcc $exe_dir/look.c -o $exe_name -m32
