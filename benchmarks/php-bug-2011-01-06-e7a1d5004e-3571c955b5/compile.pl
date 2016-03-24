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

#flatten the path to remove /./'s
$ARGV[0]  =~ s/\/[.]\//\//g;
my $original_dir = dirname(__FILE__);
my $variant_dir = dirname($ARGV[0]);

say "Compiling: $subdir";

sub execute 
{
    my $cmd = $_[0];
    my $res = system($cmd);
    print "$cmd\n";
    if ($res != 0)
    {
        say "Command '$cmd' failed: $!"; 
        
    }
}

sub retry_python_build() {
    say "FAILED TO COMPILE PYTHON";
    say "TRYING AGAIN, THIS MIGHT TAKE AWHILE!";
    my $result = system("make clean 2>&1");
    if ($result != 0)
    {
        my $remake = system("make 2>&1");
        if ($remake != 0) { say "DIDNT WORK, DYING"; exit 1; }
        else { say "WORKED!"; exit 0; }
    }
    else
    {
        say "Failed to make clean, dying";
        exit 1;
    }
}

sub make
{
    my $is_php = ($project =~ "php");
    if ($is_php)
    {
        system("rm ./sapi/cli/php");
    }
    my $res = system("timeout 10m make 2>&1");
    # Python is picky when it comes to coverage instrumentation, sometimes
    # this will fix it
    if ($res != 0 && ($project =~ m/python/) && ($subdir =~ m/coverage/))
    {
        retry_python_build();
    }
    elsif ($res == 0)
    {
		my $res2 = system("sh ../php-tests-untar.sh");
		exit $res2;
    }
    elsif ($is_php && (-f "./sapi/cli/php"))
    {
		my $res2 = system("sh ../php-tests-untar.sh");
		exit $res2;
    }
    exit 1;
}

say "cool";
