#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of grid.
 * @height: heoght of grid.
 *
 * Return: **alloc, NULL If failure
 */
int **alloc_grid(int width, int height)
{
	int x;
	int **matrix;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	matrix = malloc(height * sizeof(int *));
	if (matrix == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < height; x++)
	{
		matrix[x] = malloc(sizeof(int) * width);
		if (matrix[x] == NULL)
		{
			while (x >= 0)
			{
				free(matrix[x]);
				x--;
			}
			free(matrix);
		}
	}
	return (matrix);
}
