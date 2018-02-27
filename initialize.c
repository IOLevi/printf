#include "holberton.h"

Match *matchinit(void)
{
	Match *match;

	match = malloc(sizeof(Match) * 5);
	if (!match)
		return (NULL);

	match[0].c = "c";
	match[0].f = _printchar;

	match[1].c = "s";
	match[1].f = _printstring;

	match[2].c = "i";
	match[2].f = _printdecimal;

	match[3].c = "d";
	match[3].f = _printdecimal;

	match[4].c = NULL;
	match[4].f = NULL;

	return (match);
}
