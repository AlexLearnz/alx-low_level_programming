#include "main.h"

/**
 * wildcmp - Checks if 2 strings are identical
 * @s1: First string
 * @s2: Second string, may contain wildcard '*'
 *
 * Return: 1(yes), otherwise 0(no)
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		if (*s2 == '\0')
		{
			/* NULLs ar identical */
			return (1);
		}
		/* Reached end of s1? s2 hasn't */
		if (*s2 == '*')
		{
			/* move ptr to nxt char in s2 */
			return (wildcmp(s1, s2 + 1));
		}
		/* only s1 is empty */
		return (0);
	}

	if (*s1 == *s2 || *s2 == '*')
	{
		/* compare next characters in @ str */
		return (wildcmp(s1 + 1, s2 + 1));
	}

	/* *s1 != *s2 && *s2 == '*' */
	return (wildcmp(s1, s2 + 1));
}
