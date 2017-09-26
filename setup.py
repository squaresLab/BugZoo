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
    install_requires=['docker', 'GitPython'],
    packages=[
        'repairbox',
        'repairbox.plugin'
    ],
    entry_points = {
        'console_scripts': [ 'repairbox = repairbox.cli:main' ]
    }
)
