#include "main.h"
/**
 * _strstr - find first occurence of substring
 * @haystack: string
 * @needle: string
 * Return: A pointer
 */
char *_strstr(char *haystack, char *needle)
{
	int len1 = 0;
	int len2 = 0;
	int i = 0;
	int j = 0;

	while (haystack[i] != '\0')
	{
		len1++;
		i++;
	}

	while (needle[j] != '\0')
	{
		len2++;
		j++;
	}

	for (i = 0; i < len1; i++)
	{
		for (j = 0; j < len2; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}

		if (j == len2)
			return (&haystack[i]);
	}

	return (0);
}
