import os
import git
import yaml
import json
import shutil
import glob
import copy

from typing import List
from repairbox.artefact import Artefact
from repairbox.build import BuildInstructions


class Source(object):
    @staticmethod
    def download(manager: 'SourceManager', url: str) -> 'Source':
        """
        Downloads a source from a given URL to disk.
        """
        abs_path = Source.url_to_abs_path(manager, url)
        assert not os.path.exists(abs_path), "already downloaded source: {}".format(url)
        git.Repo.clone_from(url, abs_path)
        return Source(manager, url)


    @staticmethod
    def url_to_rel_path(url: str) -> str:
        rel_path = url.replace('https://', '')
        rel_path = rel_path.replace('/', '_')
        rel_path = rel_path.replace('.', '_')
        return rel_path


    @staticmethod
    def url_to_abs_path(manager: 'SourceManager', url: str) -> str:
        rel_path = Source.url_to_rel_path(url)
        return os.path.join(manager.path, rel_path)


    def __init__(self, manager: 'SourceManager', url: str) -> None:
        self.__manager = manager
        self.__url = url
        self.__artefacts = {}
        self.__dependencies = {}
        self.__repo = git.Repo(self.abs_path)

        self.scan()


    @property
    def name(self) -> str:
        """
        The unique name of this source.
        """
        return self.__name


    @property
    def version(self) -> str:
        """
        The current version of this source, given as the first eight characters
        of its current revision.
        """
        sha = self.__repo.head.object.hexsha
        return self.__repo.git.rev_parse(sha, short=8)


    def scan(self) -> None:
        # determine the name of this source
        manifest_fn = os.path.join(self.abs_path, '.repairbox.yml')
        assert os.path.isfile(manifest_fn), "missing manifest file."
        with open(manifest_fn, 'r') as f:
            yml = yaml.load(f)
        self.__name = yml['dataset']['name']

        # find all dependencies
        fns = '{}/**/*.dependency.yaml'.format(self.abs_path)
        for fn in glob.iglob(fns, recursive=True):
            dep = BuildInstructions.from_file(fn)
            self.__dependencies[dep.tag] = dep


        # find all artefacts
        fns = '{}/**/*.artefact.yaml'.format(self.abs_path)
        for fn in glob.iglob(fns, recursive=True):
            artefact = Artefact.from_file(self, fn)
            self.__artefacts[artefact.identifier] = artefact


    def update(self) -> None:
        """
        Downloads any updates to the files for this source.
        """
        origin = self.__repo.remotes.origin
        origin.pull()
        self.scan()


    def remove(self) -> None:
        """
        Removes the files for this source from disk, and uninstalls all
        associated Docker images. This should only be called by SourceManager.
        """
        for artefact in self.artefacts:
            artefact.uninstall(force=True)

        for dep in self.__dependencies.values():
            dep.uninstall(force=True)

        shutil.rmtree(self.abs_path)


    def contains(self, identifier: str) -> None:
        """
        Checks whether an artefact with a given identifier is provided by this
        source.
        """
        return identifier in self.__artefacts


    def __getitem__(self, key):
        return self.__artefacts[key]


    @property
    def artefacts(self) -> List[Artefact]:
        return list(self.__artefacts.values())


    @property
    def dependencies(self):
        return copy.copy(self.__dependencies)


    @property
    def manager(self) -> 'SourceManager':
        return self.__manager


    @property
    def url(self) -> str:
        return self.__url


    @property
    def rel_path(self) -> str:
        """
        Returns the location of this source, relative to the sources directory.
        """
        return Source.url_to_rel_path(self.url)


    @property
    def abs_path(self) -> str:
        """
        Returns the absolute path to this source.
        """
        return Source.url_to_abs_path(self.manager, self.url)


class SourceManager(object):
    """
    Used to access and manage all sources registered with a local RepairBox
    installation.
    """
    def __init__(self, manager: 'RepairBox') -> None:
        self.__path = os.path.join(manager.path, 'sources')
        self.__manifest_fn = \
            os.path.join(self.__path, 'sources.manifest.json')
        self.__sources = {}


    @property
    def path(self):
        """
        The path to the sources directory on disk.
        """
        return self.__path


    def reload(self) -> None:
        """
        Reloads all the manifest and build files associated with registered
        sources. This method is called (internally) after adding, removing,
        or updating sources.
        """
        if not os.path.exists(self.__manifest_fn):
            self.__sources = {}
            return

        with open(self.__manifest_fn, 'r') as f:
            srcs = json.load(f)

        assert isinstance(srcs, list)
        self.__sources = {s: Source(self, s) for s in srcs}


    def __write(self) -> None:
        with open(self.__manifest_fn, 'w') as f:
            srcs = list(self.__sources.keys())
            json.dump(srcs, f, indent=2)


    def exists(self, url: str) -> bool:
        """
        Determines whether a source at a given URL has been installed to
        this machine.

        Args:
            url:    the URL of the Git repository for this source.
        """
        return url in self.__sources


    def add(self, url: str) -> Source:
        """
        Registers a new source with this local installation.

        Args:
            url:    the URL of the Git repository for this source.

        Returns:
            The `Source` object for the newly registered source.

        Raises:
            Exception: if an existing, installed source uses the given URL.
        """
        assert url != ""
        if url in self.__sources:
            raise Exception("source already registered: {}".format(url)) # TODO custom Error

        src = Source.download(self, url)

        # update the sources file
        self.__sources[src.url] = src.rel_path
        self.__write()

        return src


    def remove(self, src: str) -> None:
        """
        Removes an existing source, given by its name. The removal process
        destroys the local copies of the manifest and build files for this
        source, and uninstalls all of its associated images.

        Args:
            name:    the name of the source that should be removed.

        Raises:
            Exception:  if no installed source exists with the given URL.
        """
        assert src != ""
        if src not in self.__sources:
            raise Exception("source not found: {}".format(src)) # TODO custom Error

        self.__sources[src].remove()
        del self.__sources[src]
        self.__write()


    def update(self) -> None:
        """
        Downloads any available updates for all (installed) sources.
        """
        for src in self.__sources.values():
            src.update()


    @property
    def sources(self) -> List[Source]:
        """
        A pseudo-immutable list of sources associated with this local
        installation. I.e., any changes to this list are not permanent.
        """
        return self.__sources.values()


    def __getitem__(self, name_or_url: str) -> Source:
        """
        Fetches a registered source by its name or URL.

        Args:
            name_or_url:   the name or URL of the source.

        Example:

            .. code-block:: python

                # fetch the ManyBugs source,
                rbx = RepairBox()

                # by name,
                src = rbx.sources['manybugs']

                # or by URL
                src = rbx.sources['https://github.com/ChrisTimperley/ManyBugs']
        """
        # URL
        if name_or_url in self.__sources:
            return self.__sources[name]

        # name
        for src in self.__sources.values():
            if src.name == name_or_url:
                return src

        raise IndexError('no source found with given URL or name: {}'.format(url_or_name))


    def __iter__(self):
        """
        Returns an iterator over the sources registered with this local
        installation.

        Example:

            .. code-block:: python

                # print the names and URLs of all registered sources
                rbx = RepairBox()
                for src in rbx.sources:
                    print("{}: {}".format(src.name, src.url))
        """
        return self.__sources.iter()
