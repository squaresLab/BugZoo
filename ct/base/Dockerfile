FROM christimperley/repairbox:ubuntu64

# Install necessary packages
RUN sudo apt-get update && \
    sudo apt-get install -y psmisc moreutils && \
    sudo apt-get clean && \
    sudo apt-get autoremove && \
    sudo rm -rf /var/lib/apt/lists/* /tmp/* /var/tmp/*

ADD problem.template.json /experiment/problem.template.json
ADD extract-preprocessed.sh /experiment/extract-preprocessed.sh
ADD filter.sh /experiment/filter.sh
