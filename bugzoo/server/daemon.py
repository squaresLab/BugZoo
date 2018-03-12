from typing import Iterator

from ..mgr.container import ContainerManager
from ..mgr.bug import BugManager
from ..manager import BugZoo


class Daemon(object):
    def __init__(self):
        self.__installation = BugZoo()

    @property
    def installation(self) -> BugZoo:
        """
        TODO: change name of type from BugZoo to Installation
        """
        return self.__installation

    @property
    def containers(self) -> ContainerManager:
        """
        The collection of containers that are currently running on this
        server.
        """
        return self.installation.containers

    @property
    def bugs(self) -> BugManager:
        """
        The collection of bugs that are registered with this server.
        """
        return self.installation.bugs
