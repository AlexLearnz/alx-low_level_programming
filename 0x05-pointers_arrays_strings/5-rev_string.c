#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: The string characters
 *
 * Return: None
 */
void rev_string(char *s)
{
	int len, i;
	char tmp;

	/* Find length of string */
	len = 0;
	while (s[len] != '\0')
		len++;

	/**
	 * Loop from index 0 to midpoint(len/2) of array
	 * Loop iterates only first half because beyond that..
	 * it reverts back to original
	 * tmp temporarily stores char at index i
	 * char at index i is changed to char at last index before null
	 * last index takes the char at index i from tmp
	 */
	for (i = 0; i < (len / 2); i++)
	{
		tmp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = tmp;
	}
}
