#include "main.h"
/**
 * _strncpy - copies two strings
 * @dest: string
 * @src: string
 * @n: number of charachters
 * Return: string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}
	
	return (dest);
}
