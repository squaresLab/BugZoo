import os
import yaml
import json
import glob
import copy

from typing import List
from bugzoo.bug import Bug
from bugzoo.build import BuildInstructions
from bugzoo.source import Source, SourceManager


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
        self.__bugs = {}
        self.__dependencies = {}
        self.scan()

    def scan(self) -> None:
        # find all dependencies
        fns = '{}/**/*.dependency.y*ml'.format(self.abs_path)
        for fn in glob.iglob(fns, recursive=True):
            if fn.endswith('.yml') or fn.endswith('.yaml'):
                dep = BuildInstructions.from_file(self, fn)
                self.__dependencies[dep.tag] = dep

        # find all bugs
        fns = '{}/**/*.bug.y*ml'.format(self.abs_path)
        for fn in glob.iglob(fns, recursive=True):
            if fn.endswith('.yml') or fn.endswith('.yaml'):
                bug = Bug.from_file(self, fn)
                self.__bugs[bug.identifier] = bug

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
        for bug in self.bugs:
            bug.uninstall(force=True)

        for dep in self.__dependencies.values():
            dep.uninstall(force=True)

        super().remove()

    def contains(self, identifier: str) -> None:
        """
        Checks whether an bug with a given identifier is provided by this
        dataset.
        """
        return identifier in self.__bugs

    def __getitem__(self, key):
        return self.__bugs[key]

    @property
    def size(self) -> int:
        """
        The number of bugs contained within this dataset.
        """
        return len(self.__bugs)

    # TODO: return iterator
    @property
    def bugs(self) -> List[Bug]:
        return list(self.__bugs.values())

    # TODO: return iterator
    @property
    def dependencies(self):
        return copy.copy(self.__dependencies)
