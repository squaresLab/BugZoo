import logging
from typing import Any, Optional

import attr

from .cmd import ExecResponse

logger = logging.getLogger(__name__)  # type: logging.Logger
logger.setLevel(logging.DEBUG)


@attr.s(frozen=True, slots=True)
class CompilationOutcome:
    """Records the outcome of a compilation attempt.

    Attributes
    ----------
    response: ExecResponse
        The response produced by the command that was used to attempt the
        compilation.
    """
    response = attr.ib(type=ExecResponse)

    @staticmethod
    def from_dict(jsn: Any) -> "CompilationOutcome":
        assert isinstance(jsn, dict)
        assert "command-outcome" in jsn
        command_outcome = ExecResponse.from_dict(jsn["command-outcome"])
        return CompilationOutcome(command_outcome)

    @property
    def successful(self) -> bool:
        """True if the attempt to compile the source code was successful;
        False if not.
        """
        return self.response.code == 0

    def to_dict(self) -> dict:
        return {"command-outcome": self.response.to_dict()}


_NAME_TO_COMPILER_BUILDER = \
    {}  # type: Dict[str, Callable[[Dict[str, Any]], 'Compiler']]


def compiler(name: str):
    def register_compiler(func):
        _NAME_TO_COMPILER_BUILDER[name] = func
        return func
    return register_compiler


@compiler("simple")
def simple_compiler(d: dict[str, Any]) -> "Compiler":
    cmd = d["command"]
    cmdi = d.get("command_with_instrumentation", None)
    time_limit = d["time-limit"]
    context = d["context"]
    return Compiler(command=cmd,
                    command_with_instrumentation=cmdi,
                    context=context,
                    time_limit=time_limit)


@compiler("waf")
def waf_compiler(d: dict[str, Any]) -> "Compiler":
    time_limit = d["time-limit"]
    cmd = "./waf build -j$(nproc)"
    cmdi = ('./waf configure --no-submodule-update '
            'LDFLAGS="--coverage" '
            'CXXFLAGS="--coverage -Wno-error=maybe-uninitialized '
            '-save-temps=obj"; {}')
    cmdi = cmdi.format(cmd)
    return Compiler(command=cmd,
                    command_with_instrumentation=cmdi,
                    context=None,
                    time_limit=time_limit)


@compiler("configure-and-make")
def configure_make_compiler(d: dict[str, Any]) -> "Compiler":
    time_limit = d["time-limit"]
    cmd = "make -j$(nproc)"
    cflags = "--coverage"
    ldflags = "--coverage"
    flags = 'LDFLAGS="{}" CXXFLAGS="{}" CFLAGS="{}"'
    flags = flags.format(ldflags, cflags, cflags)
    cmdi = f"make clean; ./configure {flags}; {cmd}"
    return Compiler(command=cmd,
                    command_with_instrumentation=cmdi,
                    context=None,
                    time_limit=time_limit)


@compiler("catkin")
def catkin_compiler(d: dict[str, Any]) -> "Compiler":
    time_limit = d["time-limit"]
    workspace = d["workspace"]
    cmd = "catkin build --no-status --override-build-tool-check"
    cmdi = (
        'catkin config --cmake-args '
        '-DCMAKE_CXX_FLAGS="--coverage" -DCMAKE_LD_FLAGS="--coverage" && '
        'catkin build --no-status --override-build-tool-check')
    return Compiler(command=cmd,
                    command_with_instrumentation=cmdi,
                    context=workspace,
                    time_limit=time_limit)


@attr.s(frozen=True, slots=True)
class Compiler:
    """Provides instructions for building the program.

    Attributes
    ----------
    command: str
        The shell command that should be used to compile the source code for
        a given container.
    time_limit: float
        The maximum number of seconds that the compilation should be
        allowed to run before it is aborted.
    context: str, optional
        The directory within the container in which the given command should
        be executed. If no context is provided then the source directory in
        the container will be used by default.
    command_with_instrumentation: The command that should be used to
        compile the source code with the instrumentation necessary to
        collect coverage information. If let unspecified, the standard
        command will be used when the user requests to compile the
        program with instrumentation.
    """
    command = attr.ib(type=str)
    time_limit = attr.ib(type=float)
    context = attr.ib(type=Optional[str], default=None)
    command_with_instrumentation = attr.ib(type=Optional[str], default=None)

    @staticmethod
    def from_dict(d: dict[str, Any]) -> "Compiler":
        assert "type" in d
        typ = d["type"]

        if typ not in _NAME_TO_COMPILER_BUILDER:
            raise Exception(f"unsupported compiler type: {typ}")

        builder = _NAME_TO_COMPILER_BUILDER[typ]
        return builder(d)

    def __compile(self,
                  manager_container,
                  container: "Container", # type: ignore
                  command: str,
                  verbose: bool,
                  ) -> CompilationOutcome:
        # if a context isn't given, use the source directory of the bug
        logger.debug("compiling container [%s] via command: %s",
                     container.uid, command)
        bug = manager_container.bug(container)
        context = self.context if self.context else bug.source_dir
        cmd_outcome = manager_container.command(container,
                                                command,
                                                context=context,
                                                stderr=True)
        logger.debug("compiled container [%s]", container.uid)
        return CompilationOutcome(cmd_outcome)

    def clean(self,
              manager_container,
              container: "Container", # type: ignore
              verbose: bool = False,
              ) -> None:
        return

    # TODO decouple!
    def compile(self, # type: ignore
                manager_container,
                container: "Container", # type: ignore
                verbose: bool = False,
                ) -> CompilationOutcome:
        return self.__compile(manager_container,
                              container,
                              self.command,
                              verbose)

    def compile_with_coverage_instrumentation(self, # type: ignore
                                              manager_container,
                                              container: "Container", # type: ignore

                                              verbose: bool = False,
                                              ) -> CompilationOutcome:
        if self.command_with_instrumentation:
            cmd = self.command_with_instrumentation
        else:
            cmd = self.command
        return self.__compile(manager_container, container, cmd, verbose)

    def to_dict(self) -> dict[str, Any]:
        return {
            "type": "simple",
            "command": self.command,
            "command_with_instrumentation": self.command_with_instrumentation,
            "context": self.context,
            "time-limit": self.time_limit,
        }
