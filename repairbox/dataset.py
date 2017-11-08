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
    def download(manager: 'DatasetManager', url: str) -> 'Dataset':
        """
        Downloads a dataset from a given URL to disk.
        """
        # TODO: exception handling
        Source.download(manager, url)
        return Dataset(manager, url)


    def __init__(self, manager: 'DatasetManager', url: str) -> None:
        super().__init__(manager, url)
        self.__artefacts = {}
        self.__dependencies = {}
        self.scan()


    def scan(self) -> None:
        # find all dependencies
        fns = '{}/**/*.dependency.yaml'.format(self.abs_path)
        for fn in glob.iglob(fns, recursive=True):
            dep = BuildInstructions.from_file(fn)
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


    @property
    def artefacts(self) -> List[Artefact]:
        return list(self.__artefacts.values())


    @property
    def dependencies(self):
        return copy.copy(self.__dependencies)


class DatasetManager(SourceManager):
    """
    Used to access and manage all datasets registered with a local RepairBox
    installation.
    """
    def __init__(self, manager: 'RepairBox') -> None:
        super().__init__(os.path.join(manager.path, 'datasets'))


    def exists(self, url: str) -> bool:
        """
        Determines whether a dataset at a given URL has been installed to
        this machine.

        Args:
            url:    the URL of the Git repository for this dataset.
        """
        return super().exists(url)


    def update(self) -> None:
        """
        Downloads any available updates for all (installed) datasets.
        """
        super().update()


    def construct(self, url: str) -> Dataset:
        return Dataset(self, url)


    def __getitem__(self, name_or_url: str) -> Dataset:
        """
        Fetches a registered dataset by its name or URL.

        Args:
            name_or_url:   the name or URL of the dataset.

        Example:

            .. code-block:: python

                # fetch the ManyBugs dataset,
                rbx = RepairBox()

                # by name,
                src = rbx.datasets['manybugs']

                # or by URL
                src = rbx.datasets['https://github.com/ChrisTimperley/ManyBugs']
        """
        return super.__getitem__(self, name_or_url)


    def __iter__(self):
        """
        Returns an iterator over the datasets registered with this local
        installation.

        Example:

            .. code-block:: python

                # print the names and URLs of all registered datasets
                rbx = RepairBox()
                for src in rbx.datasets:
                    print("{}: {}".format(src.name, src.url))
        """
        return super().__iter__()
