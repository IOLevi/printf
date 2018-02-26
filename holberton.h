#ifndef CESTCOOL
#define CESTCOOL
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
int _printchar(va_list, char *, int);
int _printstring(va_list, char *, int);
int _printdecimal(va_list, char *, int);
int _printf(const char *format, ...);
typedef struct{
	char *c;
	int (*f)(va_list, char *,int);
} Match;
Match *matchinit(void);
#endif
