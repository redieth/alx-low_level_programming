#include "main.h"
/**
 * _memcpy - copies memory area.
 * @dest: destination
 * @src: source
 * @n: number of byte
 * Return: character pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (s[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
