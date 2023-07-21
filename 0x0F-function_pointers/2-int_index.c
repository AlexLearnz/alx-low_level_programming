#include "function_pointers.h"

/**
 * int_index - Searches for integer number
 * @array: Array holding the integers
 * @size: Num of elements in array
 * @cmp: ptr to function used to compare values
 *
 * Returns array[index]...
 * if cmp function(match) !(return 0)
 * if No element matches ret -1
 * if size <= 0 ret -1
 *
 * Return: index i(success), otherwise -1(fail)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == 0 || size <= 0 || cmp == 0)
		return (-1);

	for (; i < size; i++)
	{
		int match = cmp(array[i]);

		if (match != 0)
			return (i);
		/* else? */
	}
	return (-1);
}
