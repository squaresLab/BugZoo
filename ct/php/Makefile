all: base 98f801c

base:
	docker build -t christimperley/repairbox:ct-php-base .

98f801c: base
	cp Dockerfile.mutant 98f801c/.Dockerfile && \
	cd 98f801c && \
	docker build \
		-f .Dockerfile \
		--build-arg BISON_VERSION=2.7.1 \
		--build-arg AUTOCONF_VERSION=2.69 \
		--build-arg SCENARIO_NAME=test_scenario \
		--build-arg REVISION=98f801c \
		-t christimperley/repairbox:ct-php-98f801c .

.PHONY: base 98f801c
