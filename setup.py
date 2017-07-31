#!/usr/bin/env python
from setuptools import setup

setup(
    name='repairbox',
    version='0.0.1',
    description='TBA',
    long_description='TBA',
    author='Chris Timperley',
    author_email='christimperley@gmail.com',
    url='https://github.com/squaresLab/RepairBox',
    license='mit',
    # dependency_links=['https://hg.python.org/cpython/raw-file/2.7/Lib/xmlrpclib.py#egg=xmlrpclib-2.7'],
    # install_required=['xmlrpclib'],
    packages=['repairbox'],
    entry_points = {
        'console_scripts': [ 'repairbox = repairbox.cli:main' ]
    }
)
