#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - Executes a function given as a parameter on each element of an array.
 * @array: The array ptr
 * @size: Size of the array
 * @action: The function pointer
 *
 * There's an arry of func ptrs stored in array called array
 * The size of the array is given as a parameter
 * size_t is an unsigned int type(64-bit). Include <stddef.h>
 * unsigned int is 32-bit. Both are ints of size 16bits.
 * func pointer is called action
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array == 0 || action == 0)
		return;

	for (; i < size; i++)
	{
		action(array[i]);
	}
}

