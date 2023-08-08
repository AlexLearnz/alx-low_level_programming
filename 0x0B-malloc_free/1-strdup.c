#include "main.h"

/**
 * _strdup - Duplicates str to a new malloc
 * @str: The string to be duplicated
 *
 * Return: ptr to new string, NULL if str=='\0'
 */
char *_strdup(char *str)
{
	/* ptr to new str, len and index */
	char *ptr;
	int len, i;

	if (str == NULL)
	{
		return ('\0');
	}

	/* Find size/len of str */
	len = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		len = len + 1;
	}

	/* Include NULL terminator */
	ptr = malloc(sizeof(char) * (len + 1));

	/* malloc failed? */
	if (ptr == NULL)
	{
		return ('\0');
	}

	/* Dereferencing and value assignment */
	for (i = 0; str[i] != '\0'; i++)
	{
		*(ptr + i) = str[i];
	}
	return (ptr);
}
