#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatnates 2 strings
 * @s1: First str
 * @s2: Second str
 *
 * Return: Ptr to new memory
 * Contains s1, s2 & null terminate
 */
char *str_concat(char *s1, char *s2)
{
	char *new;
	int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = 0;
	while (s1[i])
		i++;
	j = 0;
	while (s2[j])
		j++;

	new = malloc(sizeof(char) * (i + j + 1));

	if (new == NULL)
		return (NULL);

	i = 0;
	while (s1[i])
	{
		new[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		new[i] = s2[j];
		i++;
		j++;
	}
	new[i] = 0;
	return (new);
}
