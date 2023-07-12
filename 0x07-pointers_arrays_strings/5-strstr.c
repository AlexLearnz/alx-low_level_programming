#include "main.h"

/**
 * _strstr - Locates a substring
 * unlike strpbrk, the entire str not just the chars
 * strpbrk means "string pointer break"
 * @haystack: Input string
 * @needle: Accept string
 *
 * Return: ptr to beginning of located substr, else NULL
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *s = haystack;
		char *a = needle;
		while (*s == *a && *a != 0)
		{
			s++;
			a++;
		}

		if (*a == 0)
			return (haystack);

		haystack++;
	}
	/* return type is char, so 0 means NULL ('\0') */
	return (0);
}
