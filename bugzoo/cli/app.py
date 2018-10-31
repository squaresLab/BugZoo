import sys
import os
import logging

import cement

from .controllers.base import BaseController
from .controllers.bug import BugController
from .controllers.source import SourceController
from .controllers.tool import ToolController
from .controllers.container import ContainerController
from ..manager import BugZoo as Daemon
from ..exceptions import BugZooException
from ..util import indent

logger = logging.getLogger(__name__)  # type: logging.Logger
logger.setLevel(logging.DEBUG)

DIR_LOG = os.getcwd()


class BugZooCLI(cement.App):
    class Meta:
        label = 'bugzoo'
        extensions = ['tabulate']
        output_handler = 'tabulate'
        base_controller = BaseController
        handlers = [
            BugController,
            SourceController,
            ToolController,
            ContainerController
        ]

    def setup(self) -> None:
        super().setup()
        self.daemon = Daemon()


def main() -> None:
    try:
        log_formatter = \
            logging.Formatter('%(levelname)s:%(name)s:%(asctime)s: %(message)s')
        fn_log = os.path.join(DIR_LOG, 'bugzood.log')
        log_to_file = logging.handlers.WatchedFileHandler(fn_log)
        log_to_file.setFormatter(log_formatter)
        log_to_file.setLevel(logging.DEBUG)
        logging.getLogger('bugzoo').setLevel(logging.DEBUG)
        logging.getLogger('bugzoo').addHandler(log_to_file)

        with BugZooCLI() as app:
            app.run()
    except BugZooException as err:
        msg = indent(err.message, 2)
        hdr = '\n\n' + ("=" * 80) + '\n'
        msg = "{}An error occurred during execution:\n{}".format(hdr, msg)
        print(msg)
        logger.exception("An error occurred: %s", err.message)
        print("\nSee log file for details: {}".format(fn_log))
        sys.exit(1)
    except Exception as err:
        msg = indent(str(err), 2)
        hdr = '\n\n' + ("=" * 80) + '\n'
        msg = "{}An unexpected error occurred during execution:\n{}".format(hdr, msg)
        print(msg)
        logger.exception("An unexpected error occurred")
        print("\nSee log file for details: {}".format(fn_log))
        sys.exit(1)
    except KeyboardInterrupt:
        logger.info("Command cancelled by keyboard interrupt.")
        sys.exit(1)


if __name__ == '__main__':
    main()
