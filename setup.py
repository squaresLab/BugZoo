import os
from setuptools import setup


def get_version():
    path = os.path.join(os.path.dirname(__file__), 'bugzoo/version.py')
    with open(path, 'r') as f:
        return f.read()

setup(
    name='bugzoo',
    version=get_version(),
    python_requires='>=3.5',
    description='TBA',
    long_description='TBA',
    author='Chris Timperley',
    author_email='christimperley@gmail.com',
    url='https://github.com/squaresLab/BugZoo',
    license='mit',
    install_requires=[
        'docker',
        'dockerpty',
        'GitPython',
        'pyyaml',
        'tabulate',
        'flask'
    ],
    packages=[
        'bugzoo',
        'bugzoo.testing',
        'bugzoo.coverage',
        'bugzoo.localization',
        'bugzoo.compiler',
        'bugzoo.server',
        'bugzoo.core'
    ],
    entry_points = {
        'console_scripts': [
            'bugzoo = bugzoo.cli:main',
            'bugzood = bugzoo.server:main'
        ]
    }
)
