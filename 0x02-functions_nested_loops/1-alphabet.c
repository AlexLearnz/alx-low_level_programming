#include "main.h"

/**
 * print_alphabet - write lowercase alphabets to stdout
 *
 * Return: void (No return value)
 *
 */
void print_alphabet(void)
{
	char c = 97;

	while (c <= 122)
	{
		_putchar(c);
		c++;
	}
	_putchar(10);
}
