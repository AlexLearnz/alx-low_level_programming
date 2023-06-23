#include "main.h"

/**
 * print_line - Draws a straight line using underscores(_)
 * @n: number of underscores (_)
 *
 * Return: None
 */
void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (n > 0)
		{
			_putchar(95);
		}
		else
		{
			_putchar('\n');
		}
	}
	_putchar(10);
}
