scenarios = $(shell cat scenarios.txt)

all: php $(scenarios)

php:
	docker build -t christimperley/repairbox:manybugs-php .

$(scenarios): php
	cp Dockerfile.bug php-bug-$(@F)/Dockerfile
	docker build -t christimperley/repairbox:manybugs-$<-$(@F) php-bug-$(@F)
	rm -f php-bug-$(@F)/Dockerfile

.PHONY: php $(scenarios)
