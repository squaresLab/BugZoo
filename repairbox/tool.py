import yaml
import os
from repairbox.build import BuildInstructions


class Tool(object):
    @staticmethod
    def from_file(fn: str) -> 'Tool':
        """
        Loads a tool from its YAML manifest file.
        """
        with open(fn, 'r') as f:
            yml = yaml.load(f)

        assert 'name' in yml
        name = yml['name']

        assert 'docker' in yml
        root = os.path.dirname(os.path.abspath(fn))
        build = {'docker': yml['docker']} # TODO: don't wrap
        build = BuildInstructions.from_dict(root, build)

        return Tool(name, build)


    def __init__(self,
                 name: str,
                 build_instructions: BuildInstructions) -> None:
        self.__name = name
        self.__url = "TODO" # TODO url
        self.__build_instructions = build_instructions


    @property
    def name(self) -> str:
        """
        The name of this tool.
        """
        return self.__name


    @property
    def identifier(self) -> str:
        """
        The name of the tool.
        """
        return self.name


    @property
    def installed(self) -> bool:
        """
        Indicates whether the Docker image for this tool is installed on the
        local machine.
        """
        return self.__build_instructions.installed


    def uninstall(self, force=False, noprune=False) -> None:
        """
        Uninstalls all Docker images associated with this tool.
        """
        self.__build_instructions.uninstall(force=force, noprune=noprune)


    def build(self, force=False) -> None:
        """
        Constructs the Docker image associated with this tool. By default, this
        command will do nothing if a version of the image associated with the
        tool is already installed to the local machine. However, if `force` is
        set to `True`, the Docker image will be rebuilt from scratch, replacing
        any exiting image.
        """
        return self.__build_instructions.build(force=force)


    def install(self, upgrade=False) -> None:
        """
        Installs this tool by first trying to download it, and if that is
        not possible, by building it locally.

        Args:
            upgrade:    a flag indicating whether this tool should be
                upgraded if it is already installed.
        """
        # TODO: attempt to download before trying to build
        self.build(force=upgrade)


    def upload(self) -> bool:
        """
        Attempts to upload the image for this tool to
        `DockerHub <https://hub.docker.com>`_.
        """
        return self.__build_instructions.upload()


    def download(self, force=False) -> bool:
        """
        Attempts to download the image for this tool from
        `DockerHub <https://hub.docker.com>`_. If the force parameter is set to
        True, any existing image will be overwritten.

        Returns:
            `True` if successfully downloaded, else `False`.
        """
        return self.__build_instructions.download(force=force)


class ToolManager(object):
    def __init__(self, manager: 'repairbox.manager.RepairBox') -> None:
        self.__manager = manager
        self.__tools = {}
        self.scan()


    def scan(self):
        """
        Scans the local RepairBox installation for installed tools.
        """
        fn = "/home/chris/git/genprog/genprog.tool.yml"
        # src = self.__manager.sources['genprog']
        # tool = Tool.from_file(fn)
        # self.__tools['genprog'] = tool


    def __getitem__(self, name: str) -> Tool:
        if not name in self.__tools:
            raise IndexError('tool not found: {}'.format(name))
        return self.__tools[name]


    def __iter__(self):
        for tool in self.__tools.values():
            yield tool
