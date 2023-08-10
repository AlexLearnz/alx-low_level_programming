#include "main.h"

/**
 * malloc_checked - Allocates memory
 * @b: Size of memory
 *
 * Return: ptr to allocated memory
 * Fail? - exit(98)
 */
void *malloc_checked(unsigned int b)
{
	int *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return(ptr);
}
