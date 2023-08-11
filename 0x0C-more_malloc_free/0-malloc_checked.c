#include "main.h"

/**
 * malloc_checked - Allocates memory
 * @b: Size of memory
 *
 * Return: ptr to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	if (b == 0)
	{
		exit(98);
	}

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
