#!/usr/bin/env python3
import flask
import os
from bugzoo.container import Container
from bugzoo.bug import Bug
from typing import Iterator


class ContainerManager(object):
    def __init__(self):
        self.__containers = {}

    def __iter__(self) -> Iterator[Container]:
        """
        Returns an iterator over the set of running containers.
        """
        for c in self.__containers.values():
            yield c

    def __getitem__(self, uid: str) -> Container:
        """
        Returns the container associated with a given unique identifier.

        Raises:
            KeyError: if no container exists with the given UID.
        """
        return self.__containers[uid]

    def provision(self,
                  bug: Bug,
                  uid: str = None) -> Container:
        """
        Provisions and returns a container for a given bug.

        Parameters:
            bug:    The bug that should be used to provision a container.
            uid:    A unique identifier (UID) for the container. If no UID is
                provided then one will be automatically generated.
        """
        c = Container(bug, uid=uid)
        self.__containers[c.id] = c
        return c


class Daemon(object):
    def __init__(self):
        self.__containers = ContainerManager()

    @property
    def containers(self) -> ContainerManager:
        return self.__containers
