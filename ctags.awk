#!/usr/bin/env gawk -f

BEGIN {
}

/^[A-Za-z][0-9A-Za-z_]*:/ { printf("%s\t%s\t/^%s/\n", substr($1, 0, length($1)-1), ARGV[1], $1); }

/^[A-Za-z][0-9A-Za-z_]*$/ { printf("%s\t%s\t/^%s$/\n", $1, ARGV[1], $1); }

