#ifndef CESTCOOL
#define CESTCOOL
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>
int _printchar(va_list, char *, int);
int _printstring(va_list, char *, int);
int _printdecimal(va_list, char *, int);
int _printf(const char *format, ...);
int _reverse(va_list, char *, int);
int _rot13(va_list, char *, int);
int _unsignedint(va_list, char *, int);
int _octal(va_list, char *, int);
int _hexlower(va_list, char *, int); 
int _hexupper(va_list, char *, int);
/**
 * struct Q - matches specifiers with functions
 * @c: the format specifier
 * @f: the function
 */
typedef struct Q
{
	char *c;
	int (*f)(va_list, char *, int);
} Match;
void matchinit(Match *);
#endif
