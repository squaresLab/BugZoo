#!/bin/bash
TIME_LIMIT=10
exe=$1
exe_dir=$(dirname $exe)
here_dir=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )

timeout $TIME_LIMIT gcc $exe_dir/ftpd_comb.c -o $exe -m32 -lresolv -lcrypt -lnsl
