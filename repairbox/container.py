import docker

class CompilationOutcome(object):
    pass


class BugContainer(object):
    

    def __init__(self, bug):
        self.__bug = bug
        self.__container = None
        pass

    
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
