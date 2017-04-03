SEEDED = one two three
BROKEN = 1bea762
BUGS = 6c3d527 b7c9150 c393ee8 9f8ad3f d7e6433

all: base $(BUGS)

base:
	docker build -t christimperley/repairbox:ct-python-base .

$(BUGS): base
	cp Dockerfile.mutant $@/.Dockerfile && \
	cd $@ && \
	docker build \
		-f .Dockerfile \
		--build-arg SCENARIO_NAME=ct-python-$@ \
		-t christimperley/repairbox:ct-python-$@ .

.PHONY: base $(BUGS)
