from typing import Iterator, Optional
import os
import logging
import logging.handlers
import time

import docker
from docker import DockerClient

from .mgr.build import BuildManager
from .mgr.source import SourceManager
from .mgr.tool import ToolManager
from .mgr.bug import BugManager
from .mgr.container import ContainerManager
from .mgr.file import FileManager

logger = logging.getLogger(__name__)

__all__ = ['BugZoo']


class BugZoo(object):
    """
    Used to interact with and manage a local BugZoo installation.
    """
    def __init__(self,
                 path: Optional[str] = None,
                 base_url_docker: str = 'unix:///var/run/docker.sock',
                 docker_client_api_version: Optional[str] = None
                 ) -> None:
        """
        Creates a new BugZoo installation manager.

        Parameters:
            path: the absolute path of a BugZoo installation on this machine.
                If unspecified, the value of the environmental variable
                :code:`BUGZOO_PATH` will be used, unless unspecified, in
                which case :code:`./${HOME}/.bugzoo` will be used instead.
            base_url_docker: the base URL of the Docker server.
            docker_client_api_version: the version of the Docker client API
                that should be used to communicate with the Docker server.
        """
        # TODO support windows
        if path is None:
            default_path = os.path.join(os.environ['HOME'], '.bugzoo')
            if 'BUGZOO_PATH' in os.environ:
                path = os.environ['BUGZOO_PATH']
            else:
                path = default_path
        self.__path = path
        logger.debug("using BugZoo directory: %s", self.path)

        logger.debug("preparing BugZoo directory")
        if not os.path.exists(self.path):
            os.makedirs(self.path)
        if not os.path.exists(self.coverage_path):
            os.makedirs(self.coverage_path)
        logger.debug("prepared BugZoo directory")

        logger.debug("connecting to Docker at %s", base_url_docker)
        self.__base_url_docker = base_url_docker

        self.__docker_client_api_version = docker_client_api_version
        if docker_client_api_version:
            logger.debug("using Docket Client API: %s",
                         docker_client_api_version)
        else:
            logger.debug("using default Docker Client API")

        try:
            self.__docker = DockerClient(base_url=base_url_docker,
                                         version=docker_client_api_version,
                                         timeout=120)
            assert self.__docker.ping()
        except (docker.errors.APIError, AssertionError):
            logger.exception("failed to connect to Docker")
            raise  # FIXME add DockerConnectionFailure
        logger.debug("connected to Docker")
        logger.debug("Docker version: %s", self.__docker.version())
        logger.debug("Docker server info: %s", self.__docker.info())

        self.__mgr_build = BuildManager(self.__docker)
        self.__bugs = BugManager(self)
        self.__tools = ToolManager(self)
        self.__sources = SourceManager(self)
        self.__containers = ContainerManager(self)
        self.__files = FileManager(self.__bugs, self.__containers)

    def shutdown(self) -> None:
        logger.info("Shutting down daemon...")
        self.__containers.clear()
        logger.info("Shut down daemon")

    @property
    def docker(self) -> DockerClient:
        """
        The Docker client used by this server.
        """
        return self.__docker

    @property
    def docker_client_api_version(self) -> Optional[str]:
        """
        The version of the Docket Client API that should be used to
        communicate with the attached Docker server.
        """
        return self.__docker_client_api_version

    @property
    def base_url_docker(self) -> str:
        """
        The base URL of the Docker server to which BugZoo is connected.
        """
        return self.__base_url_docker

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
