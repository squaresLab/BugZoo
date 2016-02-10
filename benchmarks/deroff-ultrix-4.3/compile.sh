#export LDFLAGS='-m32 -L/usr/lib32'
export CFLAGS='-m32'
#export CXXFLAGS='-m32'
#export LDFLAGS='-m32'

gcc deroff.c -o deroff
