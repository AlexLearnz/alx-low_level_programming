#include "main.h"

/**
 * _strncat - Concatenaes 2 strings,
 * number of char/bytes to be appended from src are specified
 * @dest: Destination string
 * @src: Source string
 * @n: Number of bytes to be used from src ||
 * n number of characters to be appended
 *
 * Return: Pointer to resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int dest_len = 0;

	/* Find length of dest */
	while (dest[i++])
		dest_len++;

	/* Concatenate at most 'n' characters from src to dest */
	for (i = 0; src[i] && i < n; i++)
		dest[dest_len++] = src[i];

	return (dest);
}
