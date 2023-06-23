#include "main.h"

/**
 * more_numbers - Print 0..14. Loop 10 times
 *
 * Return: None
 */
void more_numbers(void)
{
	int i, j, tens, ones;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			{
				tens = j / 10;
				_putchar(48 + tens);
			}
			ones = j % 10;
			_putchar(48 + ones);
		}
		_putchar(10);
	}
}
