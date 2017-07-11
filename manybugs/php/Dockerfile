FROM squareslab/repairbox:rbox
MAINTAINER Chris Timperley "christimperley@gmail.com"

# Install necessary packages
RUN sudo apt-get update && \
    sudo apt-get install -y libxml2-dev autoconf psmisc && \
    sudo apt-get clean && \
    sudo apt-get autoremove && \
    sudo rm -rf /var/lib/apt/lists/* /tmp/* /var/tmp/*

ADD libxml.patch /experiment
ADD install-dependencies /experiment
ADD tester.py /experiment
RUN sudo chown -R docker /experiment
