#include "main.h"

/**
 * _puts - Prints a string + newline
 * @str: The string to be printed
 *
 * Return: None
 */
void _puts(char *str)
{
	while (*str != 0)
	{
		_putchar(*str);
		str++;
	}
	_putchar(10);
}
