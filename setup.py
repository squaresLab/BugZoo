import os
from setuptools import setup


path = os.path.join(os.path.dirname(__file__), 'bugzoo/version.py')
with open(path, 'r') as f:
    exec(f.read())


setup(
    name='bugzoo',
    version=__version__,
    python_requires='>=3.5',
    description='A platform for safely studying historical software versions.',
    author='Chris Timperley',
    author_email='ctimperley@cmu.edu',
    url='https://github.com/squaresLab/BugZoo',
    license='mit',
    install_requires=[
        'docker>=3.1.4',
        'dockerpty',
        'GitPython',
        'pyyaml',
        'tabulate',
        'flask',
        'attrs>=17.2.0',
        'mypy-extensions>=0.3.0',
        'psutil>=5.0.0'
    ],
    packages=[
        'bugzoo',
        'bugzoo.client',
        'bugzoo.compiler',
        'bugzoo.server',
        'bugzoo.mgr',
        'bugzoo.core',
        'bugzoo.cli'
    ],
    entry_points = {
        'console_scripts': [
            'bugzoo = bugzoo.cli:main',
            'bugzood = bugzoo.server:main'
        ]
    }
)
