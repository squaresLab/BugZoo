from setuptools import setup

setup(
    name='bugzoo',
    version='0.0.1',
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
