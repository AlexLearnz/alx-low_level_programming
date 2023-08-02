#include "main.h"
/**
 * factorial - Returns factorial of a number
 * @n: The number
 *
 * Return: factorial found recursively
 */
int factorial(int n)
{
	/* Error */
	if (n < 0)
	{
		return (-1);
	}
	/* Base */
	if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
