import bugzoo.plugin
import bugzoo.plugin.base

from bugzoo.coverage import CoverageReport


class gcovr(bugzoo.plugin.base.Plugin):
    """
    Used to compute line coverage.
    """
    def attach(self, container):
        super().attach(container)
        print('installing gcovr...')
        container.command('sudo apt-get update && sudo apt-get install -y gcovr')
        print('installed gcovr')


    @bugzoo.plugin.interface
    def coverage(self, container, test):
        container.compile(mode='coverage')
        outcome = container.execute(test)

        # compute coverage using gcovr
        response = \
            container.command('gcovr -x -d -r .',
                              context=container.bug.source_dir)
        assert response.code == 0
        response = response.output.decode('utf-8')

        # parse XML to Python data structures
        return CoverageReport.from_string(response)