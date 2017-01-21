scenarios = $(shell cat scenarios.txt)

all: fbc $(scenarios)

fbc:
	docker build -t christimperley/repairbox:manybugs-fbc	.

$(scenarios): fbc
	cp Dockerfile.bug fbc-bug-$(@F)/Dockerfile
	docker build -t christimperley/repairbox:manybugs-$<-bug-$(@F) fbc-bug-$(@F)
	rm -f fbc-bug-$(@F)/Dockerfile

.PHONY: fbc $(scenarios)
