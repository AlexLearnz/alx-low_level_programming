#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers
 * @a: Name of the integer array
 * @n: Number of array elements
 *
 * Return: None
 */
void reverse_array(int *a, int n)
{
	int start = 0;
	int end = n - 1;
	int tmp;

	while (start < end)
	{
		/* Swap */
		tmp = a[start];
		a[start] = a[end];
		a[end] = tmp;

		/* Move ptrs fwd and back one step */
		start++;
		end--;
	}
}





