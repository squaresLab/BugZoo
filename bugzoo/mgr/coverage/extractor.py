__all__ = ['CoverageExtractor']

from typing import FrozenSet, Optional, Iterable, Dict, Type
from timeit import default_timer as timer
import xml.etree.ElementTree as ET
import abc
import os
import logging
import tempfile
import logging

from ...core import FileLineSet, Container, TestSuiteCoverage, TestCoverage, \
    CoverageInstructions, TestCase, Language, Bug, FileLineSet
from ... import exceptions

logger = logging.getLogger(__name__)  # type: logging.Logger
logger.setLevel(logging.DEBUG)

_NAME_TO_EXTRACTOR = {}  # type: Dict[str, Type[CoverageExtractor]]
_EXTRACTOR_TO_NAME = {}  # type: Dict[Type[CoverageExtractor], str]


def register(name: str):
    """
    Registers a coverage extractor class under a given name.

    .. code: python

        from bugzoo.mgr.coverage import CoverageExtractor, register

        @register('mycov')
        class MyCoverageExtractor(CoverageExtractor):
            ...
    """
    def decorator(cls: Type['CoverageExtractor']):
        cls.register(name)
        return cls
    return decorator


def register_as_default(language: Language):
    """
    Registers a coverage extractor class as the default coverage extractor
    for a given language. Requires that the coverage extractor class has
    already been registered with a given name.

    .. code: python

        from bugzoo.core import Language
        from bugzoo.mgr.coverage import CoverageExtractor, register, \
            register_as_default

        @register_as_default(Language.CPP)
        @register('mycov')
        class MyCoverageExtractor(CoverageExtractor):
            ...
    """
    def decorator(cls: Type['CoverageExtractor']):
        cls.register_as_default(language)
        return cls
    return decorator


class CoverageExtractor(abc.ABC):
    """
    Used to compute coverage information for a given container according to a
    provided set of instructions.

    Each CoverageExtractor should contain a inner class named Instructions,
    which inherits from CoverageInstructions. The Instructions class is used
    to provide instructions necessary for computing coverage for a particular
    bug/container.

    .. code: python

        from bugzoo.mgr.coverage import CoverageExtractor

        class MyCoverageExtractor(CoverageExtractor):
            class Instructions(CoverageInstructions):
                ...

    Additionally, CoverageExtractor classes are expected to implement a
    static method named :code:`from_instructions`, which constructs a
    CoverageExtractor instance for a given container using a provided set
    of coverage instructions appropriate for that class, as shown below.

    .. code: python

        class MyCoverageExtractor(CoverageExtractor):
            ...

            @staticmethod
            def from_instructions(installation: 'BugZoo',
                                  container: Container,
                                  instructions: Instructions
                                  ) -> 'MyCoverageExtractor':
                ...
    """
    @classmethod
    def register(cls, name: str) -> None:
        logger.info("registering coverage extractor [%s] under name [%s]",
                    cls, name)

        if name in _NAME_TO_EXTRACTOR:
            raise exceptions.NameInUseError(name)
        if cls in _EXTRACTOR_TO_NAME:
            m = "coverage extractor [{}] is already registered under name: {}"
            m = m.format(cls, _EXTRACTOR_TO_NAME[cls])
            raise Exception(m)

        try:
            instructions = cls.Instructions
        except UnboundLocalError:
            m = "coverage extractor doesn't provide an 'Instructions' class"
            raise Exception(m)
        if not issubclass(instructions, CoverageInstructions):
            m = "'Instructions' class should subclass 'CoverageInstructions'"
            raise Exception(m)

        instructions.register(name)
        _NAME_TO_EXTRACTOR[name] = cls
        _EXTRACTOR_TO_NAME[cls] = name

        logger.info("registered coverage extractor [%s] under name [%s]",
                    cls, name)

    @classmethod
    def register_as_default(cls, language: Language) -> None:
        logger.info("registering coverage extractor [{}] as default for {}",
                    cls, language)

        if cls not in _EXTRACTOR_TO_NAME:
            m = "coverage extractor [{}] has not been registered under a name"
            m = m.format(cls)
            raise Exception(m)

        name = _EXTRACTOR_TO_NAME[cls]
        cls_instructions = CoverageInstructions.find(name)
        cls_instructions.register_as_default(language)
        logger.info("registered coverage extractor [{}] as default for {}",
                    cls, language)

    @staticmethod
    def build(installation: 'BugZoo',
              container: Container
              ) -> 'CoverageExtractor':
        """
        Constructs a CoverageExtractor for a given container using the coverage
        instructions provided by its accompanying bug description.
        """
        bug = installation.bugs[container.bug]  # type: Bug
        instructions = bug.instructions_coverage
        if instructions is None:
            raise exceptions.NoCoverageInstructions

        name = instructions.__class__.registered_under_name()
        extractor_cls = _NAME_TO_EXTRACTOR[name]
        builder = extractor_cls.from_instructions
        extractor = builder(installation, container, instructions)
        return extractor

    @staticmethod
    @abc.abstractmethod
    def from_instructions(installation: 'BugZoo',
                          container: Container,
                          instructions: CoverageInstructions
                          ) -> 'CoverageExtractor':
        """
        Used to construct a coverage extractor for a given container using
        a provided set of instructions. This method should be implemented for
        each CoverageExtractor subclass.
        """
        raise NotImplementedError

    def __init__(self,
                 installation: 'BugZoo',
                 container: Container
                 ) -> None:
        """
        All coverage extractor subclasses are required to call this
        constructor.
        """
        self.__installation = installation
        self.__container = container

    @property
    def container(self) -> Container:
        """
        The container associated with this coverage extractor.
        """
        return self.__container

    @abc.abstractmethod
    def extract(self) -> FileLineSet:
        """
        Responsible for extracting any coverage information that has been
        saved to disk.
        """
        raise NotImplementedError

    @abc.abstractmethod
    def cleanup(self) -> None:
        """
        Responsible for removes any instrumentation that was added to the
        program, and then, if necessary, rebuilding it, if necessary.
        """
        raise NotImplementedError

    def run(self,
            tests: Iterable[TestCase],
            *,
            instrument: bool = True
            ) -> TestSuiteCoverage:
        """
        Computes line coverage information for a given set of tests.

        Parameters:
            tests: the tests for which coverage should be computed.
            instrument: if set to True, calls prepare and cleanup before and
                after running the tests. If set to False, prepare
                and cleanup are not called, and the responsibility of calling
                those methods is left to the user.
        """
        logger.debug("computing coverage for container: %s", container.uid)
        container = self.container

        try:
            if instrument:
                logger.debug("instrumenting container")
                self.prepare()
            else:
                logger.debug("not instrumenting container")
        except Exception:
            msg = "failed to instrument container."
            raise exceptions.FailedToComputeCoverage(msg)

        cov = {}
        for test in _tests:
            logger.debug("Generating coverage for test %s in container %s",
                         test.name, container.uid)
            outcome = self.__installation.containers.execute(container, test)
            filelines = self.extract()
            test_coverage = TestCoverage(test.name, outcome, filelines)
            logger.debug("Generated coverage for test %s in container %s",
                         test.name, container.uid)
            cov[test.name] = test_coverage

        self.cleanup()

        coverage = TestSuiteCoverage(cov)
        logger.debug("Computed coverage for container: %s", container.uid)
        return coverage
