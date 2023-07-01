#include "main.h"

/**
 * _strcmp - Compares 2 strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: (0) for s1 == s2 || (< 0) for s1 < s2 || (> 0) for s1 > s2
 */
int _strcmp(char *s1, char *s2)
{
	/* while s1 & s2 != null && char positions in s1 == s2, continue */
	while (*s1 != 0 && s2 != 0 && (*s1 == *s2))
	{
		/* Move pointers foward */
		s1++;
		s2++;
	}
	/* Return the difference */
	return (*s1 - *s2);
}

