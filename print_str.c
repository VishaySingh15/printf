#include "main.h"

/**
 * print_str - writes the string to stdout
 * @arguments: input string
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 * Return: On success 1.
 */
int print_str(va_list args, char *buffer, unsigned int nbytes)
{
	char *str;
	unsigned int i;
	char nil[] = "(null)";

	str = va_arg(args, char *);
	if (str == NULL)
	{
		for (i = 0; nil[i]; i++)
			nbytes = handle_buffer(buffer, nil[i], nbytes);
		return (6);
	}
	for (i = 0; str[i]; i++)
		nbytes = handle_buffer(buffer, str[i], nbytes);
	return (i);
}
