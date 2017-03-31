all: base a90e64b binascii-one

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

tree-one: base
	cp Dockerfile.mutant tree-one/.Dockerfile && \
	cd tree-one && \
	docker build \
		-f .Dockerfile \
		--build-arg SCENARIO_NAME=ct-python-tree-one \
		--build-arg REVISION=a90e64b \
		-t christimperley/repairbox:ct-python-tree-one .

time-one: base
	cp Dockerfile.mutant time-one/.Dockerfile && \
	cd time-one && \
	docker build \
		-f .Dockerfile \
		--build-arg SCENARIO_NAME=ct-python-time-one \
		--build-arg REVISION=a90e64b \
		-t christimperley/repairbox:ct-python-time-one .



.PHONY: base a90e64b binascii-one
