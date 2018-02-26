#include "holberton.h"
/**
 * _printf - prints a formatted string
 * @format: format specifiers for the string
 * @...: variadic arguments
 * Return: 0 on successful run
 */
int _printf(const char *format, ...)
{
	va_list args;
	va_start(args, format);
	int i = 0;
	int x = 0;
	char buffer[1024];
	Match match[] = {
		{"c", _printchar},
		{"s", _printstring},
		{NULL, NULL}
		//add some stuff here for decimals
	};
	char b;
	int c = 0; /* len buffer offset count*/

	for (i = 0; format[i] != 0; i++) //format loop
	{
		x = 0;
		
		if (format[i] == '%')
		{
			while (match[x].f != NULL) //looping through match array
			{
				if (format[i + 1] == *match[x].c)
				{
					c += match[x].f(args, buffer, c);
					i++; //skip over the next one
					break;
				}
				x++;
			}
		}
		else
		{
			b = format[i];
			buffer[c] = b; 	
			c++;
		}
		
	}
	write(1, buffer, c);
	return (c);
}
