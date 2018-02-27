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
/**
 * _unsignedint - prints unsigned int
 * @args: args
 * @buffer: buffer
 * @offset: offset
 * Return: int
 */
int _unsignedint(va_list args, char *buffer, int offset)
{
	unsigned int i;
	unsigned int x = 0;
	char itoa[1024];
	unsigned int remainder = 0;
	unsigned int temp;
	unsigned int base = 10;

	i = (unsigned int)va_arg(args, int);
	if (i == 0)
	{
		buffer[offset] = '0';
		return (1);
	}
	
	while (i != 0)
	{
		remainder = i % base;
		itoa[x++] = (remainder > 9) ? (remainder - 10) + 'a' : remainder + '0';
		i /= base;
	}

	for (i = 0; i < x / 2; i++)
	{
		temp = itoa[i];
		itoa[i] = itoa[x - i - 1];
		itoa[x - i - 1] = temp;
	}

	for (i = 0; i < x; i++)
		buffer[offset + i] = itoa[i];
	return (x);
}
/**
 * _octal - prints octal
 * @args: args
 * @buffer: buffer
 * @offset: offset
 * Return: int
 */
int _octal(va_list args, char *buffer, int offset)
{
	unsigned int i;
	unsigned int x = 0;
	char itoa[1024];
	unsigned int remainder = 0;
	unsigned int temp;
	unsigned int base = 8;

	i = (unsigned int)va_arg(args, int);
	if (i == 0)
	{
		buffer[offset] = '0';
		return (1);
	}
	
	while (i != 0)
	{
		remainder = i % base;
		itoa[x++] = (remainder > 9) ? (remainder - 10) + 'a' : remainder + '0';
		i /= base;
	}

	for (i = 0; i < x / 2; i++)
	{
		temp = itoa[i];
		itoa[i] = itoa[x - i - 1];
		itoa[x - i - 1] = temp;
	}

	for (i = 0; i < x; i++)
		buffer[offset + i] = itoa[i];
	return (x);
}
