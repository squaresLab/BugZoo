from typing import Iterator
import os

from .source import SourceManager
from .dataset import Dataset
from .mgr.tool import ToolManager
from .mgr.bug import BugManager


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
        self.__datasets = DatasetManager(self)
        self.__bugs = BugManager(self)
        self.__tools = ToolManager(self)

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
    def sources(self) -> SourceManager:
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
    def tools(self) -> ToolManager:
        """
        The tools registered with this BugZoo installation.
        """
        return self.__tools

    @property
    def bugs(self) -> BugManager:
        """
        The bugs registered with this BugZoo installation.
        """
        return self.__bugs


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
        raise IndexError
