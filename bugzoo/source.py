import os
import shutil
import json

import git

import bugzoo.core.errors


class Source(object):
    @staticmethod
    def from_dict(manager: 'SourceManager',
                  url: str,
                  d: dict) -> 'Source':
        if d['type'] == 'dataset':
            import bugzoo.dataset
            return bugzoo.dataset.Dataset.from_dict(manager, url, d)
        if d['type'] == 'tool':
            import bugzoo.tool
            return bugzoo.tool.Tool.from_dict(manager, url, d)

        # TODO
        raise "UNEXPECTED SOURCE TYPE"

    @staticmethod
    def url_to_rel_path(url: str) -> str:
        rel_path = url.replace('https://', '')
        rel_path = rel_path.replace('/', '_')
        rel_path = rel_path.replace('.', '_')
        return rel_path

    @staticmethod
    def url_to_abs_path(manager: 'SourceManager', url: str) -> str:
        rel_path = Source.url_to_rel_path(url)
        return os.path.join(manager.path, rel_path)

    def __init__(self,
                 manager: 'SourceManager',
                 url: str,
                 name: str):
        self.__manager = manager
        self.__url = url
        self.__name = name
        self.__repo = git.Repo(self.abs_path)

    @property
    def manifest_fn(self) -> str:
        return os.path.join(self.abs_path, '.bugzoo.yml')

    @property
    def name(self) -> str:
        return self.__name

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
    def manager(self):
        return self.__manager

    @property
    def url(self) -> str:
        return self.__url

    @property
    def rel_path(self) -> str:
        return Source.url_to_rel_path(self.url)

    @property
    def abs_path(self) -> str:
        return Source.url_to_abs_path(self.manager, self.url)
