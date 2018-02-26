#include "holberton.h"
int _printchar(va_list args, char *buffer, int offset)
{
	char a;

	a = va_arg(args, int);
	buffer[offset] = a;

	return (1);
	//write(1, &a, 1);
	
}

int _printstring(va_list args, char *buffer, int offset)
{
	char *s;
	int i = 0, j = 0;

	s = va_arg(args, char *);

	while (s[i] != 0)
		i++;
	for (j = 0; j < i; j++)
		buffer[offset + j] = s[j];
	
	return (i);
	//write(1, s, i);
}

