all: base one

base:
	@ docker build -t christimperley/repairbox:ctf-printtokens-base base

one: base
	@ docker build -t christimperley/repairbox:ctf-printtokens-one one

.PHONY: base one
