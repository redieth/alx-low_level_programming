#include "main.h"
#include "stdio.h"
/**
 * print_to_98 - print all natural numbers from n to 98
 *
 * @n: integer to start the printing
 *
 * Return: Always 0
 */
void print_to_98(int n)
{
	int i = 0;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}
