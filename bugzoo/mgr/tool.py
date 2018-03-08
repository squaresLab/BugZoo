from typing import Iterator
from ..core.tool import Tool


class ToolManager(object):
    def __init__(self, installation: 'BugZoo'):
        self.__installation = installation

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
