#include "main.h"
/**
 * islower - checks if a charchter passed is lowercase
 *
 * Return : Always 0 or 1
 */ 
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
