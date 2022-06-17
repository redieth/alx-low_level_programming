#include "main.h"
/**
 * reverse_array - reverse an array
 * @a: the array
 * @n: size
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int temp;

	int left = 0;
	int right = n - 1;

	while (left < right)
	{
		temp = a[left];
		a[left] = a[right];
		a[right] = temp;
		left++;
		right--;
	}
}
