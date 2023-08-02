#include "main.h"

/**
 * prime_number_finder - Finds if num is prime
 * @n: The number(num)
 * @test: Possible divisor to be checked
 * until n is reached
 *
 * Return: 1(prime number), 0 otherwise
 */
int prime_number_finder(int n, int test)
{
	/* Base case: First prime is 2 */
	if (n < 2)
	{
		return (0);
	}

	/* Base: All possibilities checked */
	if (test == 1)
	{
		return (1);
	}

	if (n % test == 0)
	{
		return (0);
	}

	return (prime_number_finder(n, test - 1));
}

/**
 * is_prime_number - Checks if num is prime num
 * @n: The num(number) to be checked
 *
 * Return: 1 if true, 0 otherwise
 */

int is_prime_number(int n)
{
	/* Test possibilities n down to 1 */
	return (prime_number_finder(n, n - 1));
}
