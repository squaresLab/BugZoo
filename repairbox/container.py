import docker
import copy
import os
import subprocess
import tempfile
import repairbox
import repairbox.spectra

from typing import List, Iterator, Dict
from timeit import default_timer as timer
from repairbox.test import TestOutcome
from repairbox.patch import Patch
from repairbox.tool import Tool


class CompilationOutcome(object):
    pass


class PendingExecResponse(object):
    def __init__(self, exec_response, output) -> None:
        self.__exec_response = exec_response
        self.__output = output


    @property
    def running(self):
        client = docker.from_env()
        return client.api.exec_inspect(self.exec_response)['Running']


    @property
    def exec_response(self):
        return self.__exec_response


    @property
    def output(self):
        return self.__output


    @property
    def exit_code(self):
        if self.running:
            return None
        client = docker.from_env()
        id = self.exec_response['Id']
        return client.api.exec_inspect(id)


class ExecResponse(object):
    """
    Used to hold the response from a command execution.
    """
    def __init__(self, code: int, duration: float, output: str) -> None:
        self.__code = code
        self.__duration = duration
        self.__output = output


    @property
    def code(self) -> int:
        """
        The exit code of the execution.
        """
        return self.__code


    @property
    def duration(self) -> float:
        """
        The length of time taken to complete the execution.
        """
        return self.__duration


    @property
    def output(self) -> str:
        """
        The output of the execution.
        """
        return self.__output


class Container(object):
    """
    Containers provide ephemeral, mutable instances of registered artefacts,
    and are used to conduct studies of software artefacts. Behind the scenes,
    containers are implemented as `Docker containers <https://docker.com>`_.
    """
    def __init__(self,
                 artefact: str = 'repairbox.artefact.Artefact',
                 tools : List[Tool] = [],
                 volumes : Dict[str, str] = {},
                 network_mode : str = 'bridge',
                 ports={},
                 interactive=False) -> None:
        """
        Constructs a container for a given artefact.
        """
        self.__artefact = artefact
        self.__tools = tools
        self.__tool_containers = [t.provision() for t in tools]
        tool_container_ids = [c.id for c in self.__tool_containers]

        # prepare the environment for the container
        env = [(k, v) for t in tools for (k, v) in t.environment.items()]
        env = ["{}=\"{}\"".format(k, v) for (k, v) in env]
        env = "\n".join(env)
        self.__env_file = tempfile.NamedTemporaryFile(mode='w')
        self.__env_file.write(env)
        self.__env_file.flush()

        # we don't want to accidentally disturb the dictionary that was passed
        volumes = copy.deepcopy(volumes)

        # mount the environment file
        volumes[self.__env_file.name] = \
            {'bind': '/.environment', 'mode': 'rw'}

        # construct a Docker container for this artefact
        client = docker.from_env()
        self.__container = \
            client.containers.create(artefact.image,
                                     '/bin/bash -v -c "source /.environment && /bin/bash"',
                                     volumes=volumes,
                                     volumes_from=tool_container_ids,
                                     ports=ports,
                                     network_mode=network_mode,
                                     stdin_open=True,
                                     tty=interactive,
                                     detach=True)
        self.__container.start()


    @property
    def tools(self) -> Iterator[Tool]:
        for tool in self.__tools:
            yield tool


    @property
    def artefact(self) -> 'repairbox.artefact.Artefact':
        """
        The artefact that was used to provision this container.
        """
        return self.__artefact


    @property
    def container(self):
        """
        The Docker container underlying this object, or :code:`None`, if the
        container is no longer running.
        """
        return self.__container


    @property
    def alive(self):
        """
        Indicates whether or not the container is still running.
        """
        return self.__container is not None


    def interact(self) -> None:
        """
        Connects to the PTY (pseudo-TTY) for this container.
        Blocks until the user exits the PTY. Does not handle destruction of
        the container; user should call `destroy` once finished with the
        container.
        """
        subprocess.call(['docker', 'attach', self.__container.id])


    def destroy(self) -> None:
        """
        Deallocates all resources associated with this container. If this
        container has already been destroyed, this method quietly returns
        (i.e., no errors are thrown).
        """
        if self.__container:
            self.__container.remove(force=True)

        # destroy tool containers
        for c in self.__tool_containers:
            c.remove(force=True)
        self.__tool_containers = []

        # destroy env file
        if self.__env_file:
            self.__env_file.close()
            self.__env_file = None


    def mount_file(self, src, dest, mode):
        """
        Dynamically mounts a given file (or directory) inside this container.

        https://jpetazzo.github.io/2015/01/13/docker-mount-dynamic-volumes/
        """
        assert isinstance(src, str)
        assert isinstance(dest, str)
        assert os.path.exists(src)
        assert mode in ['ro', 'rw']


    def reset(self) -> None:
        """
        Resets the state of this container.
        """
        raise NotImplementedError


    def apply_patch(self, patch: Patch) -> bool:
        """
        Attempts to apply a given patch to the source code. All patch
        applications are guaranteed to be atomic; if the patch fails to
        apply, no changes will be made to the relevant source code files.

        Returns true if the patch application was successful, and false if
        the attempt was unsuccessful.
        """
        pass


    def spectra(self) -> 'repairbox.spectra.Spectra':
        """
        Computes and returns the spectra for this artefact.
        """
        pass


    def copy_to(self, source_fn: str, dest_fn: str) -> None:
        """
        Copies a given file from the host machine to a specified location
        inside this container.
        """
        ctr_id = self.container.id
        cmd = "docker cp '{}' '{}:{}'".format(source_fn, ctr_id, dest_fn)
        subprocess.check_output(cmd, shell=True)


    def command(self, cmd, context='/', stdout=True, stderr=False, block=True):
        """

        Returns a tuple containing the exit code, execution duration, and
        output, respectively.
        """
        cmd = '/bin/bash -c "cd {} && {}"'.format(context, cmd)

        # based on: https://github.com/roidelapluie/docker-py/commit/ead9ffa34193281967de8cc0d6e1c0dcbf50eda5
        client = docker.from_env()
        response = client.api.exec_create(self.__container.id, cmd, stdout=stdout, stderr=stderr)

        # blocking mode
        if block:
            start_time = timer()
            out = client.api.exec_start(response['Id'], stream=False)
            end_time = timer()
            duration = end_time - start_time
            code = client.api.exec_inspect(response['Id'])['ExitCode']
            return ExecResponse(code, duration, out)

        # non-blocking mode
        else:
            out = client.api.exec_start(response['Id'], stream=True)
            return PendingExecResponse(response, out)


    def compile(self, mode='default', verbose=True):
        """
        Attempts to compile the program inside this container.

        TODO: check for failure
        """

        cmd = ({'coverage': 'make -j8 CFLAGS="-fprofile-arcs -ftest-coverage -fPIC"',
                'default': 'make -j8'})[mode]
        # cmd = self.artefact.compilation_instructions.command

        return self.command(cmd,
                                    context=self.artefact.compilation_instructions.context,
                                    stderr=True)


    def execute(self, test):
        """
        Executes a given test inside this container and returns the result of
        that execution.
        """
        (cmd, ctx) = self.artefact.harness.command(test)
        response = self.command(cmd, ctx, stderr=True)
        passed = response.code == 0
        return TestOutcome(response, passed, response.duration)
