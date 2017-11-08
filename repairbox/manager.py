import os

from repairbox.artefact import Artefact
from repairbox.source import SourceManager
from repairbox.tool import ToolManager


class RepairBox(object):
    """
    Used to interact with and manage a local RepairBox installation.
    """
    def __init__(self, path=None) -> None:
        """
        Creates a new RepairBox installation manager. 

        Args:
            path: the absolute path of a RepairBox installation on this machine.
                If unspecified, the value of the environmental variable
                :code:`REPAIRBOX_PATH` will be used, unless unspecified, in
                which case :code:`./${HOME}/.repairbox` will be used instead.
        """
        # TODO support windows
        if path is None:
            default_path = os.path.join(os.environ.get('HOME'), '.repairbox')
            path = os.environ.get('REPAIRBOX_PATH', default_path)

        # ensure dir exists
        if not os.path.exists(path):
            os.makedirs(path)

        self.__path = path
        self.__sources = SourceManager(self)
        self.__artefacts = ArtefactManager(self)
        self.__tools = ToolManager(self)
        self.__sources.reload()


    @property
    def path(self) -> str:
        """
        The absolute path to the local installation of RepairBox's sources.
        """
        return self.__path


    def rescan(self):
        print("rescanning...")


    @property
    def sources(self):
        """
        The sources registered with this RepairBox installation.
        """
        return self.__sources


    @property
    def tools(self):
        """
        The tools registered with this RepairBox installation.
        """
        return self.__tools

    
    @property
    def artefacts(self):
        """
        The artefacts registered with this RepairBox installation.
        """
        return self.__artefacts


class ArtefactManager(object):
    """
    Used to access and manage all artefacts registered with a local RepairBox
    installation.
    """
    class ArtefactIterator(object):
        def __init__(self, sources):
            self.__sources = list(sources)
            self.__artefacts = []

        
        def __next__(self):
            if not self.__artefacts:
                if not self.__sources:
                    raise StopIteration
                src = self.__sources.pop()
                self.__artefacts += src.artefacts
                return self.__next__()
            return self.__artefacts.pop()


    def __init__(self, manager):
        self.__manager = manager


    def __getitem__(self, name: str) -> Artefact:
        """
        Fetches a registered artefact by its identifier.

        Example:

            .. code-block:: python

                rbx = RepairBox()
                rbx.artefacts['manybugs:python:69223-69224']

        """
        for src in self.__manager.sources.sources:
            if src.contains(name):
                return src[name]
        raise IndexError('artefact not found: {}'.format(name))

    
    def __iter__(self):
        """
        Returns an iterator over all the artefacts registered with the local
        RepairBox installation.

        Example:

            .. code-block:: python

                # print the identifier and Docker image name for all
                # registered artefacts
                rbx = RepairBox()
                for artefact in rbx.artefacts:
                    print("{}: {}".format(src.identifier, src.image))
        """
        return ArtefactManager.ArtefactIterator(self.__manager.sources.sources)
