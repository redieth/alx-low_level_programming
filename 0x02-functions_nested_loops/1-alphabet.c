#include "main.h"
/**
 * print_alphabet - prints alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char x;

	while (x <= 'z')
	{
		_putchar(x);
		x++;
	}
	_putchar('\n');
}
