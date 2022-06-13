#include "main.h"
/**
 * rev_string - reverses a string
 * @s: the string
 * Return: void
 */
void rev_string(char *s)
{
	int left;
	int right;
	int temp;
	int len = 0;
	int i = 0;

	while (s[i] != '\0')
	{
		len++;
		i++;
	}

	right = len - 1;

	for(left = 0; left < right; left++)
	{
		temp = s[left];
		s[left] = s[right];
		s[right] = temp;
		right--;
	}
}
