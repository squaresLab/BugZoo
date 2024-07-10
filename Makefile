.PHONY: all check fix install publish test type lint

all: install check

fix:
	poetry run ruff check --fix src

lint:
	poetry run ruff check src

test:
	poetry run pytest

type:
	poetry run mypy src

install:
	poetry install --with dev

publish:
	poetry publish --build

check: lint test type
