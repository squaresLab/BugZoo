from typing import Iterator

from ..core.bug import Bug


class BugManager(object):
    """
    Used to access and manage all bugs registered with a local BugZoo
    installation.
    """
    class BugIterator(object):
        def __init__(self, datasets):
            self.__datasets = [d for d in datasets]
            self.__bugs = []

        def __next__(self):
            if not self.__bugs:
                if not self.__datasets:
                    raise StopIteration
                src = self.__datasets.pop()
                self.__bugs += src.bugs
                return self.__next__()
            return self.__bugs.pop()

    def __init__(self, installation: 'BugZoo'):
        self.__installation = installation

    def __getitem__(self, name: str) -> Bug:
        for src in self.__installation.datasets:
            if src.contains(name):
                return src[name]
        raise IndexError('bug not found: {}'.format(name))

    def __iter__(self) -> Iterator[Bug]:
        return BugManager.BugIterator(self.__installation.datasets)
