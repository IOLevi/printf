#ifndef CESTCOOL
#define CESTCOOL
int _printf(const char *format, ...);
typedef struct{
	char *c;
	void (*f)(va_list);
} Match; 
#endif
