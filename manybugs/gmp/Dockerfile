FROM squareslab/repairbox:rbox
MAINTAINER Chris Timperley "christimperley@gmail.com"

# do we *really* need this?
RUN mkdir -p /experiment/local-root
RUN sudo apt-get update && \
    sudo apt-get install --no-install-recommends -y mercurial \
                                                    moreutils
