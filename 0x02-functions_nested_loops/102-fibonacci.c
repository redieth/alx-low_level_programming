#include "stdio.h"
/**
 * main - prints the first 50 fibonacci numbers starting from 1 and 2
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long int i;
	unsigned long int t1 = 1;
	unsigned long int t2 = 2;
	unsigned long int nextTerm = t1 + t2;
	printf("%lu, %lu", t1, t2);
	for (i = 3; i <= 50; i++)
	{
		printf("%lu, ", nextTerm);
		t1 = t2;
		t2 = nextTerm;
		nextTerm = t1 + t2;
	}
	return (0);
}
