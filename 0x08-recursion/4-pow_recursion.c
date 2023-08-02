#include "main.h"

/**
 * _pow_recursion - Returns x raised to power of y
 * @x: Base value
 * @y: Exponent value
 *
 * Return: power value
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}

	return (x * _pow_recursion(x, y - 1));
}
