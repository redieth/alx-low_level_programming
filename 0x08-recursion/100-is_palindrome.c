#include "main.h"
/**
 * _strlen_recursion - print the string length
 * @s: the string
 * Return: int
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}

/**
 * isPalRec - palindrome checker
 * @str: the string
 * @s: start index
 * @e: end index
 * Return: int
 */

int isPalRec(char str[],int s, int e)
{
	if (s == e)
		return (1);
	if (str[s] != str[e])
		return (0);
	if (s < e + 1)
		return (isPalRec(str, s + 1, e - 1));
	return (1);
}

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: the string
 * Return: int
 */

int is_palindrome(char *s)
{
	int n = _strlen_recursion(s);

	if (n == 0)
		return (1);
	else
		return (isPalRec(s, 0, n - 1));
}
