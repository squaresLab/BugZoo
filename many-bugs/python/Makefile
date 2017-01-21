scenarios = $(shell cat scenarios.txt)

all: python $(scenarios)

python:
	docker build -t christimperley/repairbox:manybugs-python	.

$(scenarios): python
	cp Dockerfile.bug python-bug-$(@F)/Dockerfile
	docker build -t christimperley/repairbox:manybugs-$<-bug-$(@F) python-bug-$(@F)
	rm -f python-bug-$(@F)/Dockerfile

.PHONY: python $(scenarios)
