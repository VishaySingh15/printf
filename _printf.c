#include "main.h"

/**
 * _printf - formatted output conversion and print data.
 * @format: input string.
 *
 * Return: number of chars printed.
 */
int _printf(const char *format, ...)
{
	unsigned int i = 0, len = 0, nbytes = 0;
	va_list args;
	int (*print_function)(va_list, char *, unsigned int);
	char *buffer;

	va_start(args, format), buffer = malloc(sizeof(char) * 1024);
	if (!format || !buffer || (format[i] == '%' && !format[i + 1]))
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
			if (format[i + 1])
			{
				print_function = get_print_function(format, i + 1);
				if (print_function == NULL)
				{
					if (format[i + 1] == ' ' && !format[i + 2])
					{
						return (-1);
					}
					handle_buffer(buffer, format[i], nbytes), len++, i--;
				}
				else
				{
					len += print_function(args, buffer, nbytes);
					i++;
				}
				
			}
			else
			{
				print_buffer(buffer, nbytes), free(buffer), va_end(args);
				return (-1);
			} i++;
		}
		else
		{
			handle_buffer(buffer, format[i], nbytes), len++;
		}
		for (nbytes = len; nbytes > 1024; nbytes -= 1024)
		{}
	}
	print_buffer(buffer, nbytes), free(buffer), va_end(args);
	return (len);
}
