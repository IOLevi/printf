#include "holberton.h"

/**
 * _reverse - reverses a string
 * @args: args
 * @buffer: buffer
 * @offset: offset
 */
int _reverse(va_list args, char *buffer, int offset)
{
	int i = 0, j;
	char *t;
	char temp;
	char s[1024];

	t = va_arg(args, char *);

	while (t[i] != 0)
		i++;

	for (j = 0; j < i; j++)
		s[j] = t[j];
	
	for (j = 0; j < i / 2; j++)
	{
		temp = s[j];
		s[j] = s[i - j - 1];
		s[i - j - 1] = temp;		
	}

	for (j = 0; j < i; j++)
	       buffer[offset + j] = s[j];	
	return (i);
}
int _rot13(va_list args, char *buffer, int offset)
{




}
