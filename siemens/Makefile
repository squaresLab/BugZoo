PROGRAMS = \
	printtokens \
	printtokens2 \
	tcas \
	schedule \
	schedule2 \
	replace \
	totinfo

all: base $(PROGRAMS)

base:
	@ docker build -t christimperley/repairbox:siemens-base base > /dev/null

$(PROGRAMS): base
	@ ./build_program $@

.PHONY: base $(PROGRAMS)
