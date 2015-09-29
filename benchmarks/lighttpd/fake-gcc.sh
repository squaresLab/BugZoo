export SRC=$3
export DIR=~/lighttpd-1.4.17
export LDIR=~/lighttpd-1.4.17-root/lib
cp $SRC $DIR/src/mod_fastcgi.c
pushd $DIR/src
rm -rf mod_fastcgi.I? .libs/mod_fastcgi.so .libs/mod/fast_cgi.o 
make 
if [ -f .libs/mod_fastcgi.so -a -f mod_fastcgi.la ]  
then 
	cp .libs/mod_fastcgi.so mod_fastcgi.la $LDIR
	exit 0
else
	exit 1 
fi
