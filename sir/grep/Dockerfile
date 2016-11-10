FROM repairbox:sir
MAINTAINER Chris Timperley "christimperley@gmail.com"

# Mount bug files to /experiment
ADD . /experiment
WORKDIR /experiment

# Unextract archive contents into /experiment
RUN tar -xf grep.tar.gz && mv grep/* . && rmdir grep && rm grep.tar.gz

# Install the bare essential packages we need to build grep
RUN apt-get update && apt-get install -y build-essential gcc && apt-get clean
