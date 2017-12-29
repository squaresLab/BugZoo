from bugzoo.cmd import ExecResponse


class CompilationOutcome(object):
    """
    Records the outcome of a compilation attempt.
    """
    def __init__(self, command_outcome: ExecResponse) -> None:
        self.__command_outcome = command_outcome

    @property
    def successful(self):
        """
        True if the attempt to compile the source code was successful;
        False if not.
        """
        return self.__command_outcome.code == 0


class Compiler(object):
    """
    Compilers are used to hide the details of various build systems from the
    user and to provide a simple, uniform interface for compiling programs
    (with and without different forms of instrumentation).
    """
    def compile(self,
                container: 'Container',
                verbose: bool = False,
                ) -> CompilationOutcome:
        """
        Attempts to use this compiler to build the source code inside a
        given container.
        """
        raise NotImplementedError

    def compile_with_coverage_instrumentation(self,
                                              container: 'Container',
                                              verbose: bool = False
                                              ) -> CompilationOutcome:
        """
        Attempts to use this compiler to build the source code inside a
        given container with coverage instrumentation enabled.
        """
        raise NotImplementedError
