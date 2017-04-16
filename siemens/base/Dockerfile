FROM christimperley/repairbox:ubuntu64
MAINTAINER Chris Timperley "christimperley@gmail.com"

ADD generate-description /usr/bin/generate-description
ADD generate-pythia-manifest /usr/bin/generate-pythia-manifest
ADD problem.template.json /experiment/problem.template.json
ADD compile.sh /experiment/compile.sh
ADD test.sh /experiment/test.sh
WORKDIR /experiment
RUN sudo chown -R docker /experiment
