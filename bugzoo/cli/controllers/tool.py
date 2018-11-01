import operator

import cement

from ... import exceptions


class ToolController(cement.Controller):
    class Meta:
        label = 'tool'
        description = 'install and remove tools'
        stacked_on = 'base'
        stacked_type = 'nested'
        output_handler = 'tabulate'
        extensions = ['tabulate']

    @cement.ex(
        help='produces a list of registered tools',
        arguments=[
            (['-q'], {'help': 'prints an unannotated list of the names of all registered tools',  # noqa: pycodestyle
                      'action': 'store_true'}),
        ]
    )
    def list(self) -> None:
        headers = ['Tool', 'Source', 'Installed?']
        data = []
        tools = self.app.daemon.tools
        for tool in tools:
            row = [
                tool.name,
                tool.source if tool.source else '-',
                'Yes' if tools.is_installed(tool) else 'No'
            ]
            data.append(row)
        data = sorted(data, key=operator.itemgetter(1, 0))
        if self.app.pargs.q:
            print('\n'.join([r[0] for r in data]))
        else:
            self.app.render(data, headers=headers)

    @cement.ex(
        help='downloads the Docker image for a given tool',
        arguments=[(['tool'], {'help': 'the name of the tool', 'type': str})]
    )
    def download(self) -> None:
        name_tool = self.app.pargs.tool  # type: str
        print('downloading tool: {}'.format(name_tool))
        tools = self.app.daemon.tools
        try:
            tool = tools[name_tool]
        except KeyError:
            raise exceptions.ToolNotFound(name_tool)
        tools.download(tool)

    @cement.ex(
        help='uploads the Docker image for a given tool',
        arguments=[(['tool'], {'help': 'the name of the tool', 'type': str})]
    )
    def upload(self) -> None:
        name_tool = self.app.pargs.tool  # type: str
        print('uploading tool: {}'.format(name_tool))
        tools = self.app.daemon.tools
        tool = tools[name_tool]
        tools.upload(tool)

    @cement.ex(
        help='builds the Docker image for a given bug',
        arguments=[(['tool'], {'help': 'the name of the tool', 'type': str})]
    )
    def build(self) -> None:
        name_tool = self.app.pargs.tool  # type: str
        print('building tool: {}'.format(name_tool))
        tools = self.app.daemon.tools
        try:
            tool = tools[name_tool]
        except KeyError:
            raise exceptions.ToolNotFound(name_tool)
        tools.build(tool)

    @cement.ex(
        help='removes the Docker image for a given bug',
        aliases=['rm'],
        arguments=[
            (['tool'], {'help': 'the name of the tool', 'type': str}),
            (['-f', '--force'],
             {'help': 'does not report an error if image is not installed.',
              'action': 'store_true'})
        ]
    )
    def remove(self) -> None:
        force = self.app.pargs.force  # type: bool
        name_tool = self.app.pargs.tool  # type: str
        print('removing tool: {}'.format(name_tool))
        tools = self.app.daemon.tools
        try:
            tool = tools[name_tool]
        except KeyError:
            raise exceptions.ToolNotFound(name_tool)
        tools.uninstall(tool, force=force)
