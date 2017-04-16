all: base one

base:
	@ docker build -t christimperley/repairbox:ctf-tcas-base .

one: base
	@ docker build -t christimperley/repairbox:ctf-tcas-one one

.PHONY: base one
