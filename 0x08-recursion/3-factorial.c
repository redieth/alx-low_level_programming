#include "main.h"
/**
 * factorial - return the factorial of a number
 * @n: the number
 * Return: void
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial_recursive (n - 1));
}
