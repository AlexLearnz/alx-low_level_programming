#include "main.h"
/**
 * _puts_recursion - prints string + newline
 * @s: The string input
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	/* Base case first */
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
