#include "main.h"

/**
 * array_range - Creates an array of integers
 * @min: minimum size of array
 * @max: maximum size of array
 *
 * Return: ptr to newly created array
 */
int *array_range(int min, int max)
{
	int *ptr, i, size;

	if (min > max)
		return (0);

	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (0);

	for (i = 0; min <= max; i++)
	{
		ptr[i] = min;
		min++;
	}

	return (ptr);
}
