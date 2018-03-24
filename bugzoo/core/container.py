from typing import List, Iterator, Dict, Optional, Union
import copy
import os
import tempfile

import docker

from .bug import Bug


__all__ = ["Container"]


class Container(object):
    """
    Containers provide ephemeral, mutable instances of registered bugs,
    and are used to conduct studies of software bugs. Behind the scenes,
    containers are implemented as `Docker containers <https://docker.com>`_.
    """
    def __init__(self,
                 uid: str,
                 bug: Bug,
                 tools: List[str]
                 ) -> None:
        """
        Constructs a container for a given bug.

        Parameters:
            uid: the unique identifier for this container, which is alos used
                as the name of its underlying Docker container.
            bug: the bug that is inside this container.
            tools: a list of the names of the tools that are mounted inside
                this container.
        """
        self.__uid = uid
        self.__bug = bug
        self.__tools = tools[:]

    @property
    def id(self) -> str:
        """
        A unique identifier for this container.
        """
        return self.__uid

    uid = id

    @property
    def tools(self) -> Iterator[str]:
        """
        Returns an iterator over the list of the names of the tools that are
        mounted inside this container.
        """
        return self.__tools.__iter__()

    @property
    def bug(self) -> Bug:
        """
        The bug that was used to provision this container.
        """
        return self.__bug
