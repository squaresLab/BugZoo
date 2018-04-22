from typing import Iterator
import os
import shutil
import json

import docker

from ..core.build import BuildInstructions
from ..exceptions import ImageBuildFailed


class BuildManager(object):
    def __init__(self, client_docker: docker.DockerClient):
        self.__docker = client_docker
        self.__blueprints = {}

    def __getitem__(self, name: str) -> BuildInstructions:
        """
        Retrieves the build instructions associated for a named Docker image.

        Parameter:
            name: the name of the Docker image.

        Raises:
            KeyError: if no build instructions for the named image have been
                registered with this manager.
        """
        return self.__blueprints[name]

    def __iter__(self) -> Iterator[BuildInstructions]:
        """
        Returns an iterator over all of the build instructions that are
        registered with this server.
        """
        return self.__blueprints.values().__iter__()

    def register(self, blueprint: BuildInstructions) -> None:
        """
        Attempts to register a blueprint for a given Docker image with this
        manager.
        """
        self.__blueprints[blueprint.name] = blueprint

    add = register

    def deregister(self, blueprint: BuildInstructions) -> None:
        """
        Attempts to deregister a given blueprint from this manager.
        """
        del self.__blueprints[blueprint.name]

    remove = deregister

    def is_installed(self, name: str) -> bool:
        """
        Indicates a given Docker image is installed on this server.

        Parameters:
            name: the name of the Docker image.

        Returns:
            `True` if installed; `False` if not.
        """
        assert name is not None
        try:
            self.__docker.images.get(name)
            return True
        except docker.errors.ImageNotFound:
            return False

    def build(self,
              name: str,
              force: bool = False,
              quiet: bool = False
              ) -> None:
        """
        Constructs a Docker image, given by its name, using the set of build
        instructions associated with that image.

        Parameters:
            name: the name of the Docker image.
            force: if `True`, the image will be rebuilt, regardless of whether
                or not it is already installed on the server. If `False` and
                a (possibly outdated) version of the image has already been
                built, then the build will be skipped.
            quiet: used to enable and disable output from the Docker build
                process.
        """
        instructions = self[name]

        if instructions.depends_on:
            self.build(instructions.depends_on, force=force, quiet=quiet)

        if not force and self.is_installed(instructions.name):
            return

        # TODO use logger
        if not quiet:
            print("Building image: {}".format(name))

        tf = os.path.join(instructions.abs_context, '.Dockerfile')
        try:
            success = False
            shutil.copy(instructions.file_abs, tf)
            response = self.__docker.api.build(path=instructions.abs_context,
                                               dockerfile='.Dockerfile',
                                               tag=name,
                                               # pull=force,
                                               buildargs=instructions.arguments,
                                               decode=True,
                                               rm=True)

            log = [] # type: List[str]
            for line in response:
                if 'stream' in line:
                    line_msg = line['stream'].rstrip()
                    log.append(line_msg)
                    if not quiet:
                        print(line_msg)
                    if line_msg.startswith('Successfully built'):
                        success = True

            if not success:
                raise ImageBuildFailed(name, log)

            if success and not quiet:
                print("Built image: {}".format(name))
                return
        finally:
            os.remove(tf)

    def uninstall(self,
                  name: str,
                  force: bool = False,
                  noprune: bool = False
                  ) -> None:
        """
        Attempts to uninstall a given Docker image.

        Parameters:
            name: the name of the Docker image.
            force: a flag indicating whether or not an exception should be
                thrown if the image associated with the given build
                instructions is not installed. If `True`, no exception
                will be thrown; if `False`, exception will be thrown.
            noprune: a flag indicating whether or not dangling image layers
                should also be removed.

        Raises:
            docker.errors.ImageNotFound: if the image associated with the given
                instructions can't be found.
        """
        try:
            self.__docker.images.remove(image=name,
                                        force=force,
                                        noprune=noprune)
        except docker.errors.ImageNotFound as e:
            if force:
                return
            raise e

    def download(self,
                 name: str,
                 force: bool = False
                 ) -> bool:
        """
        Attempts to download a given Docker image. If `force=True`, then any
        previously installed version of the image (described by the
        instructions) will be replaced by the image on DockerHub.

        Parameters:
            name: the name of the Docker image.

        Returns:
            `True` if successfully downloaded, otherwise `False`.
        """
        try:
            self.__docker.images.pull(name)
            return True
        except docker.errors.NotFound:
            print("Failed to locate image on DockerHub: {}".format(name))
            return False

    def upload(self, name: str) -> bool:
        """
        Attempts to upload a given Docker image from this server to DockerHub.

        Parameters:
            name: the name of the Docker image.

        Returns:
            `True` if successfully uploaded, otherwise `False`.
        """
        try:
            out = self.__docker.images.push(name, stream=True)
            for line in out:
                line = line.strip().decode('utf-8')
                jsn = json.loads(line)
                if 'progress' in jsn:
                    line = "{}. {}.".format(jsn['status'], jsn['progress'])
                    print(line, end='\r')
                elif 'status' in jsn:
                    print(jsn['status'])
            print('uploaded image to DockerHub: {}'.format(name))
            return True
        except docker.errors.NotFound:
            print("Failed to push image ({}): not installed.".format(name))
            return False
