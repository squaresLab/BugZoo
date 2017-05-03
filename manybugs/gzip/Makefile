scenarios = $(shell cat scenarios.txt)

all: gzip $(scenarios)

gzip:
	docker build -t squareslab/repairbox:manybugs-gzip .

$(scenarios): gzip
	docker build 	--build-arg scenario=gzip-bug-$(@F) \
								-f Dockerfile.bug \
								-t squareslab/repairbox:manybugs-$<-bug-$(@F) .

.PHONY: gzip $(scenarios)
