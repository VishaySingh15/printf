#include "main.h"
#include <stdio.h>

/**
 * print_chr - writes the character c to stdout
 * @arguments: input char
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 * Return: On success 1.
 */

int print_chr(va_list args, char *buffer, unsigned int nbytes)
{
	char c;

	c = va_arg(args, int);
	handle_buffer(buffer, c, nbytes);

	return (1);
}
