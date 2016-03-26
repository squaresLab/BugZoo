#!/usr/bin/perl -w
#
# Compilation script for repair scenarios; can't be used in a multi-threaded
# context
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

my $DIR = dirname(__FILE__);
my $SRC_DIR = "$DIR/php";
my $VARIANT_DIR = $ARGV[1];

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
  system("cp $HOST_DIR $DEST_DIR -r -n");
  system("cp $PATCH_DIR $DEST_DIR -r -n");

  # let's try make
  chdir $DEST_DIR;
  system("make");
}

print "Let's try compile...\n";
make($VARIANT_DIR, $SRC_DIR, "compiled-t1");
