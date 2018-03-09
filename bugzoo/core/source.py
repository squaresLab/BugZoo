import os
import shutil
import json

import git

import bugzoo.core.errors


class SourceContents(object):
    """
    Used to record the names of blueprints, bugs, and tools that are provided
    by a source.
    """
    def __init__(self,
                 blueprints: List[str],
                 bugs: List[str],
                 tools: List[str]):
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
    @staticmethod
    def from_dict(d: dict) -> 'Source':
        if d['type'] == 'local':
            return LocalSource.from_dict(d)
        if d['type'] == 'remote':
            return RemoteSource.from_dict(d)
        raise Exception("unsupported source type: {}".format(d['type']))

    def __init__(self,
                 name: str,
                 url: str,
                 location: str):
        self.__url = url
        self.__name = name
        self.__repo = git.Repo(self.abs_path)

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

    @property
    def version(self) -> str:
        """
        The current version of this source, given as the first eight characters
        of its current revision.
        """
        sha = self.__repo.head.object.hexsha
        return self.__repo.git.rev_parse(sha, short=8)

    def update(self) -> None:
        origin = self.__repo.remotes.origin
        origin.pull()

    def remove(self) -> None:
        shutil.rmtree(self.abs_path)

    @property
    def url(self) -> str:
        return self.__url


class RemoteSource(Source):
    pass


class LocalSource(Source):
    pass
