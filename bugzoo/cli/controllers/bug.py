from cement.core.controller import CementBaseController, expose


class BugController(CementBaseController):
    class Meta:
        label = 'bug'
        description = 'install, remove, and interact with historical bugs'
        stacked_on = 'base'
        stacked_type = 'nested'
        output_handler = 'tabulate'
        extensions = ['tabulate']

    @expose(help='produces a list of registered bugs')
    def list(self) -> None:
        headers = ['Bug', 'Program', 'Dataset', 'Source', 'Installed?']
        data = []
        bugs = self.app.daemon.bugs
        for bug in bugs:
            row = [
                bug.name,
                bug.program if bug.program else '-',
                bug.dataset if bug.dataset else '-',
                bug.source if bug.source else '-',
                'Yes' if bugs.is_installed(bug) else 'No'
            ]
            data.append(row)
        self.app.render(data, headers=headers)
