#include "main.h"
/**
 * _memset - fills memory with constant byte
 * @s: a string 
 * @b: a character
 * @n: an integer
 * Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (s[i] != '\0' && i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
