from typing import Iterator

from ..core.dataset import Dataset


class DatasetManager(object):
    def __init__(self, installation: 'BugZoo'):
        self.__installation = installation

    def __iter__(self) -> Iterator[Dataset]:
        for src in self.__installation.sources:
            if isinstance(src, Dataset):
                yield src

    def __getitem__(self, name_or_url: str) -> Dataset:
        for dataset in self.__iter__():
            if dataset.name == name_or_url or dataset.url == name_or_url:
                return dataset
        raise KeyError
