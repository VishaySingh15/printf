#include "main.h"

int print_buffer(char *buffer, unsigned int nbytes)
{
	return (write(1, buffer, nbytes));
}
