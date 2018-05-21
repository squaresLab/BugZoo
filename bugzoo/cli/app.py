from cement.core.foundation import CementApp
from .controllers.base import BaseController


class BugZooCLI(CementApp):
    class Meta:
        label = 'bugzoo'
        base_controller = BaseController


def main() -> None:
    with BugZooCLI() as app:
        app.run()


if __name__ == '__main__':
    main()
