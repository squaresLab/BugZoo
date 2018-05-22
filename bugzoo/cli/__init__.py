from typing import List, Optional, Dict
import sys
import os
import argparse
import logging
from operator import itemgetter

import tabulate

import bugzoo.exceptions
import bugzoo.version
from ..core.source import RemoteSource
from ..manager import BugZoo
from ..core.tool import Tool


def main():
    try:
        log_formatter = logging.Formatter('%(levelname)s:%(name)s:%(asctime)s: %(message)s')  # noqa: pycodestyle
        log_filename = os.path.join(os.getcwd(), "bugzood.log")
        log_to_file = logging.handlers.WatchedFileHandler(log_filename)
        log_to_file.setFormatter(log_formatter)
        logging.getLogger('bugzoo').setLevel(logging.DEBUG)
        logging.getLogger('bugzoo').addHandler(log_to_file)

        parser = build_parser()
        args = parser.parse_args()
        if 'func' in vars(args):
            args.func(args)
    except BugZooException as e:
        error("ERROR: {}".format(e.message))
        logging.exception("An error occurred: %s", e)
    except Exception as e:
        error("UNEXPECTED ERROR: {}".format(e))
        logging.exception("An unexpected error occurred: %s", e)
    except KeyboardInterrupt:
        logging.info("Command cancelled by keyboard interrupt.")
        pass


if __name__ == "__main__":
    main()
