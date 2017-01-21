all: base manybugs sir

base:
	${MAKE} -C base

manybugs: base
	${MAKE} -C manybugs

sir: base
	${MAKE} -C sir

push: all
	${MAKE} push -C base
	${MAKE} push -C manybugs
	${MAKE} push -C sir

.PHONY: base manybugs sir push
