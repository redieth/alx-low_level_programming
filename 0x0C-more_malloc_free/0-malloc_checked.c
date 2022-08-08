#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc.
 * @b: number of bytes
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(sizeof(char) * b);
	if (s == NULL)
		exit(98);
	return (s);
}
