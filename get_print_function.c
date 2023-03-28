#include "main.h"

int (*get_print_function(const char *format, int index))(va_list, char *, unsigned int)
{
	print_t specifiers[] = {
		{"c", print_chr}, {"s", print_str},
		{NULL, NULL},
	};
	int i = 0, j = 0, first_index;

	first_index = index;
	while (specifiers[i].type_arg)
	{
		if (format[index] == specifiers[i].type_arg[j])
		{
			if (specifiers[i].type_arg[j + 1] != 0)
				index++, j++;
			else
				break;
		}
		else
		{
			j = 0;
			i++;
			index = first_index;
		}
	}
	return (specifiers[i].f);
}
