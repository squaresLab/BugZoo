import os
import yaml
import json
import glob
import copy

from typing import List
from repairbox.artefact import Artefact
from repairbox.build import BuildInstructions
from repairbox.source import Source, SourceManager


class Dataset(Source):
    @staticmethod
    def from_dict(manager: 'SourceManager',
                  url: str,
                  d: dict) -> 'Dataset':
        assert 'name' in d
        name = d['name']
        return Dataset(manager, url, name)


    def __init__(self, manager: 'DatasetManager', url: str, name: str) -> None:
        super().__init__(manager, url, name)
        self.__artefacts = {}
        self.__dependencies = {}
        self.scan()


    def scan(self) -> None:
        # find all dependencies
        fns = '{}/**/*.dependency.yaml'.format(self.abs_path)
        for fn in glob.iglob(fns, recursive=True):
            dep = BuildInstructions.from_file(self, fn)
            self.__dependencies[dep.tag] = dep


        # find all artefacts
        fns = '{}/**/*.artefact.yaml'.format(self.abs_path)
        for fn in glob.iglob(fns, recursive=True):
            artefact = Artefact.from_file(self, fn)
            self.__artefacts[artefact.identifier] = artefact


    def update(self) -> None:
        """
        Downloads any updates to the files for this dataset.
        """
        super().update()
        self.scan()


    def remove(self) -> None:
        """
        Removes the files for this dataset from disk, and uninstalls all
        associated Docker images. This should only be called by DatasetManager.
        """
        for artefact in self.artefacts:
            artefact.uninstall(force=True)

        for dep in self.__dependencies.values():
            dep.uninstall(force=True)

        super().remove()


    def contains(self, identifier: str) -> None:
        """
        Checks whether an artefact with a given identifier is provided by this
        dataset.
        """
        return identifier in self.__artefacts


    def __getitem__(self, key):
        return self.__artefacts[key]


    # TODO: return iterator
    @property
    def artefacts(self) -> List[Artefact]:
        return list(self.__artefacts.values())


    # TODO: return iterator
    @property
    def dependencies(self):
        return copy.copy(self.__dependencies)
