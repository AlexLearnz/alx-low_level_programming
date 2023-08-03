#include "main.h"
#include <string.h>

/**
 * palindrome_recursion - The recursive function
 * @s: The string
 * @start: Starting char position, 0
 * @end: Ending char position, len - NULL
 *
 * Return: 1, otherwise 0
 */
int palindrome_recursion(char *s, int start, int end)
{
	/* 1 character is present */
	/* Base case: to stop checking mid-substring */
	if (start >= end)
	{
		return (1);
	}

	/* First and last char do not match */
	if (s[start] != s[end])
	{
		return (0);
	}

	/* Check mid-substring */
	return (palindrome_recursion(s, start + 1, end - 1));
}

/**
 * is_palindrome - Checks if string is palindrome
 * @s: The string to be checked
 *
 * Return: result of the recursive function
 */
int is_palindrome(char *s)
{
	int len;

	len = strlen(s);

	/* Empty str is palindrome */
	if (len == 0)
	{
		return (1);
	}

	return (palindrome_recursion(s, 0, len - 1));
}
