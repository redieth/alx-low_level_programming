#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - returns the string length
 * @s: the string
 * Return: an integer
 */
int _strlen(char *s)
{
	unsigned int length = 0;
	int i = 0;

	if (s == NULL)
	{
		s = "";
	}
	else
	{
		while (s[i] != '\0')
		{
			length++;
			i++;
		}
	}
	return (length);
}
/**
 * string_nconcat - concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * @n: number of charaters
 * Return: a pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;

	unsigned int len1, len2, size, i, j;
	
	if (s1 == NULL)
	{
		s1 == "";
		len1 = 0;
	}
	else{
		len1 = _strlen(s1);
	}

	if (s2 == NULL)
	{
		s2 == "";
		len2 == 0;
	}
	else{
		len2 = _strlen(s2);
	}

	if (n > len2)
		n = len2;
	size = len1 + n;
	s = malloc(sizeof(char) * size);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
	{
		s[i] = s1[i];
	}

	for (j = 0; j < n; j++)
	{
		s[j + i] = s2[j];
	}

	s[j + i] = '\0';
	return (s);
}
