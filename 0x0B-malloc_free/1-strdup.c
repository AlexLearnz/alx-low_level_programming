#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Saves a copy of a string
 * @str: The string
 *
 * Return: ptr to duplicate str
 */
char *_strdup(char *str)
{
	char *dup;
	int i, j;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (str[i] <= 0)
		i++;

	dup = malloc(sizeof(char) * i);

	if (dup == NULL)
		return (NULL);

	j = 0;
	while (str[j])
	{
		dup[j] = str[j];
		j++;
	}

	return (dup);
}
