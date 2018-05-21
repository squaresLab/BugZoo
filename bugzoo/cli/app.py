from cement.core.foundation import CementApp

from .controllers.base import BaseController
from .controllers.bug import BugController
from ..manager import BugZoo as Daemon


class BugZooCLI(CementApp):
    class Meta:
        label = 'bugzoo'
        extensions = ['tabulate']
        output_handler = 'tabulate'
        base_controller = BaseController
        handlers = [BugController]

    def setup(self) -> None:
        super().setup()
        self.daemon = Daemon()


def main() -> None:
    with BugZooCLI() as app:
        app.run()


if __name__ == '__main__':
    main()
