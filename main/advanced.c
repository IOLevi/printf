#include "holberton.h"
/**
 * _unsignedint - prints unsigned int
 * @args: va_list
 * @buffer: output string
 * @offset: position in output string
 * Return: the number of chars written to output string
 */
int _unsignedint(va_list args, char *buffer, int offset)
{
	unsigned int i;
	unsigned int x = 0;
	char itoa[1024];
	unsigned int remainder = 0;
	unsigned int temp;
	unsigned int base = 10;

	i = va_arg(args, int);
	if (i == 0)
	{
		buffer[offset] = '0';
		return (1);
	}
	if (i < 0)
	{
		i = UINT_MAX - i;
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
 * _unsignedoctal - prints unsigned octal
 * @args: va_list
 * @buffer: output string
 * @offset: position in output string
 * Return: the number of chars written to output string
 */
int _unsignedoctal(va_list args, char *buffer, int offset)
{
	unsigned int i;
	unsigned int x = 0;
	char itoa[1024];
	unsigned int remainder = 0;
	unsigned int temp;
	unsigned int base = 8;

	i = va_arg(args, int);
	if (i == 0)
	{
		buffer[offset] = '0';
		return (1);
	}
	if (i < 0)
	{
		i = UINT_MAX - i;
	}
	while (i != 0)
	{
		remainder = i % base;
		itoa[x++] = (remainder > 9) ? (remainder - 10) + 'a' : remainder + '0';
		i /= base;
	}
	itoa[x++] = 0;
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
 * _unsignedhex - prints unsigned hex lowercase
 * @args: va_list
 * @buffer: output string
 * @offset: position in output string
 * Return: the number of chars written to output string
 */
int _unsignedhex(va_list args, char *buffer, int offset)
{
	unsigned int i;
	unsigned int x = 0;
	char itoa[1024];
	unsigned int remainder = 0;
	unsigned int temp;
	unsigned int base = 16;

	i = va_arg(args, int);
	if (i == 0)
	{
		buffer[offset] = '0';
		buffer[offset + 1] = 'x';
		buffer[offset + 2] = '0';
		return (3);
	}
	if (i < 0)
	{
		i = UINT_MAX - i;
	}
	while (i != 0)
	{
		remainder = i % base;
		itoa[x++] = (remainder > 9) ? (remainder - 10) + 'a' : remainder + '0';
		i /= base;
	}
	itoa[x++] = 'x';
	itoa[x++] = '0';
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
 * _hexupper - prints hex uppercase
 * @args: va_list
 * @buffer: output string
 * @offset: position in output string
 * Return: the number of chars written to output string
 */
int _hexupper(va_list args, char *buffer, int offset)
{
	unsigned int i;
	unsigned int x = 0;
	char itoa[1024];
	unsigned int remainder = 0;
	unsigned int temp;
	unsigned int base = 16;

	i = va_arg(args, int);
	if (i == 0)
	{
		buffer[offset] = '0';
		buffer[offset] = 'X';
		buffer[offset] = '0';
		return (3);
	}
	if (i < 0)
	{
		i = UINT_MAX - i;
	}
	while (i != 0)
	{
		remainder = i % base;
		itoa[x++] = (remainder > 9) ? (remainder - 10) + 'A' : remainder + '0';
		i /= base;
	}
	itoa[x++] = 'X';
	itoa[x++] = '0';
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
int _nonprintable(va_list args, char *buffer, int offset)
{
	char *s;
	int i = 0, x, y = 0, temp, remainder;
	char itoa[100];

	s = va_arg(args, char *);

	while (s[i] != 0)
		i++;

	for (x = 0; x < i; x++)
	{
		if (s[x] < 32 || s[x] >= 127)
		{
			temp = s[x];
			while (temp != 0)
			{
				remainder = temp % 16;
				itoa[y++]

			}
			
		} 

	}


	return ();
}
