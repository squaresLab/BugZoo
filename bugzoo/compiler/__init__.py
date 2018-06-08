from typing import Optional, Any
import logging

from ..cmd import ExecResponse

logger = logging.getLogger(__name__)  # type: logging.Logger


class CompilationOutcome(object):
    """
    Records the outcome of a compilation attempt.
    """
    @staticmethod
    def from_dict(jsn: Any) -> 'CompilationOutcome':
        assert isinstance(jsn, dict)
        assert 'command-outcome' in jsn
        command_outcome = ExecResponse.from_dict(jsn['command-outcome'])
        return CompilationOutcome(command_outcome)

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

    def to_dict(self) -> dict:
        return {
            'command-outcome': self.__command_outcome.to_dict()
        }


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
                'catkin': CatkinCompiler,
                'configure-and-make': ConfigureMakeCompiler
            })[typ]

        except KeyError:
            raise Exception("unsupported compiler type: {}".format(typ))

        return cls.from_dict(d) # type: ignore

    def clean(self,
              manager_container,
              container: 'Container', # type: ignore
              verbose: bool = False
              ) -> None:
        raise NotImplementedError

    def compile(self,
                container: 'Container', # type: ignore
                verbose: bool = False,
                ) -> CompilationOutcome:
        """
        Attempts to use this compiler to build the source code inside a
        given container.
        """
        raise NotImplementedError

    def compile_with_coverage_instrumentation(self,
                                              container: 'Container', # type: ignore
                                              verbose: bool = False
                                              ) -> CompilationOutcome:
        """
        Attempts to use this compiler to build the source code inside a
        given container with coverage instrumentation enabled.
        """
        raise NotImplementedError

    def to_dict(self) -> dict:
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
        context = d['context']
        cmd_clean = d.get('command_clean', 'exit 0')
        return SimpleCompiler(command=cmd,
                              command_clean=cmd_clean,
                              command_with_instrumentation=cmd_with_instrumentation,
                              context=context,
                              time_limit=time_limit)

    def __init__(self,
                 command: str,
                 command_clean: str,
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
        self.__command_clean = command_clean
        self.__command_with_instrumentation = command_with_instrumentation
        self.__context = context
        self.__time_limit = time_limit

    @property
    def context(self) -> Optional[str]:
        """
        The directory from which the compilation command is called.
        """
        return self.__context

    @property
    def time_limit(self) -> float:
        """
        The maximum number of seconds that the compilation allowed to run
        before being terminated.
        """
        return self.__time_limit

    def __compile(self,
                  manager_container,
                  container: 'Container', # type: ignore
                  command: str,
                  verbose: bool
                  ) -> CompilationOutcome:
        # if a context isn't given, use the source directory of the bug
        logger.debug("compiling container [%s] via command: %s",
                     container.uid, command)
        bug = manager_container.bug(container)
        context = self.__context if self.__context else bug.source_dir
        cmd_outcome = manager_container.command(container,
                                                command,
                                                context=context,
                                                stderr=True)
        logger.debug("compiled container [%s]", container.uid)
        return CompilationOutcome(cmd_outcome)

    def clean(self,
              manager_container,
              container: 'Container', # type: ignore
              verbose: bool = False
              ) -> None:
        # if a context isn't given, use the source directory of the bug
        bug = manager_container.bug(container)
        context = self.__context if self.__context else bug.source_dir
        response = manager_container.command(container,
                                             self.__command_clean,
                                             context=context,
                                             stderr=True)

    # TODO decouple!
    def compile(self, # type: ignore
                manager_container,
                container: 'Container', # type: ignore
                verbose: bool = False
                ) -> CompilationOutcome:
        """
        See `Compiler.compile`
        """
        return self.__compile(manager_container,
                              container,
                              self.__command,
                              verbose)

    def compile_with_coverage_instrumentation(self, # type: ignore
                                              manager_container,
                                              container: 'Container', # type: ignore

                                              verbose: bool = False
                                              ) -> CompilationOutcome:
        """
        See `Compiler.compile_with_coverage_instrumentation`
        """
        if self.__command_with_instrumentation:
            cmd = self.__command_with_instrumentation
        else:
            cmd = self.__command

        return self.__compile(manager_container, container, cmd, verbose)

    def to_dict(self):
        return {
            'type': 'simple',
            'command': self.__command,
            'command_clean': self.__command_clean,
            'command_with_instrumentation': self.__command_with_instrumentation,
            'context': self.__context,
            'time-limit': self.time_limit
        }


class CatkinCompiler(SimpleCompiler):
    @staticmethod
    def from_dict(d: dict) -> 'CatkinCompiler':
        return CatkinCompiler(workspace=d['workspace'],
                              time_limit=d['time-limit'])

    def __init__(self,
                 workspace: str,
                 time_limit: float
                 ) -> None:
        cmd = 'catkin build'
        cmdi = (
            'catkin config --cmake-args '
            '-DCMAKE_CXX_FLAGS="--coverage" -DCMAKE_LD_FLAGS="--coverage" && '
            'catkin build'
        )
        super().__init__(command=cmd,
                         command_clean='catkin clean -y',
                         command_with_instrumentation=cmdi,
                         context=workspace,
                         time_limit=time_limit)

    @property
    def workspace(self) -> Optional[str]:
        return self.context

    def to_dict(self):
        return {
            'type': 'catkin',
            'workspace': self.workspace,
            'time-limit': self.time_limit
        }


class WafCompiler(SimpleCompiler):
    @staticmethod
    def from_dict(d: dict) -> 'WafCompiler':
        return WafCompiler(d['time-limit'])

    def __init__(self, time_limit: float) -> None:
        cmd = './waf build -j$(nproc)'
        cxxflags = '--coverage -Wno-error=maybe-uninitialized -save-temps=obj'
        ldflags = '--coverage'
        cmdi = './waf configure --no-submodule-update LDFLAGS="{}" CXXFLAGS="{}"; {}'  # noqa: pycodestyle
        cmdi = cmdi.format(ldflags, cxxflags, cmd)
        super().__init__(command=cmd,
                         command_clean='./waf clean',
                         command_with_instrumentation=cmdi,
                         context=None,
                         time_limit=time_limit)

    def to_dict(self):
        return {
            'type': 'waf',
            'time-limit': self.time_limit
        }


class ConfigureMakeCompiler(SimpleCompiler):
    @staticmethod
    def from_dict(d: dict) -> 'ConfigureMakeCompiler':
        return ConfigureMakeCompiler(d['time-limit'])

    def __init__(self, time_limit: float) -> None:
        cmd = 'make -j$(nproc)'
        cflags = "--coverage" # save-temps=obj"
        ldflags = "--coverage"
        flags = 'LDFLAGS="{}" CXXFLAGS="{}" CFLAGS="{}"'
        flags = flags.format(ldflags, cflags, cflags)
        cmdi = "make clean; ./configure {}; {}".format(flags, cmd)

        super().__init__(command=cmd,
                         command_clean='make clean',
                         command_with_instrumentation=cmdi,
                         context=None,
                         time_limit=time_limit)

    def to_dict(self):
        return {
            'type': 'configure-and-make',
            'time-limit': self.time_limit
        }
