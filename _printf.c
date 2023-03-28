#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include "main.h"

int _printf(const char *format, ...)
{
	int count = 0, i = 0, valid;
	va_list args;
	char *c = malloc(sizeof(char) * 2);

	va_start(args, format);
	if (!format || (format[i] == '%' && !format[i + 1]))
	{
		return (-1);
	}
	if (!format[i])
	{
		return (0);
	}
	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			valid = print_format(args, format, i);
			if (!valid)
			{
				return(-1);
			}
			else
			{
				count += valid;
				i++;
			}
		}
		else
		{
			c[0] = format[i];
			count += write(1, c, 1);
		}
		
	}
	return (count - 1);
}
