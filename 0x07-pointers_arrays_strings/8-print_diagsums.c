#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints sum of the two diagonals of a square matrix.
 * @a: pointer
 * @size: size
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sumRL = 0;
	int sumLR = 0;
	int p = 0;

	for (i = 0; i < size; i++)
	{
		p = p + (size - 1);
		sumRL += *(a + ((i * size) + i));
		sumLR += *(a + p);
	}

	printf("%d, ", sumRL);
	printf("%d\n", sumLR);
}
