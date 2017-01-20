FROM christimperley/repairbox:manybugs64
MAINTAINER Chris Timperley "christimperley@gmail.com"

ADD libxml.patch /experiment
ADD php-helper.php /experiment
RUN sudo chown -R docker /experiment

# Install necessary packages
RUN sudo apt-get update && \
    sudo apt-get install -y libxml2-dev && \
    sudo apt-get clean && \
    sudo rm -rf /var/lib/apt/lists/* /tmp/* /var/tmp/*
