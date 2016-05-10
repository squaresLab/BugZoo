#! /usr/bin/env perl 
use strict;
use feature ":5.10";
use Test::Harness qw(&runtests $verbose);
$verbose = (defined $ENV{'VERBOSE'} ? $ENV{'VERBOSE'} : 0);
my $tests = (defined $ENV{'RUNTESTS'} ? $ENV{'RUNTESTS'} : '');
my $srcdir = (defined $ENV{'srcdir'} ? $ENV{'srcdir'} : '.');
opendir DIR, $srcdir;
my (@fs, $f);
my $arg = $ARGV[0] - 1;
my @tests =  ("core-condition.t" ,  #1
              "mod-rewrite.t",      #2
              "lowercase.t",        #3
              "mod-redirect.t",     #4
              "mod-secdownload.t",  #5
              "mod-ssi.t",          #6
              "core-var-include.t", #7
              "core-keepalive.t",   #8
              "mod-cgi.t",          #9
              "core.t",             #10
              "core-request.t",     #11
              "mod-access.t",       #12
              "mod-compress.t",     #13
              "mod-setenv.t",       #14
              "fastcgi.t",          #15
              "cachable.t",         #16
              "mod-userdir.t",      #17
              "core-response.t",    #18
              "request.t",          #19
              "mod-auth.t",         #20
              "symlink.t" );        #21

push @fs, $srcdir.'/'.$tests[$arg];
closedir DIR;
runtests @fs;



