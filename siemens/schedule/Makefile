all: base one

base:
	@ docker build -t christimperley/repairbox:ctf-schedule-base base

one: base
	@ docker build -t christimperley/repairbox:ctf-schedule-one one

.PHONY: base one
