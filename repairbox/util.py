import sys


def printflush(s: str, end: str = '\n') -> None:
    """
    Prints a given string to the standard output and immediately flushes.
    """
    print(s, end=end)
    sys.stdout.flush()


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
