#include "main.h"
/**
 * puts_half - prints half of a string.
 * @str: the string 
 * Return: void
 */
void puts_half(char *str)
{
	int len;
	int n;
	int i = 0;
	
	while (str[i] != '\0')
	{
		len++;
		i++;
	}

	if (len % 2 != 0)
	{
		n = (len - 1) / 2;
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
