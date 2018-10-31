import logging

from .api import APIClient
from .bug import BugManager
from .container import ContainerManager
from .file import FileManager
from .dockerm import DockerManager
from ..exceptions import ConnectionFailure

logger = logging.getLogger(__name__)  # type: logging.Logger

__all__ = ['Client']


class Client(object):
    def __init__(self,
                 base_url: str = None,
                 *,
                 timeout_connection: int = 30
                 ) -> None:
        """
        Constructs a new client for communicating with a BugZoo server.

        Parameters:
            base_url: the base URL of the BugZoo server.
            timeout_connection: the maximum number of seconds to wait whilst
                attempting to connect to the server before declaring the
                connection to have failed.

        Raises:
            ConnectionFailure: if a connection to the server could not be
                established within the timeout window.
        """
        if base_url is None:
            base_url = "http://127.0.0.1:6060"
        self.__api = APIClient(base_url, timeout_connection=timeout_connection)
        self.__bugs = BugManager(self.__api)
        self.__containers = ContainerManager(self.__api)
        self.__files = FileManager(self.__api, self.__bugs)
        self.__docker = DockerManager(self.__api)

    @property
    def bugs(self) -> BugManager:
        """
        Provides access to the historical bugs that are registered with the
        server. Can be used to install, download, and uninstall registered
        bugs, or to dynamically register new bugs with the server.
        """
        return self.__bugs

    @property
    def containers(self) -> ContainerManager:
        """
        Provides access to the containers running on the server. Can be used
        to execute tests (as well as arbitrary shell commands), build from
        source code, apply patches, compute coverage, and more.
        """
        return self.__containers

    @property
    def files(self) -> FileManager:
        """
        Provides access to the file systems used by running containers. Can be
        used to read from and write to files in containers, and to copy data
        between the host machine and a given container.
        """
        return self.__files

    @property
    def docker(self) -> DockerManager:
        return self.__docker

    def shutdown(self) -> None:
        """
        Instructs the connected BugZoo server to shutdown.
        """
        r = self.__api.post("shutdown")
        if r.status_code != 202:
            raise Exception("failed to shutdown server")
