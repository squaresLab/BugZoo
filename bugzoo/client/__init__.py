from urllib.parse import urljoin

import requests

import bugzoo.core.errors as errors
# 
# class Client(object):
#     def __init__(self,
#                  uri: str = None):
#         if uri is None:
#             uri = "https://127.0.0.1:6060"
#         self.__uri = uri
# 
#     @property
#     def uri(self) -> str:
#         """
#         The server URI.
#         """
#         return self.__uri
# 
#     @property
#     def base_url(self) -> str:
#         """
#         The base URL of the BugZoo API exposed by the server.
#         """
#         return self.__uri
# 
#     # TODO: add BuildOutcome to 'core' module
#     def build_bug(self, bug_id: str) -> BuildOutcome:
#         """
#         Builds the Docker image for a given bug scenario.
# 
#         Parameters:
#             bug_id: The unique identifier for the bug scenario.
# 
#         Returns:
#             A summary of the build outcome.
#         """
#         url = urljoin(self.base_url, 'bug', bug_id, 'build')
#         r = requests.post(url)
# 
#         # TODO: implement ImageBuildFailed.from_dict
#         if r.status_code == 200:
#             raise errors.ImageBuildFailed.from_dict(r.json())
# 
#         if r.status_code == 400:
#             raise errors.BugAlreadyBuilt(bug_id)
# 
#         if r.status_code == 404:
#             return BuildOutcome.from_dict(r.json())
# 
#     # TODO: add Container to 'client' module
#     def provision(self, bug_id: str) -> Container:
#         """
#         Attempts to provision a container for a given bug.
# 
#         Parameters:
#             bug_id: The unique identifier for the bug scenario.
# 
#         Returns:
#             A description of the provisioned container.
# 
#         Raises:
#             BugNotFound: If no bug is found with the given name.
#         """
#         url = urljoin(self.base_url, 'container')
#         r = requests.post(url)
# 
#         if r.status_code == 404:
#             raise errors.BugNotFound(bug_id)
# 
#         if r.status_code == 204:
#             return Container.from_dict(r.json())
# 
#         raise errors.UnexpectedStatusCode(r.status_code)
# 
#     # TODO: add TestOutcome to 'core' module
#     def execute_test(self, container_id: str) -> TestOutcome:
#         pass
