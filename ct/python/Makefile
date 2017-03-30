all: base a90e64b

base:
	docker build -t christimperley/repairbox:ct-python-base .

a90e64b: base
	cp Dockerfile.mutant a90e64b/.Dockerfile && \
	cd a90e64b && \
	docker build \
		-f .Dockerfile \
		--build-arg SCENARIO_NAME=test_scenario \
		--build-arg REVISION=a90e64b \
		-t christimperley/repairbox:ct-python-a90e64b .


.PHONY: base a90e64b
