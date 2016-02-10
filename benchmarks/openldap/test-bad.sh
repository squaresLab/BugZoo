#!/bin/sh

ulimit -t 45
export PROG=$1
export OUT=$2
export PORT=$3 

killall slapd
p=$PWD
pushd $OPENLDAP_PARENT_DIR/openldap-2.3.41
(make test-bad) && (echo "BAD" >> $p"/"$OUT)
popd

wait 
exit 0

