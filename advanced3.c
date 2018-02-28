#include "holberton.h"
/**
 * _hexlower - prints lower hex
 * @args: args
 * @buffer: buffer
 * @offset: offset
 */
int _hexlower(va_list args, char *buffer, int offset)
{

	unsigned int i;
	unsigned int x = 0;
	char itoa[1024];
	unsigned int remainder = 0;
	unsigned int temp;
	unsigned int base = 16;

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
 * _hexupper - prints lower hex
 * @args: args
 * @buffer: buffer
 * @offset: offset
 */
int _hexupper(va_list args, char *buffer, int offset)
{

	unsigned int i;
	unsigned int x = 0;
	char itoa[1024];
	unsigned int remainder = 0;
	unsigned int temp;
	unsigned int base = 16;

	i = (unsigned int)va_arg(args, int);
	if (i == 0)
	{
		buffer[offset] = '0';
		return (1);
	}
	
	while (i != 0)
	{
		remainder = i % base;
		itoa[x++] = (remainder > 9) ? (remainder - 10) + 'A' : remainder + '0';
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
 * _binary - does binary
 * @args: args
 * @buffer: buffer
 * @offset: offset
 * Return: int
 */
int _binary(va_list args, char *buffer, int offset)
{
	unsigned int i, j = 0, k = 0;
	unsigned int remainder;
	unsigned int temp;
	char s[1024];

	i = (unsigned int)va_arg(args, int);
 
	if (i == 0)
	{
		buffer[offset] = '0';
		return (1);

	}
	if (i == 1)
	{
		
		buffer[offset] = '1';
		return (1);
		
	}
	while (i / 2 != 0)
	{
		remainder = i % 2;
		s[j] = remainder + '0';
		i /= 2;
		j++;

	}

	if (i == 1)
	{		
		s[j++] = '1';
	}
	for (k = 0; k < j / 2; k++)
	{
		temp = s[k];
		s[k] = s[j - k - 1];
		s[j - k - 1] = temp;
	}

	for (i = 0; i < j; i++)
		buffer[offset + i] = s[i];

	return (j);
}
