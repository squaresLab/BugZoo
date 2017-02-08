all: base php python gzip libtiff

base:
	${MAKE} -C base

php: base
	${MAKE} -C php

python: base
	${MAKE} -C python

libtiff: base
	${MAKE} -C libtiff

gzip: base
	${MAKE} -C gzip

.PHONY: python php base libtiff gzip
