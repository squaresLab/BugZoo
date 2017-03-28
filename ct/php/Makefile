all: build

build:
	docker build \
		--build-arg SCENARIO_NAME=test_scenario \
		--build-arg PROGRAM_NAME=php \
		--build-arg REVISION=98f801c	\
		-t christimperley/repairbox:ct-php-98f801c .

.PHONY: build
