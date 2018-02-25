#ifndef CESTCOOL
#define CESTCOOL
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
void _printchar(va_list);
void _printstring(va_list);
int _printf(const char *format, ...);
void _printint(va_list);
typedef struct{
	char *c;
	void (*f)(va_list);
} Match;
#endif
