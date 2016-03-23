#!/usr/bin/perl -w
use strict;
use File::Basename;

# Flatten the path
$ARGV[0]  =~ s/\/[.]\//\//g ;
my $subdir = basename(dirname($ARGV[0])) ;
my $project = "gmp" ;

# Contains a list of files to fix.
my $project_list = "bugged-program.txt" ;

sub say {
    my $msg = $_[0];
    print STDERR "|[$0]|: $msg \n" ;
}

# Executes a given shell command, reporting any errors via the STDERR
sub execute 
{
    my $cmd = $_[0] ;
    my $res = system($cmd) >> 8 ;
    if ($res != 0)
    {
        print STDERR "Command '$cmd' failed: $!" ; 
        
    }
}

# Run make to construct the program
sub make
{
    my $res = system("make 2>&1") >> 8;
    if ($res != 0)
    {
        exit 1;
    }
}

# We want to change /home/mkd5m/genprog-many-bugs/libtiff-A-B/sanity/repair.sanity.c into sanity

my $do_coverage = ($subdir =~ m/coverage/) ;
open(FILE, "<$project_list") ;
my @repair_only = <FILE> ;
chomp @repair_only ;
my %pfiles= map { $_, 1 } @repair_only ;
close(FILE) ;
my @all = () ;

foreach my $file (grep (! m/coverage[.]path/, `find $subdir`))
{
    chomp $file ;
    if (-f $file && ! ($file =~ m/coverage[.]path/))
    {
        $file =~ s/^[^\/]*\/// ;
        push(@all, $file) ;
    }
}
my @coverage_only = () ;
foreach my $file (@all)
{
    chomp $file ;
    if (! exists($pfiles{$file}))
    {
        push(@coverage_only, $file)
    }
}
print "Coverage only: @coverage_only\n" ;
print "Repair files: @repair_only\n" ;
print "Allfiles: @all\n" ;
foreach my $file (@coverage_only)
{
    print "mv $project/$file $project/$file-temp\n" ;
    execute("mv $project/$file $project/$file-temp") ;

}
my @to_copy = $do_coverage? @all : @repair_only ;

foreach my $file(@to_copy)
{

   (-f "$subdir/$file") or die "Invalid file to copy: $subdir/$file" ;
   execute("cp $subdir/$file $project/$file") ;

}
chdir $project or die "fail chdir $project: $!" ;
make () ;
chdir ".." or die "failed chdir ..: $!" ;
foreach my $file (@coverage_only)
{
    print "mv $project/$file-temp $project/$file\n" ;
    execute("mv $project/$file-temp $project/$file") ;

}
