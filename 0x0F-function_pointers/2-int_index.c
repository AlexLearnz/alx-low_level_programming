#include "function_pointers.h"

/**
 * int_index - Seaches for an integer
 * @array: The array
 * @size: Size of the array
 * @cmp: Pointer to function compare
 *
 * Return: The index of first element(0),
 * otherwise -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;


	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
