#include "main.h"

/**
 * free_grid - Frees grid created by alloc_grid
 * @grid: The grid created
 * @height: Height of grid
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
		free(grid[i]);

	free(grid);
}
