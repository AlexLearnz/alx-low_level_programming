#include "main.h"

/**
 * strtow - Splits string into words
 * Line by line
 * @str: The string to be split
 *
 * Return: ptr to an array of words, else NULL
 */
char **strtow(char *str)
{
	char **ptr;

	if (str == NULL)
	{
		return ('\0');
	}

	ptr = malloc(sizeof(char *) * len);

	if (ptr == NULL)
	{
		return ('\0');
	}
