class UnexpectedAPIResponse(object):
    """
    The BugZoo API produced a response that was unexpected by the client.
    """
    def __init__(self, response):
        msg = "Unexpected API response [{}]: {}"
        msg = msg.format(response.status_code, response.text)
        super().__init__(msg)
        self.__response = response

    @property
    def response(self):
        return self.__response
