import operator

import cement

from ...core.source import RemoteSource
from ... import exceptions


class SourceController(cement.Controller):
    class Meta:
        label = 'source'
        description = 'add, remove, and list sources of bugs'
        stacked_on = 'base'
        stacked_type = 'nested'
        output_handler = 'tabulate'
        extensions = ['tabulate']

    @cement.ex(
        help='produces a list of all registered sources',
        arguments=[
            (['-q'],
             {'help': 'prints an unannotated list of the names of all registered bugs',  # noqa: pycodestyle
              'action': 'store_true'})]
    )
    def list(self) -> None:
        bz = self.app.daemon
        headers = ['Source', 'Type', 'URL', 'Location', 'Version']
        data = []
        for src in bz.sources:
            typ = 'Remote' if isinstance(src, RemoteSource) else 'Local'
            version = src.version if isinstance(src, RemoteSource) else '-'
            url = src.url if isinstance(src, RemoteSource) else '-'
            data.append([src.name, typ, url, src.location, version])
        data = sorted(data, key=operator.itemgetter(1,))
        if self.app.pargs.q:
            print('\n'.join([r[0] for r in data]))
        else:
            self.app.render(data, headers=headers)

    @cement.ex(
        help='registers a given source with this BugZoo installation',
        arguments=[
            (['name'], {'help': 'a unique name for the source',
                        'type': str}),
            (['url_or_path'], {'help': 'the URL or path to the source',
                        'type': str})]
    )
    def add(self) -> None:
        bz = self.app.daemon
        name = self.app.pargs.name
        url_or_path = self.app.pargs.url_or_path
        bz.sources.add(name, url_or_path)
        print('added source: {} -> {}'.format(name, url_or_path))

    @cement.ex(
        help='removes a given source from this BugZoo installation',
        arguments=[(['name'], {'help': 'the name of the source', 'type': str})]
    )
    def remove(self) -> None:
        name = self.app.pargs.name
        try:
            del self.app.daemon.sources[name]
            print('removed source: {}'.format(name))
        except KeyError:
            raise exceptions.SourceNotFoundWithName(name)

    @cement.ex(help='downloads any updates for registered sources')
    def update(self) -> None:
        print('updating sources...')
        bz = self.app.daemon
        bz.sources.update()
