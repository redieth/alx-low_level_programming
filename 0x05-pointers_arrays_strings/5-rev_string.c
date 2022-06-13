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
	int j;
	int temp;
	int len = 0;
	int i = 0;

	while (s[i] != '\0')
	{
		len++;
		i++;
	}

	left = 0;
	right = len - 1;

	for(j = left; j < right; j++)
	{
		temp = s[j];
		s[j] = s[right];
		s[right] = temp;
		right--;
	}
}
