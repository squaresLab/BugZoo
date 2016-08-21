#!/bin/bash
TIME_LIMIT=10
target_exe=$1
target_dir=$(dirname $target_exe)

pushd $target_dir

# Compile the server executable
timeout $TIME_LIMIT gcc httpd_comb.c -o nullhttpd -m32 -lpthread
