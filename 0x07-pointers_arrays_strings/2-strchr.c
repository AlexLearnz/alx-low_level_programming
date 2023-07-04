#include "main.h"

/**
 * _strchr - Locates a char in a string
 * @s: Pointer to the string
 * @c: The char to be located
 *
 * Return: pointer s to first c, otherwise NULL(0)
 */
char *_strchr(char *s, char c)
{
	/* NULL is at the end of a C string, s points to start */
	while (*s != 0)
	{
		if (*s == c)
			/* Pointer to char c */
			return (s);
		s++;
	}
	/* Otherwise null */
	return (0);
}

