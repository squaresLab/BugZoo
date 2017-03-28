FROM christimperley/repairbox:ubuntu64

ENV MAKE_TIMEOUT 600
ENV TEST_TIMEOUT 300
ENV PROGRAM_NAME php
ADD test.sh /experiment/test.sh
ADD compile.sh /experiment/compile.sh
ADD problem.template.json /experiment/problem.template.json

# install PHP oracle and build deps
RUN sudo apt-get update && \
    sudo apt-get install -y php5 automake autoconf bison libxml2-dev moreutils && \
    sudo apt-get clean && \
    sudo rm -rf /var/lib/apt/lists/* /tmp/* /var/tmp/*

# clone the PHP repo
RUN git clone https://github.com/php/php-src source
