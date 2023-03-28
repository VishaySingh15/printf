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
	int count_str, ret;
	char *str;
	char *ch = malloc(sizeof(char) * 2);

	if (format[i + 1] == 's')
	{
		str = va_arg(args, char *);
		count_str = get_count(str);
		return(write(1, str, count_str));
	}
	else if (format[i + 1] == 'c')
	{
		ch[0] = va_arg(args, int);
		ret = write(1, ch, 1);
		free(ch);
		return(ret);
	}
	else if (format[i + 1] == '%')
	{
		ch[0] = '%';
		ret = write(1, ch, 1);
		free(ch);
		return(ret);
	}
	else
	{
		return (-1);
	}
}
