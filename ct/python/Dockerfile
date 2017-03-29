FROM christimperley/repairbox:ubuntu64

ENV MAKE_TIMEOUT 600
ENV TEST_TIMEOUT 300
ENV PROGRAM_NAME python

#ADD test.sh /experiment/test.sh
#ADD compile.sh /experiment/compile.sh
ADD problem.template.json /experiment/problem.template.json

# Install necessary packages
RUN sudo apt-get update && \
    sudo apt-get install -y libncurses-dev \
                            libsqlite-dev \
                            libgdbm-dev \
                            libssl-dev \
                            libreadline-gplv2-dev \
                            libbz2-dev \
                            psmisc \
                            libsqlite3-dev \
                            gcc-multilib \
                            g++-multilib \
                            tk-dev \
                            mercurial \
                            tcl-dev \
                            tix-dev \
                            liblzma-dev \
                            moreutils && \
    sudo apt-get clean && \
    sudo apt-get autoremove && \
    sudo rm -rf /var/lib/apt/lists/* /tmp/* /var/tmp/*

# clone the repo
RUN git clone https://github.com/python/cpython source
