#!/usr/bin/perl -w
use strict;
use File::Basename;
use File::Tempdir;

# Flatten the path
$ARGV[0]  =~ s/\/[.]\//\//g;
my $project_dir = $ARGV[0];
my $src_dir = "gmp";

# Executes a given shell command, reporting any errors via the STDERR
sub execute 
{
    my $cmd = $_[0];
    my $res = system($cmd) >> 8;
    if ($res != 0)
    {
        print STDERR "Command '$cmd' failed: $!" ; 
        
    }
}

# Executes make within a given directory before returning to the current
# working directory at the time of the sub-procedure call.
sub make
{
    my $dir = $_[0];
    my $cwd = cwd();
    chdir $dir;
    my $res = system("make 2>&1") >> 8;
    chdir $cwd;
    if ($res != 0)
    {
        exit 1;
    }
}

sub compile
{
  # create a new temporary directory for the purpose of building the project
  my $tmp_dir = File::Tempdir->new();
  my $tmp_dir_name = $tmp_dir->name;

  # copy the complete project directory to the tmp directory
  execute("cp $project_dir $tmp_dir_name");

  # copy the patch files into the tmp directory
  # (overwriting the original files)
  execute("cp $patch_dir $tmp_dir_name");

  # execute make to build the binaries for this project
  make($tmp_dir_name);

  # move the constructed binaries to the directory of this patch.
  # the temporary directory and its contents are automatically destroyed on
  # exiting this sub-procedure call.
}

# Compile the file!
compile($project_dir, $patch_dir);
