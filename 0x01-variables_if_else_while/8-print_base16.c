#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	
	a = 48;
	while (a <= 57)
	{
		putchar(a);
		a++;
	}
	a = 97;
	while (a <= 102)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
