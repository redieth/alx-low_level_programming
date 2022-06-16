#include "main.h"
/**
 * _strncat - concatnate two strings
 * @dest: destinstion string
 * @src: source string
 * @n: most number of characters to concatenate
 * Return: char *
 */
char *_strncat(char *dest, char *src, int n);
{
	int i;
	int m;

	m = 0;

	while (dest[i] != '\0')
	{
		m++;
	}

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[m + i] = src[i];
	}

	dest[m + i] = '\0';
	return (dest);
}
