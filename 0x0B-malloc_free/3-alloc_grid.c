#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns ptr to 2 dim-array of int
 * @width: horizontal
 * @height: vertical
 *
 * Return: NULL, if width || height <= 0
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	/* Check invalid width or height */
	if (width <= 0 || height <= 0)
		return (NULL);

	/* Allocate mem for grid rows */
	grid = malloc(sizeof(int *) * height);

	/* Did mem allocation fali? */
	if (grid == NULL)
		return (NULL);

	i = 0;
	while (i < height)
	{
		/* Allocate mem for each row (columns) */
		grid[i] = malloc(sizeof(int) * width);

		/* Did mem alloc fail for this row? */
		if (grid[i] == NULL)
		{
			/* Free mem from prev rows */
			while (i >= 0)
				free(grid[i]);

			return (NULL);
		}
		i++;
	}

	i = 0;
	while (i < height)
	{
		j = 0;
		while (j < width)
		{
			/* Each element be o */
			grid[i][j] = 0;
			j++;
		}
		i++;
	}
	/* Allocated and initialized grid */
	return (grid);
}

