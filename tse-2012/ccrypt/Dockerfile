FROM repairbox:ubuntu32
MAINTAINER Chris Timperley "christimperley@gmail.com"

# Install ElectricFence, then throw out unnecessary files
RUN sudo apt-get update &&\
    sudo apt-get install -y electric-fence &&\
    sudo apt-get clean &&\
    rm -rf /var/lib/apt/lists/* /tmp/* /var/tmp/*

# Mount the files for this benchmark in /experiment, then perform any
# necessary prep
ADD . /experiment
RUN sudo chown -R repair:repair .
RUN bash /experiment/prepare.sh
