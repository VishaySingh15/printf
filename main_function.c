#include "main.h"

int get_count(const char *format)
{
	unsigned int i = 0;

	while (format[i] != 0)
	{
		i++;
	}
	return (i);
}
