# This is the base Dockerfile used by all of the ManyBugs scenarios that
# will run on a 64-bit machine
FROM squareslab/repairbox:ubuntu64
MAINTAINER Chris Timperley "christimperley@gmail.com"

# Insert generic compilation script into /experiment
ADD compile.sh /experiment
RUN sudo chown -R docker /experiment

# Install basic packages
RUN sudo apt-get update && \
    sudo apt-get install -y patch wget zip tar git build-essential gcc && \
    sudo apt-get clean && \
    sudo apt-get autoremove -y && \
    sudo rm -rf /var/lib/apt/lists/* /tmp/* /var/tmp/*
