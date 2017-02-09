scenarios = $(shell cat scenarios.txt)

all: php $(scenarios)

php:
	docker build -t christimperley/repairbox:manybugs-php .

$(scenarios): php
	docker build	--build-arg scenario=php-bug-$(@F) \
								-f Dockerfile.bug \
								-t christimperley/repairbox:manybugs-$<-bug-$(@F) .

.PHONY: php $(scenarios)
