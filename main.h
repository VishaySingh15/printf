#ifndef _MAIN_
#define _MAIN_

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct print
{
	char *type_arg;
	int (*f)(va_list, char *, unsigned int);
} print_t;

int _printf(const char *format, ...);
int print_chr(va_list arguments, char *buf, unsigned int ibuf);
int print_str(va_list arguments, char *buf, unsigned int ibuf);

int (*get_print_function(const char *s, int index))(va_list, char *, unsigned int);
unsigned int handle_buffer(char *buf, char c, unsigned int ibuf);
int print_buffer(char *buf, unsigned int nbuf);

#endif
