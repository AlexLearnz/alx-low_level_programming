#include "main.h"

/**
 * _isalpha - Checks for alphabetic char
 * @c: Char to be checked
 *
 * if c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z'
 *
 * Return: 1 if c is a letter. 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
