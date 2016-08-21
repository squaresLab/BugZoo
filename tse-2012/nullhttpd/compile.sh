#!/bin/bash
here_dir=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )
TIME_LIMIT=10
target_exe=$1
target_dir=$(readlink -f "$(dirname $target_exe)")
test_dir="$here_dir/test"

pushd $target_dir

# Compile the server executable
timeout $TIME_LIMIT gcc httpd_comb.c -o nullhttpd -m32 -lpthread

# Build the root
mkdir $target_dir/etc
mkdir $target_dir/bin

cp -ra $test_dir/htdocs $target_dir/htdocs
cp -ra $test_dir/cgi-bin $target_dir/cgi-bin

# Build the httpd.cfg file
echo SERVER_BASE_DIR = \"$target_dir/\" >> $target_dir/etc/httpd.cfg 
echo SERVER_BIN_DIR = \"$target_dir/bin/\" >> $target_dir/etc/httpd.cfg 
echo SERVER_CGI_DIR = \"$target_dir/cgi-bin/\" >> $target_dir/etc/httpd.cfg 
echo SERVER_ETC_DIR = \"$target_dir/etc/\" >> $target_dir/etc/httpd.cfg 
echo SERVER_HTTP_DIR = \"$target_dir/htdocs/\" >> $target_dir/etc/httpd.cfg 
echo SERVER_LOGLEVEL = \"1\" >> $target_dir/etc/httpd.cfg
echo SERVER_HOSTNAME = \"localhost\" >> $target_dir/etc/httpd.cfg
echo SERVER_MAXCONN  = \"50\" >> $target_dir/etc/httpd.cfg
echo SERVER_MAXIDLE  = \"120\" >> $target_dir/etc/httpd.cfg
echo SERVER_PORT     = '$RUN_ON_PORT' >> $target_dir/etc/httpd.cfg
