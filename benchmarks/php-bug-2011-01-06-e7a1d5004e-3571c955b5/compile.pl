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

print $ARGV[0] + "\n";

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

sub make
{
    my $is_php = ($project =~ "php");
    if ($is_php) {
        system("rm ./sapi/cli/php"); # rebuilds exe
    }
    my $res = system("timeout 10m make 2>&1");
    if ($res == 0) {
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
# We want to change /home/mkd5m/genprog-many-bugs/libtiff-A-B/sanity/repair.sanity.c into sanity

open(FILE, "<$project_list");
my @file_list = <FILE>;
chomp @file_list;
# double % preserves % for scripter.py
my %pfiles= map { $_, 1 } @file_list;
close(FILE);
my @filtered = ();

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



