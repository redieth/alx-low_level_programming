#include "main.h"
/**
 * _strcmp - compare
 * @s1: parameter 
 * @s2: parameter
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int r = 0;
	while(*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	r = *s1 - *s2;
	return (r);
}
