import docker
import yaml
import os
import shutil


class BuildInstructions(object):
    """
    Used to store instructions on how to build a Docker image.

    TODO: only allow relative, forward roots
    """

    @staticmethod
    def from_file(src: 'repairbox.manager.Source', fn: str) -> 'BuildInstructions':
        with open(fn, 'r') as f:
            yml = yaml.load(f)
        root = os.path.dirname(fn)
        return BuildInstructions.from_yaml(src, root, yml)


    @staticmethod
    def from_yaml(src: 'repairbox.manager.Source', root: str, yml: dict):
        yml = yml['docker']
        tag = yml['tag']
        context = yml.get('context', '.')
        filename = yml.get('file', 'Dockerfile')
        arguments = yml.get('build-arguments', {})
        depends_on = yml.get('depends-on', None)

        return BuildInstructions(src, root, tag, context, filename, arguments, depends_on)


    def __init__(self,
                 src: 'repairbox.manager.Source',
                 root: str,
                 tag: str,
                 context: str,
                 filename: str,
                 arguments: dict,
                 depends_on: str) -> None:
        self.__source = src
        self.__root = root
        self.__tag = tag
        self.__context = context
        self.__filename = filename
        self.__arguments = arguments
        self.__depends_on = depends_on

    
    @property
    def root(self):
        return self.__root
    

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
        path = os.path.join(self.root, self.context)
        path = os.path.normpath(path)
        return path


    @property
    def file(self) -> str:
        return self.__filename


    @property
    def file_abs(self) -> str:
        return os.path.join(self.root, self.file)


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
            client.images.get(self.tag)
            return True
        except docker.errors.ImageNotFound:
            return False


    def uninstall(self, force=False, noprune=False) -> None:
        """
        Attempts to uninstall the Docker image described by these instructions.
        """
        client = docker.from_env()

        try:
            client.images.remove(image=self.tag, force=force, noprune=noprune)
        except docker.errors.ImageNotFound as e:
            if force:
                return
            raise e


    def build(self, force=False) -> None:
        """
        Constructs the Docker image described by these instructions.
        """
        if self.depends_on:
            dep = self.source.dependencies[self.depends_on]
            dep.build(force=force)

        if self.installed and not force:
            return

        tf = os.path.join(self.abs_context, '.Dockerfile')
        try:
            shutil.copy(self.file_abs, tf)
            client = docker.from_env()
            client.images.build(path=self.abs_context,
                                dockerfile='.Dockerfile',
                                tag=self.tag,
                                pull=force,
                                buildargs=self.__arguments,
                                rm=True)
        finally:
            os.remove(tf)
