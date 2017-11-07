FROM squareslab/repairbox:ubuntu64
MAINTAINER Chris Timperley "christimperley@gmail.com"

ADD compile.sh /experiment/compile.sh
RUN sudo chown -R docker /experiment && \
    sudo apt-get update && \
    sudo apt-get install -y patch wget zip tar git build-essential gcc && \
    sudo apt-get clean && \
    sudo apt-get autoremove -y && \
    sudo rm -rf /var/lib/apt/lists/* /tmp/* /var/tmp/*
