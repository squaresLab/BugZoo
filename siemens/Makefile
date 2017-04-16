PROGRAMS = \
	printtokens \
	printtokens2 \
	tcas \
	schedule \
	totinfo

all: base $(PROGRAMS)

base:
	@ docker build -t christimperley/repairbox:siemens-base base

$(PROGRAMS): base
	@ ./build_program $@

.PHONY: base $(PROGRAMS)
