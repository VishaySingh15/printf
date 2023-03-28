#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include "main.h"

/**
 * sum_them_all - adds all parameters of a function
 * @n: number of argument
 * Return: sum of functions
 */
int print_format(va_list args, const char *format, int i)
{
	int count_str;
	char *str;
	char *c = malloc(sizeof(char) * 2);

	if (format[i + 1] == 's')
	{
		str = va_arg(args, char *);
		count_str = get_count(str);
		return(write(1, str, count_str));
	}
	else if (format[i + 1] == 'c')
	{
		c[0] = va_arg(args, int);
		return(write(1, c, 1));
	}
	else if (format[i + 1] == '%')
	{
		c[0] = '%';
		return(write(1, c, 1));
	}
	else
	{
		return (-1);
	}
}
