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
	int i = 0, x = 0, c = 0, hit = 0;
	char buffer[1024];
	Match match[15];

	va_start(args, format);
	matchinit(match);
	for (i = 0; format[i] != 0; i++)
	{
		hit = 0;
		if (format[i] == '%')
		{
			for (x = 0; match[x].f != NULL; x++)
			{
				if (format[i + 1] == *match[x].c)
				{
					c += match[x].f(args, buffer, c);
					i++;
					hit = 1;
					break;
				}
				else if (format[i + 1] == '%')
				{
					buffer[c++] = format[i++ + 1];
					hit = 1;
					break;
				}
			}
			if (!hit)
				buffer[c++] = format[i];
		}
		else
			buffer[c++] = format[i];
	}
	if (c == 0)
		return (-1);
	write(1, buffer, c);
	va_end(args);
	return (c);
}
