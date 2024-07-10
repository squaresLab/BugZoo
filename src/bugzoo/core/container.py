__all__ = ["Container"]

from collections.abc import Iterable
from typing import Any

import attr


def _convert_tools(tools: Iterable[str]) -> tuple[str, ...]:
    return tuple(tools)


@attr.s(frozen=True)
class Container:
    """Containers provide ephemeral, mutable instances of registered bugs,
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
    tools = attr.ib(type=tuple[str, ...], converter=_convert_tools)

    @property
    def id(self) -> str:
        return self.uid

    @staticmethod
    def from_dict(d: dict[str, Any]) -> "Container":
        return Container(uid=d["uid"],
                         bug=d["bug"],
                         tools=d["tools"])

    def to_dict(self) -> dict[str, Any]:
        return {"uid": self.uid,
                "bug": self.bug,
                "tools": list(self.tools)}
