#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s: The string
 *
 * Return: None
 */
void print_rev(char *s)
{
	/* Declare char ptr set to input str s */
	char *ptr = s;

	/* Move ptr to end end of str s */
	while (*ptr != 0)
		ptr++;

	/* Now print from where ptr is */
	while (ptr != s)
	{
		ptr--;
		_putchar(*ptr);
	}
	_putchar(10);
}
