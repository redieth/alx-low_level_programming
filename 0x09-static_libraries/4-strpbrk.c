#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: the string
 * @accept: another string
 * Return: A pointer
 */
char *_strpbrk(char *s, char *accept)
{
	int len2 = 0;
	int j = 0;

	while (accept[j] != '\0')
	{
		len2++;
		j++;
	}

	do {
		for (j = 0; j < len2; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
	} while (*s++);

	return (0);
}
