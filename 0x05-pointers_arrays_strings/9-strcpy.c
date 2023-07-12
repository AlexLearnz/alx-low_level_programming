#include "main.h"

/**
 * _strcpy - Copies the string pointed to src,
 * including null (\0) terminator to the buffer pointed to,
 * by dest
 * @dest: The Buffer pointed to
 * @src: String to be copied
 *
 * Return: None
 */
char *_strcpy(char *dest, char *src)
{
	int i, j;

	i = 0;
	/* src[i] == *(src + i) */
	while (*(src + i))
		i++;

	j = 0;
	while (j < i)
	{
		*(dest + j) = *(src + j);
		j++;
	}

	*(dest + i) = 0;
	return (dest);
}
