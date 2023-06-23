#include "main.h"

/**
 * print_numbers - Print numbers 0..9
 *
 * Return: None
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(48 + i);
	}
	_putchar(10);
}

