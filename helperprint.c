#include "holberton.h"
/**
 *_printchar - function for printing a character to standard output
 *
 *@args: arguments passed from main function
 *@buffer: temporary storage of values
 *@offset: pointer position in string buffer
 *
 *Return: value of char (1)
 */
int _printchar(va_list args, char *buffer, int offset)
{
	char a;

	a = va_arg(args, int);
	buffer[offset] = a;
	return (1);
}
/**
 *_printstring - prints a string of characters to buffer
 *
 *@args: arguments passed from main function
 *@buffer: temporary storage of values
 *@offset: pointer position in string buffer
 *
 *Return: length of string
 */
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
}
/**
 *_printdecimal - print base10 numbers passed from main function
 *
 *@args: arguments stored in va_list
 *@buffer: temporary storage of values to print
 *@offset: position of va_args in argument list
 *
 *Return: 0 if success, 1 if i == 0
 */
int _printdecimal(va_list args, char *buffer, int offset)
{
	int j;
	unsigned int i;
	unsigned int x = 0;
	unsigned int isnegative = 0;
	char itoa[1024];
	unsigned int remainder = 0;
	unsigned int temp;
	unsigned int base = 10;

	j = va_arg(args, int);
	if (j == 0)
	{
		buffer[offset] = '0';
		return (1);
	}

	if (j < 0 && base == 10)
	{
		isnegative = 1;
		i = j * -1;
	}
	else 
		i = j;


	while (i != 0)
	{
		remainder = i % base;
		itoa[x++] = (remainder > 9) ? (remainder - 10) + 'a' : remainder + '0';
		i /= base;
	}

	if (isnegative)
	{
		itoa[x++] = '-';
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
