#include "main.h"

/**
 * _sqrt_recursion - Finds the natural square root
 * @n: The integer number
 *
 * Return: sqrt of natural number, otherwise -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
}
