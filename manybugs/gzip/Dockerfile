FROM christimperley/repairbox:manybugs64
MAINTAINER Chris Timperley "christimperley@gmail.com"

ADD TESTS /experiment
RUN sudo apt-get update && \
    sudo apt-get install -y gcc-multilib && \
    sudo apt-get clean && \
    sudo apt-get autoremove && \
    sudo rm -rf /var/lib/apt/lists/* /tmp/* /var/tmp/*
