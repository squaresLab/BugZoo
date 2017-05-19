FROM squareslab/repairbox:rbox
MAINTAINER Chris Timperley "christimperley@gmail.com"

#RUN sudo dpkg --add-architecture i386
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
                            tix-dev && \
    sudo apt-get clean && \
    sudo apt-get autoremove -y && \
    sudo rm -rf /var/lib/apt/lists/* /tmp/* /var/tmp/*

# clone Python repo
RUN hg clone https://hg.python.org/cpython src
