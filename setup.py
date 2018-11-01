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
        'cement>=2.10.12',
        'attrs>=17.2.0',
        'mypy-extensions>=0.3.0',
        'psutil>=5.0.0',
        'chardet>=3.0.4'
    ],
    packages=[
        'bugzoo',
        'bugzoo.client',
        'bugzoo.compiler',
        'bugzoo.server',
        'bugzoo.mgr',
        'bugzoo.mgr.coverage',
        'bugzoo.core',
        'bugzoo.cli',
        'bugzoo.cli.controllers'
    ],
    keywords=['bug', 'defect', 'dataset', 'testing', 'repair', 'docker'],
    classifiers=[
        'Natural Language :: English',
        'Programming Language :: Python',
        'Programming Language :: Python :: 3',
        'Programming Language :: Python :: 3.5',
        'Programming Language :: Python :: 3.6',
        'Programming Language :: Python :: 3.7'
    ],
    entry_points = {
        'console_scripts': [
            'bugzoo = bugzoo.cli.app:main',
            'bugzood = bugzoo.server:main'
        ]
    }
)
