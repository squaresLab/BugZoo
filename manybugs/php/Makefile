scenarios = $(shell cat scenarios.txt)

all: php $(scenarios)

php:
	docker build -t squareslab/repairbox:manybugs-php .

$(scenarios): php
	@ echo "building: php-bug-$(@F)"
	@ cp Dockerfile.bug "$(@F)/.Dockerfile"
	@ docker build	--build-arg scenario=php-bug-$(@F) \
								-f "${@F}/.Dockerfile"	\
								-t squareslab/repairbox:manybugs-$<-bug-$(@F) \
								$(@F)

.PHONY: php $(scenarios)
