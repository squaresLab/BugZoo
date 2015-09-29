#!/bin/bash

# Find the directory that this test script belongs to.
DIR=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )

# Check if this test script is being used to compute coverage information.
if [ $(basename $1) = "coverage" ]; then
  cov=1
else
  cov=0
fi

# Performs the necessary setup for all positive test cases.
setup_pos()
{
}

# Performs the necessary setup for all negative test cases.
start_neg()
{
  if [ $cov = 0 ]; then
    ulimit -t 5
  else
    ulimit -t 10
  fi

  export PROG=$1
  export OUT=$2
  export PORT=$3
  export SERVER_DIR=$PROG"-b"

  # Create the root directory for the server.
  rm -rf $SERVER_DIR
  mkdir $SERVER_DIR
  mkdir $SERVER_DIR/etc
  mkdir $SERVER_DIR/bin
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
}

end_neg()
{
  kill -9 $!  # What does this do?
  killall `basename $PROG`
  killall -9 `basename $PROG`
}

# Execute the appropriate test case.
case $2 in
  n1)
    start_neg
    bash -c $PROG # launch server
    $DIR/test/nullhttpd-exploit -h localhost -p $PORT"1" -t2 # attempt exploit
    wget -q0- "http://localhost:"$PORT"1"/index.html | diff $DIR/test/index.html -
    $failed=$?
    end_neg
    exit $failed ;;
esac 
exit 1
