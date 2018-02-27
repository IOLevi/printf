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
