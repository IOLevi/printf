#include "holberton.h"

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
	match[4].c = "u";
	match[4].f = _unsignedint;
	match[5].c = "o";
	match[5].f = _unsignedoctal;
	match[6].c = "x";
	match[6].f = _unsignedhex;
	match[7].c = "X";
	match[7].f = _hexupper;
	match[8].c = "S";
	match[8].f = _nonprintable;
}
