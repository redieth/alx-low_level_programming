#include "stdio.h"
/**
 * main - prints the sum of even numbered fibonacci number
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long int t1 = 1;
	unsigned long int t2 = 2;
	unsigned long int nextTerm = t1 + t2;
	unsigned long int sum = 2;

	while (nextTerm <= 4000000)
	{
		if (nextTerm % 2 == 0)
		{
			sum = sum + nextTerm;
		}
		t1 = t2;
		t2 = nextTerm;
		nextTerm = t1 + t2;
	}
	printf("%lu", sum);
	printf("\n");
	return (0);
}
