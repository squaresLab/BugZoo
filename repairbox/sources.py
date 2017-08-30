import os
import git
import json
import shutil

from typing import List


class Source(object):
    def __init__(self, url: str) -> None:
        self.__url = url

        # compute the relative path for this source
        rel_path = rel_path.replace('https://', '')
        rel_path = rel_path.replace('/', '_')
        rel_path = rel_path.replace('.', '_')
        self.__rel_path = rel_path

    
    def download(self) -> None:
        """
        Downloads this source to disk.
        """
        if not os.path.exists(self.abs_path):
            git.Repo.clone_from(self.url, self.abs_path)#, {depth: 1})


    def update(self) -> None:
        """
        Downloads any updates to the files for this source.
        """
        return


    def remove(self) -> None:
        """
        Removes the files for this source from disk. This should only be called
        by SourceManager.
        """
        shutil.rmtree(self.abs_path)


    @property
    def url(self) -> str:
        return self.__url


    @property
    def rel_path(self) -> str:
        """
        Returns the location of this source, relative to the sources directory.
        """
        return self.__rel_path


    @property
    def abs_path(self) -> str:
        """
        Returns the absolute path to this source.
        """
        return os.path.join(RepairBox.sources.path, self.rel_path)


class SourceManager(object):
    """

    Attributes:
        __rbox (RepairBox):
        __sources_filename (str):
        __sources (dict of str to str):
    """
    def __init__(self):
        self.__path = os.path.join(RepairBox.path, 'sources')
        self.__manifest_fn = \
            os.path.join(self.__path, 'sources.manifest.json')


    @property
    def path(self):
        return self.__path

   
    def reload(self) -> None:
        if not os.path.exists(self.__manifest_fn):
            self.__sources = {}
            return

        with open(self.__manifest_fn, 'r') as f:
            srcs = json.load(f)

        assert isinstance(srcs, list)
        self.__sources = {s: Source(s) for s in srcs}
        

    def __write(self) -> None:
        with open(self.__manifest_fn, 'w') as f:
            json.dump(self.__sources, f, indent=2)


    def add(self, src: str) -> None:
        assert src != ""
        if src in self.__sources:
            raise Exception("source already exists: {}".format(src)) # TODO custom Error

        src = Source(src)
        src.download()

        # update the sources file
        self.__sources[src.url] = src.rel_path
        self.__write()
   

    def remove(self, src: str) -> None:
        assert src != ""
        if src not in self.__sources:
            raise Exception("source not found: {}".format(src)) # TODO custom Error

        self.__sources[src].remove()
        del self.__sources[src]
        self.__write()



    def update(self) -> None:
        for src in self.__sources.values():
            src.update()


    @property
    def sources(self) -> List[Source]:
        return self.__sources.values()
