#!/bin/bash
exe_name=$1
exe_dir=$(dirname $exe_name)
gcc $exe_dir/indent_comb.c -o $exe_name -m32
