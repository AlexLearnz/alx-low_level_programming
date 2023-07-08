#include "main.h"

/**
 * _atoi - Converts string to an integer
 * @s: The string
 *
 * Return: integer number,
 * otherwise 0 (No numbers in the string)
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int i = 0;

	while (s[i] == ' ')
		i++;

	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			sign = -1;
		else
			sign = 1;

		i++;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		result = result * 10 + (s[i] - '0');
		i++;
	}

	result *= sign;

	return (result);
}
