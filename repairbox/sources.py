import git
import json


class SourceManager(object):
    """

    Attributes:
        __rbox (RepairBox):
        __sources_filename (str):
        __sources (dict of str to str):
    """
    
   # def __init__(self, rbox: RepairBox) -> None:
   #     self.__rbox: str = rbox
    def __init__(self, path: str) -> None:
        self.__sources_filename: str = os.path.join(path, 'sources.json') # TODO: update
        self.__source_path = os.path.join(path, 'sources')
        self.reload()


    def __source_rel_path(self, src: str) -> str:
        return src.replace('/', '_').replace('.', '_')

    
    def __source_abs_path(self, src: str) -> str:
        return os.path.join(self.__source_path, self.__source_rel_path(src))


    def reload(self) -> None:
        if not os.path.exists(self.__sources_filename):
            self.__sources = {}
            return

        with open(self.__sources_filename 'r') as f:
            srcs = json.load(f)

        assert isinstance(srcs, dict)
        assert all(type(k) in [str, unicode] for k in srcs)
        assert all(type(v) in [str, unicode] for v in srcs)

        self.__sources = srcs
        


    def add(self, src: str) -> None:
        assert src != ""
        if src in self.__sources:
            raise Exception("source already exists: {}".format(src)) # TODO custom Error

        # generate a path for this source
        rel_path = self.__source_rel_path(src)
        abs_path = self.__source_abs_path(src)

        # shallow clone
        git.Repo.clone_from(src, abs_path, depth: 1)
    

    def remove(self, src: str) -> None:
        assert src != ""
        if src not in self.__sources:
            raise Exception("source not found: {}".format(src)) # TODO custom Error


    def update_source(self, src: str) -> None:
        """
        Update the files for a given source.
        """


    def update(self) -> None:
        for src in self.__sources:
            self.update_source(src)


    def sources(self) -> List[str]:
        return list(self.__sources.keys())


if __name__ == "__main__":
    srcMgr = SourceManager("/home/chris/.repairbox")
