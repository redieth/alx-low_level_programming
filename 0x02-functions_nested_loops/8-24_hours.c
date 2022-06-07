#include "main.h"
/**
 * jack_bauer - print every minute of the day
 *
 * Return: Always 0
 */
void jack_bauer(void)
{
	int hr = 0;
	int min = 0;

	while (hr <= 23)
	{
		while (min <= 59)
		{
			_putchar((hr / 10) + '0');
			_putchar((hr % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min / 10) + '0');
			_putchar('\n');
			min++;
		}
		hr++;
	}
}
