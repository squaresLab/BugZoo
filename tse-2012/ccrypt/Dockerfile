FROM otomato/ubuntu32:14.04

RUN apt-get update
RUN apt-get install -y gcc
RUN apt-get install -y electric-fence

# Slim down the Docker image by chucking out unnecessary packages and temp files
RUN apt-get clean
RUN rm -rf /var/lib/apt/lists/* /tmp/* /var/tmp/*

# Mount the files for this benchmark in /experiment, then perform any
# necessary prep
ADD . /experiment
RUN sudo chown -R repair:repair .
RUN bash /experiment/prepare.sh
