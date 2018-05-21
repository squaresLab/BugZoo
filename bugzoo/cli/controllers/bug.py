from cement.core.controller import CementBaseController, expose


class BugController(CementBaseController):
    class Meta:
        label = 'bug'
        description = 'bugs controller'
