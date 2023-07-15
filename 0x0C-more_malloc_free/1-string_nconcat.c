#include "main.h"

/**
 * string_nconcat - Concatenates 2 strings
 * @s1: String 1
 * @s2: String 2
 * @n: Number of chars to be concatednated from s2
 *
 * if n>= strlen(s2) use all of s2 when concating it with s1
 * Don't forget to +1 for NULL value
 * if n==NULL, treat s2 as empty str
 *
 * First find len of s1 and s2, unsigned because of n
 * Create new string pointer s for s2 so that ptr...
 * is returned to s1
 * index i to concat s2 to s1
 *
 * Return: ptr to new s1, otherwise NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l1, l2, i;
	char *s;

	(void)s2;
	l1 = 0;
	while (l1)
		l1++;
	l2 = 0;
	while (l2)
		l2++;

	if (n >= l2)
		s = malloc(sizeof(char) * (l1 + l2 + 1));
	if (!n)
		s = malloc(sizeof(char) * (l1 + n + 1));

	if (!s)
		return (0);

	while (i < l1)
	{
		*(s + i) = *(s1 + i);
		i++;
	}

	*(s + i) = 0;

	return (s);
}




