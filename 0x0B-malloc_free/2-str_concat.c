#include "main.h"

/**
 * str_concat - Concats 2 strings
 * @s1: First string
 * @s2: String to be appended to s1
 *
 * Return: ptr to new string, NULL otherwise
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int len1, len2, i, j;

	if (s1 == NULL || s2 == NULL)
	{
		if (s1 != NULL)
			return (s1);
		if (s2 != NULL)
			return (s2);
		return ('\0');
	}

	len1 = 0;
	for (i = 0; s1[i] != '\0'; i++)
		len1++;

	len2 = 0;
	for (i = 0; s2[i] != '\0'; i++)
		len2++;

	ptr = malloc(sizeof(char) * (len1 + len2 + 1));
	if (ptr == NULL)
		return ('\0');

	for (i = 0; s1[i] != '\0'; i++)
		*(ptr + i) = s1[i];

	for (j = 0; s2[j] != '\0'; j++)
	{
		*(ptr + i) = s2[j];
		i++;
	}

	return (ptr);
}
