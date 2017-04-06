SEEDED = one two three
BROKEN = 0a687ab
SILENT = 4f7b76b febb0af 108909d 1763ab1 a2bb183 cf3e221 f125430 a6ac1ed 38d1b3c 39ef782 \
	f33f9dd 3b58c54 76f572e a5abd43 b46fe86
BUGS = 6979583 0a2dcb6 6195848 4880672 eddef30 8e3854a

all: base $(BUGS)

base:
	docker build -t christimperley/repairbox:ct-openssl-base .

$(BUGS): base
	cp blacklist.txt $@/blacklist.txt && \
	cp Dockerfile.mutant $@/.Dockerfile && \
	cd $@ && \
	docker build \
		-f .Dockerfile \
		--build-arg SCENARIO_NAME=ct-openssl-$@ \
		-t christimperley/repairbox:ct-openssl-$@ . && \
	docker push christimperley/repairbox:ct-openssl-$@

.PHONY: base $(BUGS)
