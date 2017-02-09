scenarios = $(shell cat scenarios.txt)

all: php $(scenarios)

php:
	docker build -t christimperley/repairbox:manybugs-php .

$(scenarios): php
	@ echo "building: php-bug-$(@F)"
	@ docker build	--build-arg scenario=php-bug-$(@F) \
								-f Dockerfile.bug \
								-t christimperley/repairbox:manybugs-$<-bug-$(@F) . > /dev/null

.PHONY: php $(scenarios)
