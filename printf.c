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
	Match match[] = {
		{"c", _printchar},
		{"s", _printstring},
		{NULL, NULL}
		//add some stuff here for decimals
	};
	char b;

	while (format[i] != 0) //format loop
	{
		x = 0;
		
		if (format[i] == '%')
		{
			while (match[x].f != NULL) //looping through match array
			{
				if (format[i + 1] == *match[x].c)
				{
					match[x].f(args);
					i++; //skip over the next one
					break;
				}
				else if (format[i + 1] == '%')
				{
					write(1, "%", 1);
					i++;
					break;
				}
				else
				{
					write(1, "%", 1);
					b = format[i + 1];
					write(1, &b, 1);
					i++;
				}
				x++;
			}
		}
		else
		{
			switch (format[i])
			{
				case '\n':
					write(1, "\n", 1);
					break;
				case '\\':
					write(1, "\\", 1);
					break;
				case '\t':
					write(1, "\t", 1);
					break;
				default:
					b = format[i];
					write(1, &b, 1);
					break;
			}
		}
		i++;
	}

	return (0);

}
