#include "main.h"

/**
 * _strncpy - Copies a string
 * @dest: Destination string
 * @src: Source string
 * @n: Number of bytes from src
 *
 * Return: Pointer to resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int src_len = 0;

	/* Find len of src string */
	while (src[i++])
		src_len++;

	/* Copy 'n' char from src to dest */
	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];

	/* Add the other remaining index positions with null */
	for (i = src_len; i < n; i++)
		dest[i] = 0;

	return (dest);
}
