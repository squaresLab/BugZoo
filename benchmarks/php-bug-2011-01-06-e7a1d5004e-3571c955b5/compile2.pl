#!/usr/bin/perl -w
#
# Compilation script for repair scenarios
# 
# USAGE: 
# perl compile.pl __EXE_NAME__ 
# 
# In normal usage __EXE_NAME__ is actually a drectory containing the files to
#     repair. We first read in $project_list, then look for each file therein
#     and copy them to the proper folder in the $project directory. Then we run
#     make etc.

use strict;
use File::Basename;
#use File::pushd;
#use File::popd;

my $DIR = dirname(__FILE__);
my $SRC_DIR = "$DIR/php";
my $VARIANT_DIR = $ARGV[0];

# Make to the original directory, for now, as much as I very much dislike this.
# How do we undo this?
# Copy contents of patch to the target directory.
sub make
{
  my $PATCH_DIR = $_[0];
  my $HOST_DIR = $_[1];
  my $DEST_DIR = $_[2];

  print "Compiling $PATCH_DIR to $DEST_DIR\n";

  # destroy the executable
  system("rm $DEST_DIR/sapi/cli/php -f");
  
  # copy all files from patch to dest
  system("cp $PATCH_DIR $DEST_DIR -r");

  # let's try make
  #pushd($DEST_DIR);
  #system("make");
  #popd();
}

print "Let's try compile...\n";
make($VARIANT_DIR, $SRC_DIR, $SRC_DIR);
