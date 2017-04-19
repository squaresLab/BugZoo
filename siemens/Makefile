PROGRAMS = \
	printtokens \
	printtokens2 \
	tcas \
	schedule \
	schedule2 \
	replace \
	totinfo

BUGS = $(shell cat bugs.txt)

all: base $(PROGRAMS) $(BUGS)

base:
	@ docker build -t christimperley/repairbox:siemens-base base > /dev/null

$(PROGRAMS): base
	@ ./build_program $@

$(BUGS): $(PROGRAMS)
	@ ./build_fault $@

.PHONY: base $(PROGRAMS) $(BUGS)
