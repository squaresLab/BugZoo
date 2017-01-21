scenarios = $(shell cat scenarios.txt)

all: gmp $(scenarios)

gmp:
	docker build -t christimperley/repairbox:manybugs-gmp	.

$(scenarios): gmp
	cp Dockerfile.bug gmp-bug-$(@F)/Dockerfile
	docker build -t christimperley/repairbox:manybugs-$<-bug-$(@F) gmp-bug-$(@F)
	rm -f gmp-bug-$(@F)/Dockerfile

.PHONY: gmp $(scenarios)
