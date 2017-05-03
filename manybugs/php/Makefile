scenarios = $(shell cat scenarios.txt)

all: php $(scenarios)

php:
	docker build -t squareslab/repairbox:manybugs-php .

$(scenarios): php
	@ echo "building: php-bug-$(@F)"
	@ docker build	--build-arg scenario=php-bug-$(@F) \
								-f Dockerfile.bug \
								-t squareslab/repairbox:manybugs-$<-bug-$(@F) . > /dev/null

#push: $(scenarios)

.PHONY: php $(scenarios)
