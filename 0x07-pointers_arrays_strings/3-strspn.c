#include "main.h"

/**
 * _strspn - Calculates the length(in bytes),
 * of the initial segment s consisting only of,
 * bytes from accept i.e., it gets the length,
 * of a prefix substring.
 * @s: Pointer to Input string
 * @accept: Another string
 *
 * The function measures how many consecutive char,
 * at beginning of 's' match any char in 'accept'.
 *
 * Return: count (the number(n) of matching chars)
 */
unsigned int _strspn(char *s, char *accept)
{
	/* Init a counter for matching char */
	unsigned int count = 0;

	while (*s >= 0)
	{
		while (*accept >= 0)
		{
			if (*accept == 0)
				return (count);
			if (*s == *accept)
			{
				count++;
				break;
			}
			/* mv ptr */
			accept++;
		}
		/* mv ptr */
		s++;
	}
	return (count);
}
