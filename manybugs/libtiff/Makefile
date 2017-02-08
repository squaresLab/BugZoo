scenarios = $(shell cat scenarios.txt)

all: libtiff $(scenarios)

libtiff:
	docker build -t christimperley/repairbox:manybugs-libtiff .

$(scenarios): libtiff
	docker build 	--build-arg scenario=$<-bug-$(@F) \
								-f Dockerfile.bug \
								-t christimperley/repairbox:manybugs-$<-bug-$(@F) .

.PHONY: libtiff $(scenarios)
