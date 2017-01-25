FROM christimperley/repairbox:manybugs64
MAINTAINER Chris Timperley "christimperley@gmail.com"

ADD libxml.patch /experiment
ADD php-helper.php /experiment
RUN sudo chown -R docker /experiment

# Install necessary packages
RUN sudo apt-get update && \
    sudo apt-get install -y libxml2-dev autoconf && \
    sudo apt-get clean && \
    sudo apt-get autoremove && \
    sudo rm -rf /var/lib/apt/lists/* /tmp/* /var/tmp/*

# Install bison 2.5 from source
RUN cd /tmp && \
    wget http://alpha.gnu.org/gnu/bison/bison-2.5_rc1.tar.gz && \
    tar -xvf bison-2.5_rc1.tar.gz && \
    cd bison-2.5_rc1 && \
    ./configure && \
    (make || exit 0) && \
    sed -i "s#_GL_WARN_ON_USE (gets#//_GL_WARN_ON_USE (gets#g" lib/stdio.h && \
    make && sudo make install && \
    cd / && rm -rf /tmp/*
