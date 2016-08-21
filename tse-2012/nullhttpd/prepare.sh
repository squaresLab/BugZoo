#!/bin/bash
here_dir=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )
server_dir="$here_dir/fake-root"

if [ ! -d src ]; then
  tar -xf src.tar.gz
fi

# Create the root directory for the server.
mkdir -p $server_dir
mkdir -p $server_dir/etc
mkdir -p $server_dir/bin
mkdir -p $server_dir/bin

cp -ra $DIR/htdocs $SERVER_DIR/htdocs
cp -ra $DIR/cgi-bin $SERVER_DIR/cgi-bin

# Setup the httpd.cfg file.
echo SERVER_BASE_DIR = \"$PWD/$SERVER_DIR/\" >> $SERVER_DIR/etc/httpd.cfg 
echo SERVER_BIN_DIR = \"$PWD/$SERVER_DIR/bin/\" >> $SERVER_DIR/etc/httpd.cfg 
echo SERVER_CGI_DIR = \"$PWD/$SERVER_DIR/cgi-bin/\" >> $SERVER_DIR/etc/httpd.cfg 
echo SERVER_ETC_DIR = \"$PWD/$SERVER_DIR/etc/\" >> $SERVER_DIR/etc/httpd.cfg 
echo SERVER_HTTP_DIR = \"$PWD/$SERVER_DIR/htdocs/\" >> $SERVER_DIR/etc/httpd.cfg 
echo SERVER_LOGLEVEL = \"1\" >> $SERVER_DIR/etc/httpd.cfg
echo SERVER_HOSTNAME = \"localhost\" >> $SERVER_DIR/etc/httpd.cfg
echo SERVER_MAXCONN  = \"50\" >> $SERVER_DIR/etc/httpd.cfg
echo SERVER_MAXIDLE  = \"120\" >> $SERVER_DIR/etc/httpd.cfg
echo SERVER_PORT     = \"$PORT"1"\" >> $SERVER_DIR/etc/httpd.cfg

