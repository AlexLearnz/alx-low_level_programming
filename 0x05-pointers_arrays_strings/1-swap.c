#include "main.h"

/**
 * swap_int - Swaps the values of the 2 ints
 * @a: First int
 * @b: Second int
 *
 * Return: None
 */
void swap_int(int *a, int *b)
{
	/* Store on of the ints in a temporary  variable */
	int temp;

	temp = *b;
	*b = *a;
	*a = temp;
}
