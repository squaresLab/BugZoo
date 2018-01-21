from typing import Optional
from bugzoo.cmd import ExecResponse


class CompilationOutcome(object):
    """
    Records the outcome of a compilation attempt.
    """
    def __init__(self, command_outcome: ExecResponse) -> None:
        self.__command_outcome = command_outcome

    @property
    def response(self) -> ExecResponse:
        """
        The response produced by the command that was used to attempt the
        compilation.
        """
        return self.__command_outcome

    @property
    def successful(self) -> bool:
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
    @staticmethod
    def from_dict(d: dict) -> 'Compiler':
        assert 'type' in d
        typ = d['type']
        try:
            cls = ({
                'simple': SimpleCompiler,
                'waf': WafCompiler,
                'configure-and-make': ConfigureMakeCompiler
            })[typ]

        except KeyError:
            raise Exception("unsupported compiler type: {}".format(typ))

        return cls.from_dict(d)

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


class SimpleCompiler(Compiler):
    @staticmethod
    def from_dict(d: dict) -> 'SimpleCompiler':
        """
        Loads a SimpleCompiler from its dictionary-based description.
        """
        cmd = d['command']
        cmd_with_instrumentation = d.get('command_with_instrumentation', None)
        time_limit = d['time-limit']
        return SimpleCompiler(cmd, cmd_with_instrumentation, time_limit)

    def __init__(self,
                 command: str,
                 time_limit: float,
                 context: Optional[str] = None,
                 command_with_instrumentation: Optional[str] = None,
                 ) -> None:
        """
        Constructs a new simple compiler.

        Params:
            command: The shell command that should be used to compile the
                source code for a given container.
            time_limit: The maximum number of seconds that the compilation
                should be allowed to run before it is aborted.
            context: The directory within the container in which the given
                command should be executed. If no context is provided then
                the source directory in the container will be used by
                default.
            command_with_instrumentation: The command that should be used to
                compile the source code with the instrumentation necessary to
                collect coverage information. If let unspecified, the standard
                command will be used when the user requests to compile the
                program with instrumentation.
        """
        super().__init__()
        self.__command = command
        self.__command_with_instrumentation = command_with_instrumentation
        self.__context = context
        self.__time_limit = time_limit

    def __compile(self,
                  container: 'Container',
                  command: str,
                  verbose: bool
                  ) -> CompilationOutcome:
        # if a context isn't given, use the source directory of the bug
        context = self.__context if self.__context else container.bug.source_dir
        cmd_outcome = container.command(command,
                                        context=context,
                                        stderr=True)
        return CompilationOutcome(cmd_outcome)

    def compile(self,
                container: 'Container',
                verbose: bool = False
                ) -> CompilationOutcome:
        """
        See `Compiler.compile`
        """
        return self.__compile(container, self.__command, verbose)

    def compile_with_coverage_instrumentation(self,
                                              container: 'Container',
                                              verbose: bool = False
                                              ) -> CompilationOutcome:
        """
        See `Compiler.compile_with_coverage_instrumentation`
        """
        if self.__command_with_instrumentation:
            cmd = self.__command_with_instrumentation
        else:
            cmd = self.__command

        return self.__compile(container, cmd, verbose)


class WafCompiler(SimpleCompiler):
    @staticmethod
    def from_dict(d: dict) -> 'WafCompiler':
        return WafCompiler(d['time-limit'])

    def __init__(self, time_limit: float) -> None:
        cmd = "./waf build -j$(nproc)"
        cxxflags = "--coverage -Wno-error=maybe-uninitialized -save-temps=obj"
        ldflags = "--coverage"
        cmdi = "./waf configure LDFLAGS='{}' CXXFLAGS='{}'; {}".format(ldflags,
                                                                       cxxflags,
                                                                       cmd)
        super().__init__(command=cmd,
                         command_with_instrumentation=cmdi,
                         context=None,
                         time_limit=time_limit)


class ConfigureMakeCompiler(SimpleCompiler):
    @staticmethod
    def from_dict(d: dict) -> 'ConfigureMakeCompiler':
        return ConfigureMakeCompiler(d['time-limit'])

    def __init__(self, time_limit: float) -> None:
        cmd = 'make -j$(nproc)'
        cflags = "--coverage save-temps=obj"
        ldflags = "--coverage"
        flags = "LDFLAGS='{}' CXXFLAGS='{}' CFLAGS='{}'".format(ldflags,
                                                                cflags,
                                                                cflags)
        cmdi = "make clean; ./configure {}; {}".format(flags, cmd)

        super().__init__(command=cmd,
                         command_with_instrumentation=cmdi,
                         context=None,
                         time_limit=time_limit)
