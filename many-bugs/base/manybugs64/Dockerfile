# This is the base Dockerfile used by all of the ManyBugs scenarios that
# will run on a 64-bit machine
FROM christimperley/repairbox:ubuntu64
MAINTAINER Chris Timperley "christimperley@gmail.com"

ADD compile.sh /experiment
RUN sudo chown -R docker /experiment
