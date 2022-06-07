#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: the number passed
 *
 * Return: n
 */
int print_last_digit(int n)
{
	int r;

	r = n % 10;
	if (r < 0)
		r = r * -1;
	_putchar(r + '0');
	return (r);
}
