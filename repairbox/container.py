import docker
import dockerpty
import os
import subprocess
import typing
import repairbox

from timeit import default_timer as timer
from repairbox.test import TestOutcome


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


class BugContainer(object):
    def __init__(self,
                 bug: 'repairbox.artefact.Artefact',
                 volumes=[],
                 network_mode='bridge',
                 ports={},
                 interactive=False) -> None:
        """
        Constructs a container for a given bug.
        """
        self.__bug = bug

        # construct a Docker container for this bug
        client = docker.from_env()
        self.__container = \
            client.containers.create(bug.image,
                                     '/bin/bash',
                                     volumes=volumes,
                                     ports=ports,
                                     network_mode=network_mode,
                                     stdin_open=True,
                                     tty=interactive,
                                     detach=True)
        self.__container.start()


    @property
    def bug(self) -> 'repairbox.artefact.Artefact':
        """
        The bug inside this container.
        """
        return self.__bug


    @property
    def container(self):
        """
        The Docker container underlying this object.
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
        Opens the PTY (pseudo-TTY) for this container.
        Blocks until the user exits the PTY.
        """
        subprocess.call(['docker', 'attach', self.__container.id])


    def destroy(self):
        if self.__container:
            self.__container.remove(force=True)

    
    def logs(self, stream=False):
        return self.__container.logs(stream=stream)


    def mount_file(self, src, dest, mode):
        """
        Dynamically mounts a given file (or directory) inside this container.

        https://jpetazzo.github.io/2015/01/13/docker-mount-dynamic-volumes/
        """
        assert isinstance(src, str)
        assert isinstance(dest, str)
        assert os.path.exists(src)
        assert mode in ['ro', 'rw']

        return


    def reset(self):
        """
        Resets the state of this bug container.
        """
        pass


    def patch(self):
        """
        Apply a patch to the source code.
        """
        pass
    

    def spectra(self):
        """
        Computes and returns the spectra for this bug.
        """
        pass


    def copy_to(self, source_fn, dest_fn):
        """
        Copies a given file from the host machine to a specified location
        inside this container.
        """
        ctr_id = self.container.id
        cmd = "docker cp '{}' '{}:{}'".format(source_fn, ctr_id, dest_fn)
        subprocess.check_output(cmd, shell=True)


    def execute_command(self, cmd, context='/', stdout=True, stderr=False, block=True):
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
        # cmd = self.bug.compilation_instructions.command

        return self.execute_command(cmd,
                                    context=self.bug.compilation_instructions.context,
                                    stderr=True)

    
    def execute(self, test):
        """
        Executes a given test inside this container and returns the result of
        that execution.
        """
        (cmd, ctx) = self.__bug.harness.command(test)
        response = self.execute_command(cmd, ctx, stderr=True)
        passed = response.code == 0
        return TestOutcome(response, passed, response.duration)
