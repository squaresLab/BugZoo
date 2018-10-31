import sys
import logging

import cement

from .controllers.base import BaseController
from .controllers.bug import BugController
from .controllers.source import SourceController
from .controllers.tool import ToolController
from .controllers.container import ContainerController
from ..manager import BugZoo as Daemon
from ..exceptions import BugZooException

logger = logging.getLogger(__name__)  # type: logging.Logger
logger.setLevel(logging.DEBUG)


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
        with BugZooCLI() as app:
            app.run()
    except BugZooException as err:
        print("ERROR: {}".format(err.message))
        logger.exception("An error occurred: %s", err.message)
        sys.exit(1)
    except Exception as err:
        print("UNEXPECTED ERROR: {}".format(err))
        logger.exception("An unexpected error occurred")
        sys.exit(1)
    except KeyboardInterrupt:
        logger.info("Command cancelled by keyboard interrupt.")
        sys.exit(1)
    # TODO save log to disk


if __name__ == '__main__':
    main()
