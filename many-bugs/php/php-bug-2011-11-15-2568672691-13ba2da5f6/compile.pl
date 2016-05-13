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
my $subdir = basename(dirname($ARGV[0]));

# These are filled in by scripter.py
my $project = "php";
my $project_list = "bugged-program.txt";


sub say {
    my $msg = $_[0];
    print STDERR "|[$0]|: $msg \n";
}

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
	exit 0;
    }
    elsif ($is_php && (-f "./sapi/cli/php"))
    {
        exit 0;
    }
    exit 1;
}
# We want to change /home/mkd5m/genprog-many-bugs/libtiff-A-B/sanity/repair.sanity.c into sanity

open(FILE, "<$project_list");
my @file_list = <FILE>;
chomp @file_list;
# double % preserves % for scripter.py
my %pfiles= map { $_, 1 } @file_list;
close(FILE);
my @filtered = ();
system("rm -rf php");
my $tar1 = system("tar xf php.tar.gz");
if($tar1 != 0)
{
    die "Unable to untar fresh php source directory";
}
foreach my $file (`find $subdir`)
{
    chomp $file;
    if (-f $file && ! ($file =~ m/.*coverage[.]path.*/))
    {
        $file =~ s/^[^\/]*\///;
        push(@filtered, $file);
    } 
    else
    {
        next;
    }
    (-f "$subdir/$file") or die "Invalid file to copy: $subdir/$file";
    execute("cp $subdir/$file $project/$file");
}

print "Repair files: @file_list \n";
print "Allfiles: @filtered\n";

chdir $project or die "fail chdir $project: $!";
system("killall $project >& /dev/null");
make ();
chdir ".." or die "failed chdir ..: $!";



