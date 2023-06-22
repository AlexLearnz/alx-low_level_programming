#include "main.h"

/**
 * times_table - Prints the 9 times table from 0
 *
 * Return: void (No return type)
 */
void times_table(void)
{
	int i, j, product;

	i = 0;
	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			product = i * j;

			if (product > 9)
			{
				_putchar(48 + (product / 10));
				_putchar(48 + (product % 10));
				_putchar(44);
				_putchar(32);
			}
			else
			{
				_putchar(48 + product);
				_putchar(44);

				if (((j + 1) * i) > 9)
				{
					_putchar(32);
					_putchar(32);
				}
				else
				{
					_putchar(32);
				}
			}
			j++;
		}
		_putchar(10);
		i++;
	}
}
