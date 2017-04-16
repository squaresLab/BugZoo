all: base

base:
	@ docker build -t christimperley/repairbox:ctf-base base

one: base
	@ docker build -t dbg one

.PHONY: base one
