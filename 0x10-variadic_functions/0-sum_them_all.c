#include "variadic_functions.h"

/**
 * sum_them_all -  adds all parameters
 * @n: integer parameter(s)
 *
 * Return: sum; otherwise if n==0, 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0, i = 0;

	/* declare ptr to arg list */
	va_list arglist_ptr;

	/* init arglist_ptr to first arg after n */
	va_start(arglist_ptr, n);

	/* loop through args while adding them */
	for (; i < n; i++)
	{
		/* access current number from arglist then add it to sum */
		unsigned int num = va_arg(arglist_ptr, unsigned int);

		sum = sum + num;
	}

	/* end arglist traversal */
	va_end(arglist_ptr);

	return (sum);
}

