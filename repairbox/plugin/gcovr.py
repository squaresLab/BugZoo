import repairbox.plugin
import repairbox.plugin.base


class gcovr(repairbox.plugin.base.Plugin):
    """
    Used to compute line coverage.
    """
    def attach(self, container):
        super().attach(container)
        # container.execute_command('sudo apt-get update && sudo apt-get install -y gcovr')


    @repairbox.plugin.interface
    def coverage(self, container, test):
        print(container)
