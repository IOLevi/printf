#include "holberton.h"
void _printchar(va_list args)
{
	char a;

	a = va_arg(args, int);
	write(1, &a, 1);
	
}

void _printstring(va_list args)
{
	char *s;
	int i = 0;
	s = va_arg(args, char *);

	while (s[i] != 0)
		i++;

	write(1, s, i);
}

void_printint(va_list args)
{

;


}
