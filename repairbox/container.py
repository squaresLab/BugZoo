import docker

from timeit import default_timer as timer


class CompilationOutcome(object):
    pass


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
    def __init__(self, bug: 'Bug') -> None:
        """
        Constructs a container for a given bug.
        """
        self.__bug = bug

        # construct a Docker container for this bug
        client = docker.from_env()
        self.__container = \
            client.containers.run(bug.image,
                                  '/bin/bash',
                                  stdin_open=True,
                                  detach=True)

    def destroy(self):
        if self.__container:
            self.__container.remove(force=True)


    @property
    def bug(self):
        """
        The bug inside this container.
        """
        return self.__bug


    @property
    def container(self):
        """
        The Docker container underlying this proxy.
        """
        return self.__container


    @property
    def alive(self):
        return self.__container is not None


    def reset(self):
        """
        Resets the state of this bug container.
        """
        pass


    def coverage(self, tests):
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


    def execute_command(self, cmd, context='/', stdout=True, stderr=False):
        """

        Returns a tuple containing the exit code, execution duration, and
        output, respectively.
        """
        cmd = '/bin/bash -c "cd {} && {}"'.format(context, cmd)

        # based on: https://github.com/roidelapluie/docker-py/commit/ead9ffa34193281967de8cc0d6e1c0dcbf50eda5
        client = docker.from_env()
        response = client.api.exec_create(self.__container.id, cmd, stdout=stdout, stderr=stderr)

        start_time = timer()
        out = client.api.exec_start(response['Id'], stream=False)
        end_time = timer()
        duration = end_time - start_time

        code = client.api.exec_inspect(response['Id'])['ExitCode']

        return ExecResponse(code, duration, out)


    def compile(self, mode='default', verbose=True):
        """
        Attempts to compile the program inside this container.

        TODO: check for failure
        """
        return self.execute_command(self.bug.compilation_instructions.command,
                                    context=self.bug.compilation_instructions.context)

    
    def execute(self, test):
        """
        Executes a given test inside this container and returns the result of
        that execution.
        """
        cmd = './test.sh p1'
        ctx = '/experiment/source'
        response = self.execute_command(cmd, ctx)
        passed = response.code == 0
        return TestOutcome(passed, response.duration)
