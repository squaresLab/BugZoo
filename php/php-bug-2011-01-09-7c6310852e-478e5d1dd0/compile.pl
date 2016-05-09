#!/usr/bin/perl -w
# Compilation script for repair scenarios; resulting executables can be safely
# executed in a multi-threaded context; compilation may also be multi-threaded.
#
# For now, this ability to executing tests in parallel comes at the cost of
# a rather hefty disk usage.  The compile script now copies the entirety of the
# PHP directory into the candidate's directory and executes make.
# 
# USAGE: 
# perl compile.pl __EXE_NAME__ __SOURCE_NAME__
# 
# In normal usage __EXE_NAME__ is actually a drectory containing the files to
#     repair. We first read in $project_list, then look for each file therein
#     and copy them to the proper folder in the $project directory. Then we run
#     make etc.
use strict;
use File::Basename;
use Cwd;

my $DIR = dirname(__FILE__);
my $SRC_DIR = "$DIR/php";
my $VARIANT_DIR = dirname($ARGV[0]);

# Make to the original directory, for now, as much as I very much dislike this.
# How do we undo this?
# Copy contents of patch to the target directory.
sub make
{
  my $PATCH_DIR = Cwd::abs_path($_[0]);
  my $HOST_DIR = Cwd::abs_path($_[1]);
  my $DEST_DIR = Cwd::abs_path($_[2]);
  my $CWD = cwd();

  # this consumes lots of memory, but it sadly seems to be the only way to get
  # PHP to pass all of its tests.
  chdir $HOST_DIR;
  system("rm $DEST_DIR/sapi/cli/php -f");
  system("cp -r $PATCH_DIR/* $DEST_DIR");
  my $RES = system("make");
  chdir $CWD;

  return $RES;
}

make($VARIANT_DIR, $SRC_DIR, $SRC_DIR);

exit 0;
