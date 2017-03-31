BUGS = one three

all: base $(BUGS)

base:
	docker build -t christimperley/repairbox:ct-openssl-base .

$(BUGS): base
	cp Dockerfile.mutant $@/.Dockerfile && \
	cd $@ && \
	docker build \
		-f .Dockerfile \
		--build-arg SCENARIO_NAME=ct-openssl-$@ \
		--build-arg REVISION=3fd5ece \
		-t christimperley/repairbox:ct-openssl-$@ .

.PHONY: base $(BUGS)
