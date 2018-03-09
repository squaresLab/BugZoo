from typing import Iterator

from .build import BuildManager
from ..core.tool import Tool


class ToolManager(object):
    def __init__(self,
                 installation: 'BugZoo',
                 manager_build: BuildManager):
        self.__installation = installation
        self.__manager_build = manager_build

    def __iter__(self) -> Iterator[Tool]:
        """
        Returns an iterator over the tools registered with this server.
        """
        for src in self.__installation.sources:
            if isinstance(src, Tool):
                yield src

    def __getitem__(self, name_or_url: str) -> Tool:
        """
        Attempts to fetch a tool registered with this server by its name or
        URL.

        Raises:
            KeyError: if no tool is registered with the given name or URL.
        """
        for tool in self.__iter__():
            if tool.name == name_or_url or tool.url == name_or_url:
                return tool
        raise KeyError

    def is_installed(self, tool: Tool) -> bool:
        """
        Determines whether or not the Docker image for a given tool has been
        installed onto this server.

        See: `BuildManager.is_installed`
        """
        return self.__manager_build.is_installed(tool.build_instructions)

    def build(self,
              tool: Tool,
              force: bool = False,
              quiet: bool = False
              ) -> None:
        """
        Builds the Docker image associated with a given tool.

        See: `BuildManager.build`
        """
        self.__manager_build.build(tool.build_instructions,
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
        self.__manager_build.uninstall(tool.build_instructions,
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
        return self.__manager_build.download(tool.build_instructions,
                                             force=force)

    def upload(self, tool: Tool) -> bool:
        """
        Attempts to upload the Docker image for a given tool to
        `DockerHub <https://hub.docker.com>`_.
        """
        return self.__manager_build.upload(tool.build_instructions)
