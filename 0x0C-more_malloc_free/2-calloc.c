#include <stdio.h>
#include <stdlib.h>
/**
 * _memset - set memory value
 * @s: string
 * @b: input
 * @n: bytes
 * Return: string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of elements
 * @size: number of bytes to reserve
 * Return: pointer to allocated space
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(sizeof(char) * (nmemb * size));
	if (p == NULL)
		return (NULL);
	_memset(p, 0, (nmemb * size));
	return (p);
}
