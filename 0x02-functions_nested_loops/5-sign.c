#include "main.h"

/**
 * print_sign - Prints the sign of a number
 * @n: The number to be checked for its sign
 *
 * Return: 1 and print + if n > 0
 * OR 0 and print 0 if n == 0
 * OR -1 and print - of n < 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
