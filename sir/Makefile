PROGRAMS = gzip flex grep sed
VERSIONS = $(shell find . -name "versions.txt" -exec cat {} \;)
SCENARIOS = $(shell find . -name "scenarios.txt" -exec cat {} \;)

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
