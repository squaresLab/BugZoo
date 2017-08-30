import git

class SourceManager(object):
    """

    Attributes:
        __rbox (RepairBox):
        __sources_filename (str):
        __sources (dict of str to str):
    """
    

    def __init__(self, rbox: RepairBox) -> None:
        self.__rbox: str = rbox
        self.__sources_filename: str = os.path.join(rbox.path(), 'sources.json')
        self.__source_path = os.path.join(rbox.path(), 'sources')
        self.__sources: dict = {}


    def __source_rel_path(self, src: str) -> str:
        return src.replace('/', '_').replace('.', '_')

    
    def __source_abs_path(self, src: str) -> str:
        return os.path.join(self.__source_path, self.__source_rel_path(src))


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
        pass


    def update(self) -> None:
        pass


    def sources(self) -> List[str]:
        return list(self.__sources.keys())
