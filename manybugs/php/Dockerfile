FROM squareslab/repairbox:manybugs64
MAINTAINER Chris Timperley "christimperley@gmail.com"

ADD libxml.patch /experiment
ADD install-dependencies /experiment
RUN sudo chown -R docker /experiment

# Install necessary packages
RUN sudo apt-get update && \
    sudo apt-get install -y libxml2-dev autoconf psmisc && \
    sudo apt-get clean && \
    sudo apt-get autoremove && \
    sudo rm -rf /var/lib/apt/lists/* /tmp/* /var/tmp/*

# Download the Git repo for PHP
RUN git clone https://github.com/php/php-src.git src
