import git
import json
import yaml
import os
import shutil


class Source(object):
    @staticmethod
    def download(manager: 'SourceManager', url: str) -> None:
        """
        Downloads a source from a given URL to disk.
        """
        abs_path = Source.url_to_abs_path(manager, url) # todo
        # TODO: throw appropriate exception
        assert not os.path.exists(abs_path)
        git.Repo.clone_from(url, abs_path)


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


    def __init__(self, manager: 'SourceManager', url: str) -> None:
        self.__manager = manager
        self.__url = url
        self.__repo = git.Repo(self.abs_path)

        # determine the name from the manifest file
        # TODO: raise custom error
        assert os.path.isfile(self.manifest_fn)
        with open(self.manifest_fn, 'r') as f:
            yml = yaml.load(f)
            self.__type = yml['type']
            self.__name = yml['name']


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
    def __init__(self, path) -> None:
        self.__path = path
        self.__registry_fn = os.path.join(path, 'registry.json')
        self.__sources = {}


    @property
    def path(self):
        return self.__path


    def reload(self) -> None:
        if not os.path.exists(self.__registry_fn):
            self.__sources = {}
            return

        with open(self.__registry_fn, 'r') as f:
            srcs = json.load(f)

        assert isinstance(srcs, list)
        # TODO
        self.__sources = {s: self.construct(s) for s in srcs}


    def __write(self) -> None:
        with open(self.__registry_fn, 'w') as f:
            srcs = list(self.__sources.keys())
            json.dump(srcs, f, indent=2)


    def exists(self, url: str) -> bool:
        return url in self.__datasets


    def __download(self, url: str) -> None:
        abs_path = Source.url_to_abs_path(self, url) # todo
        # TODO: throw appropriate exception
        assert not os.path.exists(abs_path)
        git.Repo.clone_from(url, abs_path)
        return self.construct(url)


    def construct(self, url: str) -> Source:
        raise NotImplementedError


    def add(self, url: str) -> Source:
        assert url != ""
        # TODO: new exception
        if url in self.__sources:
            raise Exception("already registered source: {}".format(url))

        src = self.__download(url)
        self.__sources[src.url] = src.rel_path
        self.__write()
        return src


    def remove(self, url: str) -> None:
        assert url!= ""
        self.__sources[url].remove()
        del self.__sources[url]
        self.__write()


    def update(self) -> None:
        for src in self.__sources.values():
            src.update()


    def __getitem__(self, name_or_url: str) -> Source:
        # URL
        if name_or_url in self.__sources:
            return self.__sources[name_or_url]

        # name
        for src in self.__datasets.values():
            if src.name == name_or_url:
                return src

        raise IndexError


    def __iter__(self):
        """
        Returns an iterator over the datasets registered with this local
        installation.

        Example:

            .. code-block:: python

                # print the names and URLs of all registered datasets
                rbx = RepairBox()
                for src in rbx.datasets:
                    print("{}: {}".format(src.name, src.url))
        """
        return super().__iter__()


    def __iter__(self):
        for src in self.__sources.values():
            yield src
