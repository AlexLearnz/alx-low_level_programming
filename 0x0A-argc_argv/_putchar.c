#include <unistd.h>

/**
 * _putchar - write a char to stdout
 * @c: The char to be written
 *
 * Return: 1 char is written
 *
 */
int _putchar(char c)
{

	return (write(1, &c, 1));
}
