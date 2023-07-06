#include "main.h"

/**
 * factorial - Finds factorial of a number
 * @n: The number
 *
 * Return: factorial, otherwise -1 (error)
 */
int factorial(int n)
{
	/* Formula: n! = n * (n-1)! */

	if (n < 0)
	{
		/* indicate an error */
		return (-1);
	}
	/* Base case: */
	if (n == 0)
	{
		/* factorial of 0 is 1 */
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}


