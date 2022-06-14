#include "main.h"
/**
 * puts_half - prints half of a string.
 * @str: the string 
 * Return: void
 */
void puts_half(char *str)
{
	int n = 0;
	int len = 0;
	
	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 != 0)
	{
		n = (len - 1) / 2;
		n++;
	}
	else
	{
		n = len / 2;
	}

	while (n < len)
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
