from setuptools import setup

setup(
    name='bugzoo',
    version='0.0.1',
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
        'tabulate'
    ],
    packages=[
        'bugzoo',
        'bugzoo.testing',
        'bugzoo.plugin',
        'bugzoo.coverage'
    ],
    entry_points = {
        'console_scripts': [ 'bugzoo = bugzoo.cli:main' ]
    }
)
