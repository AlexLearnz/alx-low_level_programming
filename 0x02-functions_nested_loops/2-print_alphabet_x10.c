#include "main.h"

/**
 * print_alphabet_x10 - writes 'a-z' 10 times to stdout
 *
 * Return: void (No return value)
 */
void print_alphabet_x10(void)
{
	char c;
	int i = 0;

	while (i < 10)
	{
		c = 97;
		while (c <= 122)
		{
			_putchar(c);
			c++;
		}
		_putchar(10);
		i++;
	}
}
