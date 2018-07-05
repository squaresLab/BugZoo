import sys
import logging
import resource


def printflush(s: str, end: str = '\n') -> None:
    """
    Prints a given string to the standard output and immediately flushes.
    """
    print(s, end=end)
    sys.stdout.flush()


def report_resource_limits(logger: logging.Logger) -> None:
    resources = [
        ('CPU time (seconds)', resource.RLIMIT_CPU),
        ('Heap size (bytes)', resource.RLIMIT_DATA),
        ('Num. process', resource.RLIMIT_NPROC),
        ('Num. files', resource.RLIMIT_NOFILE),
        ('Address space', resource.RLIMIT_AS),
        ('Locked address space', resource.RLIMIT_MEMLOCK)
    ]
    resource_limits = [
        (name, resource.getrlimit(res)) for (name, res) in resources
    ]
    resource_s = '\n'.join([
        '* {}: {}'.format(res, lim) for (res, lim) in resource_limits
    ])
    logger.info("resource limits:\n%s", indent(resource_s, 2))


def print_task_start(task: str) -> None:
    s = '{}...'.format(task)
    printflush(s, end='\r')


def print_task_end(task: str, outcome: str) -> None:
    width = 80
    outcome = '[{}]'.format(outcome)
    left = '{}...'.format(task)
    right = outcome.rjust(width - len(left), ' ')
    s = left + right
    printflush(s, end='\n')


def dedent(s: str) -> str:
    def num_leading_spaces(s: str) -> int:
        n = len(s) - len(s.lstrip(' '))
        return n

    offset = 1 if s[0] == '\n' else 0
    lines = s.split('\n')
    spaces = min(num_leading_spaces(ss) for ss in lines[offset:])
    dedented = '\n'.join(l[spaces:] for l in lines)
    return dedented


def indent(string: str, num_spaces: int) -> str:
    prefix = " " * num_spaces
    output = []
    for line in string.splitlines():
        output.append(prefix + line)
    return '\n'.join(output)
