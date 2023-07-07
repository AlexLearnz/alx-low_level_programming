#include "main.h"
/**
 * is_prime_number - Tells if an integer is a prime number
 * @n: Then input integer
 *
 * Checking all possibilities before...
 * Concluding is_prime_number
 *
 * Return: 1, otherwise 0
 */
int is_prime_number(int n)
{
	/* Checking divisibility first, in order */
	if (n <= 1)
		return (0);
	if (n % 2 == 0)
		return (0);
	if (n % 3 == 0)
		return (0);
	if (n % 5 == 0)
		return (0);
	if (n % 7 == 0)
		return (0);
	if (n % 1 == 0)
		return (1);
	return (is_prime_number(n));
}

