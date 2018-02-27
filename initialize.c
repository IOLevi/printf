#include "holberton.h"
/**
 * matchinit - initializes our matching structure
 * @match: match array
 */
void matchinit(Match *match)
{
	match[0].c = "c";
	match[0].f = _printchar;
	match[1].c = "s";
	match[1].f = _printstring;
	match[2].c = "i";
	match[2].f = _printdecimal;
	match[3].c = "d";
	match[3].f = _printdecimal;
	match[4].c = "r";
	match[4].f = _reverse;
	match[5].c = "R";
	match[5].f = _rot13;
	match[6].c = "u";
	match[6].f = _unsignedint;
	match[7].c = "o";
	match[7].f = _octal;

	match[8].c = "x";
	match[8].f = _hexlower;

	match[9].c = "X";
	match[9].f = _hexupper;
	match[10].c = NULL;
	match[10].f = NULL;
}
