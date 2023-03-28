#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int len;
	len = _printf("Funprint\n");
	printf("%d\n", len);
	_printf("This is my name%s and my initial %c\n", "Vishay", 'V');
	return (0);
}
