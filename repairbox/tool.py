class Tool(object):
    def __init__(self, name):
        self.__name = name


class ToolManager(object):
    def __init__(self):
        self.__tools = {}


    def __getitem__(name: str) -> Tool:
        if not name in self.__tools:
            raise IndexError('tool not found: {}'.format(name))
        return self.__tools[name]


    def __iter__(self):
        for tool in self.__tools.values():
            yield tool
