FROM christimperley/repairbox:ct-base

ENV MAKE_TIMEOUT 300
ENV TEST_TIMEOUT 120
ENV PROGRAM_NAME python
ENV EXECUTABLE /experiment/source/python

ADD test-by-name.sh /experiment/test-by-name.sh
ADD filter.sh /experiment/filter.sh

# Install necessary packages
RUN sudo apt-get update && \
    sudo apt-get install -y libncurses-dev \
                            libsqlite-dev \
                            libgdbm-dev \
                            libssl-dev \
                            libreadline-gplv2-dev \
                            libbz2-dev \
                            libsqlite3-dev \
                            gcc-multilib \
                            g++-multilib \
                            tk-dev \
                            mercurial \
                            tcl-dev \
                            tix-dev \
                            liblzma-dev && \
    sudo apt-get clean && \
    sudo apt-get autoremove && \
    sudo rm -rf /var/lib/apt/lists/* /tmp/* /var/tmp/*

# clone the repo
RUN git clone https://github.com/python/cpython source

ADD blacklist.txt /experiment/blacklist.txt
ADD list-tests /usr/bin/list-tests
