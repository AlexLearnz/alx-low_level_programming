#include "main.h"

/**
 * _sqrt_binary - Uses binary search to find sqrt
 * @n: The number to find sqrt of
 * @low: lowest in range. Starts at 1
 * @high: Highest in range. The number itself
 *
 * Return: guess, found at midpoint or in the
 * first/second half of range of search
 */
int _sqrt_binary(int n, int low, int high)
{
	int guess, mid, mid_sqred;

	/* Base: Invalid range */
	if (low > high)
	{
		return (-1);
	}

	mid = (low + high) / 2;
	mid_sqred = mid * mid;

	/* Base: root found eg n = 4 */
	if (mid_sqred == n)
	guess = mid;

	if (mid_sqred < n)
	guess = _sqrt_binary(n, mid + 1, high);
	if (mid_sqred > n)
	guess = _sqrt_binary(n, low, mid - 1);

	return (guess);
}

/**
 * _sqrt_recursion - Finds natural sqrt of a num
 * @n: The number to be found its squareroot of
 *
 * Return: The sqrt found, if not whole number: -1
 */
int _sqrt_recursion(int n)
{
	/* lowest number in range is 1 */
	/* highest is the number itself */
	return (_sqrt_binary(n, 1, n));
}
