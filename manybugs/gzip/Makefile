scenarios = $(shell cat scenarios.txt)

all: gzip $(scenarios)

gzip:
	docker build -t christimperley/repairbox:manybugs-gzip .

$(scenarios): gzip
	cp Dockerfile.bug $<-bug-$(@F)/Dockerfile
	docker build --build-arg scenario=$(@F) -t christimperley/repairbox:manybugs-$<-bug-$(@F) $<-bug-$(@F)
	rm -f $<-bug-$(@F)/Dockerfile

.PHONY: gzip $(scenarios)
