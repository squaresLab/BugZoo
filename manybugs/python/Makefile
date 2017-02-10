scenarios = $(shell cat scenarios.txt)

all: python $(scenarios)

python:
	docker build -t christimperley/repairbox:manybugs-python	. > /dev/null

$(scenarios): python
	@ echo "building python-bug-$(@F)"
	@ docker build	--build-arg scenario=python-bug-$(@F) \
									-f Dockerfile.bug \
									-t christimperley/repairbox:manybugs-$<-bug-$(@F) . #> /dev/null

.PHONY: python $(scenarios)
