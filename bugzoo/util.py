import sys
import logging
import resource

import psutil


def printflush(s: str, end: str = '\n') -> None:
    """
    Prints a given string to the standard output and immediately flushes.
    """
    print(s, end=end)
    sys.stdout.flush()


def bytes_to_gigabytes(x: int) -> float:
    return x / 1024 / 1024 / 1024


def report_system_resources(logger: logging.Logger) -> None:
    cores_physical = psutil.cpu_count(logical=False)
    cores_logical = psutil.cpu_count(logical=True)
    cores_s = "{} physical, {} logical".format(cores_physical, cores_logical)

    if psutil.cpu_freq():
        cpu_freq_s = "{:.2f} GHz".format(psutil.cpu_freq().max / 1000)
    else:
        cpu_freq_s = "unknown"

    if psutil.virtual_memory():
        vmem_total = bytes_to_gigabytes(psutil.virtual_memory().total)
        vmem_total_s = "{:.2f} GB".format(vmem_total)
    else:
        vmem_total_s = "unknown"

    if psutil.swap_memory():
        swap_total = bytes_to_gigabytes(psutil.swap_memory().total)
        swap_free = bytes_to_gigabytes(psutil.swap_memory().free)
        swap_s = "{:.2f} GB ({:.2f} GB free)".format(swap_total, swap_free)
    else:
        swap_s = "unknown"

    disk_info = psutil.disk_usage('/')
    if disk_info:
        disk_size = bytes_to_gigabytes(disk_info.total)
        disk_free = bytes_to_gigabytes(disk_info.free)
        disk_s = "{:.2f} GB ({:.2f} GB free)".format(disk_size, disk_free)
    else:
        disk_s = "unknown"

    resource_s = '\n'.join([
        '* CPU cores: {}'.format(cores_s),
        '* CPU frequency: {}'.format(cpu_freq_s),
        '* virtual memory: {}'.format(vmem_total_s),
        '* swap memory: {}'.format(swap_s),
        '* disk space: {}'.format(disk_s)
    ])
    logger.info("system resources:\n%s", indent(resource_s, 2))


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
