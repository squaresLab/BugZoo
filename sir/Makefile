PROGRAMS = gzip
VERSIONS = gzip/v1
SCENARIOS = gzip/v1/KL_2 gzip/v1/KL_8

all: $(SCENARIOS)

sir:
	docker build -t christimperley/repairbox:sir . > /dev/null

$(PROGRAMS): sir
	docker build -t christimperley/repairbox:sir-$@ $@ > /dev/null

$(VERSIONS): $(PROGRAMS)
	./build.sh version $(@D) $(@F)

$(SCENARIOS): $(VERSIONS)
	./build.sh fault $(shell dirname "$(@D)") $(shell basename "$(@D)") $(@F)

.PHONY: sir $(SCENARIOS) $(PROGRAMS) $(VERSIONS)
