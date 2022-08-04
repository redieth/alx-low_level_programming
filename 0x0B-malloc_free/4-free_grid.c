#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - frees a 2d grid created by your alloc_grid function.
 * @grid: a pointer to the 2d array
 * @height: number of rows
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int r;

	for (r = 0; r < height; r++)
	{
		free(grid[r]);
	}
	free(grid);
}
