from typing import List, Dict, Iterator
import os
import shutil
import json

import git

from ..exceptions import *


class SourceContents(object):
    """
    Used to record the names of blueprints, bugs, and tools that are provided
    by a source.
    """
    def __init__(self,
                 blueprints: List[str],
                 bugs: List[str],
                 tools: List[str]
                 ) -> None:
        self.__blueprints = blueprints[:]
        self.__bugs = bugs[:]
        self.__tools = tools[:]

    @property
    def blueprints(self) -> Iterator[str]:
        """
        The names of the blueprints that are provided by the source.
        """
        return self.__blueprints.__iter__()

    @property
    def bugs(self) -> Iterator[str]:
        """
        The names of the bugs that are provided by the source.
        """
        return self.__bugs.__iter__()

    @property
    def tools(self) -> Iterator[str]:
        """
        The names of the tools that are provided by the source.
        """
        return self.__tools.__iter__()


class Source(object):
    """
    Sources are used to provide access to blueprints for constructing bugs
    and tools. Sources can be provided by either local directories or remote
    Git repositories.
    """
    @staticmethod
    def from_dict(d: dict) -> 'Source':
        if d['type'] == 'local':
            return LocalSource.from_dict(d)
        if d['type'] == 'remote':
            return RemoteSource.from_dict(d)
        raise Exception("unsupported source type: {}".format(d['type']))

    def __init__(self, name: str, location: str) -> None:
        self.__location = location
        self.__name = name

    @property
    def name(self) -> str:
        """
        The name of this source.
        """
        return self.__name

    @property
    def location(self) -> str:
        """
        The location of this source on disk.
        """
        return self.__location


class LocalSource(Source):
    """
    Local sources rely on a local directory to serve as a source of resources.

    See: `Source`
    """
    @staticmethod
    def from_dict(d: dict) -> 'LocalSource':
        """
        Constructs a local source from a dictionary-based description.
        """
        return LocalSource(d['name'], d['location'])

    def to_dict(self) -> Dict[str, str]:
        """
        Produces a dictionary-based description of this source.
        """
        return {
            'type': 'local',
            'name': self.name,
            'location': self.location
        }


class RemoteSource(Source):
    """
    Remote sources rely on a publicly accessible, remote Git repository to
    provide a set of resources.

    See: `Source`
    """
    @staticmethod
    def from_dict(d: dict) -> 'RemoteSource':
        """
        Constructs a remote source from a dictionary-based description.
        """
        return RemoteSource(d['name'], d['location'], d['url'], d['version'])

    def __init__(self,
                 name: str,
                 location: str,
                 url: str,
                 version: str
                 ) -> None:
        super().__init__(name, location)
        self.__url = url
        self.__version = version

    @property
    def url(self) -> str:
        """
        The URL of the remote that provides this source.
        """
        return self.__url

    @property
    def version(self) -> str:
        """
        The current version of this source, given as the first eight characters
        of the SHA for the commit at the head of its associated Git repository.
        """
        return self.__version

    def to_dict(self) -> Dict[str, str]:
        """
        Produces a dictionary-based description of this source.
        """
        return {
            'type': 'remote',
            'name': self.name,
            'location': self.location,
            'url': self.url,
            'version': self.version
        }
