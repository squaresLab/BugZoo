import os

from repairbox.artefact import ArtefactManager
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
