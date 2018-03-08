from typing import Iterator
import os

import docker

from .mgr.build import BuildManager
from .mgr.source import SourceManager
from .mgr.dataset import DatasetManager
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

        client_docker = docker.from_env()

        self.__mgr_build = BuildManager(client_docker)
        self.__sources = SourceManager(self)
        self.__datasets = DatasetManager(self)
        self.__bugs = BugManager(self, self.__mgr_build)
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
    def build(self) -> BuildManager:
        return self.__mgr_build

    @property
    def sources(self) -> SourceManager:
        """
        The sources registered with this BugZoo installation.
        """
        return self.__sources

    @property
    def datasets(self) -> DatasetManager:
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
