all: base php python

base:
	${MAKE} -C base

php: base
	${MAKE} -C php

python: base
	${MAKE} -C python

push:
	${MAKE} push -C php
	${MAKE} push -C python

.PHONY: python php
