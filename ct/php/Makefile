all: build

build:
	docker build \
		--build-arg SCENARIO_NAME=test_scenario \
		--build-arg PROGRAM_NAME=php \
		--build-arg REVISION=56269af46c	\
		-t christimperley/repairbox:ct-php-test .

.PHONY: build
