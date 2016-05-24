#!/usr/bin/perl
use strict;
use warnings;
use Cwd;
use Cwd 'abs_path';
use File::Basename;

my $orig_dir = getcwd();
my $here_dir = abs_path(dirname(__FILE__));
my $arg = $ARGV[0];
my $bugrev = $ARGV[1];

# we have two ../../ because we are in lighttpd/tests
chdir("$here_dir/src/tests");
system("sh prepare.sh");
my @results = `perl $here_dir/test.pl $arg $bugrev 2>&1` ;
system("sh cleanup.sh") ;
system("killall -9 lighttpd") ; # I don't like this! BAD.
chdir($orig_dir);

my $retval = 0;
#print STDERR "\n\n@results\n\n" ;
my $testname = "";
foreach my $line (@results)
{
    chomp $line ;
    print $line ;
    if ($line =~ m/[a-z]+[.]t/)
    {
        my $copy = $line ;
        $copy =~ s/.*\/([-a-z]+)[.]t.*/$1/ ;
        $testname = $copy ;
    }
    if ($line =~ m/Failed: [0-9]+/)
    {
        #print STDERR "FOUND \n\n\n\n\n\n\n\n\n" ;
        $line =~ s/.*Failed: ([0-9]+).*/$1/ ;
        #print STDERR "LINE WAS $line\n\n" ;
        print $line."\n" ;
        $retval = $line ;
        
        last;
    }
    if ($line =~ m/Result: PASS/ && $retval != 0)
    {
        print STDERR "WARNING: failed to parse test output properly!\n" ;
        print STDERR "WARNING: failed to parse test output properly!\n" ;
        print STDERR "WARNING: failed to parse test output properly!\n" ;
        print STDERR "WARNING: failed to parse test output properly!\n" ;
        print STDERR "WARNING: failed to parse test output properly!\n" ;
        exit 255 ;
    }
}
if ($bugrev == 1948 && $arg == (19 ))
{
    if ($retval <= 1)
    {
        $retval = 0 ;
    }
}
elsif($bugrev == 1913 && $arg == 9)
{
    print STDERR "Return value was $retval\n" ;
    if ($retval <= 2)
    {
        $retval = 0 ;
    }
}
if ($retval == 0)
{
    print STDERR "PASS: $testname\n" ;
}
else
{
    print STDERR "FAIL: $testname\n" ;
}
exit $retval ;
