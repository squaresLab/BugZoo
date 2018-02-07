import os
import yaml
import docker
import copy
import textwrap
import bugzoo

from typing import List, Iterator, Dict, Optional
from bugzoo.core import Language
from bugzoo.util import print_task_start, print_task_end
from bugzoo.build import BuildInstructions
from bugzoo.container import Container
from bugzoo.tool import Tool
from bugzoo.testing import TestCase, TestOutcome, TestSuite
from bugzoo.coverage import ProjectLineCoverage, \
                            ProjectCoverageMap, \
                            Spectra
from bugzoo.compiler import Compiler


class Bug(object):
    """
    Bugs provide an immutable snapshot of a software system at a given
    point in time, allowing it to be empirically studied and inspected in a
    transparent and reproducible manner.

    Each bug is assigned a unique identifier, based on its name, and
    the name of the program, if any, and dataset to which it belongs. This
    identifier takes the form: `"SOURCE:[PROGRAM:]NAME"`. Bugs can be
    retrieved by using this name, as shown below.

    .. code-block:: python

        rbox = BugZoo()
        bug = rbox.bugs['manybugs:python:69223-69224']
    """
    @staticmethod
    def from_file(dataset: 'bugzoo.manager.Dataset',
                  fn: str) -> 'Bug':
        """
        Loads a bug from its YAML manifest file.
        """
        with open(fn, 'r') as f:
            yml = yaml.load(f)

        name = yml['bug']
        program = yml.get('program', None)

        # determine the languages used by the program
        if not 'languages' in yml:
            raise Exception('No "languages" property specified for bug: {}'.format(name))

        languages = yml['languages'] # TODO: validate
        if languages is []:
            raise Exception('No associated languages specified for bug: {}'.format(name))
        languages = [Language[l] for l in languages]

        # build the test harness
        harness = TestSuite.from_dict(yml['test-harness'])

        # source directory
        source_dir = yml['source-location']

        # compilation instructions
        if not 'compiler' in yml:
            raise Exception('No compiler provided for bug: {}'.format(name))
        compiler = \
            Compiler.from_dict(yml['compiler'])

        # docker build instructions
        # TODO: this is stupid
        build_instructions = {'build': yml['build']}
        build_instructions = \
            BuildInstructions.from_dict(dataset,
                                        os.path.dirname(fn),
                                        build_instructions)

        return Bug(dataset,
                        name,
                        program,
                        languages,
                        source_dir,
                        harness,
                        build_instructions,
                        compiler)

    def __init__(self,
                 dataset: 'Dataset',
                 name: str,
                 program: str,
                 languages: List[Language],
                 source_dir: str,
                 harness: TestSuite,
                 build_instructions: BuildInstructions,
                 compiler: Compiler
                 ) -> None:
        assert name != ""
        assert program != ""
        assert languages != []

        self.__name = name
        self.__program = program
        self.__languages = languages[:]
        self.__source_dir = source_dir
        self.__test_harness = harness
        self.__build_instructions = build_instructions
        self.__compiler = compiler
        self.__dataset = dataset

    def to_dict(self) -> dict:
        """
        Produces a dictionary-based description of this bug, ready to be
        serialised in a JSON or YAML format.
        """
        jsn = {
            'uid': self.uid,
            'program': self.program,
            'dataset': self.dataset.name if self.dataset else None,
            'languages': [l.name for l in self.__languages],
            'installed': self.installed
        }
        return jsn

    @property
    def source_dir(self) -> str:
        """
        The absolute path of the dataset directory (within the container) for
        this bug.
        """
        # TODO
        return self.__source_dir

    @property
    def languages(self) -> List[Language]:
        return self.__languages[:]

    @property
    def program(self) -> Optional[str]:
        """
        The name of the program to which this bug belongs, if specified. If
        no program is specified for this bug, None will be returned instead.
        """
        return self.__program

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
    def dataset(self) -> 'Dataset':
        """
        The dataset to which this bug belongs.
        """
        return self.__dataset

    @property
    def installation(self) -> 'BugZoo':
        """
        The installation associated with this bug.
        """
        return self.dataset.manager.installation

    @property
    def coverage(self) -> 'ProjectCoverageMap':
        """
        Provides coverage information for each test within the test suite
        for the program associated with this bug.
        """
        # determine the location of the coverage map on disk
        fn = os.path.join(self.installation.coverage_path,
                          "{}.coverage.yml".format(self.identifier))

        # is the coverage already cached? if so, load.
        if os.path.exists(fn):
            return ProjectCoverageMap.from_file(fn, self.harness)

        # if we don't have coverage information, compute it
        try:
            container = None
            container = self.provision()
            coverage = container.coverage()

            # save to disk
            with open(fn, 'w') as f:
                yaml.dump(coverage.to_dict(), f, default_flow_style=False)
        finally:
            if container:
                container.destroy()

        return coverage

    @property
    def spectra(self) -> Spectra:
        """
        Computes and returns the fault spectra for this bug.
        """
        return Spectra.from_coverage(self.coverage)

    @property
    def installed(self) -> bool:
        """
        Indicates whether the Docker image for this bug is installed on the
        local machine.
        """
        return self.__build_instructions.installed

    @property
    def image(self) -> str:
        """
        The name of the Docker image for this bug.
        """
        return self.__build_instructions.tag

    @property
    def identifier(self) -> str:
        """
        The fully-qualified name of this bug.
        """
        if self.__program:
            return "{}:{}:{}".format(self.__dataset.name, self.__program, self.__name)
        return "{}:{}".format(self.__dataset.name, self.__name)
    uid = identifier

    def validate(self, verbose: bool = True) -> bool:
        """
        Checks that this bug successfully builds and that it produces an
        expected set of test suite outcomes.

        :param verbose: toggles verbosity of output. If set to `True`, the
            outcomes of each test suite will be printed to the standard output.

        :returns `True` if bug builds and produces expected outcomes, else
            `False`.
        """

        # attempt to rebuild -- don't worry, Docker's layer caching prevents us
        # from actually having to rebuild everything from scratch :-)
        try:
            self.build(force=True, quiet=True)
        except docker.errors.BuildError:
            print("failed to build bug: {}".format(self.identifier))
            return False

        # provision a container
        validated = True
        try:
            c = None
            c = self.provision()

            # ensure we can compile the bug
            # TODO: check compilation status!
            print_task_start('Compiling')
            c.compile()
            print_task_end('Compiling', 'OK')

            if isinstance(self.harness, bugzoo.testing.GenProgTestSuite):

                for t in self.harness.passing:
                    task = 'Running test: {}'.format(t.identifier)
                    print_task_start(task)

                    outcome = c.execute(t)
                    if not outcome.passed:
                        validated = False
                        print_task_end(task, 'UNEXPECTED: FAIL')
                        response = textwrap.indent(outcome.response.output, ' ' * 4)
                        print('\n' + response)
                    else:
                        print_task_end(task, 'OK')

                for t in self.harness.failing:
                    task = 'Running test: {}'.format(t.identifier)
                    print_task_start(task)

                    outcome = c.execute(t)
                    if outcome.passed:
                        validated = False
                        print_task_end(task, 'UNEXPECTED: PASS')
                        response = textwrap.indent(outcome.response.output, ' ' * 4)
                        print('\n' + response)
                    else:
                        print_task_end(task, 'OK')

        # ensure that the container is destroyed!
        finally:
            if c:
                c.destroy()

        return validated

    def build(self, force=False, quiet=False) -> None:
        """
        Builds the Docker image for this bug.
        """
        self.__build_instructions.build(force=force, quiet=quiet)

    def uninstall(self, force=False, noprune=False) -> None:
        """
        Uninstalls all Docker images associated with this bug.
        """
        self.__build_instructions.uninstall(force=force, noprune=noprune)

    def download(self, force=False) -> bool:
        """
        Attempts to download the image for this bug from
        `DockerHub <https://hub.docker.com>`_. If the force parameter is set to
        True, any existing image will be overwritten.

        Returns:
            `True` if successfully downloaded, else `False`.
        """
        return self.__build_instructions.download(force=force)

    def upload(self) -> bool:
        """
        Attempts to upload the image for this bug to
        `DockerHub <https://hub.docker.com>`_.
        """
        return self.__build_instructions.upload()

    def provision(self,
                  volumes : Dict[str, str] = {},
                  tools : List[Tool] = [],
                  network_mode : str = 'bridge',
                  ports : dict = {},
                  tty : bool = False) -> 'Container':
        """
        Provisions a container for this bug.

        Parameters:
            network_mode:   the network mode that should be used by the
                provisioned container. Defaults to `bridge`. For more
                information, see the `documentation for Docker <https://docker-py.readthedocs.io/en/stable/containers.html>`_.
            tty:    a flag indicating whether a pseudo-TTY should be created
                for this container. By default, a pseudo-TTY is not created.
        """
        return Container(self, volumes=volumes, network_mode=network_mode, ports=ports, interactive=tty, tools=tools)
