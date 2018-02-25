#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * _printf - prints a formatted string
 * @format: format specifiers for the string
 * @...: variadic arguments
 * Return: 0 on successful run
 */
void _printchar(va_list args)
{
	char a;

	a = va_arg(args, int);
	write(1, &a, 1);
	
}

void _printstring(va_list args)
{
	char *s;
	int i = 0;
	s = va_arg(args, char *);

	while (s[i] != 0)
		i++;

	write(1, s, i);
}
//functionality to print things that arent escaped or arent formatted
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
				}
				x++;
			}
		}
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
		}
//		if (format[i] == '\n')
//		{
//			printf("T");
//			i++;
			/*printf("BONJOUR");
			switch (format[i + 1])
			{
			printf("TEST");
			case 'n':
				printf("DOYOU");
				n = "\n"; 
				write(1, n, 1);
				i++;
				break;
			default:
				printf("ELLOMOTO");
			//	*n = format[i + 1];
				write(1, format[i+1], 1);
				i++;
				break;
			}*/
	//	}


		i++;	
	}
//	write(stdout, [buffer], [number of bytes to write]);

	return (0);

}
