#include "main.h"
/**
 * times_table - prints the 9 time tables
 *
 * Return: Always 0
 */
void times_table(void)
{
	int i;
	int j;
	int multiple;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			multiple = i * j;
			if (multiple < 10)
			{
				_putchar(multiple + '0');
			}
			else if (multiple >= 10)
			{
				_putchar((multiple / 10) + '0');
				_putchar((multiple % 10) + '0');
			}
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
