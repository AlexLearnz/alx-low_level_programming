#include "main.h"

/**
 * jack_bauer - Prints every minute in '2400hrs'
 *
 * Return: void (No return value)
 */
void jack_bauer(void)
{
	int i, j, k, l;

	i = 0;
	while (i <= 2)
	{
		j = 0;
		while (j <= 9)
		{
			k = 0;
			while (k <= 5)
			{
				l = 0;
				while (l <= 9)
				{
					/* break before 24:00 */
					if (i == 2 && j > 3)
					{
						break;
					}
					/**
					 * ascii '1' = 48 + 1 = 49
					 * 49 == 1
					 */
					_putchar(48 + i);
					_putchar(48 + j);
					_putchar(58);
					_putchar(48 + k);
					_putchar(48 + l);
					_putchar(10);
					l++;
				}
				k++;
			}
			j++;
		}
		i++;
	}
}




