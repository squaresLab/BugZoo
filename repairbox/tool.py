class Tool(object):
    

    def __init__(self, name, image):
        self.__name = name
        self.__image = image


    def image(self):
        """
        The name of the Docker image used to provide this tool.
        """
        return self.__image


    def download(self):
        pass


    def build(self):
        pass


    def install(self, upgrade=False):
        pass
