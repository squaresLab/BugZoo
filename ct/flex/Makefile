all: one two three

one:
	cp Dockerfile one
	docker build \
		--build-arg FAULT_ID=one \
		-t christimperley/repairbox:ct-flex-one one
	rm one/Dockerfile

two:
	cp Dockerfile two
	docker build \
		--build-arg FAULT_ID=two \
		-t christimperley/repairbox:ct-flex-two two
	rm two/Dockerfile

three:
	cp Dockerfile three
	docker build \
		--build-arg FAULT_ID=three \
		-t christimperley/repairbox:ct-flex-three three
	rm three/Dockerfile


.PHONY: one two three
