FROM christimperley/repairbox:manybugs64
MAINTAINER Chris Timperley "christimperley@gmail.com"

ADD libxml.patch /experiment
RUN sudo chown -R docker /experiment

# Install necessary packages
RUN sudo apt-get update && \
    sudo apt-get install -y libxml2-dev autoconf psmisc && \
    sudo apt-get clean && \
    sudo apt-get autoremove && \
    sudo rm -rf /var/lib/apt/lists/* /tmp/* /var/tmp/*

# Install autoconf 2.13 from source (replacing any newer versions)
RUN cd /tmp && \
    wget -nv http://ftp.gnu.org/gnu/autoconf/autoconf-2.13.tar.gz && \
    tar -xf autoconf-2.13.tar.gz && \
    cd autoconf-2.13 && \
    ./configure && \
    sudo make install && \
    cd / && rm -rf /tmp/*

# Install bison 2.4.3 from source
RUN cd /tmp && \
    wget http://ftp.gnu.org/gnu/bison/bison-2.4.3.tar.gz && \
    tar -xvf bison-2.4.3.tar.gz && \
    cd bison-2.4.3 && \
    ./configure && \
    (make || exit 0) && \
    sed -i "s#_GL_WARN_ON_USE (gets#//_GL_WARN_ON_USE (gets#g" lib/stdio.h && \
    make && sudo make install && \
    cd / && rm -rf /tmp/*

# Download the Git repo for PHP
RUN git clone https://github.com/php/php-src.git src
