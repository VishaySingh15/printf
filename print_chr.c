#include "main.h"
#include <stdio.h>

int print_chr(va_list args, char *buffer, unsigned int nbytes)
{
	char c;

	c = va_arg(args, int);
	handle_buffer(buffer, c, nbytes);

	return (1);
}
