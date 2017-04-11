SEEDED = one two three
BROKEN = 1bea762 314d6fc b7c9150 c393ee8 9f8ad3f d7e6433 1dcf4f9 97d3555
BUGS = 6c3d527 01b3a08 f584aba b2f3c23 a93342b

all: base $(BUGS) $(SEEDED)

base:
	docker build -t christimperley/repairbox:ct-python-base .

$(BUGS): base
	cp Dockerfile.mutant $@/.Dockerfile && \
	cd $@ && \
	docker build \
		-f .Dockerfile \
		--build-arg SCENARIO_NAME=ct-python-$@ \
		-t christimperley/repairbox:ct-python-$@ . && \
	docker push christimperley/repairbox:ct-python-$@

.PHONY: base $(BUGS)
