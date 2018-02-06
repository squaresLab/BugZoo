import os
from setuptools import setup


path = os.path.join(os.path.dirname(__file__), 'bugzoo/version.py')
with open(path, 'r') as f:
    exec(f.read())


setup(
    name='bugzoo',
    version=__version__,
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
