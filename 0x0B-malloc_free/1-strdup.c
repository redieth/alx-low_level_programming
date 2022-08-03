#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - allocates a memory and copy of the string given as a parameter.
 * @str: the string passed
 * Return: pointer to the copied string
 */
char *_strdup(char *str)
{
	char *s;
	int len = 0, j;

	if (str == NULL)
		return (NULL);
	while (*(str + len) != '\0')
		len++;
	s = malloc(sizeof(char) * len);
	if (s == NULL)
		return (NULL);
	for (j = 0; j <= len; j++)
		s[j] = str[j];
	s[j] = '\0';
	return (s);
}
