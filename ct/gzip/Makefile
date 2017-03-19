all: one two three

one:
	cp Dockerfile one
	docker build \
		--build-arg FAULT_ID=one \
		-t christimperley/repairbox:ct-gzip-one one
	rm one/Dockerfile

two:
	cp Dockerfile two
	docker build \
		--build-arg FAULT_ID=two \
		-t christimperley/repairbox:ct-gzip-two two
	rm two/Dockerfile

three:
	cp Dockerfile three
	docker build \
		--build-arg FAULT_ID=three \
		-t christimperley/repairbox:ct-gzip-three three
	rm three/Dockerfile


.PHONY: one two three
