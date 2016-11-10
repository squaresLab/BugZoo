FROM repairbox:sir
MAINTAINER Chris Timperley "christimperley@gmail.com"

# Mount bug files to /experiment
ADD . /experiment
WORKDIR /experiment

# Unextract archive contents into /experiment
RUN tar -xf grep.tar.gz && mv grep/* . && rmdir grep && rm grep.tar.gz
