import docker


class CompilationOutcome(object):
    pass


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


    def compile(self, mode='default'):
        pass

    
    def execute(self, test):
        """
        Executes a given test inside this container and returns the result of
        that execution.
        """
        pass
