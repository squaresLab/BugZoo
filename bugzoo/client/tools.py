# from typing import Iterator
# 
# 
# class ToolCollection(object):
#     def __init__(self):
#         self.__api = None
#         pass
# 
#     def __iter__(self) -> Iterator[Tool]:
#         pass
# 
#     def __getitem__(self, name: str) -> Tool:
#         """
#         Attempts to retrieve a tool by its name.
# 
#         Example:
# 
#             >>> client.tools['genprog']
# 
#         Params:
#             name:   the name of the tool.
# 
#         Raises:
#             KeyError:   if no tool is found with the given name.
#         """
#         pass
# 
#     def upload(self, tool: Tool) -> None:
#         """
#         Uploads the Docker image for a given tool to
#         `DockerHub <https://hub.docker.com>`_.
# 
#         Params:
#             tool:   the tool whose image should be uploaded.
# 
#         Raises:
#             UploadFailedError:  if an error occur during the upload process.
#         """
#         self.__api.tool_upload(tool.name)
# 
#     def download(self, tool: Tool, force: bool = False) -> None:
#         """
#         Attempts to download the Docker image,
#         from `DockerHub <https://hub.docker.com>`_, for a given tool onto the
#         server.
# 
#         Params:
#             force:  if `True`, any existing image for the tool will be
#                     overwritten.
#         """
#         self.__api.tool_download(tool.name, force=force)
# 
#     def build(self, tool: Tool) -> None:
#         pass
# 
#     def uninstall(self, tool: Tool) -> None:
#         """
# 
#         Params:
#             tool:   the tool whose image should be uninstalled.
#         """
# 
#     def is_installed(self, tool: Tool) -> bool:
#         """
#         Determines whether a given tool is installed on the server.
# 
#         Returns:
#             `True` if installed; `False` if not.
#         """
#         self.__api.tool_is_installed(tool.name)
