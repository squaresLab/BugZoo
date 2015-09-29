#!/usr/bin/perl

sub PrintVariables
{
	local (*in) = @_ if @_ == 1;
	local (%in) = @_ if @_ > 1;
	local ($out, $key, $output);

	$output = "<UL>\n";
	foreach $key (sort keys(%in)) {
		foreach (split("\0", $in{$key})) {
			($out = $_) =~ s/\n/<br>\n/g;
			$output .=  "<LI>$key=$out</LI>\n";
		}
	}
	$output .= "</UL>\n";
	return $output;
}

sub ReadParse
{
	local (*in) = @_ if @_;
	local ($i, $key, $val);

	if ($ENV{'REQUEST_METHOD'} eq "GET") {
		$in = $ENV{'QUERY_STRING'};
	} elsif ($ENV{'REQUEST_METHOD'} eq "POST") {
		read(STDIN, $in, $ENV{'CONTENT_LENGTH'});
	}
	@in = split(/&/, $in);
	foreach $i (0 .. $#in) {
		$in[$i] =~ s/\+/ /g;
		($key, $val) = split(/=/,$in[$i],2);
		$key =~ s/%(..)/pack("c", hex($1))/ge;
		$val =~ s/%(..)/pack("c", hex($1))/ge;
		$val =~ tr/\n//d;
		$in{$key} .= "\0" if (defined($in{$key}));
		$in{$key} .= $val;
	}
	return length($in); 
}

MAIN:
{
	&ReadParse;
	print "Content-type: text/html\n\n";
	print "<HTML><HEAD><TITLE>CGI Test</TITLE></HEAD>\n";
	print "<BODY>\n";
	print "<H1>CGI Test</H1>\n";
	print "<HR><B>GET Data</B>\n";
	print &PrintVariables;
	print "<HR>\n</BODY>\n</HTML>\n";
}
