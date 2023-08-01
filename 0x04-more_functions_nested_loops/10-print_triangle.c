#include "main.h"

/**
 * print_triangle - Prints a triangle
 * @size: base & height of the triangle
 *
 * Return: None
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar(10);
	}
	else
	{
		for (i = 0; i < size, i++)
		{
			for (j = 0; j < size; j++)
			{
				if (j != size)
				{
					_putchar(32);
					_putchar(size--);
				}
			}
			_putchar(35);
			_putchar(10);
		}


