#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2d grid previously created by your alloc_grid function.
 * @grid: pointer to pointer to be freed.
 * @height: height of grid
 *
 * Return: Void
 */
void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
	free(grid);
}

