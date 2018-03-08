import os
import shutil

import docker

from ..core.build import BuildInstructions
from ..core.errors import ImageBuildFailed


class BuildManager(object):
    def __init__(self, client_docker: docker.DockerClient):
        self.__docker = client_docker

    def is_installed(self, instructions: BuildInstructions) -> bool:
        """
        Indicates whether the image associated with a given set of build
        instructions is installed on this server.

        Parameters:
            instructions: The build instructions for the image.

        Returns:
            `True` if installed; `False` if not.
        """
        try:
            self.__docker.images.get(instructions.tag)
            return True
        except docker.errors.ImageNotFound:
            return False

    def build(self,
              instructions: BuildInstructions,
              force: bool = False,
              quiet: bool = False
              ) -> None:
        """
        Constructs the Docker image described by a given set of build
        instructions.

        Parameters:
            instructions: the build instructions for the image.
            force: if `True`, the image will be rebuilt, regardless of whether
                or not it is already installed on the server. If `False` and
                a (possibly outdated) version of the image has already been
                built, then the build will be skipped.
            quiet: used to enable and disable output from the Docker build
                process.
        """
        if instructions.depends_on:
            dep = instructions.source.dependencies[instructions.depends_on]
            self.build(dep, force=force, quiet=quiet)

        if not force and self.is_installed(instructions):
            return

        # TODO use logger
        if not quiet:
            print("Building image: {}".format(instructions.tag))

        tf = os.path.join(instructions.abs_context, '.Dockerfile')
        try:
            success = False
            shutil.copy(instructions.file_abs, tf)
            response = self.__docker.api.build(path=instructions.abs_context,
                                               dockerfile='.Dockerfile',
                                               tag=instructions.tag,
                                               # pull=force,
                                               buildargs=instructions.arguments,
                                               decode=True,
                                               rm=True)

            # TODO: flatten to list of strings
            log = []
            for line in response:
                if 'stream' in line:
                    log.append(line)
                    if not quiet:
                        print(line['stream'].rstrip())
                    if line['stream'].startswith('Successfully built'):
                        success = True

            if not success:
                raise ImageBuildFailed(instructions.tag, log)

            if success and not quiet:
                print("Built image: {}".format(instructions.tag))
                return
        finally:
            os.remove(tf)

    def uninstall(self,
                  instructions: BuildInstructions,
                  force: bool = False,
                  noprune: bool = False
                  ) -> None:
        """
        Attempts to uninstall the Docker image associated with a given set of
        build instructions.

        Parameters:
            build:      The build instructions for the image.
            force:      A flag indicating whether or not an exception should be
                        thrown if the image associated with the given build
                        instructions is not installed. If `True`, no exception
                        will be thrown; if `False`, exception will be thrown.
            noprune:    A flag indicating whether or not dangling image layers
                        should also be removed.

        Raises:
            docker.errors.ImageNotFound: if the image associated with the given
                instructions can't be found.
        """
        try:
            self.__docker.images.remove(image=instructions.tag,
                                        force=force,
                                        noprune=noprune)
        except docker.errors.ImageNotFound as e:
            if force:
                return
            raise e

    def download(self,
                 instructions: BuildInstructions,
                 force: bool = False
                 ) -> bool:
        """
        Attempts to download the Docker image described by a given set of
        instructions. If `force=True`, then any previously installed version
        of the image (described by the instructions) will be replaced by the
        image on DockerHub.

        Returns:
            `True` if successfully downloaded, otherwise `False`.
        """
        try:
            self.__docker.images.pull(self.tag)
            return True
        except docker.errors.NotFound:
            print("Failed to locate image on DockerHub: {}".format(self.tag))
            return False

    def upload(self, instructions: BuildInstructions) -> bool:
        tag = instructions.tag
        try:
            out = self.__docker.images.push(tag, stream=True)
            for line in out:
                line = line.strip().decode('utf-8')
                jsn = json.loads(line)
                if 'progress' in jsn:
                    line = "{}. {}.".format(jsn['status'], jsn['progress'])
                    print(line, end='\r')
                elif 'status' in jsn:
                    print(jsn['status'])
            print('uploaded image to DockerHub: {}'.format(tag))
            return True
        except docker.errors.NotFound:
            print("Failed to push image ({}): not installed.".format(tag))
            return False
