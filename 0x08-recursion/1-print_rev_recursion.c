#include "main.h"
/**
 * _print_rev_recursion - prints string reversed
 * @s: The string to be printed reversed
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	/* Base case is in reaching null terminator */
	if (*s != '\0')
	{
		/* Move to end of string */
		_print_rev_recursion(s + 1);

		/* The stacked up functions proceed LIFO */
		_putchar(*s);
	}
}
