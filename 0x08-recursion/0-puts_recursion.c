#include "main.h"

/**
 * _puts_recursion - Prints string + newline
 * @s: The string
 *
 * Return: None
 */
void _puts_recursion(char *s)
{
	if (*s == 0)
	{
		_putchar(10);
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
