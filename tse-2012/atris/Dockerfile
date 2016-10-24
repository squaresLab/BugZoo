FROM genprog

RUN dnf install -y SDL-devel.i686 \
  SDL-devel.x86_64 \
  SDL_ttf.i686 \
  SDL_ttf.x86_64 \
  SDL_ttf-devel.i686 \
  SDL_ttf-devel.x86_64

# Mount the files for this benchmark in /experiment, then perform any
# necessary prep
ADD . /experiment
ENTRYPOINT /experiment
RUN bash /experiment/prepare.sh
