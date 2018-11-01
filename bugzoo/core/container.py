from typing import List, Iterator, Dict, Optional, Union, Any, Tuple
import copy
import os
import tempfile

import docker
import attr

from .bug import Bug


__all__ = ["Container"]


@attr.s(frozen=True)
class Container(object):
    """
    Containers provide ephemeral, mutable instances of registered bugs,
    and are used to conduct studies of software bugs. Behind the scenes,
    containers are implemented as `Docker containers <https://docker.com>`_.
    """

    """
    A unique identifier for this container.
    """
    uid = attr.ib(type=str)

    """
    The name of the bug that was used to provision this container.
    """
    bug = attr.ib(type=str)

    """
    The names of the tools that are mounted inside this container.
    """
    tools = attr.ib(type=Tuple[str], default=tuple(), converter=tuple)

    @property
    def id(self) -> str:
        return self.uid

    @staticmethod
    def from_dict(d: Dict[str, Any]) -> 'Container':
        return Container(uid=d['uid'],
                         bug=d['bug'],
                         tools=d['tools'])

    def to_dict(self) -> Dict[str, Any]:
        return {'uid': self.uid,
                'bug': self.bug,
                'tools': list(self.tools)}
