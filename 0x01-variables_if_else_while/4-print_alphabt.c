#include <stdio.h>
/**
 * main - Entry 
 *
 * Return: Always 0
 */
int main(void)
{
	int x;

	x = 97;
	while (x <= 122)
	{
		if(x != 101 && x != 103)
		{
			putchar(x);
		}
		x++;
	}
	putchar('\n');
	return (0);
}
