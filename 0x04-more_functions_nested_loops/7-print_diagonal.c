#include "main.h"

/**
 * print_diagonal - Draws a diagonal line using '\'
 * @n: Number of backslashes(\) forming the diagonal
 *
 * Return: None
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j < i; j++)
		{
			/* Number of spaces in that line */
			_putchar(' ');
		}
		/* End with a backslash and newline on every line */
		_putchar('\\');
		_putchar('\n');
	}

}
