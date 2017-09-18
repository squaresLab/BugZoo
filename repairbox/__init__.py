import repairbox.manager
import repairbox.cli

#def interface(m):


class Plugin(object):
    @property
    @classmethod
    def interfaces(cls):
        """
        Returns a list of interfaces associated with this plugin.
        """
        return []


    def attach(self, container: 'BugContainer') -> None:
        """
        Used to attach this plugin to a given container.
        """
        
        # attach all interfaces for this plugin to the container object
        for interface in self.__class__.interfaces:
            pass


    def detach(self, container: 'BugContainer') -> None:
        """
        Detaches this plugin from a given container.
        """
        # detach all interfaces for this plugin from the container object
        for interface in self.__class__.interfaces:
            pass
