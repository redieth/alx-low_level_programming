#include <stdio.h>
/**
 * main - Entry point
 *
 * Retrun: Always 0 (Success)
 */
int main(void)
{
	int a, b;

	a = 48;
	while (a <= 57)
	{
		b = a + 1;
		while ( b <= 57)
		{
			putchar(a);
			putchar(b);
			if (a < 57)
			{
				putchar(',');
				putchar(' ');
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
