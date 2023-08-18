#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - Prints strings, followed by a new line
 * @separator: string to be printed btn strings
 * @n: num of strings passed (count)
 * @...: arguments with no variable names
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	unsigned int i = 0;
	va_list ap;

	va_start(ap, n);

	for (; i < n; i++)
	{
		str = va_arg(ap, char *);

		if (*str == '\0')
			printf("(nil)");
		else
			printf("%s", str);

		if (*separator != '\0' && i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");

	va_end(ap);
}
