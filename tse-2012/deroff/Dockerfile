# Only replicates on 32-bit machines; not fooled by -m32 trickery
FROM otomato/ubuntu32:14.04
MAINTAINER Chris Timperley "christimperley@gmail.com"

RUN apt-get update
RUN apt-get install -y gcc
RUN apt-get install -y electric-fence

# Tidy up temporary files
RUN apt-get clean
RUN rm -rf /var/lib/apt/lists/* /tmp/* /var/tmp/*

# Mount the files for this benchmark in /experiment, then perform any
# necessary prep
ADD . /experiment
RUN bash /experiment/prepare.sh
