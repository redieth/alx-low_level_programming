#include "main.h"
/**
 * _strcat - concatnate two strings
 * @dest: destinstion string
 * @src: source string
 * @n: most number of characters to concatenate
 * Return: char *
 */
char *_strncat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0' || j < n)
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
