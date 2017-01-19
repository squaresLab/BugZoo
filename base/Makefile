all: ubuntu64 build

ubuntu64:
	${MAKE} -C ubuntu64

build: ubuntu64

push: build
	${MAKE} push -C ubuntu64

.PHONY: ubuntu64
