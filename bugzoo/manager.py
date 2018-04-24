from typing import Iterator
import os
import logging
import time

from docker import DockerClient
from docker import from_env as docker_client_from_env

from .mgr.build import BuildManager
from .mgr.source import SourceManager
from .mgr.tool import ToolManager
from .mgr.bug import BugManager
from .mgr.container import ContainerManager
from .mgr.coverage import CoverageManager
from .mgr.file import FileManager


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
        path_logs = os.path.join(path, 'logs')

        # ensure dirs exist
        if not os.path.exists(self.path):
            os.makedirs(self.path)
        if not os.path.exists(path_logs):
            os.makedirs(path_logs)
        if not os.path.exists(self.coverage_path):
            os.makedirs(self.coverage_path)

        # enable logging
        # TODO allow users to control output and verbosity
        timestamp = time.strftime('%Y%m%d-%H%M%S', time.gmtime())
        log_fn = 'logs/{}.bugzoo.log'.format(timestamp)
        log_fn = os.path.join(self.__path, log_fn)
        logging.basicConfig(filename=log_fn,
                            filemode='w',
                            level=logging.INFO)
        self.__logger = logging.getLogger('bugzoo')
        self.__logger.setLevel(logging.DEBUG)
        self.__logger.info('Logging to: %s', log_fn)

        self.__docker = docker_client_from_env(timeout=120)
        self.__mgr_build = BuildManager(self.__docker)
        self.__bugs = BugManager(self)
        self.__tools = ToolManager(self)
        self.__sources = SourceManager(self)
        self.__containers = ContainerManager(self)
        self.__files = FileManager(self.__bugs, self.__containers)
        self.__coverage = CoverageManager(self)

    @property
    def docker(self) -> DockerClient:
        """
        The Docker client used by this server.
        """
        return self.__docker

    @property
    def logger(self) -> logging.Logger:
        """
        The root logging mechanism for BugZoo.
        """
        return self.__logger

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
    def coverage(self) -> CoverageManager:
        """
        The coverage manager is used to compute line coverage information.
        """
        return self.__coverage

    @property
    def files(self) -> FileManager:
        """
        Provides access to the file system within running containers.
        """
        return self.__files

    @property
    def sources(self) -> SourceManager:
        """
        The sources registered with this BugZoo installation.
        """
        return self.__sources

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

    @property
    def containers(self) -> ContainerManager:
        """
        The containers that are running on this server.
        """
        return self.__containers
