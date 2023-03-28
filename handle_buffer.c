#include "main.h"

/**
 * handl_buf - concatenates the buffer characters
 * @buf: buffer pointer
 * @c: charcter to concatenate
 * @ibuf: index of buffer pointer
 * Return: index of buffer pointer.
 */

unsigned int handle_buffer(char *buffer, char c, unsigned int nbytes)
{
	if (nbytes == 1024)
	{
		print_buffer(buffer, nbytes);
		nbytes = 0;
	}
	buffer[nbytes] = c;
	nbytes++;
	return (nbytes);
}
