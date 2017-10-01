import os
import git
import json
import shutil
import glob
import copy
import typing

from typing import List
from repairbox.build import BuildInstructions
from repairbox.artefact import Artefact


class RepairBoxManager(object):

    @staticmethod
    def load():
        # TODO support windows
        default_path = os.path.join(os.environ.get('HOME'),
                                    '.repairbox')
        path = os.environ.get('REPAIRBOX_PATH', default_path)
        if not os.path.exists(path): # ensure dir exists
            os.makedirs(path)

        mgr = RepairBoxManager(path)
        mgr.sources.reload()
        return mgr


    def __init__(self, path: str) -> None:
        self.__path = path
        self.__sources = SourceManager(self)
        self.__bugs = BugManager(self)


    @property
    def path(self):
        return self.__path


    def rescan(self):
        print("rescanning...")


    @property
    def sources(self):
        return self.__sources

    
    @property
    def bugs(self):
        return self.__bugs


class Source(object):
    def __init__(self, manager: 'SourceManager', url: str) -> None:
        self.__manager = manager
        self.__url = url
        self.__bugs = {}
        self.__dependencies = {}

        # compute the relative path for this source
        rel_path = url.replace('https://', '')
        rel_path = rel_path.replace('/', '_')
        rel_path = rel_path.replace('.', '_')
        self.__rel_path = rel_path

        self.scan()

    
    def download(self) -> None:
        """
        Downloads this source to disk.
        """
        if not os.path.exists(self.abs_path):
            git.Repo.clone_from(self.url, self.abs_path)#, {depth: 1})


    def scan(self) -> None:
        # find all dependencies
        fns = '{}/**/*.dependency.yaml'.format(self.abs_path)
        for fn in glob.iglob(fns, recursive=True):
            dep = BuildInstructions.from_file(self, fn)
            self.__dependencies[dep.tag] = dep

        
        # find all bugs
        fns = '{}/**/*.bug.yaml'.format(self.abs_path)
        for fn in glob.iglob(fns, recursive=True):
            bug = Artefact.from_file(self, fn)
            self.__bugs[bug.identifier] = bug

    
    def update(self) -> None:
        """
        Downloads any updates to the files for this source.
        """
        repo = git.Repo(self.abs_path)
        origin = repo.remotes.origin
        origin.pull()
        del repo
        self.scan()


    def remove(self) -> None:
        """
        Removes the files for this source from disk, and uninstalls all
        associated Docker images. This should only be called by SourceManager.
        """
        for bug in self.bugs:
            bug.uninstall(force=True)

        for dep in self.__dependencies.values():
            dep.uninstall(force=True)
            
        shutil.rmtree(self.abs_path)


    def contains(self, identifier: str) -> None:
        """
        Checks whether a bug with a given identifier is provided by this
        source.
        """
        return identifier in self.__bugs


    def __getitem__(self, key):
        return self.__bugs[key]


    @property
    def bugs(self) -> List[Artefact]:
        return list(self.__bugs.values())

    
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
        return self.__rel_path


    @property
    def abs_path(self) -> str:
        """
        Returns the absolute path to this source.
        """
        return os.path.join(self.manager.path, self.rel_path)


class SourceManager(object):
    """

    Attributes:
        __rbox (RepairBox):
        __sources_filename (str):
        __sources (dict of str to str):
    """
    def __init__(self, manager: RepairBoxManager) -> None:
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


    def add(self, src: str) -> None:
        """
        Adds a new source.
        """
        assert src != ""
        if src in self.__sources:
            raise Exception("source already exists: {}".format(src)) # TODO custom Error

        src = Source(self, src)
        src.download()

        # update the sources file
        self.__sources[src.url] = src.rel_path
        self.__write()
   

    def remove(self, src: str) -> None:
        """
        Removes an existing source. The removal process destroys the local
        copies of the manifest (and build) files for this source, and
        uninstalls all of its associated images.
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
        return self.__sources.values()


    def __getitem__(self, key):
        return self.__sources[key]


class BugManager(object):
    class BugIterator(object):
        def __init__(self, sources):
            self.__sources = list(sources)
            self.__bugs = []

        
        def __next__(self):
            if not self.__bugs:
                if not self.__sources:
                    raise StopIteration
                src = self.__sources.pop()
                bugs = src.bugs
                self.__bugs += bugs
            return self.__bugs.pop()


    def __init__(self, manager):
        self.__manager = manager


    def __getitem__(self, name):
        for src in self.__manager.sources.sources:
            if src.contains(name):
                return src[name]
        raise IndexError('bug not found: {}'.format(name))

    
    def __iter__(self):
        return BugManager.BugIterator(self.__manager.sources.sources)
 

# not sure about this...
RepairBoxManager = RepairBoxManager.load()
