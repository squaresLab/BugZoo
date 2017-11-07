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
        src = None # TODO!
        root = os.path.dirname(os.path.abspath(fn))
        build = {'docker': yml['docker']} # TODO: don't wrap
        build = BuildInstructions.from_dict(None, root, build)

        return Tool(name, build)


    def __init__(self,
                 name: str,
                 build_instructions: BuildInstructions) -> None:
        self.__name = name
        self.__build_instructions = build_instructions


    @property
    def name(self) -> 'str':
        """
        The name of this tool.
        """
        return self.__name


    def build(self, force=False) -> None:
        """
        Constructs the Docker image associated with this tool. By default, this
        command will do nothing if a version of the image associated with the
        tool is already installed to the local machine. However, if `force` is
        set to `True`, the Docker image will be rebuilt from scratch, replacing
        any exiting image.
        """
        return self.__build_instructions.build(force=force)


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
        tool = Tool.from_file(fn)
        self.__tools['genprog'] = tool


    def __getitem__(name: str) -> Tool:
        if not name in self.__tools:
            raise IndexError('tool not found: {}'.format(name))
        return self.__tools[name]


    def __iter__(self):
        for tool in self.__tools.values():
            yield tool
