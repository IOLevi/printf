#include "holberton.h"
/* 1. comments for every function
 * 2. remove all c++ style // comments
 * 3. space between declarations and code
 * 4. 40 lines per function
 * 5. stufffff.
 */
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
int _printdecimal(va_list args, char *buffer, int offset)
{
	int i;
	int x = 0;
	int isnegative;
	char itoa[1024];
	int remainder = 0;
	int temp;
	int base = 10;

	i = va_arg(args, int);

	if (i == 0)
	{
		buffer[offset] = '0';
		return (1);
	}	

	if (i < 0 && base == 10)
	{
		isnegative = 1;
		i *= -1;
	}

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
	
	//reverse the itoa array
	
	for (i = 0; i < x / 2; i++)
	{
		temp = itoa[i];
		itoa[i] = itoa[x - i - 1];
		itoa[x - i - 1] = temp;
	}
	
	for (i = 0; i < x; i++)
		buffer[offset + i] = itoa[i];
}

