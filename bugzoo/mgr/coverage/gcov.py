from typing import FrozenSet, Optional, Iterable, Dict, Any
from timeit import default_timer as timer
import xml.etree.ElementTree as ET
import os
import logging
import tempfile
import attr
import logging

from .extractor import CoverageExtractor, register, register_as_default
from ...core import FileLineSet, Container, TestSuiteCoverage, TestCoverage, \
    CoverageInstructions, TestCase, Language
from ... import exceptions

logger = logging.getLogger(__name__)  # type: logging.Logger
logger.setLevel(logging.DEBUG)

INSTRUMENTATION = (
    "// BUGZOO :: INSTRUMENTATION :: START\n"
    "#include <stdio.h>\n"
    "#include <stdlib.h>\n"
    "#include <signal.h>\n"
    "extern \"C\" void __gcov_flush(void);\n"
    "void bugzoo_sighandler(int sig){\n"
    "  __gcov_flush();\n"
    "  if(sig != SIGUSR1 && sig != SIGUSR2)\n"
    "    exit(1);\n"
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
    "  // Use signal for SIGUSR to remove handlers\n"
    "  signal(SIGUSR1, bugzoo_sighandler);\n"
    "  signal(SIGUSR2, bugzoo_sighandler);\n"
    "}\n"
    "// BUGZOO :: INSTRUMENTATION :: END\n"
)


def _convert_files_to_instrument(files: Iterable[str]) -> FrozenSet[str]:
    return frozenset(files)


@register_as_default(Language.CPP)
@register_as_default(Language.C)
@register('gcov')
class GcovExtractor(CoverageExtractor):
    @attr.s(frozen=True)
    class Instructions(CoverageInstructions):
        files_to_instrument = attr.ib(type=FrozenSet[str],
                                      converter=_convert_files_to_instrument)

        @staticmethod
        def from_dict(d: Dict[str, Any]) -> 'CoverageInstructions':
            files_to_instrument = d.get('files-to-instrument', [])
            return GcovExtractor.Instructions(files_to_instrument)

        def to_dict(self) -> Dict[str, Any]:
            return {'files-to-instrument': list(self.files_to_instrument)}

    @staticmethod
    def from_instructions(installation: 'BugZoo',
                          container: Container,
                          instructions: Instructions
                          ) -> None:
        return GcovExtractor(installation,
                             container,
                             instructions.files_to_instrument)

    def __init__(self,
                 installation: 'BugZoo',
                 container: Container,
                 files_to_instrument: FrozenSet[str]
                 ) -> None:
        super().__init__(installation, container)
        self.__installation = installation  # type: BugZoo

        for path in files_to_instrument:
            assert not os.path.isabs(path), "expected relative file paths"
        self.__files_to_instrument = files_to_instrument

    def _parse_report(self, s: str) -> FileLineSet:
        """
        Determines the set of files that are covered in a gcovr report.

        Parameters:
            s: a string-encoding of an XML document containing a gcovr report.

        Returns:
            the set of file-lines that are stated as covered by the given
            report.
        """
        logger_c = logger.getChild(container.id)
        container = self.container
        mgr_ctr = self.__installation.containers
        mgr_bug = self.__installation.bugs
        bug = mgr_bug[container.bug]

        # compute a list of all source files
        dir_source = bug.source_dir
        endings = ['.cpp', '.cc', '.c', '.h', '.hh', '.hpp', '.cxx']
        cmd = ' -o '.join(["-name \*{}".format(e) for e in endings])
        cmd = "find {} -type f \( {} \)".format(dir_source, cmd)
        resp = mgr_ctr.command(container, cmd)
        all_files = set(fn.strip() for fn in resp.output.split('\n'))

        def has_file(fn_rel: str) -> bool:
            fn_abs = os.path.join(dir_source, fn_rel)
            return (fn_abs in all_files)

        def read_line_coverage(cobertura_class) -> List[int]:
            lines = cobertura_class.find('lines').findall('line')
            return set(int(l.attrib['number']) for l in lines
                    if int(l.attrib['hits']) > 0)

        # FIXME is this a general solution?
        def resolve_path(fn_rel: str) -> str:
            assert fn_rel != '', "failed to resolve path"
            if has_file(fn_rel):
                return fn_rel

            fn_rel_child = '/'.join(fn_rel.split('/')[1:])
            return resolve_path(fn_rel_child)

        # read the output of gcovr
        root = ET.fromstring(s)
        packages = root.find('packages').findall('package')
        classes = [c for p in packages for c in p.find('classes').findall('class')]
        report = [(cls.attrib['filename'], read_line_coverage(cls))
                  for cls in classes]
        report = [(fn, lines) for (fn, lines) in report if lines]

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
        num_instrumentation_lines = INSTRUMENTATION.count('\n')
        lines_to_remove = set(range(1, num_instrumentation_lines))
        for path in self.__instrumented_files:
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

    def prepare(self) -> None:
        """
        Adds source code instrumentation and recompiles the program inside
        a container using the appropriate GCC options. Also ensures that
        gcovr is installed inside the container.

        Parameters:
            container: the container whose contents should be instrumented.
        """
        logger.debug("instrumenting container: %s", container.uid)
        container = self.container
        mgr_ctr = self.__installation.containers
        mgr_bug = self.__installation.bugs
        mgr_file = self.__installation.files
        bug = mgr_bug[container.bug]
        dir_source = bug.source_dir

        # add instrumentation to each file
        for fn_src in self.__files_to_instrument:
            fn_src = os.path.join(dir_source, fn_src)
            logger.debug("instrumenting file [%s] in container [%s]",
                         fn_src, container.uid)
            contents_original = mgr_file.read(container, fn_src)
            contents_instrumented = INSTRUMENTATION + contents_original
            mgr_file.write(container, fn_src, contents_instrumented)

        # recompile with instrumentation options
        outcome = mgr_ctr.compile_with_instrumentation(container)
        if not outcome.successful:
            msg = "failed to generate coverage for container ({}) due to compilation failure."
            msg = msg.format(container.id)
            logger.debug("failed build output: %s", outcome.response.output)
            raise Exception(msg)

        logger.debug("instrumented container: %s", container.uid)

    def cleanup(self) -> None:
        """
        Strips instrumentation from the source code inside the container,
        and reconfigures its program to no longer use coverage options.
        """
        logger.debug("cleanup method for gcov extractor does nothing.")

    def extract(self) -> None:
        """
        Uses gcovr to extract coverage information for all of the C/C++ source
        code files within the project. Destroys '.gcda' files upon computing
        coverage.
        """
        logger_c = logger.getChild(container.id)  # type: logging.Logger
        container = self.container
        mgr_ctr = self.__installation.containers
        mgr_bug = self.__installation.bugs
        logger_c.debug("Extracting coverage information")

        bug = mgr_bug[container.bug]
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
        res = self._parse_report(report)
        logger_c.debug("Finished parsing gcovr XML report (took %.2f seconds).", timer() - t_start)  # noqa: pycodestyle
        logger_c.debug("Finished extracting coverage information")
        return res
