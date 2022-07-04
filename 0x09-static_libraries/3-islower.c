#include "main.h"
/**
 *_islower - checks if a charchter passed is lowercase
 * @c: alphabet being checked
 *
 * Return: Always 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
