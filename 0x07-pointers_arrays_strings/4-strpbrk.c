#include "main.h"

/**
 * _strpbrk - Search str s for chars from accept string
 * @s: first string
 * @accept: secind string
 *
 * Return: ptr to s, NULL otherwise
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		i = 0;
		while (accept[i])
		{
			if (*s == accept[i])
				return (s);
			i++;
		}
		s++;
	}

	return (0);
}
