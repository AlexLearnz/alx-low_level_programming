#include "main.h"

/**
 * array_range - Creates an array of integers
 * @min: Min value in range
 * @max: Max value in range
 *
 * How do we find the size of the array? Max - Min.
 * Add 1 for the null value
 *
 * Return: ptr to new array,if min>max->NULL,fail->NULL
 */
int *array_range(int min, int max)
{
	int *new, size, i;

	if (min > max)
		return (0);

	size = max - min + 1;

	new = malloc(sizeof(int) * size);

	/* malloc fail */
	if (!new)
		return (0);

	i = 0;
	while (max >= min)
	{
		*(new + i) = min++;
		i++;
	}

	return (new);
}

