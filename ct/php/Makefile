# BUGS = one two three
BUGS = 11bdb85

all: base $(BUGS)

base:
	docker build -t christimperley/repairbox:ct-php-base .

$(BUGS): base
	cp Dockerfile.mutant $@/.Dockerfile && \
	cd $@ && \
	docker build \
		-f .Dockerfile \
		--build-arg BISON_VERSION=2.7.1 \
		--build-arg AUTOCONF_VERSION=2.69 \
		--build-arg SCENARIO_NAME=ct-php-$@ \
		--build-arg REVISION=98f801c \
		-t christimperley/repairbox:ct-php-$@ .

.PHONY: base $(BUGS)
