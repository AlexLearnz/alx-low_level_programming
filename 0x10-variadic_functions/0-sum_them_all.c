#include "variadic_functions.h"

/**
 * sum_them_all - Sums up all its parameters
 * @n: Number of parameters passed (count)
 * @...: Ellipsis that represents optional args
 * that have no names added to the argument list
 *
 * Return: sum of all args, otherwise 0
 * if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i = 0;

	/* Variable to hold argument list */
	/* ap for argument pointer */
	va_list ap;

	/* ap to point to last known fixed arg 'n' */
	va_start(ap, n);

	for (; i < n; i++)
		sum = sum + va_arg(ap, int);

	va_end(ap);

	return (sum);
}
