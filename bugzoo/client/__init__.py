from .api import APIClient
from .bug import BugManager
from .container import ContainerManager
from .file import FileManager
from .docker import DockerManager

__all__ = ['Client']


class Client(object):
    def __init__(self,
                 base_url: str = None
                 ) -> None:
        if base_url is None:
            base_url = "http://127.0.0.1:6060"
        self.__api = APIClient(base_url)
        self.__bugs = BugManager(self.__api)
        self.__containers = ContainerManager(self.__api)
        self.__files = FileManager(self.__api, self.__bugs)
        self.__docker = DockerManager(self.__api)

    @property
    def bugs(self) -> BugManager:
        return self.__bugs

    @property
    def containers(self) -> ContainerManager:
        return self.__containers

    @property
    def files(self) -> FileManager:
        return self.__files

    @property
    def docker(self) -> DockerManager:
        return self.__docker
