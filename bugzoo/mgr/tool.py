from typing import Iterator

import docker

from .build import BuildManager
from ..core.tool import Tool


class ToolManager(object):
    def __init__(self,
                 installation: 'BugZoo'):
        self.__installation = installation
        self.__tools = {}

    def __iter__(self) -> Iterator[Tool]:
        """
        Returns an iterator over the tools registered with this server.
        """
        return self.__tools.values().__iter__()

    def __getitem__(self, name: str) -> Tool:
        """
        Attempts to fetch a tool registered with this server by its name.

        Raises:
            KeyError: if no tool is registered with the given name.
        """
        return self.__tools[name]

    def provision(self, tool: Tool) -> docker.models.containers.Container:
        """
        Provisions a mountable Docker container for a given tool.
        """
        if not self.is_installed(tool):
            raise Exception("tool is not installed: {}".format(tool.name))

        client = self.__installation.docker
        return client.containers.create(tool.image)

    def register(self, tool: Tool) -> None:
        """
        Attempts to register a given tool with this manager.
        """
        self.__tools[tool.name] = tool

    add = register

    def deregister(self, tool: Tool) -> None:
        """
        Attempts to deregister a given tool from this manager.
        """
        del self.__tools[tool.name]

    remove = deregister

    def is_installed(self, tool: Tool) -> bool:
        """
        Determines whether or not the Docker image for a given tool has been
        installed onto this server.

        See: `BuildManager.is_installed`
        """
        return self.__installation.build.is_installed(tool.image)

    def build(self,
              tool: Tool,
              force: bool = False,
              quiet: bool = False
              ) -> None:
        """
        Builds the Docker image associated with a given tool.

        See: `BuildManager.build`
        """
        self.__installation.build.build(tool.image,
                                        force=force,
                                        quiet=quiet)

    def uninstall(self,
                  tool: Tool,
                  force: bool = False,
                  noprune: bool = False
                  ) -> None:
        """
        Uninstalls all Docker images associated with this tool.

        See: `BuildManager.uninstall`
        """
        self.__installation.build.uninstall(tool.image,
                                            force=force,
                                            noprune=noprune)

    def download(self,
                 tool: Tool,
                 force=False) -> bool:
        """
        Attempts to download the Docker image for a given tool from
        `DockerHub <https://hub.docker.com>`_. If the force parameter is set to
        True, any existing image will be overwritten.

        Returns:
            `True` if successfully downloaded, else `False`.
        """
        return self.__installation.build.download(tool.image,
                                                  force=force)

    def upload(self, tool: Tool) -> bool:
        """
        Attempts to upload the Docker image for a given tool to
        `DockerHub <https://hub.docker.com>`_.
        """
        return self.__installation.build.upload(tool.image)
