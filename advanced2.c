#include "holberton.h"

/**
 * _reverse - reverses a string
 * @args: args
 * @buffer: buffer
 * @offset: offset
 * Return: length of resulting string 
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
/**
 * _rot13 - translates string using rot13 encryption
 * @args: arguments passed from main
 * @buffer: buffer that will be used to print to standard output
 * @offset: pointer that moves to the end of the last output to buffer
 * Return: length of resulting string 
 */
int _rot13(va_list args, char *buffer, int offset)
{

	int j = 0, i = 0, y = 0;

	char s1[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char s2[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};
	char *t;
	char s[1024];

	t = va_arg(args, char *);

	while (t[i] != 0)
		i++;

	for (j = 0; j < i; j++)
		s[j] = t[j];

	for (j = 0; j < i; j++)
	{

		for (y = 0; s1[y] != 0; y++)
		{

			if (s[j] == s1[y])
			{
				s[j] = s2[y];
				break;
			}

		}

	}
	for (j = 0; j < i; j++)
		buffer[offset + j] = s[j];

	return (i);
}
