import sys
import os
import logging
import datetime

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

DIR_HOME = os.path.expanduser('~')
DIR_LOG = os.path.join(DIR_HOME, '.bugzoo/logs')

RULE = '\n\n' + ("=" * 80) + '\n'


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
    if not os.path.exists(DIR_LOG):
        os.makedirs(DIR_LOG, exist_ok=True)

    now = datetime.datetime.now()  # type: datetime.datetime
    now_s = now.strftime('%Y-%m-%d_%H:%M:%S')
    fn_log = now_s + '.bugzoo.log'
    fn_log = os.path.join(DIR_LOG, fn_log)

    def on_error(msg: str, unexpected: bool = False) -> None:
        msg = indent(msg, 2)
        ftr = "\n\nSee log file for details: {}".format(fn_log)
        hdr = "An {} occurred during execution:\n\n"
        hdr = hdr.format("unexpected error" if unexpected else "error")
        msg = RULE + hdr + msg + ftr
        print(msg)
        sys.exit(1)

    try:
        log_formatter = \
            logging.Formatter('%(levelname)s:%(name)s:%(asctime)s: %(message)s')
        log_to_file = logging.handlers.WatchedFileHandler(fn_log, mode='w')
        log_to_file.setFormatter(log_formatter)
        log_to_file.setLevel(logging.DEBUG)
        logging.getLogger('bugzoo').setLevel(logging.DEBUG)
        logging.getLogger('bugzoo').addHandler(log_to_file)

        with BugZooCLI() as app:
            app.run()
    except BugZooException as err:
        logger.exception("An error occurred")
        on_error(err.message, False)
    except Exception as err:
        logger.exception("An unexpected error occurred")
        msg = repr(err)
        on_error(msg, True)
    except KeyboardInterrupt:
        logger.info("Command cancelled by keyboard interrupt.")
        sys.exit(1)


if __name__ == '__main__':
    main()
