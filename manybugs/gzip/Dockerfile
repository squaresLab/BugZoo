FROM squareslab/repairbox:rbox
MAINTAINER Chris Timperley "christimperley@gmail.com"

ADD TESTS /experiment
RUN sudo apt-get update && \
    sudo apt-get install -y \
      rsync \
      autoconf \
      gettext \
      autopoint \
      texinfo \
      gcc-multilib && \
    sudo apt-get clean && \
    sudo apt-get autoremove && \
    sudo rm -rf /var/lib/apt/lists/* /tmp/* /var/tmp/*
RUN git clone git://git.savannah.gnu.org/gzip.git src
RUN cd /tmp && \
    wget -nv http://www.cpan.org/src/5.0/perl-5.8.9.tar.gz && \
    tar -xf perl* && \
    rm perl*.tar.gz && \
    cd perl* && \
    ./Configure -Duse64bitall -des && \
    make -j CFLAGS="-lm" $(nproc) && sudo make install && \
    cd / && rm -rf /tmp/*
