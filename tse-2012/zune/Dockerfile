FROM christimperley/repairbox:ubuntu64

ENV PROGRAM_NAME zune
ENV SOURCE_FILE zune.c

# install jq
# TODO: move to base Dockerfile
RUN sudo apt-get update && \
    sudo apt-get install -y jq && \
    sudo apt-get clean && \
    sudo rm -rf /var/lib/apt/lists/* /tmp/* /var/tmp/*
ADD . /experiment
RUN sudo chown -R docker /experiment
