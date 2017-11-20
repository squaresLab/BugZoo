import docker
import yaml
import os
import shutil
import typing
import json
import repairbox

from pprint import pprint as pp


class BuildInstructions(object):
    """
    Used to store instructions on how to build a Docker image.

    TODO: only allow relative, forward roots
    """

    @staticmethod
    def from_file(source: 'Source', fn: str) -> 'BuildInstructions':
        """
        Loads a set of build instructions belonging to a given source from a
        specified YAML file.

        Args:
            fn (str): the name of the file.
        """
        with open(fn, 'r') as f:
            yml = yaml.load(f)
        root = os.path.dirname(fn)
        return BuildInstructions.from_dict(source, root, yml)


    @staticmethod
    def from_dict(source: 'Source', root: str, yml: dict) -> 'BuildInstructions':
        """
        Loads a set of build instructions from a dictionary.
        """
        yml = yml['docker'] # TODO: why?
        tag = yml['tag']
        context = yml.get('context', '.')
        filename = yml.get('file', 'Dockerfile')
        arguments = yml.get('build-arguments', {})
        depends_on = yml.get('depends-on', None)

        return BuildInstructions(source, root, tag, context, filename, arguments, depends_on)


    def __init__(self,
                 source: 'Source',
                 root: str,
                 tag: str,
                 context: str,
                 filename: str,
                 arguments: dict,
                 depends_on: str) -> None:
        self.__source = source
        self.__root = root
        self.__tag = tag
        self.__context = context
        self.__filename = filename
        self.__arguments = {k: str(v) for (k, v) in arguments.items()}
        self.__depends_on = depends_on


    @property
    def root(self):
        return self.__root


    @property
    def depends_on(self):
        """
        The name of the Docker image that the construction of the image
        associated with these build instructions depends on. If no such
        dependency exists, None is returned.
        """
        return self.__depends_on


    @property
    def tag(self) -> str:
        return self.__tag


    @property
    def context(self) -> str:
        return self.__context


    @property
    def source(self) -> 'Source':
        return self.__source


    @property
    def abs_context(self) -> str:
        path = os.path.join(self.root, self.context)
        path = os.path.normpath(path)
        return path


    @property
    def file(self) -> str:
        """
        The path to the Dockerfile used to build the image associated with
        these instructions, relative to the location of the build instruction
        file.
        """
        return self.__filename


    @property
    def file_abs(self) -> str:
        return os.path.join(self.root, self.file)


    @property
    def arguments(self):
        """
        A dictionary of build-time arguments provided during the construction
        of the Docker image associated with these instructions.
        """
        return copy.copy(self.__arguments)


    @property
    def installed(self) -> bool:
        """
        Indicates whether this image is installed to the local machine.
        """
        client = docker.from_env()
        try:
            client.images.get(self.tag)
            return True
        except docker.errors.ImageNotFound:
            return False


    def uninstall(self, force=False, noprune=False) -> None:
        """
        Attempts to uninstall the Docker image associated with these instructions.
        """
        client = docker.from_env()

        try:
            client.images.remove(image=self.tag, force=force, noprune=noprune)
        except docker.errors.ImageNotFound as e:
            if force:
                return
            raise e


    def download(self, force=False) -> bool:
        """
        Attempts to download the Docker image described by these instructions,
        from DockerHub. If `force=True`, then any previously installed version
        of the image (described by these instructions) will be replaced by the
        image on DockerHub.

        Returns:
            `True` if successfully downloaded, otherwise `False`.
        """
        client = docker.from_env()
        try:
            client.images.pull(self.tag)
            return True
        except docker.errors.NotFound:
            print("Failed to locate image on DockerHub: {}".format(self.tag))
            return False


    def upload(self) -> bool:
        client = docker.from_env()
        try:
            out = client.images.push(self.tag, stream=True)
            for line in out:
                line = line.strip()
                print(line)
            return True
        except docker.errors.NotFound:
            print("Failed to push image ({}): not installed.".format(self.tag))
            return False


    def build(self, force=False, quiet=False) -> None:
        """
        Constructs the Docker image described by these instructions.
        """
        if self.depends_on:
            dep = self.source.dependencies[self.depends_on]
            dep.build(force=force, quiet=quiet)

        if self.installed and not force:
            return

        if not quiet:
            print("Building image: {}".format(self.tag))

        tf = os.path.join(self.abs_context, '.Dockerfile')
        try:
            shutil.copy(self.file_abs, tf)
            client = docker.from_env()
            response = client.api.build(path=self.abs_context,
                                        dockerfile='.Dockerfile',
                                        tag=self.tag,
                                        # pull=force,
                                        buildargs=self.__arguments,
                                        rm=True)
            for line in response:
                line = json.loads(line.decode('utf8'))
                if not quiet and 'stream' in line:
                    print(line['stream'].rstrip())

                # TODO: check build status!

            if not quiet:
                print("Built image: {}".format(self.tag))
        finally:
            os.remove(tf)
