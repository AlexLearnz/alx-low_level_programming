#include "main.h"

/**
 * print_most_numbers - Print number 0..9 except 2 & 4
 *
 * Return: None
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar(48 + i);
		}
	}
	_putchar(10);
}
