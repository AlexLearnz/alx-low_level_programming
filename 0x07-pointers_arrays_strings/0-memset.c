#include "main.h"

/**
 * _memset - Fills the block of memory with a particular
 * @s: Pointer to the start of that block
 * @b: Character/Value to fill that block
 * @n: Number of times the b is set to fill that block
 *
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}

	return (s);
}
