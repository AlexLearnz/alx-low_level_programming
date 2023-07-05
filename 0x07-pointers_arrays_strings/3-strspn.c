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

	/* Until null is encountered... != 0 */
	while (*s)
	{
		/* Init ptr to start of accept string */
		char *a = accept;
		while (*a)
		{
			if (*s == *a)
			{
				count++;
				break;
			}
			/* mv ptr */
			a++;
		}
		/* mv ptr */
		s++;
	}
	return (count);
}
