#include "main.h"

/**
 * print_square - Prints a square
 * @size: Size of the square
 *
 * Return: None
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar(10);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar(35);
			}
			_putchar(10);
		}
	}
}
