#include "main.h"

/**
 * alloc_grid - Creates a grid of 2-dimensiona
 * array of integers
 * @width: horizontal size of grid by columns
 * @height: Vertical size of grid by rows
 *
 * Return: ptr to grid, 0 otherwise
 */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (0);
	}

	ptr = malloc(sizeof(int) * height);

	if (ptr == NULL)
	{
		return (0);
	}

	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(sizeof(int) * width);

		if (ptr[i] == NULL)
		{
			for (; i >= 0; i--)
				free(ptr[i]);

			free(ptr);
			return (0);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			ptr[i][j] = 0;
		}
	}

	return (ptr);
}
