#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenate two strings
 * @s1: string1
 * @s2: string2
 * Return: pointer to the new string
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int len1 = 0;
	int len2 = 0;
	int i, j;
	int size;

	if (s1 == NULL)
	{
		len1 = 0;
	}
	else
	{
		while (*(s1 + len1) != '\0')
			len1++;
	}
	if (s2 == NULL)
	{
		len2 = 0;
	}
	else
	{
		while (*(s2 + len2) != '\0')
			len2++;
	}
	size = len1 + len2 + 1;
	s = malloc(sizeof(char) * size);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
	{
		s[i] = s1[i];
	}

	for (j = i; (j - i) < len2; j++)
	{
		s[j] = s2[j - i];
	}

	s[j] = '\0';
	return (s);
}
