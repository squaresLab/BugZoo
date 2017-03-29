FROM christimperley/repairbox:ubuntu64

ENV MAKE_TIMEOUT 600
ENV TEST_TIMEOUT 300
ENV PROGRAM_NAME php
ADD blacklist.txt /experiment/blacklist.txt
ADD blacklist.sh /experiment/blacklist.sh
ADD test.sh /experiment/test.sh
ADD compile.sh /experiment/compile.sh
ADD problem.template.json /experiment/problem.template.json

# Install necessary packages
RUN sudo apt-get update && \
    sudo apt-get install -y libxml2-dev psmisc moreutils php5 automake && \
    sudo apt-get clean && \
    sudo apt-get autoremove && \
    sudo rm -rf /var/lib/apt/lists/* /tmp/* /var/tmp/*

# clone the PHP repo
RUN git clone https://github.com/php/php-src source
