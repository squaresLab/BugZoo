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
#RUN sudo apt-get install -y libncurses-dev:i386 \
#                            libsqlite-dev:i386\
#                            libgdbm-dev:i386 \
#                            libssl-dev:i386 \
#                            libreadline-dev:i386 \
#                            libbz2-dev:i386 \
#                            gcc-multilib \
#                            g++-multilib
#                            tk-dev:i386 \
#                            tcl-dev:i386 \
#                            tix-dev:i386 \
