#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: min index
 * @max: max index
 * Return: pointer to an array
 */
int *array_range(int min, int max)
{
	int *p;

	int range, i;

	if (min > max)
		return (NULL);
	range = (max - min) + 1;
	p = malloc(sizeof(int) * range);
	if (p == NULL)
		return (NULL);
	for (i = 0; i <= max; i++)
		*(p + i) = min + i;
	return (p);
}
