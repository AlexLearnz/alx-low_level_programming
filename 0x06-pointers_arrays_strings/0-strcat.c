#include "main.h"

/**
 * _strcat - Concatenates 2 strings
 * @dest: Destination array, contains C string
 * @src: Source string that appends to dest
 *
 * Return: pointer to resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	/* Preserve starting address of dest */
	char *result_dest = dest;

	/* Move dest ptr to NULL at end of string */
	while (*dest != 0)
		dest++;

	/* Append src string to dest string */
	while (*src != 0)
	{
		/* Copy char from src to dest */
		*dest = *src;

		/* Move to next char in dest */
		dest++;

		/* Move to next char in src */
		src++;
	}

	/* Add null to concatenated string to terminate string */
	*dest = 0;

	return (result_dest);
}

