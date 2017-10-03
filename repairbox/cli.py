import argparse
import tabulate
import typing

from operator import itemgetter
from repairbox.manager import RepairBoxManager


def list_sources() -> None:
    """
    Produces a list of all the sources known to RepairBox.
    """
    for src in RepairBoxManager.sources.sources:
        print("- {}".format(src.url))


def add_source(src: str) -> None:
    RepairBoxManager.sources.add(src)
    print('added source: {}'.format(src))


def remove_source(src: str) -> None:
    RepairBoxManager.sources.remove(src)
    print('removed source: {}'.format(src))


def update_sources() -> None:
    print('updating sources...')
    RepairBoxManager.sources.update()


def install_bug(name: str, update: bool) -> None:
    print('installing bug: {}'.format(name))
    bug = RepairBoxManager.bugs[name]
    bug.install(upgrade=update)


def uninstall_bug(name: str, force: bool) -> None:
    print('uninstalling bug: {}'.format(name))
    bug = RepairBoxManager.bugs[name]
    bug.uninstall(force=force)


def launch(name: str) -> None:
    bug = RepairBoxManager.bugs[name]
    bug.install()
    try:
        c = None
        c = bug.provision(tty=True)
        c.interact()
    finally:
        if c: # ensure the container is destroyed
            c.destroy()


def list_bugs(show_installed=None) -> None:
    """
    Produces a list of all the artefacts registered with RepairBox.
    """
    tbl = []
    hdrs = ['Bug', 'Dataset', 'Source', 'Installed?']
    for bug in RepairBoxManager.bugs:

        # apply filtering based on installation status
        if show_installed is not None:
            if show_installed != bug.installed:
                continue

        installed = 'Yes' if bug.installed else 'No'
        row = [bug.identifier, bug.dataset, bug.source.url, installed]
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

    # install-bug [id]
    install_bug_parser = subparsers.add_parser('install-bug')
    install_bug_parser.add_argument('bug')
    install_bug_parser.add_argument('--update',
                                    action='store_true')
    install_bug_parser.set_defaults(func=lambda args: install_bug(args.bug, args.update))

    # uninstall-bug [id]
    install_bug_parser = subparsers.add_parser('uninstall-bug')
    install_bug_parser.add_argument('bug')
    install_bug_parser.add_argument('--force',
                                    action='store_true')
    install_bug_parser.set_defaults(func=lambda args: uninstall_bug(args.bug, force=args.force))

    # launch [src]
    launch_parser = subparsers.add_parser('launch')
    launch_parser.add_argument('bug')
    launch_parser.set_defaults(func=lambda args: launch(args.bug))

    # list-bugs
    list_bugs_parser = subparsers.add_parser('list-bugs')
    list_bugs_parser.add_argument('--installed',
                                    dest='installed',
                                    action='store_true')
    list_bugs_parser.add_argument('--uninstalled',
                                    dest='installed',
                                    action='store_false')
    list_bugs_parser.set_defaults(feature=True)
    list_bugs_parser.set_defaults(func=lambda args: list_bugs(args.installed))

    # update-sources
    update_sources_parser = subparsers.add_parser('update-sources')
    update_sources_parser.set_defaults(func=lambda args: update_sources())


    args = parser.parse_args()
    if 'func' in vars(args):
        args.func(args)


if __name__ == "__main__":
    main()
