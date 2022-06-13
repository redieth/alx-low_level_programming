#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: the string
 * Return: void
 */
void print_rev(char *s)
{
	int j;

	int len = 0;
	int i = 0;
	while (s[i] != '\0')
	{
		len++;
		i++;
	}
	j = len - 1;
	while (j >= 0)
	{
		_putchar(s[j]);
		j--;
	}
	_putchar('\n');
}
