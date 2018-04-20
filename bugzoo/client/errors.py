import flask


class UnexpectedAPIResponse(Exception):
    """
    The BugZoo API produced a response that was unexpected by the client.
    """
    def __init__(self, response: flask.Response) -> None:
        msg = "Unexpected API response [{}]: {}"
        msg = msg.format(response.status_code, response.text)
        super().__init__(msg)
        self.__response = response

    @property
    def response(self) -> flask.Response:
        return self.__response
