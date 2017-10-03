import repairbox
from types import MethodType


class Plugin(object):
    @property
    def interfaces(self):
        """
        Returns a list of interfaces associated with this plugin.
        """
        cls = self.__class__
        methods = [m for m in dir(cls) if not m.startswith('__')]
        methods = [(m, getattr(cls, m)) for m in methods]
        return [(n, m) for (n, m) in methods if hasattr(m, 'is_interface') and m.is_interface]


    def attach(self, container: 'repairbox.container.BugContainer') -> None:
        """
        Used to attach this plugin to a given container.
        """
        for (name, func) in self.interfaces:
            print('attaching interface: {}'.format(name))
            proxy = MethodType(func, self)
            method = MethodType(lambda *args: proxy(*args), container)
            setattr(container, name, method)


    def detach(self, container: 'repairbox.container.BugContainer') -> None:
        """
        Detaches this plugin from a given container.
        """
        # detach all interfaces for this plugin from the container object
        for (name, _) in self.interfaces:
            print('detaching interface: {}'.format(name))
            delattr(container, name)
