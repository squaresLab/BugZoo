import logging
import resource
import socket
import sys

import psutil


def printflush(s: str, end: str = "\n") -> None:
    """Prints a string to the standard output and immediately flushes."""
    print(s, end=end)
    sys.stdout.flush()


def is_port_in_use(port: int) -> bool:
    """Determines whether a given port is in use on this machine.

    Credit: https://codereview.stackexchange.com/questions/116450/find-available-ports-on-localhost
    """
    with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as sock:
        return sock.connect_ex(("localhost", port)) == 0


def bytes_to_gigabytes(x: int) -> float:
    return x / 1024 / 1024 / 1024


def report_system_resources(logger: logging.Logger) -> None:
    cores_physical = psutil.cpu_count(logical=False)
    cores_logical = psutil.cpu_count(logical=True)
    cores_s = f"{cores_physical} physical, {cores_logical} logical"

    if psutil.cpu_freq():
        cpu_freq_s = f"{psutil.cpu_freq().max / 1000:.2f} GHz"
    else:
        cpu_freq_s = "unknown"

    if psutil.virtual_memory():
        vmem_total = bytes_to_gigabytes(psutil.virtual_memory().total)
        vmem_total_s = f"{vmem_total:.2f} GB"
    else:
        vmem_total_s = "unknown"

    if psutil.swap_memory():
        swap_total = bytes_to_gigabytes(psutil.swap_memory().total)
        swap_free = bytes_to_gigabytes(psutil.swap_memory().free)
        swap_s = f"{swap_total:.2f} GB ({swap_free:.2f} GB free)"
    else:
        swap_s = "unknown"

    disk_info = psutil.disk_usage("/")
    if disk_info:
        disk_size = bytes_to_gigabytes(disk_info.total)
        disk_free = bytes_to_gigabytes(disk_info.free)
        disk_s = f"{disk_size:.2f} GB ({disk_free:.2f} GB free)"
    else:
        disk_s = "unknown"

    resource_s = "\n".join([
        f"* CPU cores: {cores_s}",
        f"* CPU frequency: {cpu_freq_s}",
        f"* virtual memory: {vmem_total_s}",
        f"* swap memory: {swap_s}",
        f"* disk space: {disk_s}",
    ])
    logger.info("system resources:\n%s", indent(resource_s, 2))


def report_resource_limits(logger: logging.Logger) -> None:
    resources = [
        ("CPU time (seconds)", resource.RLIMIT_CPU),
        ("Heap size (bytes)", resource.RLIMIT_DATA),
        ("Num. process", resource.RLIMIT_NPROC),
        ("Num. files", resource.RLIMIT_NOFILE),
        ("Address space", resource.RLIMIT_AS),
        ("Locked address space", resource.RLIMIT_MEMLOCK),
    ]
    resource_limits = [
        (name, resource.getrlimit(res)) for (name, res) in resources
    ]
    resource_s = "\n".join([
        f"* {res}: {lim}" for (res, lim) in resource_limits
    ])
    logger.info("resource limits:\n%s", indent(resource_s, 2))


def print_task_start(task: str) -> None:
    s = f"{task}..."
    printflush(s, end="\r")


def print_task_end(task: str, outcome: str) -> None:
    width = 80
    outcome = f"[{outcome}]"
    left = f"{task}..."
    right = outcome.rjust(width - len(left), " ")
    s = left + right
    printflush(s, end="\n")


def dedent(s: str) -> str:
    def num_leading_spaces(s: str) -> int:
        n = len(s) - len(s.lstrip(" "))
        return n

    offset = 1 if s[0] == "\n" else 0
    lines = s.split("\n")
    spaces = min(num_leading_spaces(ss) for ss in lines[offset:])
    dedented = "\n".join(l[spaces:] for l in lines)
    return dedented


def indent(string: str, num_spaces: int) -> str:
    prefix = " " * num_spaces
    output = []
    for line in string.splitlines():
        output.append(prefix + line)
    return "\n".join(output)
