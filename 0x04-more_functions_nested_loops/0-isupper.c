#include "main.h"
#include <ctype.h>

/**
 * _isupper - Checks for uppercase character
 * @c: The letter that is checked
 *
 * Return: 1 if c is uppercase. 0 otherwise
 */
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
