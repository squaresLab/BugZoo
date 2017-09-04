import docker
import yaml


class BuildInstructions(object):
    """
    Used to store instructions on how to build a Docker image.
    """

    @staticmethod
    def from_file(fn: str) -> 'BuildInstructions':
        with open(fn, 'r') as f:
            yml = yaml.load(f)
        return BuildInstructions.from_YAML(yml)


    @staticmethod
    def from_YAML(yml: dict) -> 'BuildInstructions':
        yml = yml['docker']
        tag = yml['tag']
        context = yml.get('context', '.')
        filename = yml['file']
        arguments = yml.get('arguments', {})

        return BuildInstructions(tag, context, filename, arguments)
        

    def __init__(self, tag: str, context: str, filename: str, arguments: dict) -> None:
        self.__tag = tag
        self.__context = context
        self.__filename = filename
        self.__arguments = arguments

    
    @property
    def tag(self):
        return self.__tag


    @property
    def context(self):
        return self.__context


    @property
    def filename(self):
        return self.__filename


    @property
    def arguments(self):
        return copy.copy(self.__arguments)


    def build(self):
        """
        Constructs the Docker image described by these instructions.
        """
        client.images.build(X, \
                            tag=self.tag,
                            rm=True,
                            pull=True, # true if update
                            buildargs=self.__arguments)
