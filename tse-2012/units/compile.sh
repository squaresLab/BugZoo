#!/bin/bash
exe=$1
exe_dir=$(dirname $exe)
gcc $exe_dir/units.c -o $exe -m32
