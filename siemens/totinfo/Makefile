all: base one

base:
	@ docker build -t christimperley/repairbox:ctf-totinfo-base base

one: base
	@ docker build -t christimperley/repairbox:ctf-totinfo-one one

.PHONY: base one
