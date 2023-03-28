#include "main.h"

/**
 * print_buf - prints buffer
 * @buf: buffer pointer
 * @nbuf: number of bytes to print
 * Return: number of bytes printed.
 */

int print_buffer(char *buffer, unsigned int nbytes)
{
	return (write(1, buffer, nbytes));
}
