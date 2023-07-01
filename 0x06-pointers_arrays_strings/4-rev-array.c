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
	/**
	 * Using for loop ??
	 * n == lengt of array
	 * temp var for swapping
	 * index(i) for position
	 */
	int i, temp;

	/* Until i < midpoint of array ... */
	for (i = 0; i < n / 2; i++)
	{
		/* Store first char in temp*/
		temp = a[i];
		/* Store last char in first char position*/
		a[i] = a[n - 1 - i];
		/* Store first char in last char position */
		a[n - 1 - i] = temp;
	}
}
