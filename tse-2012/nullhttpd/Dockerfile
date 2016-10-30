FROM repairbox:fedora64

# Mount the files for this benchmark in /experiment, then perform any
# necessary prep
ADD . /experiment
RUN bash /experiment/prepare.sh
