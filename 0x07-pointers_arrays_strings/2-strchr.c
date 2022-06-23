#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: the string
 * @c: the character
 * Return: A character pointer
 */
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
		{
			return (s);
		}
	} while (*s++);
	
	return (0);
}
