#include "variadic_functions.h"
#include <stdio.h>

/**
 * prints_all - prints anything
 * @format: list of types of args passed
 * c for char
 * i for integer
 * f for float
 * s for char * / srings (null? print (nil)
 * any other ignored
 *
 * No for, do..while, else, goto
 * 2 whiles, 2 ifs, 9 vars
 * Low on ifs? Use switch...case
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	char *sep = "";
	char *str;
	va_list ap;

	va_start(ap, format);

	while (*(format + i) != '\0')
	{
		switch (format[i])
		{
			default:
				/* ignore */
				i++;
				continue;
			case 'c':
				printf("%s%c", sep, va_arg(ap, int));
				break;
			case 'i':
				printf("%s%d", sep, va_arg(ap, int));
				break;
			case 'f':
				printf("%s%f", sep, va_arg(ap, double));
				break;
			case 's':
				str = va_arg(ap, char *);
				if (*str == '\0')
					str = "(nil)";
				printf("%s%s", sep, str);
				break;
		}
		sep = ", ";
		i++;
	}
	printf("\n");

	va_end(ap);
}
/**
 * note: (so you should pass ‘int’ not ‘char’ to ‘va_arg’)
 * error: ‘float’ is promoted to ‘double’ when passed through ‘...’
 */
