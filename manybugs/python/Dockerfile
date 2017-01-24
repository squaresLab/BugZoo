FROM christimperley/repairbox:manybugs64
MAINTAINER Chris Timperley "christimperley@gmail.com"

RUN sudo dpkg --add-architecture i386
RUN sudo apt-get update
RUN sudo apt-get install -y libncurses-dev \
                            libsqlite-dev \
                            libgdbm-dev \
                            libssl-dev \
                            libreadline-gplv2-dev \
                            libbz2-dev \
                            libsqlite3-dev \
                            gcc-multilib \
                            g++-multilib \
                            tk-dev \
                            tcl-dev \
                            tix-dev
