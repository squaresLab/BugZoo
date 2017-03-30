FROM christimperley/repairbox:ct-base

ENV MAKE_TIMEOUT 600
ENV TEST_TIMEOUT 300
ENV PROGRAM_NAME php

ADD blacklist.txt /experiment/blacklist.txt
ADD run-test-name.sh /experiment/run-test-name.sh

# Install necessary packages
RUN sudo apt-get update && \
    sudo apt-get install -y libxml2-dev php5 automake && \
    sudo apt-get clean && \
    sudo apt-get autoremove && \
    sudo rm -rf /var/lib/apt/lists/* /tmp/* /var/tmp/*

# clone the PHP repo
RUN git clone https://github.com/php/php-src source
