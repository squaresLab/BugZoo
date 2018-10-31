import cement

from .controllers.base import BaseController
from .controllers.bug import BugController
from .controllers.source import SourceController
from .controllers.tool import ToolController
from .controllers.container import ContainerController
from ..manager import BugZoo as Daemon


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
    with BugZooCLI() as app:
        app.run()


if __name__ == '__main__':
    main()
