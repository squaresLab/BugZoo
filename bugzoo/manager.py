import os

from typing import Iterator
from bugzoo.source import SourceManager
from bugzoo.artefact import Artefact
from bugzoo.dataset import Dataset
from bugzoo.tool import Tool


class BugZoo(object):
    """
    Used to interact with and manage a local BugZoo installation.
    """
    def __init__(self, path=None) -> None:
        """
        Creates a new BugZoo installation manager.

        Args:
            path: the absolute path of a BugZoo installation on this machine.
                If unspecified, the value of the environmental variable
                :code:`REPAIRBOX_PATH` will be used, unless unspecified, in
                which case :code:`./${HOME}/.bugzoo` will be used instead.
        """
        # TODO support windows
        if path is None:
            default_path = os.path.join(os.environ.get('HOME'), '.bugzoo')
            path = os.environ.get('REPAIRBOX_PATH', default_path)

        # ensure dir exists
        if not os.path.exists(path):
            os.makedirs(path)

        self.__path = path
        self.__sources = SourceManager(self)
        self.__datasets = Datasets(self)
        self.__artefacts = Artefacts(self)
        self.__tools = Tools(self)


    @property
    def path(self) -> str:
        """
        The absolute path to the local installation of BugZoo.
        """
        return self.__path


    def rescan(self):
        print("rescanning...")


    @property
    def sources(self):
        """
        The sources registered with this BugZoo installation.
        """
        return self.__sources


    @property
    def datasets(self):
        """
        The datasets registered with this BugZoo installation.
        """
        return self.__datasets


    @property
    def tools(self):
        """
        The tools registered with this BugZoo installation.
        """
        return self.__tools


    @property
    def artefacts(self):
        """
        The artefacts registered with this BugZoo installation.
        """
        return self.__artefacts


class Tools(object):
    def __init__(self, installation: 'BugZoo') -> None:
        self.__installation = installation


    def __iter__(self) -> Iterator[Tool]:
        for src in self.__installation.sources:
            if isinstance(src, Tool):
                yield src


    def __getitem__(self, name_or_url: str) -> Dataset:
        for tool in self.__iter__():
            if tool.name == name_or_url or tool.url == name_or_url:
                return tool
        raise IndexError


class Datasets(object):
    def __init__(self, installation: 'BugZoo') -> None:
        self.__installation = installation


    def __iter__(self) -> Iterator[Dataset]:
        for src in self.__installation.sources:
            if isinstance(src, Dataset):
                yield src


    def __getitem__(self, name_or_url: str) -> Dataset:
        for dataset in self.__iter__():
            if dataset.name == name_or_url or dataset.url == name_or_url:
                return dataset
        raise IndexError


class Artefacts(object):
    """
    Used to access and manage all artefacts registered with a local BugZoo
    installation.
    """
    class ArtefactIterator(object):
        def __init__(self, datasets):
            self.__datasets = [d for d in datasets]
            self.__artefacts = []


        def __next__(self):
            if not self.__artefacts:
                if not self.__datasets:
                    raise StopIteration
                src = self.__datasets.pop()
                self.__artefacts += src.artefacts
                return self.__next__()
            return self.__artefacts.pop()


    def __init__(self, installation: 'BugZoo') -> None:
        self.__installation = installation


    def __getitem__(self, name: str) -> Artefact:
        for src in self.__installation.datasets:
            if src.contains(name):
                return src[name]
        raise IndexError('artefact not found: {}'.format(name))


    def __iter__(self):
        return Artefacts.ArtefactIterator(self.__installation.datasets)
