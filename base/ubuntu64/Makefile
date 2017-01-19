all: build

build:
	docker build -t christimperley/repairbox:ubuntu64 .

push: build
	docker push christimperley/repairbox:ubuntu64

.PHONY: build push
