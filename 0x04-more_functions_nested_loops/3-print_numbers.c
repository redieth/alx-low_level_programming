#include "main.h"
#include <stdio.h>
/**
 * print_numbers - print 0 - 9
 * Return: void
 */
void print_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
