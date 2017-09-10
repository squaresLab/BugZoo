import docker
import yaml
import os


class BuildInstructions(object):
    """
    Used to store instructions on how to build a Docker image.
    """

    @staticmethod
    def from_file(src: 'repairbox.manager.Source', fn: str) -> 'BuildInstructions':
        with open(fn, 'r') as f:
            yml = yaml.load(f)
        return BuildInstructions.from_yaml(src, fn, yml)


    @staticmethod
    def from_yaml(src: 'repairbox.manager.Source', fn: str, yml: dict):
        yml = yml['docker']
        tag = yml['tag']
        context = yml.get('context', '.')
        filename = yml.get('file', 'Dockerfile')
        arguments = yml.get('arguments', {})
        depends_on = yml.get('depends-on', None)

        return BuildInstructions(src, fn, tag, context, filename, arguments, depends_on)


    def __init__(self,
                 src: 'repairbox.manager.Source',
                 fn: str,
                 tag: str,
                 context: str,
                 filename: str,
                 arguments: dict,
                 depends_on: str) -> None:
        self.__source = src
        self.__fn = fn
        self.__tag = tag
        self.__context = context
        self.__filename = filename
        self.__arguments = arguments
        self.__depends_on = depends_on

   
    @property
    def depends_on(self):
        return self.__depends_on


    @property
    def source(self):
        return self.__source


    @property
    def tag(self) -> str:
        return self.__tag


    @property
    def context(self) -> str:
        return self.__context


    @property
    def abs_context(self) -> str:
        path = os.path.join(os.path.dirname(self.__fn), self.context)
        path = os.path.normpath(path)
        return path


    @property
    def filename(self) -> str:
        return self.__filename


    @property
    def arguments(self):
        return copy.copy(self.__arguments)

    @property
    def installed(self) -> bool:
        """
        Determines whether this image exists on the local machine.
        """
        client = docker.from_env()
        try:
            client.images.get(self.__tag)
            return True
        except docker.errors.ImageNotFound:
            return False


    def build(self, force=False) -> None:
        """
        Constructs the Docker image described by these instructions.
        """
        if self.depends_on:
            dep = self.source.dependencies[self.depends_on]
            dep.build(force=force)

        if self.installed and not force:
            return
        client = docker.from_env()
        client.images.build(path=self.abs_context,
                            tag=self.tag,
                            rm=True,
                            pull=force,
                            buildargs=self.__arguments)
