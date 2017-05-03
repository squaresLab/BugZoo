scenarios = $(shell cat scenarios.txt)

all: gmp $(scenarios)

gmp:
	docker build -t squareslab/repairbox:manybugs-gmp	.

$(scenarios): gmp
	cp Dockerfile.bug gmp-bug-$(@F)/Dockerfile
	docker build -t squareslab/repairbox:manybugs-$<-bug-$(@F) gmp-bug-$(@F)
	rm -f gmp-bug-$(@F)/Dockerfile

.PHONY: gmp $(scenarios)
