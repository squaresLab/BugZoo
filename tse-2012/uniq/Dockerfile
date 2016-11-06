FROM repairbox:fedora64

ADD . /experiment
RUN sudo chown -R repair:repair /experiment
RUN bash /experiment/prepare.sh
