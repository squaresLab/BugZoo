# This is the base Dockerfile used by all of the ManyBugs scenarios that
# will run on a 64-bit machine
FROM christimperley/repairbox:ubuntu64
MAINTAINER Chris Timperley "christimperley@gmail.com"

# Create /experiment directory and insert generic compilation script
RUN sudo mkdir -p /experiment
ADD compile.sh /experiment
RUN sudo chown -R docker /experiment
WORKDIR /experiment

# Install basic packages
RUN sudo apt-get update && \
    sudo apt-get install -y patch wget zip tar git build-essential gcc && \
    sudo apt-get clean && \
    sudo rm -rf /var/lib/apt/lists/* /tmp/* /var/tmp/*
