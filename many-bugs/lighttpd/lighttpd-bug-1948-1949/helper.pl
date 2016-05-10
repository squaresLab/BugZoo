#!/usr/bin/perl -w
use strict ;

my $arg = $ARGV[0] ;
#If the string "length" is the only argument, then return the number of test cases, 21, and exit without error.
if($arg eq "length") {
    print("21");
    exit 0
}
my $bugrev = $ARGV[1] ;
# we have two ../../ because we are in lighttpd/tests
chdir("tests") ;
system("sh prepare.sh") ;
my @results = `perl ../../lighttpd-run-tests.pl $arg $bugrev 2>&1` ;
system("sh cleanup.sh") ;
system("killall -9 lighttpd") ;
chdir("../") ;
my $retval = 0;
#print STDERR "\n\n@results\n\n" ;
my $testname = "";
foreach my $line (@results)
{
    chomp $line ;
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

