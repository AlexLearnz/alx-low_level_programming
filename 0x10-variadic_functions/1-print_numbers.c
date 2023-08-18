#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - Prints numbers followed by new line
 * @separator: string to printed in btn nums
 * @n: num of integers passed (count)
 * @...:  arguments that have no name varaibles
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list ap;

	va_start(ap, n);

	for (; i < n; i++)
	{
		printf("%d", va_arg(ap, int));

		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}

	printf("\n");

	va_end(ap);
}
