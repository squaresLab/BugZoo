from typing import List, Iterator, Dict, Optional, Union, Any
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
    @staticmethod
    def from_dict(d: Dict[str, Any]) -> 'Container':
        """
        Loads a container from a dictionary-based description.
        """
        return Container(uid=d['uid'],
                         bug=d['bug'],
                         tools=d['tools'])

    def __init__(self,
                 uid: str,
                 bug: str,
                 tools: List[str]
                 ) -> None:
        """
        Constructs a container for a given bug.

        Parameters:
            uid: the unique identifier for this container, which is alos used
                as the name of its underlying Docker container.
            bug: the name of the bug that is inside this container.
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
    def tools(self) -> List[str]:
        """
        Returns the list of the names of the tools that are mounted inside
        this container.
        """
        return self.__tools.copy()

    @property
    def bug(self) -> str:
        """
        The name of the bug that was used to provision this container.
        """
        return self.__bug

    def to_dict(self) -> Dict[str, Any]:
        """
        Produces a dictionary-based description of this container, ready to be
        serialised as YAML or JSON.
        """
        return {
            'uid': self.uid,
            'bug': self.bug,
            'tools': self.tools.copy()
        }
