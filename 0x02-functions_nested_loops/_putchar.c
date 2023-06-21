#include <unistd.h>

/**
 * Define funtion _putchar
 * Parameters char c
 * The function writes char c to standard output
 * Return: 1 (Success)
 *
 */
int _putchar (char c)
{
	return (write(1, &c, 1));
}
