# BUGS = one two three
# https://github.com/php/php-src/commit/8ee126f0bbd3bad8be21294bfb508df124995713
BUGS = 11bdb85 9fb92ee d7f5f60 4d41242 1d6b3f1 01c028a
SILENT = 8ee126f ef214aa c459805
BROKEN = 5cea7a9


all: base $(BUGS)

base:
	docker build -t christimperley/repairbox:ct-php-base .

$(BUGS): base
	cp Dockerfile.mutant $@/.Dockerfile && \
	cd $@ && \
	docker build \
		-f .Dockerfile \
		--build-arg SCENARIO_NAME=ct-php-$@ \
		-t christimperley/repairbox:ct-php-$@ . && \
	docker push christimperley/repairbox:ct-php-$@

.PHONY: base $(BUGS)
