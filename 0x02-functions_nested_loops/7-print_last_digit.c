#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @num: The number to be checked
 *
 * When taking a num modulo 10 (10 is the modulus),
 * we effectively isolate the righmost digit
 * in the ones place value
 *
 * By understanding this property of the decimal system,
 * programmers can leverage the modulo operator
 * to easily extract the last digit of a given number
 *
 * 70 % 10 = 0, 467 % 10 = 7
 *
 * Return: num % 10
 */
int print_last_digit(int num)
{
	int last_digit;

	last_digit = num % 10;

	if (last_digit < 0)
	{
		last_digit = last_digit * -1;
	}

	_putchar(48 + last_digit);
	return (last_digit);
}
