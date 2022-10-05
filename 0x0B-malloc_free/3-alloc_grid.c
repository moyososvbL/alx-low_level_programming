#include <stdlib.h>
#include "main.h"

/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of the dimensions
 * @height: height of the dimensions
 *
 * Return: pointer to the created dimension (0), NULL (Error)
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int H_index, W_index;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	for (H_index = 0; H_index < height; H_index++)
	{
		grid[H_index] = malloc(sizeof(int) * width);

		if (grid[H_index] == NULL)
		{
			for (; H_index >= 0; H_index--)
				free(grid[H_index]);

			free(grid);
			return (NULL);
		}
	}

	for (H_index = 0; H_index < height; H_index++)
	{
		for (W_index = 0; W_index < width; W_index++)
			grid[H_index][W_index] = 0;
	}

	return (grid);
}
