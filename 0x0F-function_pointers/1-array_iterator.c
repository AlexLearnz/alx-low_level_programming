#include "function_pointers.h"

/**
 * array_iterator - Executes a function given as
 * a parameter on each array element
 * @array: The array
 * @size: Sizo of the array
 * @action: ptr to the function you need to use
 *
 * Return: None
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array == NULL || action == NULL)
		return;

	for (; i < size; i++)
	{
		action(array[i]);
	}
}

