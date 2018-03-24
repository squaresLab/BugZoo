from typing import List, Iterator, Dict, Optional

import bugzoo
from .language import Language
from ..compiler import Compiler
from ..testing import TestSuite



class Bug(object):
    """
    Bugs provide an immutable snapshot of a software system at a given
    point in time, allowing it to be empirically studied and inspected in a
    transparent and reproducible manner.
    """
    def __init__(self,
                 name: str,
                 image: str,
                 dataset: Optional[str],
                 program: Optional[str],
                 source: Optional[str],
                 source_dir: str,
                 languages: List[Language],
                 harness: TestSuite,
                 compiler: Compiler
                 ) -> None:
        """
        Constructs a new bug description.

        Parameters:
            name: the name of the bug.
            dataset: the name of the dataset to which the bug belongs, if any.
            program: the name of the program to which the bug belongs, if any.
            source: the name of the source to which the bug belongs, if any.
            languages: a list of languages that are involved with the bug.
            source_dir: the absolute path to the source code directory inside
                the container for this bug.
            harness: the test harness for this bug.
            image: the name of the Docker image that provides a reproducible
                execution environment for this bug.
            compiler: instructions for compiling the bug.
        """
        assert name != ""
        assert program != ""
        assert dataset != ""
        assert source != ""
        assert image != ""
        assert languages != []

        self.__name = name
        self.__image = image
        self.__dataset = dataset
        self.__program = program
        self.__source = source
        self.__source_dir = source_dir
        self.__languages = languages[:]
        self.__test_harness = harness
        self.__compiler = compiler

    def to_dict(self) -> dict:
        """
        Produces a dictionary-based description of this bug, ready to be
        serialised in a JSON or YAML format.
        """
        jsn = {
            'name': self.name,
            'image': self.image,
            'program': self.program,
            'dataset': self.dataset,
            'languages': [l.name for l in self.__languages]
        }
        return jsn

    @property
    def name(self) -> str:
        """
        The name of this bug.
        """
        return self.__name

    @property
    def source(self) -> Optional[str]:
        """
        The name of the source that provides this bug, if any.
        """
        return self.__source

    @property
    def source_dir(self) -> str:
        """
        The absolute path of the dataset directory (within the container) for
        this bug.
        """
        return self.__source_dir

    @property
    def languages(self) -> List[Language]:
        """
        A list of programming languages involved with this bug.
        """
        return self.__languages[:]

    @property
    def program(self) -> Optional[str]:
        """
        The name of the program to which this bug belongs, if specified. If
        no program is specified for this bug, None will be returned instead.
        """
        return self.__program

    @property
    def image(self) -> str:
        """
        The name of the Docker image that is responsible for providing a
        reproducible execution environment for this bug.
        """
        return self.__image

    @property
    def compiler(self) -> Compiler:
        return self.__compiler

    @property
    def harness(self) -> TestSuite:
        """
        The test harness used by this bug.
        """
        return self.__test_harness

    @property
    def tests(self):
        """
        The test suite used by this bug.
        """
        return self.__test_harness.tests

    @property
    def dataset(self) -> Optional[str]:
        """
        The name of the dataset to which this bug belongs, if any.
        """
        return self.__dataset

    @property
    def image(self) -> str:
        """
        The name of the Docker image for this bug.
        """
        return self.__image
