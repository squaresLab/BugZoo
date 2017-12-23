import os

from typing import Iterator
from bugzoo.source import SourceManager
from bugzoo.bug import Bug
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
                :code:`BUGZOO_PATH` will be used, unless unspecified, in
                which case :code:`./${HOME}/.bugzoo` will be used instead.
        """
        # TODO support windows
        if path is None:
            default_path = os.path.join(os.environ.get('HOME'), '.bugzoo')
            path = os.environ.get('BUGZOO_PATH', default_path)
        self.__path = path

        # ensure dirs exist
        if not os.path.exists(self.path):
            os.makedirs(self.path)
        if not os.path.exists(self.coverage_path):
            os.makedirs(self.coverage_path)

        self.__sources = SourceManager(self)
        self.__datasets = Datasets(self)
        self.__bugs = Bugs(self)
        self.__tools = Tools(self)

    @property
    def path(self) -> str:
        """
        The absolute path to the local installation of BugZoo.
        """
        return self.__path

    @property
    def coverage_path(self) -> str:
        """
        The absolute path to the directory used to store cached coverage
        information for bugs provided by this BugZoo installation.
        """
        return os.path.join(self.path, "coverage")

    def rescan(self):
        self.__sources.scan()

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
    def bugs(self):
        """
        The bugs registered with this BugZoo installation.
        """
        return self.__bugs


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


class Bugs(object):
    """
    Used to access and manage all bugs registered with a local BugZoo
    installation.
    """
    class BugIterator(object):
        def __init__(self, datasets):
            self.__datasets = [d for d in datasets]
            self.__bugs = []


        def __next__(self):
            if not self.__bugs:
                if not self.__datasets:
                    raise StopIteration
                src = self.__datasets.pop()
                self.__bugs += src.bugs
                return self.__next__()
            return self.__bugs.pop()


    def __init__(self, installation: 'BugZoo') -> None:
        self.__installation = installation


    def __getitem__(self, name: str) -> Bug:
        for src in self.__installation.datasets:
            if src.contains(name):
                return src[name]
        raise IndexError('bug not found: {}'.format(name))


    def __iter__(self):
        return Bugs.BugIterator(self.__installation.datasets)
