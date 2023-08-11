#include "main.h"

/**
 * string_nconcat - Concatenates 2 strings
 * @s1: First string
 * @s2: Second string
 * @n: Number of characters to be concatenated
 * from s2 to s1
 *
 * n >= strlen(s2) use entie s2
 * NULL passed == ""(empty string)
 *
 * Return: ptr to string, otherwise NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j, len1, len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = 0;
	for (i = 0; s1[i] != '\0'; i++)
		len1++;
	len2 = 0;
	for (i = 0; s2[i] != '\0'; i++)
		len2++;

	if (n >= len2)
		ptr = malloc(sizeof(char) * (len1 + len2 + 1));
	else
		ptr = malloc(sizeof(char) * (len1 + n + 1));

	if (ptr == NULL)
		return ('\0');

	for (i = 0; i < len1 ; i++)
		*(ptr + i) = s1[i];

	for (j = 0; j < n; j++)
	{
		*(ptr + i) = s2[j];
		i++;
	}
	*(ptr + i) = '\0';
	return (ptr);
}
