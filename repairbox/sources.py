import os
import git
import json

from typing import List


class SourceManager(object):
    """

    Attributes:
        __rbox (RepairBox):
        __sources_filename (str):
        __sources (dict of str to str):
    """
    def __init__(self, rbox):
        self.__source_path = os.path.join(rbox.path(), 'sources')
        self.__manifest_fn = os.path.join(self.__source_path,
                                          'sources.manifest.json')
        self.reload()


    def __source_rel_path(self, src: str) -> str:
        src = src.replace('https://', '')
        return src.replace('/', '_').replace('.', '_')

    
    def __source_abs_path(self, src: str) -> str:
        return os.path.join(self.__source_path, self.__source_rel_path(src))


    def reload(self) -> None:
        if not os.path.exists(self.__manifest_fn):
            self.__sources = {}
            return

        with open(self.__manifest_fn, 'r') as f:
            srcs = json.load(f)

        assert isinstance(srcs, dict)
        assert all(isinstance(k, str) for k in srcs)
        assert all(isinstance(v, str) for v in srcs)

        self.__sources = srcs
        

    def __write(self) -> None:
        with open(self.__manifest_fn, 'w') as f:
            json.dump(self.__sources, f, indent=2)


    def add(self, src: str) -> None:
        assert src != ""
        if src in self.__sources:
            raise Exception("source already exists: {}".format(src)) # TODO custom Error

        # generate a path for this source
        rel_path = self.__source_rel_path(src)
        abs_path = self.__source_abs_path(src)

        # shallow clone
        git.Repo.clone_from(src, abs_path)#, {depth: 1})

        # update the sources file
        self.__sources[src] = rel_path
        self.__write()
   

    def remove(self, src: str) -> None:
        assert src != ""
        if src not in self.__sources:
            raise Exception("source not found: {}".format(src)) # TODO custom Error

        abs_path = self.__source_abs_path(src)
        shutil.rmtree(abs_path)
        del self.__sources[src]
        self.__write()


    def update_source(self, src: str) -> None:
        """
        Update the files for a given source.
        """
        return


    def update(self) -> None:
        for src in self.__sources:
            self.update_source(src)


    def sources(self) -> List[str]:
        return list(self.__sources.keys())
