from typing import Iterator
import git
import json
import yaml
import os
import shutil


class Source(object):
    @staticmethod
    def from_dict(manager: 'SourceManager',
                  url: str,
                  d: dict) -> 'Source':
        if d['type'] == 'dataset':
            import repairbox.dataset
            return repairbox.dataset.Dataset.from_dict(manager, url, d)
        if d['type'] == 'tool':
            import repairbox.tool
            return repairbox.tool.Tool.from_dict(manager, url, d)

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
                 name: str) -> None:
        self.__manager = manager
        self.__url = url
        self.__name = name
        self.__repo = git.Repo(self.abs_path)


    @property
    def manifest_fn(self) -> str:
        return os.path.join(self.abs_path, '.repairbox.yml')


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


class SourceManager(object):
    def __init__(self, installation: 'RepairBox') -> None:
        self.__installation = installation
        self.__path = os.path.join(installation.path, 'sources')
        self.__registry_fn = os.path.join(self.__path, 'registry.json')
        self.__sources = {}
        self.scan()


    @property
    def path(self):
        return self.__path


    def scan(self) -> None:
        if not os.path.exists(self.__registry_fn):
            self.__sources = {}
            return

        with open(self.__registry_fn, 'r') as f:
            srcs = json.load(f)
        assert isinstance(srcs, list)

        self.__sources = {s: self.load(s) for s in srcs}


    def __write(self) -> None:
        with open(self.__registry_fn, 'w') as f:
            srcs = list(self.__sources.keys())
            json.dump(srcs, f, indent=2)


    def exists(self, url: str) -> bool:
        return url in self.__sources


    def __download(self, url: str) -> None:
        abs_path = Source.url_to_abs_path(self, url)
        # TODO: throw appropriate exception
        assert not os.path.exists(abs_path)
        git.Repo.clone_from(url, abs_path)
        return self.load(url)


    def load(self, url: str) -> Source:
        rel_path = Source.url_to_rel_path(url)
        abs_path = Source.url_to_abs_path(self, url)
        manifest_path = os.path.join(abs_path, '.repairbox.yml')
        with open(manifest_path, 'r') as f:
            yml = yaml.load(f)
        return Source.from_dict(self, url, yml)


    def add(self, url: str) -> Source:
        assert url != ""
        # TODO: new exception
        if url in self.__sources:
            raise Exception("already registered source: {}".format(url))

        src = self.__download(url)
        self.__sources[src.url] = src.rel_path
        self.__write()
        return src


    def __remove(self, src: Source) -> None:
        src.remove()
        del self.__sources[src.url]
        self.__write()


    def remove_by_url(self, url: str) -> None:
        assert url != ""
        self.__remove(self.get_by_url(url))


    def remove_by_name(self, name: str) -> None:
        assert name != ""
        self.__remove(self.get_by_name(name))


    def update(self) -> None:
        for src in self.__sources.values():
            src.update()


    def get_by_name(self, name: str) -> Source:
        """
        Retrieves the source associated with a given name.

        Raises:
            IndexError: if no source is associated with that name.
        """
        for s in self:
            if s.name == name:
                return s

        raise IndexError


    def get_by_url(self, url: str) -> Source:
        """
        Retrieves the source provided by a given URL.

        Raises:
            IndexError: if no source is associated with that URL.
        """
        if url in self.__sources:
            return self.__sources[url]

        raise IndexError


    def __getitem__(self, name_or_url: str) -> Source:
        # URL
        if name_or_url in self.__sources:
            return self.__sources[name_or_url]

        # name
        for src in self.__sources.values():
            if src.name == name_or_url:
                return src

        raise IndexError


    def __iter__(self) -> Iterator[Source]:
        for src in self.__sources.values():
            yield src
