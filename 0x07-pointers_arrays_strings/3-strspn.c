#include "main.h"
/**
 * _strspn - gets the length of a prefix substring.
 * @s: the string
 * @accept: inital segemnt
 * Return: int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int initial_length = 0;
	int len1 = 0;
	int len2 = 0;
	int i = 0;
	int j = 0;
	int found_match = 0;

	while (s[i] != '\0')
	{
		len1++;
		i++;
	}

	while (accept[j] != '\0')
	{
		len2++;
		j++;
	}

	for (i = 0; i < len1; i++)
	{
		found_match = 0;
		for (j = 0; j < len2; j++)
		{
			if (accept[j] == s[i])
			{
				found_match = 1;
				break;
			}
		}

		if (!found_match)
			break;
		else
			initial_length++;
	}

	return (initial_length);
}
