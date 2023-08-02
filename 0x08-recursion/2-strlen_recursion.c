#include "main.h"
/**
 * _strlen_recursion - Returns length of string
 * @s: The string to be measured its length
 *
 * Return: strlen added recursively
 */
int _strlen_recursion(char *s)
{
	/* Base case */
	if (*s == '\0')
	{
		return (0);
	}

	return (1 + _strlen_recursion(s + 1));
}
