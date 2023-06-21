#include "main.h"

/**
 * _islower - Checks if c is in lowercase
 *@c: character to be checked
 *
 * Return: 1 (c is lowercase, 0 otherwise)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
