import argparse
import tabulate
import typing

from operator import itemgetter
from repairbox.manager import RepairBoxManager


def list_sources() -> None:
    """
    Produces a list of all the sources known to RepairBox.
    """
    hdrs = ['Source', 'URL', 'Version'] 
    tbl = []
    for src in RepairBoxManager.sources.sources:
        tbl.append([src.name, src.url, src.version])

    # transform into a pretty table
    tbl = tabulate.tabulate(tbl, headers=hdrs, tablefmt='simple')
    print('')
    print(tbl)


def add_source(src: str) -> None:
    RepairBoxManager.sources.add(src)
    print('added source: {}'.format(src))


def remove_source(src: str) -> None:
    RepairBoxManager.sources.remove(src)
    print('removed source: {}'.format(src))


def update_sources() -> None:
    print('updating sources...')
    RepairBoxManager.sources.update()


def install_artefact(name: str, update: bool) -> None:
    print('installing artefact: {}'.format(name))
    artefact = RepairBoxManager.artefacts[name]
    artefact.install(upgrade=update)


def uninstall_bug(name: str, force: bool) -> None:
    print('uninstalling bug: {}'.format(name))
    artefact = RepairBoxManager.artefacts[name]
    artefact.uninstall(force=force)


def launch(name: str) -> None:
    artefact = RepairBoxManager.artefacts[name]
    artefact.install()
    try:
        c = None
        c = bug.provision(tty=True)
        c.interact()
    finally:
        if c: # ensure the container is destroyed
            c.destroy()


def list_artefacts(show_installed=None) -> None:
    """
    Produces a list of all the artefacts registered with RepairBox.
    """
    tbl = []
    hdrs = ['Artefact', 'Source', 'Installed?']
    for artefact in RepairBoxManager.artefacts:

        # apply filtering based on installation status
        if show_installed is not None:
            if show_installed != artefact.installed:
                continue

        installed = 'Yes' if artefact.installed else 'No'
        row = [artefact.identifier, artefact.source.name, installed]
        tbl.append(row)

    # sort by source then by bug
    tbl = sorted(tbl, key=itemgetter(1,2))

    # transform into a pretty table
    tbl = tabulate.tabulate(tbl, headers=hdrs, tablefmt='simple')
    print('')
    print(tbl)


def main():
    #with open(os.path.join(os.path.dirname(__file__), "banner.txt"), "r") as f:
    #    desc = f.read()

    desc = ':-)'
    parser = argparse.ArgumentParser(description=desc,
                                     formatter_class=argparse.RawDescriptionHelpFormatter)
    subparsers = parser.add_subparsers()
    parser.add_argument('--version', action='version', version='2.0.0')

    # list-sources
    list_sources_parser = subparsers.add_parser('list-sources')
    list_sources_parser.set_defaults(func=lambda args: list_sources())

    # add-source [src]
    add_source_parser = subparsers.add_parser('add-source')
    add_source_parser.add_argument('src')
    add_source_parser.set_defaults(func=lambda args: add_source(args.src))

    # remove-source [src]
    remove_source_parser = subparsers.add_parser('remove-source')
    remove_source_parser.add_argument('src')
    remove_source_parser.set_defaults(func=lambda args: remove_source(args.src))

    # install-artefact [id]
    install_artefact_parser = subparsers.add_parser('install-artefact')
    install_artefact_parser.add_argument('artefact')
    install_artefact_parser.add_argument('--update',
                                    action='store_true')
    install_artefact_parser.set_defaults(func=lambda args: install_artefact(args.artefact, args.update))

    # uninstall-artefact [id]
    uninstall_artefact_parser = subparsers.add_parser('uninstall-artefact')
    uninstall_artefact_parser.add_argument('artefact')
    uninstall_artefact_parser.add_argument('--force',
                                    action='store_true')
    uninstall_artefact_parser.set_defaults(func=lambda args: uninstall_artefact(args.artefact, force=args.force))

    # launch [src]
    launch_parser = subparsers.add_parser('launch')
    launch_parser.add_argument('artefact')
    launch_parser.set_defaults(func=lambda args: launch(args.artefact))

    # list-artefacts
    list_artefacts_parser = subparsers.add_parser('list-artefacts')
    list_artefacts_parser.add_argument('--installed',
                                    dest='installed',
                                    action='store_true')
    list_artefacts_parser.add_argument('--uninstalled',
                                    dest='installed',
                                    action='store_false')
    list_artefacts_parser.set_defaults(feature=True)
    list_artefacts_parser.set_defaults(func=lambda args: list_artefacts(args.installed))

    # update-sources
    update_sources_parser = subparsers.add_parser('update-sources')
    update_sources_parser.set_defaults(func=lambda args: update_sources())


    args = parser.parse_args()
    if 'func' in vars(args):
        args.func(args)


if __name__ == "__main__":
    main()
