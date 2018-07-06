from timeit import default_timer as timer
from typing import List, Dict, Optional, Set
import tempfile
import os
import warnings
import logging
import xml.etree.ElementTree as ET

from ..core.fileline import FileLineSet
from ..core.container import Container
from ..core.coverage import TestSuiteCoverage, \
                            TestCoverage
from ..core.test import TestCase
from ..exceptions import FailedToComputeCoverage

logger = logging.getLogger(__name__)

__all__ = ['CoverageManager']


class CoverageManager(object):
    INSTRUMENTATION = (
        "// BUGZOO :: INSTRUMENTATION :: START\n"
        "#include <stdio.h>\n"
        "#include <stdlib.h>\n"
        "#include <signal.h>\n"
        "void bugzoo_sighandler(int sig){\n"
        "  exit(1);\n"
        "}\n"
        "void bugzoo_ctor (void) __attribute__ ((constructor));\n"
        "void bugzoo_ctor (void) {\n"
        "  struct sigaction new_action;\n"
        "  new_action.sa_handler = bugzoo_sighandler;\n"
        "  sigemptyset(&new_action.sa_mask);\n"
        "  new_action.sa_flags = 0;\n"
        "  sigaction(SIGTERM, &new_action, NULL);\n"
        "  sigaction(SIGINT, &new_action, NULL);\n"
        "  sigaction(SIGKILL, &new_action, NULL);\n"
        "  sigaction(SIGSEGV, &new_action, NULL);\n"
        "  sigaction(SIGFPE, &new_action, NULL);\n"
        "  sigaction(SIGBUS, &new_action, NULL);\n"
        "  sigaction(SIGILL, &new_action, NULL);\n"
        "  sigaction(SIGABRT, &new_action, NULL);\n"
        "}\n"
        "// BUGZOO :: INSTRUMENTATION :: END\n"
    )

    def _from_gcovr_xml_string(self,
                               s: str,
                               instrumented_files: Set[str],
                               container: Container
                               ) -> FileLineSet:
        """
        Determines the set of files that are covered in a gcovr report.

        Parameters:
            s: a string-encoding of an XML document containing a gcovr report.
            instrumented_files: the paths (relative to the source code
                directory) to all files that were instrumented.

        Returns:
            the set of file-lines that are stated as covered by the given
            report.
        """
        logger_c = logger.getChild(container.id)
        mgr_ctr = self.__installation.containers
        mgr_bug = self.__installation.bugs
        bug = mgr_bug[container.bug]

        # compute a list of all source files
        dir_source = bug.source_dir
        endings = ['.cpp', '.cc', '.c', '.h', '.hh', '.hpp', '.cxx']
        cmd = ' -o '.join(["-name \*{}".format(e) for e in endings])
        cmd = "find {} -type f \( {} \)".format(dir_source, cmd)
        resp = mgr_ctr.command(container, cmd)
        # logger.info("FIND COMMAND: %s", cmd)
        all_files = set(fn.strip() for fn in resp.output.split('\n'))
        # logger.info("KNOWN SOURCE FILES: %s", all_files)

        def has_file(fn_rel: str) -> bool:
            fn_abs = os.path.join(dir_source, fn_rel)
            return (fn_abs in all_files)

        def read_line_coverage(cls) -> List[int]:
            lines = cls.find('lines').findall('line')
            return set(int(l.attrib['number']) for l in lines
                    if int(l.attrib['hits']) > 0)

        # FIXME is this a general solution?
        def resolve_path(fn_rel: str) -> str:
            assert fn_rel != '', "failed to resolve path"
            if has_file(fn_rel):
                return fn_rel

            fn_rel_child = '/'.join(fn_rel.split('/')[1:])
            return resolve_path(fn_rel_child)

        assert isinstance(instrumented_files, set)
        for path in instrumented_files:
            assert not os.path.isabs(path), "expected relative file paths"

        # read the output of gcovr
        root = ET.fromstring(s)
        packages = root.find('packages').findall('package')
        classes = [c for p in packages for c in p.find('classes').findall('class')]
        report = [(cls.attrib['filename'], read_line_coverage(cls))
                  for cls in classes]
        report = [(fn, lines) for (fn, lines) in report if lines]
        # logger.info("GCOVR: %s", report)

        t_start = timer()
        logger_c.debug("Starting to traverse all files reported by gcovr.")
        files_to_lines = {}
        for (filename, lines) in report:
            try:
                filename = resolve_path(filename)
            except AssertionError:
                logger_c.warning("failed to resolve file: %s", filename)
                continue
            if lines:
                files_to_lines[filename] = lines

        logger_c.debug("Traversing all files finished. Seconds passed: %.2f", timer() - t_start)
        # modify coverage information for all of the instrumented files
        num_instrumentation_lines = CoverageManager.INSTRUMENTATION.count('\n')
        lines_to_remove = set(range(1, num_instrumentation_lines))
        for path in instrumented_files:
            if not path in files_to_lines:
                continue

            logger_c.debug("Removing coverage lines due to instrumentation: %s", path)
            lines = files_to_lines[path]
            lines -= lines_to_remove
            tmp = set()
            for line in lines:
                tmp.add(line - num_instrumentation_lines)
            files_to_lines[path] = tmp

        file_line_set = FileLineSet(files_to_lines)
        logger_c.debug("Lines in coverage report: %s", file_line_set)
        return file_line_set

    def __init__(self, installation: 'BugZoo') -> None:
        self.__installation = installation # type: BugZoo

    def coverage(self,
                 container: Container,
                 tests: Optional[List[TestCase]] = None,
                 files_to_instrument: List[str] = None,
                 *,
                 instrument: bool = True
                 ) -> TestSuiteCoverage:
        """
        Uses a provided container to compute line coverage information for a
        given list of tests.
        """
        logger.debug("computing coverage for container: %s", container.uid)
        if tests is None:
            bug = self.__installation.bugs[container.bug]
            _tests = bug.tests
        else:
            assert tests is not []
            _tests = tests

        try:
            if instrument:
                logger.debug("instrumenting container")
                self.instrument(container,
                                files_to_instrument=files_to_instrument)
            else:
                logger.debug("not instrumenting container")
        except Exception:
            raise FailedToComputeCoverage("failed to instrument container.")

        cov = {}
        for test in _tests:
            logger.debug("Generating coverage for test %s in container %s",
                         test.name, container.uid)
            outcome = self.__installation.containers.execute(container, test)
            filelines = self.extract(container,
                                     instrumented_files=files_to_instrument)
            test_coverage = TestCoverage(test.name, outcome, filelines)
            logger.debug("Generated coverage for test %s in container %s",
                         test.name, container.uid)
            cov[test.name] = test_coverage

        # FIXME deinstrument
        # self.deinstrument(container,
        #                   instrumented_files=files_to_instrument)

        coverage = TestSuiteCoverage(cov)
        logger.debug("Computed coverage for container: %s", container.uid)
        return coverage

    def instrument(self,
                   container: Container,
                   files_to_instrument: Optional[List[str]] = None
                   ) -> None:
        """
        Adds source code instrumentation and recompiles the program inside
        a container using the appropriate GCC options. Also ensures that
        gcovr is installed inside the container.

        Parameters:
            container: the container whose contents should be instrumented.
            files_to_instrument: the paths to the source code files that
                should be instrumented (relative to the source code directory).

        Raises:
            Exception: if an absolute file path is provided.
        """
        logger.debug("instrumenting container: %s", container.uid)
        mgr_ctr = self.__installation.containers
        mgr_bug = self.__installation.bugs
        bug = mgr_bug[container.bug]

        if files_to_instrument is None:
            files_to_instrument = bug.files_to_instrument

        for path in files_to_instrument:
            assert not os.path.isabs(path), "expected relative file paths"

        # ensure that gcovr is mounted within the container
        # TODO: mount binaries
        # mgr_ctr.command(container,
        #                 'sudo apt-get update && sudo apt-get install -y gcovr')

        # add instrumentation to each file
        dir_source = bug.source_dir
        for fn_src in files_to_instrument:
            fn_src = os.path.join(dir_source, fn_src)
            logger.debug("instrumenting file [%s] in container [%s]",
                                fn_src, container.uid)
            (_, fn_temp) = tempfile.mkstemp(suffix='.bugzoo')
            try:
                mgr_ctr.copy_from(container, fn_src, fn_temp)
                with open(fn_temp, 'r') as fh:
                    contents = CoverageManager.INSTRUMENTATION + fh.read()

                with open(fn_temp, 'w') as fh:
                    fh.write(contents)
                mgr_ctr.copy_to(container, fn_temp, fn_src)
            finally:
                os.remove(fn_temp)

        # recompile with instrumentation options
        outcome = mgr_ctr.compile_with_instrumentation(container)
        if not outcome.successful:
            msg = "failed to generate coverage for container ({}) due to compilation failure."
            msg = msg.format(container.id)
            print(outcome.response.output)
            raise Exception(msg)

        logger.debug("instrumented container: %s", container.uid)

    def deinstrument(self,
                     container: Container,
                     instrumented_files: Optional[List[str]] = None
                     ) -> None:
        """
        Strips instrumentation from the source code inside a given container,
        and reconfigures its program to no longer use coverage options.
        """
        raise Exception("contains bug in sed command -- avoid use for now.")

        mgr_ctr = self.__installation.containers
        mgr_bug = self.__installation.bugs
        bug = mgr_bug[container.bug]
        num_lines_to_remove = CoverageManager.INSTRUMENTATION.count('\n')

        if instrumented_files is None:
            instrumented_files = bug.files_to_instrument

        # remove source code instrumentation
        for fn_instrumented in instrumented_files:
            cmd = 'sed -i "1,{}d" "{}"'
            cmd = cmd.format(num_lines_to_remove, fn_instrumented)
            mgr_ctr.command(container, cmd)

        # TODO recompile with standard flags
        pass

    def extract(self,
                container: Container,
                instrumented_files: Optional[List[str]] = None
                ) -> FileLineSet:
        """
        Uses gcovr to extract coverage information for all of the C/C++ source
        code files within the project. Destroys '.gcda' files upon computing
        coverage.
        """
        logger_c = logger.getChild(container.id)  # type: logging.Logger
        mgr_ctr = self.__installation.containers
        mgr_bug = self.__installation.bugs
        logger_c.debug("Extracting coverage information")

        bug = mgr_bug[container.bug]

        if instrumented_files is None:
            instrumented_files = set(bug.files_to_instrument)
        else:
            instrumented_files = set(instrumented_files)

        dir_source = bug.source_dir
        t_start = timer()
        logger_c.debug("Running gcovr.")
        fn_temp_ctr = mgr_ctr.mktemp(container)
        cmd = 'gcovr -o "{}" -x -d -r .'.format(fn_temp_ctr)
        response = mgr_ctr.command(container,
                                   cmd,
                                   context=dir_source,
                                   verbose=True)
        logger_c.debug("Finished running gcovr (took %.2f seconds).", timer() - t_start)  # noqa: pycodestyle
        assert response.code == 0, "failed to run gcovr"

        # copy the contents of the temporary file to the host machine
        (_, fn_temp_host) = tempfile.mkstemp(suffix='.bugzoo')
        try:
            mgr_ctr.copy_from(container, fn_temp_ctr, fn_temp_host)
            with open(fn_temp_host, 'r') as fh:
                report = fh.read()
        finally:
            os.remove(fn_temp_host)

        t_start = timer()
        logger_c.debug("Parsing gcovr XML report.")
        res = self._from_gcovr_xml_string(report,
                                          instrumented_files,
                                          container)
        logger_c.debug("Finished parsing gcovr XML report (took %.2f seconds).", timer() - t_start)  # noqa: pycodestyle
        logger_c.debug("Finished extracting coverage information")
        return res
