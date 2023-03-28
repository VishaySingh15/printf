#ifndef _MAIN_
#define _MAIN_

#include <stdarg.h>
#include <stdlib.h>

int _printf(const char *format, ...);
int get_count(const char *format);
int print_format(va_list args, const char *format, int i);

#endif
