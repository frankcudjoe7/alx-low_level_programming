#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int xs, ys;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	for (xs = 0; xs < height; xs++)
	{
		grid[xs] = malloc(sizeof(int) * width);

		if (grid[xs] == NULL)
		{
			for (; xs >= 0; xs--)
				free(grid[xs]);

			free(grid);

			return (NULL);
		}
	}

	for (xs = 0; xs < height; xs++)
	{
		for (ys = 0; ys < width; ys++)
			grid[xs][ys] = 0;
	}

	return (grid);
}

