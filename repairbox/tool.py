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
        build_instructions = BuildInstructions.from_dict(yml['docker'])

        return Tool(name, build_instructions)


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


class ToolManager(object):
    def __init__(self):
        self.__tools = {}
        self.scan()


    def scan(self):
        """
        Scans the local RepairBox installation for installed tools.
        """
        fn = "/home/chris/git/genprog/genprog.tool.rbox.yml"
        tool = Tool.from_file(fn)
        self.__tools['genprog'] = tool


    def __getitem__(name: str) -> Tool:
        if not name in self.__tools:
            raise IndexError('tool not found: {}'.format(name))
        return self.__tools[name]


    def __iter__(self):
        for tool in self.__tools.values():
            yield tool
