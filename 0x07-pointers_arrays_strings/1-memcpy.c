#include "main.h"

/**
 * _memcpy - Copies block of memory from src to dest
 * @dest: Destination of copied memory area
 * @src: Source of copied memory area
 * @n: The number of bytes
 *
 * Return: (dest) Pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	/* Typecast n to ensure vars have the same signness */
	for (i = 0; (int)n > i; i++)
	{
		dest[i] = src[i];
		n--;
	}

	return (dest);
}
