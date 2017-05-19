all: build

build:
	docker build -t squareslab/repairbox:ubuntu64 .

push: build
	docker push squareslab/repairbox:ubuntu64

.PHONY: build push
