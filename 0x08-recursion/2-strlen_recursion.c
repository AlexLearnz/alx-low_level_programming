#include "main.h"

/**
 * _strlen_recursion - Returns len of a str
 * @s: The string
 *
 * Return: len
 */
int _strlen_recursion(char *s)
{
	while (*s)
	{
		_strlen_recursion(s + 1);
	}
}
