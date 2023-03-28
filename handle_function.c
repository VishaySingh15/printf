#include "main.h"

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
