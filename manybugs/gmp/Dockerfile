FROM squareslab/repairbox:rbox
MAINTAINER Chris Timperley "christimperley@gmail.com"

# Fix /bin/sh to point to /bin/bash
# I've added this to the base image, but for now I've also added it here
# so that we don't have to go and rebuild everything.
RUN sudo rm /bin/sh && \
    sudo ln -s /bin/bash /bin/sh

# TODO: add psmisc to base image
RUN sudo apt-get update && \
    sudo apt-get install --no-install-recommends -y mercurial \
                                                    moreutils \
                                                    m4 \
                                                    psmisc
