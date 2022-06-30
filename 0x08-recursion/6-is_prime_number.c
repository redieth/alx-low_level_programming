#include "main.h"
/**
 * primeHelper - checks whether num is prime number
 * @num: the number to checked
 * @i: the divisor
 * Return: 1 if prime 0 is not prime
 */
int primeHelper(int num, int i)
{
	if (i < num)
	{
		if (num % i == 0)
		{
			return (0);
		}
		else
		{
			return (primeHelper(num, i + 1));
		}
	}
	else
	{
		return (1);
	}
}

/**
 * is_prime_number - checks whether n is prime number
 * @n: to be checked
 * Return: returns 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (primeHelper(n, 2));
	}

}
