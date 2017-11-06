FROM squareslab/repairbox:rbox
MAINTAINER Chris Timperley "christimperley@gmail.com"

# do we *really* need this?
RUN mkdir -p /experiment/local-root
RUN sudo apt-get update && \
    sudo apt-get install --no-install-recommends -y mercurial

# RUN sudo dpkg --add-architecture i386
# RUN sudo apt-get update && \
#     sudo apt-get install -y gcc-multilib \
#                             g++-multilib \
#                             m4:i386 \
#                             moreutils \
