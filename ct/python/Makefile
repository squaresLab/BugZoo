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

binascii-one: base
	cp Dockerfile.mutant binascii-one/.Dockerfile && \
	cd binascii-one && \
	docker build \
		-f .Dockerfile \
		--build-arg SCENARIO_NAME=ct-python-binascii-one \
		--build-arg REVISION=a90e64b \
		-t christimperley/repairbox:ct-python-binascii-one .


.PHONY: base a90e64b binascii-one
